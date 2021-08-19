

#include <iostream>
#include"StateBase.h"
#include"OpenState.h"
#include"StateContext.h"
#include"LockedState.h"
#include"ClosedState.h"
int main()
{
	StateContext* context = new StateContext();
	context->open();
	context->unlock();
	context->open();
	context->lock();
	context->close();
	context->lock();
}
