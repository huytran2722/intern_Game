#include"LockedState.h"
#include"OpenState.h"
#include"StateContext.h"
#include"ClosedState.h"
using namespace std;
void ClosedState::lock(StateContext* m_state) {
	m_state->setState(new LockedState);
	cout << "locked !!!" << endl;
}

void ClosedState::close(StateContext* m_state) {
	cout << "Can't close because it was closed before" << endl;
}

void ClosedState::unlock(StateContext* m_state) {
	cout << "Can't unlock because it was closed before" << endl;
}
void ClosedState::open(StateContext* m_state) {
	m_state->setState(new OpenState);
	cout << "openned !!!" << endl;
}