#ifndef JUDGE_LENGTH
#define JUDGE_LENGTH

#include "judge.h"

class JudgeLength : public Judge
{
    public:
        JudgeLength();
        void setpara(double para[]);
        bool judgement();


    protected:
        bool calcjudge();
        void init();

    private:
        double mLengthkids;
        double mSumLengthkids;
        double firstvalue;
        bool mdirect;
};
#endif