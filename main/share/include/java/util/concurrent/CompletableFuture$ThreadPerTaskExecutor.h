#ifndef _java_util_concurrent_CompletableFuture$ThreadPerTaskExecutor_h_
#define _java_util_concurrent_CompletableFuture$ThreadPerTaskExecutor_h_
//$ class java.util.concurrent.CompletableFuture$ThreadPerTaskExecutor
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

class $import CompletableFuture$ThreadPerTaskExecutor : public ::java::util::concurrent::Executor {
	$class(CompletableFuture$ThreadPerTaskExecutor, $NO_CLASS_INIT, ::java::util::concurrent::Executor)
public:
	CompletableFuture$ThreadPerTaskExecutor();
	void init$();
	virtual void execute(::java::lang::Runnable* r) override;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_CompletableFuture$ThreadPerTaskExecutor_h_