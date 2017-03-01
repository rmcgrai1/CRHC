using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine;

namespace generic.number {
    public enum NumberType {
        PIXELS, INCHES
    }

    public class Number {
        private double value;
        private NumberType type;

        public Number(double value, NumberType type) {
            set(value, type);
        }

        public void set(double value, NumberType type) {
            this.value = value;
            this.type = type;
        }

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
            }
        }
    }
}
