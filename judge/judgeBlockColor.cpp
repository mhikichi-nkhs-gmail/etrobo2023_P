#include "judgeBlockColor.h"
#include "math.h"

#include "Section.h"
#include "ev3api.h"
#include "util.h"

JudgeBlockColor::JudgeBlockColor()
{
    countTime = 0;//���ԃJ�E���g������
    RedBlockCount = 0;//�ԃu���b�N�̃J�E���g������
    BlueBlockCount = 0;//�u���b�N�̃J�E���g������
}

int JudgeBlockColor::JudgeID()
{
    return Section::BLOCKCOLOR;
}

void JudgeBlockColor::init()
{
    //printf("JudgeBlockColorinitOK\n");
}

void JudgeBlockColor::setpara(double para[])
{
    mHueRedkids = para[0];//�Ԃ̐F�͈̔͂̒����l
    mHueBluekids = para[1];//�̐F�͈̔͂̒����l
    mSatukids = para[2];//��]�̍ʓx
    mTimekids = para[3];//����
}

bool JudgeBlockColor::judgement()
{
    return calcjudge();
}

double JudgeBlockColor::RedBlockColorCount()
{
    //RedBlockCount = 40;//�f�o�b�N�p
    return RedBlockCount;
}

double JudgeBlockColor::BlueBlockColorCount()
{
    //BlueBlockCount = 60;//�f�o�b�N�p
    return BlueBlockCount;
}


int JudgeBlockColor::RedBlueWinner()
{
    if(BlueBlockColorCount() < RedBlockColorCount())
    {
        return 1;//��
    }
    else
    {
        return 0;//��
    }
}

bool JudgeBlockColor::calcjudge()
{
    //mHue->getValue()//�Ƃ��Ă���F�̒l
    //mSatu->getValue()//�Ƃ��Ă���ʓx
    //printf("JudgeBlockColor::calcjudgeOK");
    //�Ԃ̔���J�n
    static char str[256];

    sprintf(str,"RED H  %f",mHue->getValue());
    msg_f(str,4);
    double Redvalue;
    Redvalue = mHue->getValue() - mHueRedkids;  //��]�̐F�͈̔͂̒����l �[ �Ƃ��Ă���F�̒l
    
    Redvalue = fabs(Redvalue);

    if(Redvalue >= 180)
    {
        Redvalue = 360 - Redvalue;
    }

    if(Redvalue < 20)
    {
        //printf("RED H  %f\n",mHue->getValue());
        if(mSatukids < mSatu->getValue())
        {
            //printf("RED S  %f\n",mSatu->getValue());
            RedBlockCount++;
            //printf("RedBlockCount%f\n",RedBlockCount);
        }
    }

    sprintf(str,"RedBlockCount:%f",RedBlockCount);
    msg_f(str,5);

    //�̔���J�n
    double Bluevalue;
    Bluevalue = mHue->getValue() - mHueBluekids;  //��]�̐F�͈̔͂̒����l �[ �Ƃ��Ă���F�̒l
    //printf("BLUE H  %f\n",mHue->getValue());
    Bluevalue = fabs(Bluevalue);
    
    if(Bluevalue >= 180)
    {
        Bluevalue = 360 - Bluevalue;
    }

    if(Bluevalue < 20)
    {
        //printf("BLUE H  %f\n",mHue->getValue());
        if(mSatukids < mSatu->getValue())
        {
            //printf("BLUE S  %f\n",mSatu->getValue());
            BlueBlockCount++;
            //printf("BlueBlockCount%f\n",BlueBlockCount);
        }
    }

    sprintf(str,"BlueBlockCount:%f",BlueBlockCount);
            
    msg_f(str,6);

    //printf("mTimekids%f\n",mTimekids);
    //printf("countTime%f\n",countTime);

    if(mTimekids <= countTime)
    {

        return true;
    }

    //printf("countTime  %f\n",countTime);

    countTime++;


    return false;

}