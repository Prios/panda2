#ifndef __PUZZLE_ELEMENT_H__
#define __PUZZLE_ELEMENT_H__

#include "cocos2d.h"
#include "Box2D/Box2D.h"
#include "SimpleAudioEngine.h"

using namespace cocos2d;

class PuzzleElement: public cocos2d::CCSprite
{

protected:	
	PuzzleElement *puzzle;

public:
	PuzzleElement();
	~PuzzleElement();
};


#endif  // __PUZZLE_ELEMENT_H__