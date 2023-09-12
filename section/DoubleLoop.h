#ifndef _DOUBLE_LOOP_H_
#define _DOUBLE_LOOP_H_
#include "SectionManager.h"

class DoubleLoop : public SectionManager {
    public:
        DoubleLoop();
        

    protected:

    private:
        /*?��?��?��?��
            LENGTH,{?��?��?��?��}
            TIME,{?��?��?��?��}
            COLOR,{?��F,?��ʓx}
            BLOCKCOLOR,{?��ԃu?��?��?��b?��N,?��u?��?��?��b?��N,?��ʓx,?��?��?��?��}
            TURNANGLE,{?��?��?��?��p?��x}  //?��?��?��s?��̂�?��?���?��l?��͉E?��?��]?��?��?��}?��C?��i?��X?��A?��?��?��?��]?��̓v?��?��?��X//
            ARMANGLE,{?��A?��[?��?��?��p?��x}
            TEELANGLE,{?��?��?��?��?��ۂ̖ڕW?��p?��x}
            BRIGHTNESS,{?��P?��x?��l,?��?��?��?��?��?��1?��?��?��?��?��?��0}
            ENDJ,
            NONE
            */

           /*?��?��?��?��
            WALKER,{?��O?��i?��̃p?��?��?��[,?��?��?��?��̃p?��?��?��[}  //?��?��?��?��̃p?��?��?��[?��͉E?��?��]?��?��?��v?��?��?��X?��A?��?��?��?��]?��̓}?��C?��i?��X//
            TRACER,{?��?��?��x,?��?��?��?��,P,I,D,?��p?��x?��ڕW?��l,?��?��?��?��?��P}
            ARM,{?��ڕW?��̃A?��[?��?��?��̊p?��x}
            TEEL,{?��?��?��?��?��ۂ�??��?��[?��^?��[?��̋�?��?��}
            END
            */
           
        SecParam spara [100] = {
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},

            //{Section::TRACER,{30, 0,  33, 18, 4.8,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{100},Section::NONE,{}},//����Ƃ���
            //{Section::WALKER,{0, 0},Section::LENGTH,{150},Section::NONE,{}},

            //{Section::TRACER,{30, 0,  33, 18, 4.8,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{100},Section::NONE,{}},//����Ƃ���
            //{Section::TRACER,{30, 0,  33, 18, 4.8,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{100},Section::NONE,{}},//����Ƃ���
            //{Section::TRACER,{30, 0,  33, 23, 4.8,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{150},Section::NONE,{}},//��~�̓���
            //{Section::TRACER,{30, 0,  34, 28, 5,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{200},Section::NONE,{}},//���~�̓���
            //{Section::VIRTUALSTRAIGHT,{10,30,30,10,3.35},Section::LENGTH,{400},Section::NONE,{}},//�������z

            

            {Section::TRACER,{20, -0.5,  30, 10, 7,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{12},Section::NONE,{}},
            {Section::TRACER,{20, -0.5,  30, 10, 7,0,0,LineTracer::LEFTEDGE},Section::COLOR,{228,0.1},Section::NONE,{}},
            //{Section::WALKER,{0, 0},Section::LENGTH,{100},Section::NONE,{}},//���m���Ď~�܂�

            {Section::VIRTUALSTRAIGHT,{-10.5,30,30,10,3.35},Section::LENGTH,{20},Section::NONE,{}},//�������z
            {Section::TRACER,{30, -0.25,  8, 18, 3.3,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{100},Section::NONE,{}},//����Ƃ���
            {Section::TRACER,{30, -0.5,  8, 20, 3.3,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{30},Section::NONE,{}},//��~�̓���
            {Section::TRACER,{30, -0.5,  15, 23, 3.7,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{30},Section::NONE,{}},//��~�̓���
            {Section::TRACER,{30, -0.5,  15, 23, 3.7,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{25},Section::NONE,{}},//��~�̓���
            {Section::TRACER,{30, -0.5,  15, 23, 3.7,0,0,LineTracer::LEFTEDGE},Section::COLOR,{228,0.1},Section::NONE,{}},


           
            {Section::WALKER,{0, 0},Section::LENGTH,{150},Section::NONE,{}},
            
           
            {Section::TRACER,{12, -0.25,  30, 16, 3.45,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{18},Section::NONE,{}},//??��?��?
            {Section::VIRTUALSTRAIGHT,{0,15,20,5,2,LineTracer::LEFTEDGE},Section::COLOR,{15,0.5},Section::NONE,{}},

            {Section::END,{},Section::ENDJ,{}},
        };
        /*{
            {LineTracer,},{},{},{},{}}
            */

};

#endif
