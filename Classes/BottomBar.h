#ifndef __HelloCpp__BottomBar__
#define __HelloCpp__BottomBar__

#include <iostream>
#include "CrossApp.h"

USING_NS_CC;

class  BottomBar:public CAView
{
public:
    BottomBar();
    virtual ~BottomBar();

protected:
    virtual void onEnter();
    virtual void onEnterTransitionDidFinish();
};
#endif // __HelloCpp__BottomBar__