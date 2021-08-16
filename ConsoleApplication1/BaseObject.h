#pragma once
#include<iostream>
#include<string>
using namespace std;

struct Postion {
	int pos_x;
	int pos_y;
	
	Postion() {
		pos_x = 0;
		pos_y = 0;
	}

	Postion(int pos_x, int pos_y) {
		this->pos_x = pos_x;
		this->pos_y = pos_y;
	}
};

class BaseObject {
private:
	int id;
	string name;
	Postion pos;
public:
	BaseObject();
	BaseObject(int id, string name, Postion pos);
	~BaseObject();

	int getID();
	string getName();
	virtual void move(Postion pos);
	virtual void printPosition();
};
