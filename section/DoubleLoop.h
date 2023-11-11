#ifndef _DOUBLE_LOOP_H_
#define _DOUBLE_LOOP_H_
#include "SectionManager.h"

class DoubleLoop : public SectionManager {
    public:
        DoubleLoop();
        

    protected:

    private:
        /*??��?��??��?��??��?��??��?��
            LENGTH,{??��?��??��?��??��?��??��?��}
            TIME,{??��?��??��?��??��?��??��?��}
            COLOR,{??��?��F,??��?��ʓx}
            BLOCKCOLOR,{??��?��ԃu??��?��??��?��??��?��b??��?��N,??��?��u??��?��??��?��??��?��b??��?��N,??��?��ʓx,??��?��??��?��??��?��??��?��}
            TURNANGLE,{??��?��??��?��??��?��??��?��p??��?��x}  //??��?��??��?��??��?��s??��?��̂�??��?��??��?��?��??��?��l??��?��͉E??��?��??��?��]??��?��??��?��??��?��}??��?��C??��?��i??��?��X??��?��A??��?��??��?��??��?��??��?��]??��?��̓v??��?��??��?��??��?��X//
            ARMANGLE,{??��?��A??��?��[??��?��??��?��??��?��p??��?��x}
            TEELANGLE,{??��?��??��?��??��?��??��?��??��?��ۂ̖ڕW??��?��p??��?��x}
            BRIGHTNESS,{??��?��P??��?��x??��?��l,??��?��??��?��??��?��??��?��??��?��??��?��1??��?��??��?��??��?��??��?��??��?��??��?��0}
            ENDJ,
            NONE
            */

           /*??��?��??��?��??��?��??��?��
            WALKER,{??��?��O??��?��i??��?��̃p??��?��??��?��??��?��[,??��?��??��?��??��?��??��?��̃p??��?��??��?��??��?��[}  //??��?��??��?��??��?��??��?��̃p??��?��??��?��??��?��[??��?��͉E??��?��??��?��]??��?��??��?��??��?��v??��?��??��?��??��?��X??��?��A??��?��??��?��??��?��??��?��]??��?��̓}??��?��C??��?��i??��?��X//
            TRACER,{??��?��??��?��??��?��x,??��?��??��?��??��?��??��?��,P,I,D,??��?��p??��?��x??��?��ڕW??��?��l,??��?��??��?��??��?��??��?��??��?��P}
            ARM,{??��?��ڕW??��?��̃A??��?��[??��?��??��?��??��?��̊p??��?��x}
            TEEL,{??��?��??��?��??��?��??��?��??��?��ۂ�???��?��??��?��[??��?��^??��?��[??��?��̋�??��?��??��?��}
            END
            */
           
        SecParam spara [100] = {
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            
            

            
            {Section::TRACER,{55, -0.2,  33, 12, 9,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{6},Section::NONE,{}},
            //{Section::TRACER,{50, -0.2,  30, 12, 9,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{2},Section::NONE,{}},
            //{Section::TRACER,{40, -0.2,  28, 12, 8,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{6},Section::NONE,{}},
            {Section::TRACER,{21, -0.2,  17, 12, 8,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{12},Section::NONE,{}},

            {Section::TRACER,{18, -0.2,  17, 12, 8,0,0,LineTracer::RIGHTEDGE},Section::COLOR,{228,0.16},Section::NONE,{}},//青
            //{Section::TRACER,{22, 0,  30, 10, 5,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{10},Section::NONE,{}},
            //{Section::TRACER,{22, -0.5,  30, 10, 5,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{10},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{100},Section::NONE,{}},
            //{Section::TURNWALKER,{-50,20,5,2},Section::TURNANGLE,{1},Section::NONE,{}},
            //{Section::WALKER,{0, 0},Section::TIME,{100},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{10.3,25,20,5,3,LineTracer::RIGHTEDGE},Section::LENGTH,{18},Section::NONE,{}},
            

            //{Section::TRACER,{22, -0.5,  30, 10, 5,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{10},Section::NONE,{}},
            {Section::TRACER,{33, 0,  18, 12, 8,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{128},Section::NONE,{}},
            //{Section::WALKER,{0, 0},Section::TIME,{100},Section::NONE,{}},
            {Section::TRACER,{21, -0.2,  17, 12, 8,0,0,LineTracer::RIGHTEDGE},Section::COLOR,{228,0.16},Section::NONE,{}},//青�??��?��??��カー検知用
            //{Section::WALKER,{0, 0},Section::TIME,{150},Section::NONE,{}},
            {Section::TRACER,{23, 0,  17, 12, 8,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{14},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{15,25,20,5,2,LineTracer::RIGHTEDGE},Section::LENGTH,{13},Section::NONE,{}},
            {Section::TRACER,{23, 0,  17, 12, 10,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{10},Section::NONE,{}},
            {Section::TRACER,{30, 0,  17, 12, 8,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{128},Section::NONE,{}},
            
            {Section::TRACER,{21, -0.2,  17, 12, 7,0,0,LineTracer::RIGHTEDGE},Section::COLOR,{228,0.16},Section::NONE,{}},
            //{Section::WALKER,{0, 0},Section::TIME,{150},Section::NONE,{}},
            //{Section::TRACER,{0, 0, 0, 0, 0,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{500},Section::NONE,{}},//forced termination
            //{Section::WALKER,{0, 0},Section::TIME,{100},Section::NONE,{}},
            {Section::TRACER,{21, 0,  17, 12, 8,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{28.5},Section::NONE,{}},
            //{Section::WALKER,{0, 0},Section::TIME,{150},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{12.2,21,20,5,2,LineTracer::RIGHTEDGE},Section::LENGTH,{6},Section::NONE,{}},
            {Section::TRACER,{31, 0,  16, 0, 8,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{115},Section::NONE,{}},//230
            //{Section::TRACER,{21, -0.2, 17, 12, 8,0,0,LineTracer::RIGHTEDGE},Section::COLOR,{228,0.16},Section::NONE,{}},
            //{Section::WALKER,{0, 0},Section::TIME,{150},Section::NONE,{}},
            //{Section::TRACER,{21, -0.1,  17, 12, 8,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{34},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,40,20,5,2,LineTracer::LEFTEDGE},Section::LENGTH,{80},Section::NONE,{}},
            
            {Section::VIRTUALSTRAIGHT,{0,40,20,5,2},Section::BRIGHTNESS,{-0.2,0},Section::NONE,{}},
            //{Section::TURNWALKER,{5,8,0,0,LineTracer::LEFTEDGE},Section::BRIGHTNESS,{-0.1,0},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{50},Section::NONE,{}},
            //{Section::TRACER,{0, 0, 0, 0, 0,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{500},Section::NONE,{}},
            //{Section::TRACER,{30, -0.4,  40, 10, 9,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{5},Section::NONE,{}},
            
            //{Section::VIRTUALSTRAIGHT,{2,23,20,5,2,LineTracer::LEFTEDGE},Section::LENGTH,{10},Section::NONE,{}},//1107
            //{Section::TRACER,{25, 0,  17, 12, 8,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{10},Section::NONE,{}},
            //{Section::TRACER,{30, 0,  18, 12, 8,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{97},Section::NONE,{}},//1107
            
            {Section::VIRTUALSTRAIGHT,{20,40,20,5,2},Section::LENGTH,{5},Section::NONE,{}},
            //{Section::WALKER,{0, 0},Section::TIME,{50},Section::NONE,{}},
            //{Section::VIRTUALSTRAIGHT,{-6,25,20,5,2,LineTracer::LEFTEDGE},Section::LENGTH,{19},Section::NONE,{}},//1107
            //{Section::TRACER,{32, 0,  20, 10, 9,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{42},Section::NONE,{}},//1107
            //{Section::WALKER,{0, 0},Section::TIME,{100},Section::NONE,{}},
            //{Section::TRACER,{40, 0, 30, 22, 10,20,0,LineTracer::LEFTEDGE},Section::LENGTH,{33},Section::NONE,{}},//1107
            //{Section::WALKER,{0, 0},Section::TIME,{100},Section::NONE,{}},
            //{Section::TRACER,{32, -0.1,  20, 10, 9,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{20},Section::NONE,{}},//1107
            //{Section::TRACER,{23, -0.2,  17, 12, 8,0,0,LineTracer::LEFTEDGE},Section::COLOR,{228,0.16},Section::NONE,{}},//1107
            //{Section::TRACER,{70, 0,  49, 10, 12,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{30},Section::NONE,{}},
            {Section::TRACER,{40, 0,  17, 12, 8,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{10},Section::NONE,{}},
            
            
            
            {Section::TRACER,{23, -0.2,  17, 12, 8,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{27},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{80},Section::NONE,{}},
            
            {Section::VIRTUALSTRAIGHT,{0,15,15,3,0.7,LineTracer::RIGHTEDGE},Section::COLOR,{20,0.5},Section::NONE,{}},//赤
            //{Section::TRACER,{25, 0,  30, 10, 7,0,0,LineTracer::LEFTEDGE},Section::COLOR,{15,0.1},Section::NONE,{}},
            
            {Section::TRACER,{0, 0, 0, 0, 0,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{500},Section::NONE,{}},
            

            {Section::END,{},Section::ENDJ,{}},
        };
        /*{
            {LineTracer,},{},{},{},{}}
            */

};

#endif
