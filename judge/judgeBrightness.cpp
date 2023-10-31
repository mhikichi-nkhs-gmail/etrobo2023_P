#include "judgeBrightness.h"

#include "ev3api.h"

#include "util.h"
JudgeBrightness::JudgeBrightness()
{
}

void JudgeBrightness::init()
{

}

void JudgeBrightness::setpara(double para[])
{
    mBrightnesskids = para[0];
    mWhiteFlag = para[1];
    //printf("mBrightnesskids%f\n",mBrightnesskids);
}

bool JudgeBrightness::judgement()
{
    return calcjudge();
}

bool JudgeBrightness::calcjudge()
{
    static char str[256];

    double bri;
    // printf("%f\n",mBrightnesskids);
    //printf("mBrightness->getValue()OK%f\n",mBrightness->getValue());

    bri = mBrightness->getValue();

    if(mWhiteFlag == 1)
    {
        if(mBrightnesskids <= bri)
        {
            return true;
        }

        return false;
    }
    else
    {
        sprintf(str,"bri:%f",bri);
        msg_f(str,4);
        if(mBrightnesskids >= bri)
        {
            return true;
        }

        return false;
    }
   
}

