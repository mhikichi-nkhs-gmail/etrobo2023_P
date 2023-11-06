#include "judgeBrightness.h"

#include "ev3api.h"

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
    // printf("%f\n",mBrightnesskids);
    printf("mBrightness->getValue()OK%f\n",mBrightness->getValue());
    if(mWhiteFlag == 1)
    {
        if(mBrightnesskids <= mBrightness->getValue())
        {
             ev3_speaker_play_tone(493.88,400);
            return true;
        }

        return false;
    }
    else
    {
        if(mBrightnesskids >= mBrightness->getValue())
        {
            ev3_speaker_play_tone(261.63,400);
            return true;
        }

        return false;
    }
   
}

