#include "cocos2d.h"
#include "CCEGLView.h"
#include "AppDelegate.h"
#include "../UI/Outgame/HelloWorldScene.h"

#include "SimpleAudioEngine.h"

using namespace CocosDenshion;

USING_NS_CC;

AppDelegate::AppDelegate()
{
}

AppDelegate::~AppDelegate()
{
    SimpleAudioEngine::end();
}

bool AppDelegate::applicationDidFinishLaunching()
{
    CCDirector *pDirector = CCDirector::sharedDirector();
    pDirector->setOpenGLView(CCEGLView::sharedOpenGLView());
    pDirector->setDisplayStats(true);
    pDirector->setAnimationInterval(1.0 / 60);
    CCScene *pScene = HelloWorld::scene();

    pDirector->runWithScene(pScene);
    return true;
}

void AppDelegate::applicationDidEnterBackground()
{
    CCDirector::sharedDirector()->stopAnimation();

    SimpleAudioEngine::sharedEngine()->pauseBackgroundMusic();
}

void AppDelegate::applicationWillEnterForeground()
{
    CCDirector::sharedDirector()->startAnimation();

    SimpleAudioEngine::sharedEngine()->resumeBackgroundMusic();
}
