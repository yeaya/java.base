#ifndef _FinThreads$1_h_
#define _FinThreads$1_h_
//$ class FinThreads$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace lang {
		class Thread;
	}
}

class FinThreads$1 : public ::java::lang::Runnable {
	$class(FinThreads$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	FinThreads$1();
	void init$(int64_t val$delay, $Thread* val$sleeper);
	virtual void run() override;
	$Thread* val$sleeper = nullptr;
	int64_t val$delay = 0;
};

#endif // _FinThreads$1_h_