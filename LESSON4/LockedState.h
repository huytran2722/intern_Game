#pragma once

#include"StateBase.h"

class LockedState : public StateBase {
public:
	virtual void lock(StateContext*);
	virtual void unlock(StateContext*);
	virtual void open(StateContext*);
	virtual void close(StateContext*);
};
