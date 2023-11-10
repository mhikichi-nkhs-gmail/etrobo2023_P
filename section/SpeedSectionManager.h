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
            {Section::TRACER,{80, 0,  40, 20, 12,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{275},Section::NONE,{}},
            //{Section::WALKER,{0, 0},Section::LENGTH,{150},Section::NONE,{}},
            {Section::VIRTUALCURVE,{-35,80,13,1.5,0.7},Section::LENGTH,{54},Section::NONE,{}},
            
            
            {Section::VIRTUALSTRAIGHT,{0,100,30,10,3.45},Section::LENGTH,{20},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,80,15,3,0.7},Section::BRIGHTNESS,{-0.2,0},Section::NONE,{}},
            //{Section::VIRTUALSTRAIGHT,{0,80,15,3,0.7},Section::LENGTH,{5},Section::NONE,{}},
            //{Section::TRACER,{0, 0, 0, 0, 0,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{500},Section::NONE,{}},
            //{Section::VIRTUALSTRAIGHT,{-4,80,15,3,0.7},Section::LENGTH,{6},Section::NONE,{}},
            //{Section::TRACER,{0, 0, 0, 0, 0,0,0,LineTracer::LEFTEDGE},Section::TIME,{100},Section::NONE,{}},
            
            //{Section::VIRTUALSTRAIGHT,{-5,80,30,10,3.45},Section::LENGTH,{5},Section::NONE,{}},
            //{Section::TRACER,{0, 0, 0, 0, 0,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{500},Section::NONE,{}},
            //{Section::WALKER,{0, 0},Section::TIME,{150},Section::NONE,{}},
            //   {Section::TRACER,{60, 0,  40, 20, 10,18,0,LineTracer::LEFTEDGE},Section::LENGTH,{35},Section::NONE,{}},
            //{Section::WALKER,{0, 0},Section::TIME,{150},Section::NONE,{}},
            {Section::TRACER,{100, 0,  49, 10, 12,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{105},Section::NONE,{}},
            //{Section::TRACER,{0, 0, 0, 0, 0,0,0,LineTracer::LEFTEDGE},Section::TIME,{100},Section::NONE,{}},
             {Section::TRACER,{100, 0,  49, 10, 12,0,0,LineTracer::LEFTEDGE},Section::BRIGHTNESS,{0.4,1},Section::NONE,{}},
            {Section::VIRTUALCURVE,{-15,80,13,1.5,0.7},Section::LENGTH,{24},Section::NONE,{}},
            {Section::TRACER,{100, 0,  49, 10, 12,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{24},Section::NONE,{}},
/* 
{Section::TRACER,{0, 0, 0, 0, 0,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{500},Section::NONE,{}},

           {Section::VIRTUALSTRAIGHT,{-15,80,13,1.5,0.9},Section::LENGTH,{20},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,80,15,3,0.9},Section::BRIGHTNESS,{-0.2,0},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{-46,80,13,1.5,0.9},Section::LENGTH,{18},Section::NONE,{}},
             {Section::TRACER,{110, 0,  49, 10, 12,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{20},Section::NONE,{}},

             {Section::TURNWALKER,{-10,10,1.5,0.7},Section::TURNANGLE,{10},Section::NONE,{}},

{Section::WALKER,{-20, 0},Section::LENGTH,{-30},Section::NONE,{}},
            

            {Section::TRACER,{110, 0,  49, 10, 12,0,0,LineTracer::LEFTEDGE},Section::BRIGHTNESS,{0.3,1},Section::NONE,{}},
            {Section::VIRTUALCURVE,{-15,80,13,1.5,0.7},Section::LENGTH,{28},Section::NONE,{}},
            {Section::TRACER,{110, 0,  49, 10, 12,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{15},Section::NONE,{}},

            


             {Section::TRACER,{0, 0, 0, 0, 0,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{500},Section::NONE,{}},

            {Section::TRACER,{110, 0,  49, 10, 12,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{20},Section::NONE,{}},
            
            	
           
            
            {Section::VIRTUALSTRAIGHT,{-20,90,30,10,3.5},Section::LENGTH,{25},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,80,15,3,0.7},Section::BRIGHTNESS,{-0.5,0},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{-47,80,15,3,0.7},Section::LENGTH,{25},Section::NONE,{}},
            //{Section::TRACER,{0, 0, 0, 0, 0,0,0,LineTracer::LEFTEDGE},Section::TIME,{100},Section::NONE,{}},
            
            /*{Section::TRACER,{80, 0,  49, 10, 12,0,0,LineTracer::LEFTEDGE},Section::BRIGHTNESS,{0.4,1},Section::NONE,{}},
            {Section::VIRTUALCURVE,{-12,80,13,1.5,0.7},Section::LENGTH,{16},Section::NONE,{}},*/
           
            
            
            {Section::END,{},Section::ENDJ,{}},
        };
        /*{
            {LineTracer,},{},{},{},{}}
            */


};

#endif
