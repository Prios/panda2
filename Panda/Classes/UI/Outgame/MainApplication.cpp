#include "MainApplication.h"

using namespace cocos2d;

CCScene* MainApplication::scene()
{
    CCScene * scene = CCScene::create();
	MainApplication *layer = MainApplication::create();
	scene->addChild(layer);
    return scene;
}

bool MainApplication::init()
{
    bool bRet = false;
	CCLayer::init();
    return bRet;
}