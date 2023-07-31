#include "SectionManager.h"

SectionManager::SectionManager()
{
    mSectionIdx=0;
    mLastIdx=0;
 
}

SectionManager::~SectionManager()
{
    msg_log("destruct SectionManager");

    for(int i=0;i<mLastIdx;i++) {
        delete mSection[i];
    }
}

bool SectionManager::run()
{
    return true;
}

void SectionManager::addSection(Section *sec)
{
    mSection[mLastIdx++]=sec;
}

/*bool SpeedSectionManager::run()//���߂��Ђ��ς��Ă��閽�߂𐔏\���(����͂܂�������Ђ��ς��Ă������)
{
    if(mSection[mSectionIdx]->run())
        return true;

    return false;
}*/

void SectionManager::reset()
{
    for(int i=0;i<mLastIdx;i++) {
        delete mSection[i];
    }
    mSectionIdx = 0;
    mLastIdx=0;
}

