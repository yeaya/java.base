#ifndef _java_util_concurrent_CompletableFuture$TaskSubmitter_h_
#define _java_util_concurrent_CompletableFuture$TaskSubmitter_h_
//$ class java.util.concurrent.CompletableFuture$TaskSubmitter
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace util {
		namespace concurrent {
			class Executor;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class $import CompletableFuture$TaskSubmitter : public ::java::lang::Runnable {
	$class(CompletableFuture$TaskSubmitter, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	CompletableFuture$TaskSubmitter();
	void init$(::java::util::concurrent::Executor* executor, ::java::lang::Runnable* action);
	virtual void run() override;
	::java::util::concurrent::Executor* executor = nullptr;
	::java::lang::Runnable* action = nullptr;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_CompletableFuture$TaskSubmitter_h_