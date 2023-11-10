#ifndef _SPEED_SECTION_MANAGER_H_
#define _SPEED_SECTION_MANAGER_H_
#include "SectionManager.h"

#define SC_PATARN 1   //ショートカットパターンの選択

class SpeedSectionManager : public SectionManager {
    public:
        SpeedSectionManager();
        
        

    protected:
       
           
        SecParam spara [100] = {
            
            #if SC_PATARN == 1
                {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
                {Section::DEFOLTARMCHANGE,{-15},Section::TIME,{3},Section::NONE,{}},
                //{Section::TRACER,{50, 0,  48, 10, 13,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{13},Section::NONE,{}},
                {Section::TRACER,{80, 0,  40, 20, 12,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{275},Section::NONE,{}},
                //{Section::WALKER,{0, 0},Section::LENGTH,{150},Section::NONE,{}},
                {Section::VIRTUALCURVE,{-35,80,13,1.5,0.7},Section::LENGTH,{54},Section::NONE,{}},
                
                
                {Section::VIRTUALSTRAIGHT,{0,100,30,10,3.45},Section::LENGTH,{20},Section::NONE,{}},
                {Section::VIRTUALSTRAIGHT,{0,80,15,3,0.7},Section::BRIGHTNESS,{-0.2,0},Section::NONE,{}},
                
                {Section::TRACER,{100, 0,  49, 10, 12,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{105},Section::NONE,{}},
                //{Section::TRACER,{0, 0, 0, 0, 0,0,0,LineTracer::LEFTEDGE},Section::TIME,{100},Section::NONE,{}},
                {Section::TRACER,{100, 0,  49, 10, 12,0,0,LineTracer::LEFTEDGE},Section::BRIGHTNESS,{0.4,1},Section::NONE,{}},
                {Section::VIRTUALCURVE,{-15,80,13,1.5,0.7},Section::LENGTH,{24},Section::NONE,{}},
                {Section::TRACER,{100, 0,  49, 10, 12,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{24},Section::NONE,{}},
            
            #endif
            
            
            #if SC_PATARN == 2
                {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
                {Section::DEFOLTARMCHANGE,{-15},Section::TIME,{3},Section::NONE,{}},
                {Section::TRACER,{110, 0,  49, 10, 12,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{275},Section::NONE,{}},
                {Section::VIRTUALCURVE,{-35,80,13,2,0.7},Section::LENGTH,{58.5},Section::NONE,{}},
                
                
                {Section::VIRTUALSTRAIGHT,{0,100,30,10,3.45},Section::LENGTH,{168},Section::NONE,{}},
                {Section::VIRTUALCURVE,{-15,80,13,1.5,0.7},Section::LENGTH,{27},Section::NONE,{}},
                {Section::VIRTUALSTRAIGHT,{0,100,30,10,3.45},Section::LENGTH,{20},Section::NONE,{}},
                //{Section::VIRTUALSTRAIGHT,{0,80,15,3,0.7},Section::BRIGHTNESS,{-0.2,0},Section::NONE,{}},
                //{Section::VIRTUALSTRAIGHT,{0,80,15,3,0.7},Section::LENGTH,{5},Section::NONE,{}},
                {Section::TRACER,{0, 0, 0, 0, 0,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{500},Section::NONE,{}},
                
                {Section::TRACER,{110, 0,  49, 10, 12,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{95},Section::NONE,{}},
                //{Section::TRACER,{0, 0, 0, 0, 0,0,0,LineTracer::LEFTEDGE},Section::TIME,{100},Section::NONE,{}},
                {Section::TRACER,{110, 0,  49, 10, 12,0,0,LineTracer::LEFTEDGE},Section::BRIGHTNESS,{0.3,1},Section::NONE,{}},
                
                {Section::TRACER,{110, 0,  49, 10, 12,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{25},Section::NONE,{}},    
            
            #endif
            
            
            {Section::END,{},Section::ENDJ,{}},
        };


};

#endif
