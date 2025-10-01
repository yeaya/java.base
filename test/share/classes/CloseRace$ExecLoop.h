#ifndef _CloseRace$ExecLoop_h_
#define _CloseRace$ExecLoop_h_
//$ class CloseRace$ExecLoop
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

class $export CloseRace$ExecLoop : public ::java::lang::Runnable {
	$class(CloseRace$ExecLoop, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	CloseRace$ExecLoop();
	void init$();
	virtual void run() override;
};

#endif // _CloseRace$ExecLoop_h_