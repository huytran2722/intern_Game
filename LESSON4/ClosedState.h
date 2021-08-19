#pragma once
#include"StateBase.h"
#include"LockedState.h"

using namespace std;

class ClosedState : public StateBase {
	virtual void lock(StateContext*);
	virtual void unlock(StateContext*);
	virtual void open(StateContext*);
	virtual void close(StateContext*);
};
