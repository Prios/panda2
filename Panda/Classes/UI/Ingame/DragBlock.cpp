#include "DragBlock.h"

DragBlock::DragBlock(){
	this->isSelected = false;
}

DragBlock::~DragBlock(){

}

int DragBlock::getPoint(){
	return this->point;
}

void DragBlock::setPoint(int p){
	this->point = p;
}

PuzzleType::Type DragBlock::getType(){
	return this->type;
}

void DragBlock::select(){
	this->isSelected = true;
}

void DragBlock::unselect(){
	this->isSelected = false;
}

bool DragBlock::isDraggable(PuzzleType::Type type){
	return type == this->type;
}

void DragBlock::effectAndRemove(){
	//TODO : 효과주고 블록 없애기
}