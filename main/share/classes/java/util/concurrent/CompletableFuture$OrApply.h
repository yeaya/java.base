#ifndef _java_util_concurrent_CompletableFuture$OrApply_h_
#define _java_util_concurrent_CompletableFuture$OrApply_h_
//$ class java.util.concurrent.CompletableFuture$OrApply
//$ extends java.util.concurrent.CompletableFuture$BiCompletion

#include <java/util/concurrent/CompletableFuture$BiCompletion.h>

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
		namespace function {
			class Function;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class $export CompletableFuture$OrApply : public ::java::util::concurrent::CompletableFuture$BiCompletion {
	$class(CompletableFuture$OrApply, $NO_CLASS_INIT, ::java::util::concurrent::CompletableFuture$BiCompletion)
public:
	CompletableFuture$OrApply();
	void init$(::java::util::concurrent::Executor* executor, ::java::util::concurrent::CompletableFuture* dep, ::java::util::concurrent::CompletableFuture* src, ::java::util::concurrent::CompletableFuture* snd, ::java::util::function::Function* fn);
	virtual ::java::util::concurrent::CompletableFuture* tryFire(int32_t mode) override;
	::java::util::function::Function* fn = nullptr;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_CompletableFuture$OrApply_h_