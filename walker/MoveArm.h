#ifndef EV3_UNIT_MOVEARM_H_
#define EV3_UNIT_MOVEARM_H_

#include "Walker.h"

class MoveArm : public Walker{

public:
    MoveArm(
        Odometry *odo
    );

    void run();
    void init();
    void setpara(double para3[]);
    int WalkerID();


protected:

private:
    double mArmForward;//�ڕW�l
    double mNowArmAngle;//���݂̃A�[���̊p�x
    double kp;
    double ki;
    double kd;
    double pwm;

};
#endif