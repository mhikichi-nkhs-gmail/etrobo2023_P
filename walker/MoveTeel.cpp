#include "MoveTeel.h"
#include "TeelAngle.h"
#include "Section.h"

extern TeelAngle *gTeelAngle;
extern Motor *gTeel;

MoveTeel::MoveTeel(Odometry *odo):Walker(odo)
{
    //printf("MoveTeel");
}

int MoveTeel::WalkerID()
{
    return Section::TEEL;
}


void MoveTeel::run()
{
    //printf("runteel");
    // mTeelForward  //�ڕW�l

    gTeel->setPWM(mTeelForward);


}


void MoveTeel::init()
{
   // printf("MoveTeel  initOK");
}


void MoveTeel::setpara(double para3[])
{
    mTeelForward = para3[0];//�ڕW�l
    //printf("mTeelForward%f",mTeelForward);
}

