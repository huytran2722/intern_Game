#pragma once
#include"BaseObject.h"

class StaticObject : public BaseObject {
public:
	StaticObject();
	~StaticObject();
	StaticObject(int id, string name, Postion pos);
	void move(Postion pos);
};