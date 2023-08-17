#include "SectionManager.h"

SectionManager::SecParam BlockDeTreasure::GetoutBlockLeftpara[100] = {
            {Section::TURNWALKER,{30,40,5,3},Section::TURNANGLE,{-45},Section::NONE,{}},
            {Section::END,{},Section::ENDJ,{}},
        };

SectionManager::SecParam BlockDeTreasure::IntoBlockDeTreasurepara[100] = {
            {Section::WALKER,{10, 0},Section::LENGTH,{20},Section::NONE,{}},
          
         
            
            
            /*{Section::DEFOLTARMCHANGE,{-15},Section::TIME,{1},Section::NONE,{}},
            //{Section::TRACER,{20, -0.25,  35, 14, 9.8,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{400},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{-77,20,20,5,2},Section::LENGTH,{59.6},Section::NONE,{}},
            
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::TURNWALKER,{-30,40,5,3},Section::TURNANGLE,{68},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{2},Section::NONE,{}},
             /*{Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::TEEL,{-70},Section::TEELANGLE,{-4300},Section::NONE,{}},//?øΩ?øΩ?øΩ?øΩ?øΩ€ÇÃÇÔøΩ?øΩÂÇ§?øΩ«ó«ÇÔøΩ?øΩp?øΩx?øΩ?øΩ?øΩ?øΩ?øΩ?øΩ
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},*/

            //{Section::WALKER,{40, 0},Section::LENGTH,{55},Section::NONE,{}},
            //{Section::WALKER,{0, -20},Section::TURNANGLE,{71},Section::NONE,{}},
            //{Section::WALKER,{20, 0},Section::LENGTH,{16},Section::NONE,{}},
            /*{Section::DEFOLTARMCHANGE,{40},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::TEEL,{70},Section::TEELANGLE,{4200},Section::NONE,{}},//?øΩ?øΩ?øΩ?øΩ?øΩ€ÇÃÇÔøΩ?øΩÂÇ§?øΩ«ó«ÇÔøΩ?øΩp?øΩx?øΩ?øΩ?øΩ?øΩ?øΩ?øΩ
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::DEFOLTARMCHANGE,{-15},Section::TIME,{5},Section::NONE,{}},

            //{Section::DEFOLTARMCHANGE,{-15},Section::TIME,{3},Section::NONE,{}},*/

            {Section::END,{},Section::ENDJ,{}},
        };

        SectionManager::SecParam BlockDeTreasure::MoveToBlockpara[100] = {

            {Section::WALKER,{10, 0},Section::LENGTH,{20},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            
            
            /*{Section::WALKER,{0, 0},Section::TIME,{50},Section::NONE,{}},
            {Section::WALKER,{-10, 0},Section::LENGTH,{-4},Section::NONE,{}},
            {Section::TRACER,{18, -0.25,  35, 14, 9.8,0,0,LineTracer::LEFTEDGE},Section::COLOR,{200,0.5},Section::NONE,{}},//Èù?
            {Section::WALKER,{0, 0},Section::TIME,{100},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{-9,18,22,5,2},Section::LENGTH,{8},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{100},Section::NONE,{}}, 
            {Section::TRACER,{18, -0.25,  35, 14, 9.8,0,0,LineTracer::LEFTEDGE},Section::COLOR,{15,0.5},Section::NONE,{}},//Ëµ§
            {Section::WALKER,{0, 0},Section::TIME,{100},Section::NONE,{}}, 
            {Section::VIRTUALSTRAIGHT,{-9,18,22,5,2},Section::LENGTH,{8},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{100},Section::NONE,{}}, 
            {Section::DEFOLTARMCHANGE,{-15},Section::TIME,{5},Section::NONE,{}},
            {Section::TRACER,{15, -0.25,  35, 14, 9.8,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{9},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{30},Section::NONE,{}},
            {Section::DEFOLTARMCHANGE,{67},Section::TIME,{5},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{-5,12,22,5,2},Section::LENGTH,{9},Section::NONE,{}},*/

            
            


            
            {Section::END,{},Section::ENDJ,{}},
        };

        SectionManager::SecParam BlockDeTreasure::MoveToBlockpara2[100] = {
            {Section::WALKER,{-10, 0},Section::LENGTH,{-20},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            
            
            /*{Section::VIRTUALSTRAIGHT,{-40,12,22,5,2},Section::LENGTH,{10},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{10},Section::NONE,{}},
            {Section::TURNWALKER,{30,40,5,3},Section::TURNANGLE,{-38},Section::NONE,{}},
            {Section::TRACER,{18, -0.25,  35, 14, 9.8,0,0,LineTracer::LEFTEDGE},Section::COLOR,{15,0.5},Section::NONE,{}},//Ëµ§
            {Section::WALKER,{0, 0},Section::TIME,{100},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{-9,18,22,5,2},Section::LENGTH,{8},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{100},Section::NONE,{}}, 
            {Section::DEFOLTARMCHANGE,{-15},Section::TIME,{5},Section::NONE,{}},
            {Section::TRACER,{15, -0.25,  35, 14, 9.8,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{9},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{30},Section::NONE,{}},
            {Section::DEFOLTARMCHANGE,{67},Section::TIME,{5},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{-5,12,22,5,2},Section::LENGTH,{9},Section::NONE,{}},


            {Section::WALKER,{0, 0},Section::TIME,{200},Section::NONE,{}},
            {Section::DEFOLTARMCHANGE,{40},Section::TIME,{1},Section::NONE,{}},
            {Section::TEEL,{-70},Section::TEELANGLE,{-4200},Section::NONE,{}},//?øΩ?øΩ?øΩ?øΩ?øΩ€ÇÃÇÔøΩ?øΩÂÇ§?øΩ«ó«ÇÔøΩ?øΩp?øΩx?øΩ?øΩ?øΩ?øΩ?øΩ?øΩ
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::DEFOLTARMCHANGE,{-10},Section::TIME,{1},Section::NONE,{}},//?øΩ?øΩ?øΩ?øΩ?øΩ‹ÇÔøΩ
            {Section::WALKER,{0, 0},Section::LENGTH,{2000},Section::NONE,{}},*/

            {Section::WALKER,{20, 20},Section::LENGTH,{40},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::END,{},Section::ENDJ,{}},
        };

        SectionManager::SecParam BlockDeTreasure::MoveToBlockpara3[100] = {
           

            
            
            //{Section::WALKER,{0, 0},Section::LENGTH,{100},Section::NONE,{}},
            {Section::END,{},Section::ENDJ,{}},
        };
        
        SectionManager::SecParam BlockDeTreasure::JudgeingColorpara[100] = {
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::DEFOLTARMCHANGE,{60},Section::BLOCKCOLOR,{15,200,0.5,300},Section::NONE,{}},
            {Section::DEFOLTARMCHANGE,{0},Section::TIME,{1},Section::NONE,{}},
            
            {Section::END,{},Section::ENDJ,{}},
        };

        SectionManager::SecParam BlockDeTreasure::GetoutBlockpara[100] = {
            {Section::TURNWALKER,{30,40,5,3},Section::TURNANGLE,{-45},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            
            
            /*{Section::WALKER,{-15, 0},Section::LENGTH,{-7},Section::NONE,{}},//ÂæåÈÄ≤
            {Section::DEFOLTARMCHANGE,{-15},Section::TIME,{3},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{-40,18,22,5,2},Section::LENGTH,{24},Section::NONE,{}},
            {Section::TURNWALKER,{80,40,5,3},Section::TURNANGLE,{-105},Section::NONE,{}},
            //{Section::WALKER,{0, 0},Section::TIME,{50},Section::NONE,{}},
            //{Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::TURNWALKER,{-80,40,5,3},Section::TURNANGLE,{54},Section::NONE,{}},
            {Section::WALKER,{-13, 0},Section::LENGTH,{-9},Section::NONE,{}},//ÂæåÈÄ≤
            {Section::TRACER,{18, -0.25,  35, 14, 9.8,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{23},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{100},Section::NONE,{}},*/
            
            
            {Section::END,{},Section::ENDJ,{}},
        };

       

        SectionManager::SecParam BlockDeTreasure::GettingBlockpara[100] = {
            {Section::TURNWALKER,{-30,40,5,3},Section::TURNANGLE,{45},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{200},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            
            
            /*{Section::WALKER,{40, 0},Section::LENGTH,{40},Section::NONE,{}},
            /*{Section::WALKER,{0, 20},Section::TURNANGLE,{-90},Section::NONE,{}},
            {Section::WALKER,{20, 0},Section::LENGTH,{50},Section::NONE,{}},*/

            /*{Section::WALKER,{0, 0},Section::TIME,{200},Section::NONE,{}},
            {Section::DEFOLTARMCHANGE,{40},Section::TIME,{1},Section::NONE,{}},
            {Section::TEEL,{-70},Section::TEELANGLE,{-4200},Section::NONE,{}},//?øΩ?øΩ?øΩ?øΩ?øΩ€ÇÃÇÔøΩ?øΩÂÇ§?øΩ«ó«ÇÔøΩ?øΩp?øΩx?øΩ?øΩ?øΩ?øΩ?øΩ?øΩ
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::DEFOLTARMCHANGE,{-10},Section::TIME,{1},Section::NONE,{}},//?øΩ?øΩ?øΩ?øΩ?øΩ‹ÇÔøΩ
            {Section::WALKER,{0, 0},Section::LENGTH,{500},Section::NONE,{}},//{Section::WALKER,{0, 0},Section::LENGTH,{100},Section::NONE,{}},//Ê≠¢„Åæ?øΩ?
            
            {Section::WALKER,{0, 0},Section::LENGTH,{200},Section::NONE,{}},*/

            {Section::END,{},Section::ENDJ,{}},
        };

        SectionManager::SecParam BlockDeTreasure::MoveToGoalpara[100] = {
           
            {Section::TURNWALKER,{-30,40,5,3},Section::TURNANGLE,{-140},Section::NONE,{}},

            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            
            
            {Section::WALKER,{0, 0},Section::LENGTH,{100},Section::NONE,{}},
            {Section::END,{},Section::ENDJ,{}},
        };

        

