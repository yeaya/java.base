#ifndef _java_util_concurrent_CompletableFuture$BiRun_h_
#define _java_util_concurrent_CompletableFuture$BiRun_h_
//$ class java.util.concurrent.CompletableFuture$BiRun
//$ extends java.util.concurrent.CompletableFuture$BiCompletion

#include <java/util/concurrent/CompletableFuture$BiCompletion.h>

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

class $export CompletableFuture$BiRun : public ::java::util::concurrent::CompletableFuture$BiCompletion {
	$class(CompletableFuture$BiRun, $NO_CLASS_INIT, ::java::util::concurrent::CompletableFuture$BiCompletion)
public:
	CompletableFuture$BiRun();
	void init$(::java::util::concurrent::Executor* executor, ::java::util::concurrent::CompletableFuture* dep, ::java::util::concurrent::CompletableFuture* src, ::java::util::concurrent::CompletableFuture* snd, ::java::lang::Runnable* fn);
	virtual ::java::util::concurrent::CompletableFuture* tryFire(int32_t mode) override;
	::java::lang::Runnable* fn = nullptr;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_CompletableFuture$BiRun_h_