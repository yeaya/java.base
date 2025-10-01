#ifndef _Restart$1_h_
#define _Restart$1_h_
//$ class Restart$1
//$ extends java.lang.Thread$UncaughtExceptionHandler

#include <java/lang/Thread$UncaughtExceptionHandler.h>

namespace java {
	namespace lang {
		class Thread;
		class Throwable;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {
				class AtomicInteger;
			}
		}
	}
}

class Restart$1 : public ::java::lang::Thread$UncaughtExceptionHandler {
	$class(Restart$1, $NO_CLASS_INIT, ::java::lang::Thread$UncaughtExceptionHandler)
public:
	Restart$1();
	void init$(::java::util::concurrent::atomic::AtomicInteger* val$exceptionCount);
	virtual void uncaughtException($Thread* t, $Throwable* e) override;
	::java::util::concurrent::atomic::AtomicInteger* val$exceptionCount = nullptr;
};

#endif // _Restart$1_h_