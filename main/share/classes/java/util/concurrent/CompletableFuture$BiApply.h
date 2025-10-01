#ifndef _java_util_concurrent_CompletableFuture$BiApply_h_
#define _java_util_concurrent_CompletableFuture$BiApply_h_
//$ class java.util.concurrent.CompletableFuture$BiApply
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
			class BiFunction;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class $export CompletableFuture$BiApply : public ::java::util::concurrent::CompletableFuture$BiCompletion {
	$class(CompletableFuture$BiApply, $NO_CLASS_INIT, ::java::util::concurrent::CompletableFuture$BiCompletion)
public:
	CompletableFuture$BiApply();
	void init$(::java::util::concurrent::Executor* executor, ::java::util::concurrent::CompletableFuture* dep, ::java::util::concurrent::CompletableFuture* src, ::java::util::concurrent::CompletableFuture* snd, ::java::util::function::BiFunction* fn);
	virtual ::java::util::concurrent::CompletableFuture* tryFire(int32_t mode) override;
	::java::util::function::BiFunction* fn = nullptr;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_CompletableFuture$BiApply_h_