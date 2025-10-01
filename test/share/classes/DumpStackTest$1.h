#ifndef _DumpStackTest$1_h_
#define _DumpStackTest$1_h_
//$ class DumpStackTest$1
//$ extends java.lang.Thread

#include <java/lang/Thread.h>

class DumpStackTest$1 : public ::java::lang::Thread {
	$class(DumpStackTest$1, $NO_CLASS_INIT, ::java::lang::Thread)
public:
	DumpStackTest$1();
	void init$();
	virtual void c();
	virtual void run() override;
};

#endif // _DumpStackTest$1_h_