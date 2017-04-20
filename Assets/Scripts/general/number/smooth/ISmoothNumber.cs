namespace general.number.smooth {
    public interface ISmoothNumber {
        void setSpeed(float speed);
        void setRange(float startValue, float endValue);

        void setFraction(float fraction);

        float getTargetFraction();
        void setTargetFraction(float targetFraction);
        void setDirection(bool forward);

        float get();
        void update();

        bool isDone();
        void complete();
    }
}
