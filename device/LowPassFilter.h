#ifndef H_LOW_PASS_FILTER_
#define H_LOW_PASS_FILTER_

class LowPassFilter {
    public:
        LowPassFilter();
        ~LowPassFilter();
        void addValue(float );
        float getFillteredValue();
        void setRate(float rate);

    private:
        float mRate;
        float prev;
};

#endif
