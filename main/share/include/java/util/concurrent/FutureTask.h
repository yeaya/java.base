#ifndef _java_util_concurrent_FutureTask_h_
#define _java_util_concurrent_FutureTask_h_
//$ class java.util.concurrent.FutureTask
//$ extends java.util.concurrent.RunnableFuture

#include <java/util/concurrent/RunnableFuture.h>

#pragma push_macro("CANCELLED")
#undef CANCELLED
#pragma push_macro("COMPLETING")
#undef COMPLETING
#pragma push_macro("EXCEPTIONAL")
#undef EXCEPTIONAL
#pragma push_macro("INTERRUPTED")
#undef INTERRUPTED
#pragma push_macro("INTERRUPTING")
#undef INTERRUPTING
#pragma push_macro("NEW")
#undef NEW
#pragma push_macro("NORMAL")
#undef NORMAL
#pragma push_macro("RUNNER")
#undef RUNNER
#pragma push_macro("STATE")
#undef STATE
#pragma push_macro("WAITERS")
#undef WAITERS

namespace java {
	namespace lang {
		class Runnable;
		class Thread;
		class Throwable;
	}
}
namespace java {
	namespace lang {
		namespace invoke {
			class VarHandle;
		}
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class Callable;
			class FutureTask$WaitNode;
			class TimeUnit;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class $import FutureTask : public ::java::util::concurrent::RunnableFuture {
	$class(FutureTask, 0, ::java::util::concurrent::RunnableFuture)
public:
	FutureTask();
	void init$(::java::util::concurrent::Callable* callable);
	void init$(::java::lang::Runnable* runnable, Object$* result);
	int32_t awaitDone(bool timed, int64_t nanos);
	virtual bool cancel(bool mayInterruptIfRunning) override;
	virtual void done();
	void finishCompletion();
	virtual $Object* get() override;
	virtual $Object* get(int64_t timeout, ::java::util::concurrent::TimeUnit* unit) override;
	void handlePossibleCancellationInterrupt(int32_t s);
	virtual bool isCancelled() override;
	virtual bool isDone() override;
	void removeWaiter(::java::util::concurrent::FutureTask$WaitNode* node);
	$Object* report(int32_t s);
	virtual void run() override;
	virtual bool runAndReset();
	virtual void set(Object$* v);
	virtual void setException($Throwable* t);
	virtual $String* toString() override;
	$volatile(int32_t) state = 0;
	static const int32_t NEW = 0;
	static const int32_t COMPLETING = 1;
	static const int32_t NORMAL = 2;
	static const int32_t EXCEPTIONAL = 3;
	static const int32_t CANCELLED = 4;
	static const int32_t INTERRUPTING = 5;
	static const int32_t INTERRUPTED = 6;
	::java::util::concurrent::Callable* callable = nullptr;
	$Object* outcome = nullptr;
	$volatile($Thread*) runner = nullptr;
	$volatile(::java::util::concurrent::FutureTask$WaitNode*) waiters = nullptr;
	static ::java::lang::invoke::VarHandle* STATE;
	static ::java::lang::invoke::VarHandle* RUNNER;
	static ::java::lang::invoke::VarHandle* WAITERS;
};

		} // concurrent
	} // util
} // java

#pragma pop_macro("CANCELLED")
#pragma pop_macro("COMPLETING")
#pragma pop_macro("EXCEPTIONAL")
#pragma pop_macro("INTERRUPTED")
#pragma pop_macro("INTERRUPTING")
#pragma pop_macro("NEW")
#pragma pop_macro("NORMAL")
#pragma pop_macro("RUNNER")
#pragma pop_macro("STATE")
#pragma pop_macro("WAITERS")

#endif // _java_util_concurrent_FutureTask_h_