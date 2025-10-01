#ifndef _java_util_concurrent_CompletableFuture$DelayedExecutor_h_
#define _java_util_concurrent_CompletableFuture$DelayedExecutor_h_
//$ class java.util.concurrent.CompletableFuture$DelayedExecutor
//$ extends java.util.concurrent.Executor

#include <java/util/concurrent/Executor.h>

namespace java {
	namespace lang {
		class Runnable;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class TimeUnit;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class $export CompletableFuture$DelayedExecutor : public ::java::util::concurrent::Executor {
	$class(CompletableFuture$DelayedExecutor, $NO_CLASS_INIT, ::java::util::concurrent::Executor)
public:
	CompletableFuture$DelayedExecutor();
	void init$(int64_t delay, ::java::util::concurrent::TimeUnit* unit, ::java::util::concurrent::Executor* executor);
	virtual void execute(::java::lang::Runnable* r) override;
	int64_t delay = 0;
	::java::util::concurrent::TimeUnit* unit = nullptr;
	::java::util::concurrent::Executor* executor = nullptr;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_CompletableFuture$DelayedExecutor_h_