#include "DoubleLoop.h"
#include "Section.h"

#include "ev3api.h"

DoubleLoop::DoubleLoop()
{
    // test�p����??
 #if defined(MAKE_RIGHT)
      const int _EDGE = LineTracer::LEFTEDGE;
#else
      const int _EDGE = LineTracer::RIGHTEDGE;
#endif

    init(spara);

    
}

