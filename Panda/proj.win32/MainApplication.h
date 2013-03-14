#ifndef __MAIN_APPLICATION__
#define __MAIN_APPLICATION__

#include "cocos2d.h"

class MainView: public cocos2d::CCLayer
{
public:
	virtual bool init();
	static cocos2d::CCScene* scene();

	CREATE_FUNC(MainView);
};

#endif