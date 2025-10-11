#ifndef _GenerifyStackTraces$ThreadOne_h_
#define _GenerifyStackTraces$ThreadOne_h_
//$ class GenerifyStackTraces$ThreadOne
//$ extends java.lang.Thread

#include <java/lang/Thread.h>

#pragma push_macro("A")
#undef A
#pragma push_macro("B")
#undef B
#pragma push_macro("C")
#undef C

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

#pragma pop_macro("A")
#pragma pop_macro("B")
#pragma pop_macro("C")

#endif // _GenerifyStackTraces$ThreadOne_h_