#include "judgeColor.h"
#include "math.h"

#include "ev3api.h"

JudgeColor::JudgeColor()
{
}

void JudgeColor::setpara(double para[])
{
    mHuekids = para[0];//��]�̐F�͈̔͂̒����l
    mSatukids = para[1];//��]�̍ʓx
}

bool JudgeColor::judgement()
{
    return calcjudge();
}

bool JudgeColor::calcjudge()
{
    //mHue->getValue()//�Ƃ��Ă���F�̒l
    // mSatu->getValue()//�Ƃ��Ă���ʓx

    double value;
    value = mHue->getValue() - mHuekids;  //��]�̐F�͈̔͂̒����l �[ �Ƃ��Ă���F�̒l

    value = fabs(value);

    if(value >= 180)
    {
        value = 360 - value;
    }

    if(value < 20)
    {
        if(mSatukids < mSatu->getValue())
        {
            return true;
        }
    }

    return false;

}