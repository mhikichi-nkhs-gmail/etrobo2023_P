#include "judgeColor.h"
#include "math.h"


#include "util.h"
#include "ev3api.h"

JudgeColor::JudgeColor()
{
}

void JudgeColor::init()
{
    
}

void JudgeColor::setpara(double para[])
{
    mHuekids = para[0];//希望の色の範囲の中央値
    mSatukids = para[1];//希望の彩度
}

bool JudgeColor::judgement()
{
    return calcjudge();
}

bool JudgeColor::calcjudge()
{
    //mHue->getValue()//とってくる色の値
    //mSatu->getValue()//とってくる彩度

    
    static char str[256];

    tmpHue = mHue->getValue();
    tmpSatu = mSatu->getValue();

    sprintf(str,"H : %f",tmpHue);
    msg_f(str,4);

    sprintf(str,"S : %f",tmpSatu);
    msg_f(str,5);

    double value;
    value = tmpHue - mHuekids;  //希望の色の範囲の中央値 ー とってくる色の値

    value = fabs(value);

    if(value >= 180)
    {
        value = 360 - value;
    }

    if(value < 20)
    {
        if(mSatukids < tmpSatu)
        {
            return true;
        }
    }

    return false;

}