#ifndef _SPEED_SECTION_MANAGER_H_
#define _SPEED_SECTION_MANAGER_H_
#include "SectionManager.h"

class SpeedSectionManager : public SectionManager {
    public:
        SpeedSectionManager();
        
/*
走法
WALKER{前進する強さ,曲がる強さ}
TRACER{前進する強さ,輝度値(-0.25から-0.35くらい),P値,I値,d値,0,0}
TEEL{プラスの値->しっぽを伸ばす},{マイナスの値->しっぽをしまう}
DEFOLTARMCHANGE{目標のアームの角度}
VIRTUALCURVE{プラス値->時計周り    ,前進の強さ,P値,I値,D値}
             マイナス値->逆時計周り
VIRTUALSTRAIGHT{基本0でいいよ,前進の強さ,P値,I値,D値}
TURNWALKER{その場旋回の強さ,P値,I値,D値}

判定
LENGTH{長さ}
COLOR{色の値,さい度(だいたい 0.5)}
BLOCKCOLOR{赤ブロックの値,青ブロックの値,さい度,アームを止める時間}
TIME{時間}
TURNANGLE{目標の旋回角度}
TEELANGLE{伸ばすとき->4700}
          しまうとき->-4700
BRIGHTNESS{輝度値(だいたい-0.3),0->黒判定}
                               1->白判定
*/
    protected:

    private:
       
           
        SecParam spara [100] = {

            
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},

            //{Section::VIRTUALSTRAIGHT,{0,80,30,5,0.7},Section::LENGTH,{2000},Section::NONE,{}},
            //{Section::WALKER,{0, 0},Section::LENGTH,{100},Section::NONE,{}},

            
            {Section::DEFOLTARMCHANGE,{-15},Section::TIME,{3},Section::NONE,{}},
            //{Section::TRACER,{50, 0,  48, 10, 13,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{13},Section::NONE,{}},
            {Section::TRACER,{100, 0,  49, 10, 13,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{290},Section::NONE,{}},
            {Section::VIRTUALCURVE,{30,80,13,1.5,0.7},Section::LENGTH,{50},Section::NONE,{}},
           
           //{Section::VIRTUALSTRAIGHT,{45,80,30,3,2},Section::LENGTH,{15},Section::NONE,{}},

            {Section::VIRTUALSTRAIGHT,{0,80,15,3,0.7},Section::BRIGHTNESS,{-0.3,0},Section::NONE,{}},

            {Section::VIRTUALSTRAIGHT,{0,80,15,3,0.7},Section::LENGTH,{5},Section::NONE,{}},

            //{Section::WALKER,{0, 0},Section::TIME,{150},Section::NONE,{}},
            {Section::TRACER,{66, 0,  49, 10, 13,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{175},Section::NONE,{}},
            //{Section::WALKER,{0, 0},Section::TIME,{150},Section::NONE,{}},
            {Section::TRACER,{30, 0,  40, 12, 10,-20,0,LineTracer::RIGHTEDGE},Section::LENGTH,{35},Section::NONE,{}},
            //{Section::WALKER,{0, 0},Section::TIME,{150},Section::NONE,{}},
            {Section::TRACER,{65, 0,  49, 10, 13,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{13},Section::NONE,{}},//LAP
            
            //{Section::TRACER,{0, 0, 0, 0, 0,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{500},Section::NONE,{}},
            


           
            {Section::END,{},Section::ENDJ,{}},
        };
};

#endif
