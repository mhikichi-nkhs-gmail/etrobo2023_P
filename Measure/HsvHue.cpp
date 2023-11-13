#include "HsvHue.h"
#include "util.h"

HsvHue::HsvHue()
    : Measure()
{

}

double HsvHue::getValue()
{
    return mHue;
}

void HsvHue::update(double h)
{
    mHue = h;

    
    static char str[256];

    sprintf(str,"H:%f",mHue);
    msg_f(str,4);
    
    
}
