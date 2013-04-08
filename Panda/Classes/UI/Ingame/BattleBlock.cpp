#include "BattleBlock.h"

bool BattleBlock::isDraggable(PuzzleType::Type type){
	return type == PuzzleType::ENEMY || type == PuzzleType::WEAPON;
}