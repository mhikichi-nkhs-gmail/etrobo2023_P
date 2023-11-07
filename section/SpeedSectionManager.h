#ifndef _SPEED_SECTION_MANAGER_H_
#define _SPEED_SECTION_MANAGER_H_
#include "SectionManager.h"

class SpeedSectionManager : public SectionManager {
    public:
        SpeedSectionManager();
        

    protected:

    private:
       
           
        SecParam spara [100] = {
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},

            
            {Section::DEFOLTARMCHANGE,{-15},Section::TIME,{3},Section::NONE,{}},
            //{Section::TRACER,{50, 0,  48, 10, 13,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{13},Section::NONE,{}},
            {Section::TRACER,{110, 0,  49, 10, 12,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{277},Section::NONE,{}},
            {Section::VIRTUALCURVE,{-30,80,13,1.5,0.7},Section::LENGTH,{48},Section::NONE,{}},
            
            {Section::VIRTUALSTRAIGHT,{3,80,30,10,3.45},Section::LENGTH,{20},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,80,15,3,0.7},Section::BRIGHTNESS,{-0.5,0},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{-2,80,30,10,3.45},Section::LENGTH,{3},Section::NONE,{}},
            //{Section::TRACER,{0, 0, 0, 0, 0,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{500},Section::NONE,{}},
            //{Section::WALKER,{0, 0},Section::TIME,{150},Section::NONE,{}},
            //   {Section::TRACER,{60, 0,  40, 20, 10,18,0,LineTracer::LEFTEDGE},Section::LENGTH,{35},Section::NONE,{}},
            //{Section::WALKER,{0, 0},Section::TIME,{150},Section::NONE,{}},
            {Section::TRACER,{110, 0,  49, 10, 12,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{80},Section::NONE,{}},
            
            {Section::TRACER,{90, 0,  49, 10, 12,0,0,LineTracer::LEFTEDGE},Section::BRIGHTNESS,{0.4,1},Section::NONE,{}},
            //{Section::TRACER,{0, 0, 0, 0, 0,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{500},Section::NONE,{}},
            {Section::VIRTUALCURVE,{-25,60,13,1.5,0.7},Section::BRIGHTNESS,{0.2,0},Section::NONE,{}},
            
            {Section::VIRTUALSTRAIGHT,{3,60,30,10,3.45},Section::LENGTH,{10},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{2,50,15,3,0.7},Section::BRIGHTNESS,{-0.5,0},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{-2,30,30,10,3.45},Section::LENGTH,{3},Section::NONE,{}},
            //{Section::WALKER,{0, 0},Section::TIME,{150},Section::NONE,{}},
            // {Section::TRACER,{60, 0,  40, 20, 10,18,0,LineTracer::LEFTEDGE},Section::LENGTH,{35},Section::NONE,{}},
            //{Section::WALKER,{0, 0},Section::TIME,{150},Section::NONE,{}},
            // {Section::TRACER,{100, 0,  49, 10, 12,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{20},Section::NONE,{}},//LAP
            
            {Section::TRACER,{0, 0, 0, 0, 0,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{500},Section::NONE,{}},
            
            
            {Section::END,{},Section::ENDJ,{}},
        };
        /*{
            {LineTracer,},{},{},{},{}}
            */


};

#endif
