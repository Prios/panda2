#include "HelloWorldScene.h"

using namespace cocos2d;

CCScene* HelloWorld::scene()
{
    CCScene * scene = CCScene::create();
	HelloWorld *layer = HelloWorld::create();
	scene->addChild(layer);
    return scene;
}


bool HelloWorld::init()
{
	CCLayer::init();
    
	return true;
}