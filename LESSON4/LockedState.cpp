#include"LockedState.h"
#include"OpenState.h"
#include"StateContext.h"
#include"ClosedState.h"
using namespace std;
void LockedState::lock(StateContext* m_state) {
	cout << "Can't lock because it was locked before" << endl;
}

void LockedState::close(StateContext* m_state) {
	cout << "Can't close because it was locked before" << endl;
}

void LockedState::unlock(StateContext* m_state) {
	cout << "unlocked" << endl;
	m_state->setState(new ClosedState());
}
void LockedState::open(StateContext* m_state) {
	cout << "Can't open because it was locked before" << endl;
}