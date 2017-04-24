using UnityEngine;

namespace general.mobile {
    public abstract class ITouch {
        // TODO: Ensure that tap only lasts for one frame.
        // TODO: Enable observer pattern?

        private static readonly int DRAG_VECTOR_FRAME_COUNT = 10;
        private int dragVectorFrameIndex;
        private Vector2[] dragVectorFrames = new Vector2[DRAG_VECTOR_FRAME_COUNT];
        private static Vector2 previousTouchPosition, touchPosition;
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
                dragVectorFrames[dragVectorFrameIndex++] = (touchPosition - previousTouchPosition);

                if (dragVectorFrameIndex >= DRAG_VECTOR_FRAME_COUNT) {
                    dragVectorFrameIndex -= DRAG_VECTOR_FRAME_COUNT;
                }

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

                // Clear drag vector frames.
                for (int i = 0; i < DRAG_VECTOR_FRAME_COUNT; i++) {
                    dragVectorFrames[i] = Vector2.zero;
                }
            }
            else if (upStart && _isDown) {
                _isDown = false;

                // TODO: Tweak these values.
                if (Epoch.MillisElapsed(startTouchTime) < HOLD_TIME && dragDistance / Screen.dpi < .25) {
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
            Vector2 dragVector = Vector2.zero;

            int ii = 0;
            for (int i = 0; i < DRAG_VECTOR_FRAME_COUNT; i++) {
                Vector2 subDragVector = dragVectorFrames[i];

                if (subDragVector != null) {
                    dragVector += subDragVector;
                    ii++;
                }
            }

            dragVector /= ii;

            Orientation orientation = AppRunner.getOrientation();
            if (orientation == Orientation.PORTRAIT_UP) {
                return new Vector2(dragVector.x * coolDownFrac, dragVector.y * coolDownFrac);
            }
            else if (orientation == Orientation.PORTRAIT_DOWN) {
                return new Vector2(-dragVector.x * coolDownFrac, -dragVector.y * coolDownFrac);
            }
            else if (orientation == Orientation.LANDSCAPE_LEFT) {
                return new Vector2(dragVector.y * coolDownFrac, -dragVector.x * coolDownFrac);
            }
            else if (orientation == Orientation.LANDSCAPE_RIGHT) {
                return new Vector2(-dragVector.y * coolDownFrac, dragVector.x * coolDownFrac);
            }
            else {
                return Vector2.zero;
            }
        }

        public void clearDragVector() {
            coolDownFrac = 0;
        }

        public Vector2 getTouchPosition() {
            float x = 0, y = 0, scrW = AppRunner.getScreenWidth(), scrH = AppRunner.getScreenHeight();

            Orientation orientation = AppRunner.getOrientation();
            if (orientation == Orientation.PORTRAIT_UP) {
                x = touchPosition.x;
                y = touchPosition.y;
            }
            else if (orientation == Orientation.PORTRAIT_DOWN) {
                x = scrW - touchPosition.x;
                y = scrH - touchPosition.y;
            }
            else if (orientation == Orientation.LANDSCAPE_LEFT) {
                x = touchPosition.y;
                y = scrH - touchPosition.x;
            }
            else if (orientation == Orientation.LANDSCAPE_RIGHT) {
                x = scrW - touchPosition.y;
                y = touchPosition.x;
            }


            return new Vector2(x, y);
        }

        protected abstract Vector2 queryTouchPosition();
        protected abstract bool queryDownStart();
        protected abstract bool queryUpStart();
    }
}