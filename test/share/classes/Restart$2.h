#ifndef _Restart$2_h_
#define _Restart$2_h_
//$ class Restart$2
//$ extends java.util.concurrent.ThreadFactory

#include <java/util/concurrent/ThreadFactory.h>

namespace java {
	namespace lang {
		class Runnable;
		class Thread;
		class Thread$UncaughtExceptionHandler;
		class ThreadGroup;
	}
}

class Restart$2 : public ::java::util::concurrent::ThreadFactory {
	$class(Restart$2, $NO_CLASS_INIT, ::java::util::concurrent::ThreadFactory)
public:
	Restart$2();
	void init$(::java::lang::ThreadGroup* val$tg, ::java::lang::Thread$UncaughtExceptionHandler* val$ueh);
	virtual $Thread* newThread(::java::lang::Runnable* r) override;
	::java::lang::Thread$UncaughtExceptionHandler* val$ueh = nullptr;
	::java::lang::ThreadGroup* val$tg = nullptr;
};

#endif // _Restart$2_h_