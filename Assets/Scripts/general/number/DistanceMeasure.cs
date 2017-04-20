using System;
using System.Linq;
using System.Text;
using UnityEngine;

namespace general.number {
    public enum NumberType {
        PIXELS, INCHES,

        SCREEN_WIDTH_FRACTION
    }

    public class DistanceMeasure {
        private float value;
        private NumberType type;

        public DistanceMeasure() {
            set(0, NumberType.PIXELS);
        }

        public DistanceMeasure(float value, NumberType type) {
            set(value, type);
        }

        public void set(float value, NumberType type) {
            this.value = value;
            this.type = type;
        }

        public float getValue() {
            return value;
        }

        public float getAs(NumberType type) {
            if (this.type == type) {
                return value;
            }
            else {
                return convertPixelsToType(convertTypeToPixels(value, this.type), type);
            }
        }

        private float convertTypeToPixels(float inValue, NumberType inType) {
            switch (inType) {
                case NumberType.PIXELS:
                    return inValue;
                case NumberType.INCHES:
                    return inValue * Screen.dpi;
                case NumberType.SCREEN_WIDTH_FRACTION:
                    return inValue * AppRunner.getScreenWidth();
                default:
                    return default(float);
            }
        }

        private float convertPixelsToType(float inValue, NumberType outType) {
            switch (outType) {
                case NumberType.PIXELS:
                    return inValue;
                case NumberType.INCHES:
                    return inValue / Screen.dpi;
                case NumberType.SCREEN_WIDTH_FRACTION:
                    return inValue / AppRunner.getScreenWidth();
                default:
                    return default(float);
            }
        }
    }
}
