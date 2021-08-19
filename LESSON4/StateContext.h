#pragma once
#include"StateBase.h"
#include"LockedState.h"
class StateContext {
private:
	StateBase* m_state;
public:
	StateContext() {
		m_state	= new LockedState();
	}
	~StateContext();
	//StateContext(StateBase* _sb);
	//StateContext(StateBase*);
	void setState(StateBase* _sB);
	StateBase *getState();
	void unlock();
	void open();
	void close();
	void lock();
};
