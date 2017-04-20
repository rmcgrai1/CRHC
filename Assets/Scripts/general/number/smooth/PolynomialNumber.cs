using System;
using UnityEngine;

namespace general.number.smooth {
    public class PolynomialNumber : ISmoothNumber {
        private LinearNumber linearPart = new LinearNumber(0, 1, 1);
        private float startValue, endValue, power;

        public PolynomialNumber(float startValue, float endValue, float speed, float power) {
            setRange(startValue, endValue);
            linearPart.setSpeed(speed);
            this.power = power;
        }

        public void setSpeed(float speed) {
            linearPart.setSpeed(speed);
        }

        public void setRange(float startValue, float endValue) {
            this.startValue = startValue;
            this.endValue = endValue;
        }

        public float getTargetFraction() { return linearPart.getTargetFraction(); }
        public void setTargetFraction(float targetFraction) { linearPart.setTargetFraction(targetFraction); }
        public void setDirection(bool forward) { linearPart.setDirection(forward); }


        public float get() {
            float f, iF;

            if (getTargetFraction() < .5) {
                f = linearPart.get();
                f = (float)Math.Pow(f, power);
                iF = 1 - f;
            }
            else {
                iF = 1 - linearPart.get();
                iF = (float)Math.Pow(iF, power);
                f = 1 - iF;
            }

            return iF * startValue + f * endValue;
        }

        public void update() { linearPart.update(); }
        public bool isDone() { return linearPart.isDone(); }
    }
}
