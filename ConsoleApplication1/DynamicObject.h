#pragma once
#include"BaseObject.h"
#include<iostream>
using namespace std;

class DynamicObject : public BaseObject {
public:
	DynamicObject();
	~DynamicObject();
	DynamicObject(int id, string name, Postion pos);
};
