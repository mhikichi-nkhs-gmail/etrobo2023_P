#include "HsvSatu.h"
#include "util.h"

HsvSatu::HsvSatu()
    : Measure()
{

}

double HsvSatu::getValue()
{   
    /*
    double Satu;
    static char str[256];
    Satu = mLpf->getFillteredValue();

    sprintf(str,"S:%f",Satu);
    msg_f(str,5);

    return Satu;
    */
   
    return mLpf->getFillteredValue();
}

void HsvSatu::update(double s)
{
    mLpf->addValue(s);
    mSatu = s;
}