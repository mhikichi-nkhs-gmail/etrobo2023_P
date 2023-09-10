#ifndef _DOUBLE_LOOP_H_
#define _DOUBLE_LOOP_H_
#include "SectionManager.h"

class DoubleLoop : public SectionManager {
    public:
        DoubleLoop();
        

    protected:

    private:
        /*?申?申?申?申
            LENGTH,{?申?申?申?申}
            TIME,{?申?申?申?申}
            COLOR,{?申F,?申��x}
            BLOCKCOLOR,{?申��u?申?申?申b?申N,?申��u?申?申?申b?申N,?申��x,?申?申?申?申}
            TURNANGLE,{?申?申?申?申p?申x}  //?申?申?申s?申��鐃�?申?��鐃�?申l?申��E?申?申]?申?申?申}?申C?申i?申X?申A?申?申?申?申]?申��v?申?申?申X//
            ARMANGLE,{?申A?申[?申?申?申p?申x}
            TEELANGLE,{?申?申?申?申?申������W?申p?申x}
            BRIGHTNESS,{?申P?申x?申l,?申?申?申?申?申?申1?申?申?申?申?申?申0}
            ENDJ,
            NONE
            */

           /*?申?申?申?申
            WALKER,{?申O?申i?申��p?申?申?申[,?申?申?申?申��p?申?申?申[}  //?申?申?申?申��p?申?申?申[?申��E?申?申]?申?申?申v?申?申?申X?申A?申?申?申?申]?申��}?申C?申i?申X//
            TRACER,{?申?申?申x,?申?申?申?申,P,I,D,?申p?申x?申��W?申l,?申?申?申?申?申P}
            ARM,{?申��W?申��A?申[?申?申?申��p?申x}
            TEEL,{?申?申?申?申?申���??申?申[?申^?申[?申��鐃�?申?申}
            END
            */
           
        SecParam spara [100] = {

            {Section::TRACER,{20, -0.5,  30, 10, 7,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{12},Section::NONE,{}},
            {Section::TRACER,{20, -0.5,  30, 10, 7,0,0,LineTracer::LEFTEDGE},Section::COLOR,{228,0.1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::LENGTH,{100},Section::NONE,{}},//�����m�����~����

            {Section::TRACER,{20, -0.4,  30, 10, 7,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{6},Section::NONE,{}},
            {Section::TRACER,{20, 0,  30, 10, 7,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{20},Section::NONE,{}},
            {Section::TRACER,{20, -0.4,  30, 10, 7,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{6},Section::NONE,{}},
            //{Section::TRACER,{20, 0,  30, 10, 7,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{5},Section::NONE,{}},
            
            /*{Section::WALKER,{0, 0},Section::TIME,{150},Section::NONE,{}},
            {Section::TURNWALKER,{25,40,5,3},Section::TURNANGLE,{-8},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,25,20,5,2},Section::LENGTH,{16},Section::NONE,{}},*/
            {Section::TRACER,{20, 0,  30, 10, 7,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{88},Section::NONE,{}},
            //{Section::TRACER,{40, 0,  30, 10, 8,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{90},Section::NONE,{}},
            {Section::TRACER,{20, -0.3,  30, 10, 7,0,0,LineTracer::LEFTEDGE},Section::COLOR,{228,0.1},Section::NONE,{}},//����?��?若����惹����ョ��
            //{Section::WALKER,{0, 0},Section::TIME,{100},Section::NONE,{}},
            {Section::TRACER,{23, 0,  30, 10, 7,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{160},Section::NONE,{}},
            {Section::TRACER,{18, -0.3,  30, 10, 7,0,0,LineTracer::LEFTEDGE},Section::COLOR,{228,0.1},Section::NONE,{}},
            //{Section::WALKER,{0, 0},Section::TIME,{100},Section::NONE,{}},
            {Section::TRACER,{23, 0,  30, 10, 7,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{17},Section::NONE,{}},
            {Section::TRACER,{23, -0.3,  30, 10, 7,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{7},Section::NONE,{}},
            {Section::TRACER,{23, 0,  30, 10, 8.5,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{230},Section::NONE,{}},
            {Section::TRACER,{20, -0.3,  30, 10, 7,0,0,LineTracer::RIGHTEDGE},Section::COLOR,{228,0.1},Section::NONE,{}},
            //{Section::WALKER,{0, 0},Section::TIME,{100},Section::NONE,{}},
            {Section::TRACER,{23, 0,  30, 10, 7,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{40},Section::NONE,{}},
            {Section::TRACER,{23, -0.4,  30, 10, 8,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{5},Section::NONE,{}},
            {Section::TRACER,{23, 0,  30, 10, 8.5,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{158},Section::NONE,{}},
            //{Section::TRACER,{28, 0,  30, 10, 8,20,0,LineTracer::LEFTEDGE},Section::LENGTH,{35},Section::NONE,{}},
            {Section::TRACER,{25, 0,  30, 10, 7,10,0,LineTracer::LEFTEDGE},Section::LENGTH,{30},Section::NONE,{}},
            {Section::TRACER,{23, 0,  30, 10, 7,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{23},Section::NONE,{}},
            {Section::TRACER,{20, -0.3,  30, 10, 7,0,0,LineTracer::LEFTEDGE},Section::COLOR,{228,0.1},Section::NONE,{}},
            {Section::TRACER,{23, 0,  30, 10, 7,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{145},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{200},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,15,20,5,2,LineTracer::LEFTEDGE},Section::COLOR,{15,0.5},Section::NONE,{}},//莎�
            //{Section::TRACER,{25, 0,  30, 10, 7,0,0,LineTracer::LEFTEDGE},Section::COLOR,{15,0.1},Section::NONE,{}},
            
            //{Section::TRACER,{0, 0, 0, 0, 0,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{500},Section::NONE,{}},

            {Section::WALKER,{0, 0},Section::LENGTH,{150},Section::NONE,{}},

            {Section::END,{},Section::ENDJ,{}},
        };
        /*{
            {LineTracer,},{},{},{},{}}
            */

};

#endif
