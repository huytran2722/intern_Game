#pragma once

#include"StateBase.h"
#include"ClosedState.h"
class OpenState : public StateBase {
public:
	virtual void lock(StateContext*);
	virtual void unlock(StateContext*);
	virtual void open(StateContext*);
	virtual void close(StateContext*);
};
