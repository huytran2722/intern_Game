#pragma once
#include<iostream>
using namespace std;
class StateContext;

class StateBase {	
public:
	StateBase();//contructor
	virtual void lock(StateContext*) = 0;
	virtual void unlock(StateContext*) = 0;
	virtual void open(StateContext*) = 0;
	virtual void close(StateContext*) = 0;
};