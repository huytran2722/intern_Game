#include "BaseObject.h"
#include<iostream>
#include<string>
using namespace std;

BaseObject::BaseObject() {
	this->id = 0;
	this->name = "";
	this->pos = Postion(0, 0);
}

BaseObject::~BaseObject()
{
}
BaseObject::BaseObject(int id, string name, Postion pos) {
	this->id = id;
	this->name = name;
	this->pos = pos;
}
int BaseObject::getID() {
	return this->id;
}
string BaseObject::getName() {
	return this->name;
}
void BaseObject::move(Postion pos) {
	this->pos.pos_x += pos.pos_x;
	this->pos.pos_y += pos.pos_y;
}
void BaseObject::printPosition() {
	cout << "Position: (" << this->pos.pos_x << ", " << this->pos.pos_y << ")" << endl;
}