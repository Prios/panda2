
#ifndef __BATTLE_BLOCK_H__
#define __BATTLE_BLOCK_H__

#include "DragBlock.h"

class BattleBlock: public DragBlock
{
public:
	virtual bool isDraggable(PuzzleType::Type type) override;
};

#endif  // __BATTLE_BLOCK_H__