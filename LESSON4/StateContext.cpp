#include"StateContext.h"


void StateContext::setState(StateBase* _sb) {
	m_state = _sb;
}

void StateContext::close() {
	m_state->close(this);
}
void StateContext::lock() {
	m_state->lock(this);
}
void StateContext::unlock() {
	m_state->unlock(this);
}
void StateContext::open() {
	m_state->open(this);
}