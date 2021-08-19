#include<iostream>
#include"OpenState.h"
#include"StateContext.h"

using namespace std;
void OpenState::lock(StateContext* m_state) {
	cout << "Can't lock because it was openned before" << endl;
}

void OpenState::close(StateContext* m_state) {
	cout << "closed !!!" << endl;
	m_state->setState(new ClosedState);
}

void OpenState::unlock(StateContext* m_state) {
	cout << "Can't unlock because it was openned before" << endl;
}
void OpenState::open(StateContext* m_state) {
	cout << "Can't open because it was openned before" << endl;
}