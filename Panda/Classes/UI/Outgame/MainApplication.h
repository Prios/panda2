#ifndef __MAIN_APPLICATION_H__
#define __MAIN_APPLICATION_H__

#include "cocos2d.h"

#include "Box2D/Box2D.h"

#include "SimpleAudioEngine.h"

class MainApplication : public cocos2d::CCLayer
{
public:
    virtual bool init();  
    static cocos2d::CCScene* scene();
    CREATE_FUNC(MainApplication);
};

#endif  // __MAIN_APPLICATION_H__