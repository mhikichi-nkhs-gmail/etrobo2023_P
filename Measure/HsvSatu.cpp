#include "HsvSatu.h"
#include "util.h"

HsvSatu::HsvSatu()
    : Measure()
{

}

double HsvSatu::getValue()
{   
    
   
    return mLpf->getFillteredValue();
}

void HsvSatu::update(double s)
{
    mLpf->addValue(s);
    mSatu = s;

    /*
    static char str[256];

    sprintf(str,"S:%f",mSatu);
    msg_f(str,5);
    */
    
}