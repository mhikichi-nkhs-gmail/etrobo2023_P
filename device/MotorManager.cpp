#include "MotorManager.h"
#include "Walker.h"

extern Motor *gLeftWheel;
extern Motor *gRightWheel;

MotorManager::MotorManager(Motor *left, Motor *right):
    mLeftMotor(left),
    mRightMotor(right)
{
}
void MotorManager::setPwm(int left,int right)
{
    
    double tmpvoltage = 8900;
        
    volt = ev3_battery_voltage_mV();

    colcvoltage = tmpvoltage/volt;

        
    mLeftMotor->setPWM(left*colcvoltage);
    mRightMotor->setPWM(right*colcvoltage);
    

   /*
    mLeftMotor->setPWM(left);
    mRightMotor->setPWM(right);
    */
}

void MotorManager::init()
{
    mLeftMotorCount = 0.0;
    mRightMotorCount = 0.0;

    mInitLeftMotorCount = mLeftMotor->getCount();
    mInitRightMotorCount = mRightMotor->getCount();

}