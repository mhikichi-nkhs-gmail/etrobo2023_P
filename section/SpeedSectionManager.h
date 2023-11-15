#ifndef _SPEED_SECTION_MANAGER_H_
#define _SPEED_SECTION_MANAGER_H_
#include "SectionManager.h"
#include "HackEv3.h"

class SpeedSectionManager : public SectionManager {
    public:
        SpeedSectionManager();
        
        
    protected:
       
           
        SecParam spara [100] = {
            
            #if SC_PATARN == 0 //safety parameter
                {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
                
                {Section::DEFOLTARMCHANGE,{-15},Section::TIME,{3},Section::NONE,{}},
                {Section::TRACER,{75, 0,  49, 10, 12,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{294},Section::NONE,{}},
                //{Section::WALKER,{0, 0},Section::TIME,{150},Section::NONE,{}},
                {Section::TRACER,{50, 0,  40, 20, 10,18,0,LineTracer::LEFTEDGE},Section::LENGTH,{35},Section::NONE,{}},
                //{Section::WALKER,{0, 0},Section::TIME,{150},Section::NONE,{}},
                {Section::TRACER,{75, 0,  49, 10, 12,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{175},Section::NONE,{}},
                //{Section::WALKER,{0, 0},Section::TIME,{150},Section::NONE,{}},
                {Section::TRACER,{50, 0,  40, 20, 10,18,0,LineTracer::LEFTEDGE},Section::LENGTH,{35},Section::NONE,{}},
                //{Section::WALKER,{0, 0},Section::TIME,{150},Section::NONE,{}},
                {Section::TRACER,{75, 0,  49, 10, 12,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{20},Section::NONE,{}},//LAP
                
            
            #endif
            
            #if SC_PATARN == 1
                {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
                {Section::DEFOLTARMCHANGE,{-15},Section::TIME,{3},Section::NONE,{}},
                //{Section::TRACER,{50, 0,  48, 10, 13,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{13},Section::NONE,{}},
                {Section::TRACER,{70, 0,  40, 23, 12,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{70},Section::NONE,{}},
                {Section::TRACER,{100, 0,  40, 23, 12,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{203},Section::NONE,{}},
                //{Section::WALKER,{0, 0},Section::LENGTH,{150},Section::NONE,{}},
                {Section::VIRTUALCURVE,{-35,80,13,1.5,0.7},Section::LENGTH,{50},Section::NONE,{}},
                
                
                {Section::VIRTUALSTRAIGHT,{0,100,30,10,3.45},Section::LENGTH,{25},Section::NONE,{}},
                {Section::VIRTUALSTRAIGHT,{0,80,15,3,0.7},Section::BRIGHTNESS,{-0.2,0},Section::NONE,{}},
                {Section::VIRTUALSTRAIGHT,{-10,40,23,5,2},Section::LENGTH,{5},Section::NONE,{}},
                
                {Section::TRACER,{100, 0,  49, 10, 12,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{110},Section::NONE,{}},
                //{Section::TRACER,{0, 0, 0, 0, 0,0,0,LineTracer::LEFTEDGE},Section::TIME,{100},Section::NONE,{}},
                {Section::TRACER,{100, 0,  49, 10, 12,0,0,LineTracer::LEFTEDGE},Section::BRIGHTNESS,{0.5,1},Section::NONE,{}},
                {Section::VIRTUALCURVE,{-12,80,13,1.5,0.7},Section::LENGTH,{15},Section::NONE,{}},
                {Section::TRACER,{100, 0,  49, 10, 12,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{22},Section::NONE,{}},
                //{Section::WALKER,{-20, 0},Section::LENGTH,{-14},Section::NONE,{}},
            
            #endif
            
            
            #if SC_PATARN == 2 //virtual
                {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
                {Section::DEFOLTARMCHANGE,{-15},Section::TIME,{3},Section::NONE,{}},
                {Section::TRACER,{110, 0,  49, 10, 12,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{275},Section::NONE,{}},
                {Section::VIRTUALCURVE,{-35,80,13,2,0.7},Section::LENGTH,{58.5},Section::NONE,{}},
                
                
                {Section::VIRTUALSTRAIGHT,{0,100,30,10,3.45},Section::LENGTH,{168},Section::NONE,{}},
                {Section::VIRTUALCURVE,{-15,80,13,1.5,0.7},Section::LENGTH,{27},Section::NONE,{}},
                {Section::VIRTUALSTRAIGHT,{0,100,30,10,3.45},Section::LENGTH,{20},Section::NONE,{}},
                //{Section::VIRTUALSTRAIGHT,{0,80,15,3,0.7},Section::BRIGHTNESS,{-0.2,0},Section::NONE,{}},
                //{Section::VIRTUALSTRAIGHT,{0,80,15,3,0.7},Section::LENGTH,{5},Section::NONE,{}},
                //{Section::TRACER,{0, 0, 0, 0, 0,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{500},Section::NONE,{}},
                
                {Section::TRACER,{110, 0,  49, 10, 12,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{95},Section::NONE,{}},
                //{Section::TRACER,{0, 0, 0, 0, 0,0,0,LineTracer::LEFTEDGE},Section::TIME,{100},Section::NONE,{}},
                {Section::TRACER,{110, 0,  49, 10, 12,0,0,LineTracer::LEFTEDGE},Section::BRIGHTNESS,{0.3,1},Section::NONE,{}},
                
                {Section::TRACER,{110, 0,  49, 10, 12,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{25},Section::NONE,{}},    
            
            #endif
            
            #if SC_PATARN == 3
                {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
                {Section::DEFOLTARMCHANGE,{-15},Section::TIME,{3},Section::NONE,{}},
                //{Section::TRACER,{50, 0,  48, 10, 13,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{13},Section::NONE,{}},
                {Section::TRACER,{100, 0,  40, 20, 12,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{257},Section::NONE,{}},
                //{Section::WALKER,{0, 0},Section::LENGTH,{150},Section::NONE,{}},
                {Section::VIRTUALCURVE,{-35,80,13,1.5,0.7},Section::LENGTH,{40},Section::NONE,{}},
                
                {Section::VIRTUALSTRAIGHT,{0,100,30,10,3.45},Section::LENGTH,{40},Section::NONE,{}},
                {Section::VIRTUALSTRAIGHT,{0,80,15,3,0.7},Section::BRIGHTNESS,{-0.2,0},Section::NONE,{}},
                {Section::VIRTUALSTRAIGHT,{-20,40,20,5,2},Section::LENGTH,{5},Section::NONE,{}},


                {Section::TRACER,{100, 0,  49, 10, 12,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{98},Section::NONE,{}},
                {Section::VIRTUALCURVE,{-35,80,13,1.5,0.7},Section::LENGTH,{40},Section::NONE,{}},
                
                {Section::VIRTUALSTRAIGHT,{0,100,30,10,3.45},Section::LENGTH,{20},Section::NONE,{}},
                {Section::VIRTUALSTRAIGHT,{0,80,15,3,0.7},Section::BRIGHTNESS,{-0.2,0},Section::NONE,{}},
                {Section::VIRTUALSTRAIGHT,{-20,40,20,5,2},Section::LENGTH,{5},Section::NONE,{}},
                
                {Section::TRACER,{70, 0,  49, 10, 12,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{5},Section::NONE,{}},
                {Section::WALKER,{0, 0},Section::TIME,{100},Section::NONE,{}},
                {Section::WALKER,{-20, 0},Section::LENGTH,{-30},Section::NONE,{}},

            
            #endif

            #if SC_PATARN == 4
                {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
                {Section::DEFOLTARMCHANGE,{-15},Section::TIME,{3},Section::NONE,{}},
                //{Section::TRACER,{50, 0,  48, 10, 13,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{13},Section::NONE,{}},
                {Section::TRACER,{100, 0,  40, 20, 12,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{273},Section::NONE,{}},
                //{Section::WALKER,{0, 0},Section::LENGTH,{150},Section::NONE,{}},
                {Section::VIRTUALCURVE,{-35,80,13,1.5,0.7},Section::LENGTH,{49},Section::NONE,{}},
                
                
                {Section::VIRTUALSTRAIGHT,{0,100,30,10,3.45},Section::LENGTH,{22},Section::NONE,{}},
                {Section::VIRTUALSTRAIGHT,{0,80,15,3,0.7},Section::BRIGHTNESS,{-0.2,0},Section::NONE,{}},
                {Section::VIRTUALSTRAIGHT,{-10,40,23,5,2},Section::LENGTH,{5},Section::NONE,{}},
                
                {Section::TRACER,{100, 0,  49, 10, 12,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{111},Section::NONE,{}},
                {Section::VIRTUALCURVE,{-35,80,13,1.5,0.7},Section::LENGTH,{29},Section::NONE,{}},
                
                {Section::VIRTUALSTRAIGHT,{0,100,30,10,3.45},Section::LENGTH,{36},Section::NONE,{}},
                {Section::VIRTUALSTRAIGHT,{0,80,15,3,0.7},Section::BRIGHTNESS,{-0.2,0},Section::NONE,{}},
                {Section::VIRTUALSTRAIGHT,{-23,40,20,5,2},Section::LENGTH,{4},Section::NONE,{}},
                
                {Section::TRACER,{70, 0,  49, 10, 12,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{4},Section::NONE,{}},
                {Section::WALKER,{0, 0},Section::TIME,{100},Section::NONE,{}},
                {Section::WALKER,{-20, 0},Section::LENGTH,{-14},Section::NONE,{}},
            
            #endif
            
            {Section::END,{},Section::ENDJ,{}},
        };


};

#endif
