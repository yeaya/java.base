#ifndef _CloseRace$OpenLoop_h_
#define _CloseRace$OpenLoop_h_
//$ class CloseRace$OpenLoop
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

class $export CloseRace$OpenLoop : public ::java::lang::Runnable {
	$class(CloseRace$OpenLoop, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	CloseRace$OpenLoop();
	void init$();
	virtual void run() override;
};

#endif // _CloseRace$OpenLoop_h_