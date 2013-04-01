#ifndef __SINGLE_PUZZLE_BLOCK_H__
#define __SINGLE_PUZZLE_BLOCK_H__

#include "cocos2d.h"
#include "Box2D/Box2D.h"
#include "SimpleAudioEngine.h"

class SinglePuzzleBlock
{
protected:
	int type;
	int point;
	int width;
	int height;

private:

public:
	namespace PuzzleType{
		enum Type{
			WEAPON,
			ARMOR,
			HEART,
			GOLD,
			ENEMY,
		}
	}

	void getHp();
	void select();
	void unselect();
	void effectAndRemove();

};

#endif  // __SINGLE_PUZZLE_BLOCK_H__