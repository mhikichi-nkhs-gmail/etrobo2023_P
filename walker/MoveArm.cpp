#include "MoveArm.h"
#include "ArmAngle.h"
#include "Section.h"

extern ArmAngle *gArmAngle;
extern Motor *gArm;

MoveArm::MoveArm(Odometry *odo):Walker(odo)
{
    //printf("Movearm");
}

int MoveArm::WalkerID()
{
    return Section::ARM;
}

void MoveArm::run()
{
    //printf("runarm");
    mNowArmAngle = gArmAngle->getValue();//���݂̃A�[���̊p�x 
    //printf("MoveArm_mNowArmAngle%f\n",mNowArmAngle);
   // mArmForward  //�ڕW�l
    mPid->setKp(kp);
    mPid->setKi(ki); 
    mPid->setKd(kd);

    pwm = mPid->getOperation(mNowArmAngle);
    //printf("mNowArmAngle%f\n,",mNowArmAngle);
    //printf("kp %f\n",kp);

    //("pwm%f\n",pwm);
    gArm->setPWM(pwm);

}


void MoveArm::init()
{
    //printf("initOK");
    mPid->setTarget(mArmForward);

    kp = 2;
    ki = 0;
    kd = 0;

}


void MoveArm::setpara(double para3[])
{
    mArmForward = para3[0];//�ڕW�l
    //printf("mArmForward%f",mArmForward);
}

