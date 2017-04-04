using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine;

namespace generic.mobile {
    public abstract class ITouch {
        // TODO: Ensure that tap only lasts for one frame.
        // TODO: Enable observer pattern?

        private static Vector2 previousTouchPosition, touchPosition, dragVector;
        private static bool _isDown = false, _didTap = false, _isHeld = false;

        private readonly float HOLD_TIME = 250;

        private static double startTouchTime;
        private static float dragDistance, coolDownFrac;

        public void OnGUI() {
            // TODO: Decouple from gui.
            previousTouchPosition = touchPosition;
            touchPosition = queryTouchPosition();
            _didTap = false;

            bool upStart, downStart;
            upStart = queryUpStart();
            downStart = queryDownStart();


            if (_isDown) {
                dragDistance += getDragVector().magnitude;
                dragVector = touchPosition - previousTouchPosition;
                coolDownFrac = 1;
            }
            else {
                coolDownFrac += (0 - coolDownFrac) / 30;
            }

            // If equal, nothing changed.
            if (upStart == downStart) {
                // Do nothing.
            }
            // Otherwise, if down started, set down to true.
            else if (downStart && !_isDown) {
                _isDown = true;

                previousTouchPosition = touchPosition;

                startTouchTime = Epoch.CurrentMillis();
                dragDistance = 0;
            }
            else if (upStart && _isDown) {
                _isDown = false;

                // TODO: Tweak these values.
                // TODO: Change to be based on # inches.
                if (Epoch.MillisElapsed(startTouchTime) < HOLD_TIME && dragDistance/Screen.dpi < .5) {
                    _didTap = true;
                }
                else {
                    _didTap = false;
                }
            }
        }

        public bool isDown() {
            return _isDown;
        }

        public bool isHeld() {
            return _isDown && Epoch.MillisElapsed(startTouchTime) >= HOLD_TIME;
        }

        public bool checkTap() {
            return _didTap;
        }

        public Vector2 getDragVector() {
            if(AppRunner.getIsUpright()) {
                return new Vector2(dragVector.x * coolDownFrac, dragVector.y * coolDownFrac);
            }
            else {
                return new Vector2(dragVector.y * coolDownFrac, dragVector.x * coolDownFrac);
            }
        }

        public void clearDragVector() {
            coolDownFrac = 0;
        }

        public Vector2 getTouchPosition() {
            if (AppRunner.getIsUpright()) {
                return touchPosition;
            }
            else {
                return new Vector2(touchPosition.y, AppRunner.getScreenHeight()-touchPosition.x);
            }
        }

        protected abstract Vector2 queryTouchPosition();
        protected abstract bool queryDownStart();
        protected abstract bool queryUpStart();
    }
}