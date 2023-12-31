#ifndef _PID_H_
#define _PID_H_

#include "ev3api.h"
#include "Clock.h"
using namespace ev3api;

class PID {
    public:
        PID();
        PID(float delta);
        ~PID();
        void setLimit(float);
        void setTarget(float);
        float getOperation(float value);

        void setKp(float kp);
        void setKi(float ki);
        void setKd(float kd);

        float getDiff();
        float getIntegral();

        void resetParam();
        float getTarget();

        void setDeltaT(float delta);

        bool debug = false;
        char debug_char=' ';
    private:
       float diff[2];
       float integral;
        float last_integral[1000];
       float target;
       float limit; 
       float delta;
       float Kp;
       float Ki;
       float Kd;
       float DELTAT;

       float tgt_limit;

       bool resetFlg;

        int sec;
        int cnt;

        int firstCnt=0;

        Clock *clk;

};

#endif
