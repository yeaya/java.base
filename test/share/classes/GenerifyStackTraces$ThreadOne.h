#ifndef _GenerifyStackTraces$ThreadOne_h_
#define _GenerifyStackTraces$ThreadOne_h_
//$ class GenerifyStackTraces$ThreadOne
//$ extends java.lang.Thread

#include <java/lang/Thread.h>

class $export GenerifyStackTraces$ThreadOne : public ::java::lang::Thread {
	$class(GenerifyStackTraces$ThreadOne, $NO_CLASS_INIT, ::java::lang::Thread)
public:
	GenerifyStackTraces$ThreadOne();
	void init$();
	void A();
	void B();
	void C();
	void Done();
	virtual void run() override;
};

#endif // _GenerifyStackTraces$ThreadOne_h_