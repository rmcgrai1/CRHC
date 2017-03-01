using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine;

namespace generic.number {
    public enum NumberType {
<<<<<<< HEAD
        PIXELS, INCHES,

        SCREEN_WIDTH_FRACTION
    }

    public class Number {
        private float value;
        private NumberType type;

        public Number() {
            set(0, NumberType.PIXELS);
        }

        public Number(float value, NumberType type) {
            set(value, type);
        }

        public void set(float value, NumberType type) {
=======
        PIXELS, INCHES
    }

    public class Number {
        private double value;
        private NumberType type;

        public Number(double value, NumberType type) {
            set(value, type);
        }

        public void set(double value, NumberType type) {
>>>>>>> 7d8058b78fc3336b912526ca3bdad1b73a459737
            this.value = value;
            this.type = type;
        }

<<<<<<< HEAD
        public float getAs(NumberType type) {
            return convertPixelsToType(convertTypeToPixels(value, this.type), type);
        }

        private float convertTypeToPixels(float inValue, NumberType inType) {
            switch (inType) {
                case NumberType.PIXELS:
                    return inValue;
                case NumberType.INCHES:
                    return inValue / Screen.dpi;
                case NumberType.SCREEN_WIDTH_FRACTION:
                    return inValue * Screen.width;
                default:
                    return default(float);
            }
        }

        private float convertPixelsToType(float inValue, NumberType outType) {
            switch (outType) {
                case NumberType.PIXELS:
                    return inValue;
                case NumberType.INCHES:
                    return inValue * Screen.dpi;
                case NumberType.SCREEN_WIDTH_FRACTION:
                    return inValue / Screen.width;
                default:
                    return default(float);
=======
        public double get(NumberType type) {
            return convertPixelsToType(convertTypeToPixels(value, this.type), type);
        }

        public double convertTypeToPixels(double value, NumberType inType) {
            switch (inType) {
                case NumberType.PIXELS:
                    return value;
                case NumberType.INCHES:
                    return value / Screen.dpi;
                default:
                    return default(double);
            }
        }

        public double convertPixelsToType(double value, NumberType outType) {
            switch (outType) {
                case NumberType.PIXELS:
                    return value;
                case NumberType.INCHES:
                    return value * Screen.dpi;
                default:
                    return default(double);
>>>>>>> 7d8058b78fc3336b912526ca3bdad1b73a459737
            }
        }
    }
}
