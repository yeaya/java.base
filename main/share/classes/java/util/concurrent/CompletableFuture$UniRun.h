#ifndef _java_util_concurrent_CompletableFuture$UniRun_h_
#define _java_util_concurrent_CompletableFuture$UniRun_h_
//$ class java.util.concurrent.CompletableFuture$UniRun
//$ extends java.util.concurrent.CompletableFuture$UniCompletion

#include <java/util/concurrent/CompletableFuture$UniCompletion.h>

namespace java {
	namespace lang {
		class Runnable;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class CompletableFuture;
			class Executor;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class $export CompletableFuture$UniRun : public ::java::util::concurrent::CompletableFuture$UniCompletion {
	$class(CompletableFuture$UniRun, $NO_CLASS_INIT, ::java::util::concurrent::CompletableFuture$UniCompletion)
public:
	CompletableFuture$UniRun();
	void init$(::java::util::concurrent::Executor* executor, ::java::util::concurrent::CompletableFuture* dep, ::java::util::concurrent::CompletableFuture* src, ::java::lang::Runnable* fn);
	virtual ::java::util::concurrent::CompletableFuture* tryFire(int32_t mode) override;
	::java::lang::Runnable* fn = nullptr;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_CompletableFuture$UniRun_h_