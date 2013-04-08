#ifndef __DRAG_BLOCK_H__
#define __DRAG_BLOCK_H__

#include "PuzzleElement.h"

namespace PuzzleType{
	enum Type{
		WEAPON,
		ARMOR,
		HEART,
		GOLD,
		ENEMY
	};
};

class DragBlock : public PuzzleElement
{
protected:
	int point;
	PuzzleType::Type type;	

private:
	bool isSelected;

public:	
	virtual bool isDraggable(PuzzleType::Type type);
	DragBlock();
	~DragBlock();
	int getPoint();
	void setPoint(int point);
	PuzzleType::Type getType();
	void select();
	void unselect();
	void effectAndRemove();

};

#endif  // __DRAG_BLOCK_H__