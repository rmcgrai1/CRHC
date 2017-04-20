using System;
using UnityEngine;

namespace general.number.smooth {
    public class LinearNumber : ISmoothNumber {
        private float startValue, endValue, fraction, targetFraction, speed;

        public LinearNumber(float startValue, float endValue, float speed) {
            setRange(startValue, endValue);
            setSpeed(speed);
        }

        public void setSpeed(float speed) { this.speed = speed; }

        public void setRange(float startValue, float endValue) {
            this.startValue = startValue;
            this.endValue = endValue;
        }

        public float getTargetFraction() { return targetFraction; }
        public void setTargetFraction(float targetFraction) { this.targetFraction = targetFraction; }

        public void setDirection(bool forward) { setTargetFraction(forward ? 1 : 0); }


        public float get() { return (1 - fraction) * startValue + fraction * endValue; }

        public void update() {
            float diff = targetFraction - fraction;
            float delta = Time.fixedDeltaTime * speed;

            if (Math.Abs(diff) > delta) {
                fraction += delta * Math.Sign(diff);
            }
            else {
                fraction = targetFraction;
            }
        }

        public bool isDone() { return (fraction == targetFraction); }
    }
}
