#include "Brightness.h"
#include "util.h"

Brightness::Brightness()
    : Measure()
{

}

double Brightness::getValue()
{
    /*
    double bri;
    static char str[256];
    bri = mLpf->getFillteredValue();

    sprintf(str,"bri:%f",bri);
    msg_f(str,4);

    return bri;
    */
   
    return mLpf->getFillteredValue();;
}

void Brightness::update(double br)
{
    mLpf->addValue(br);
    mBrightness = br;
}