#ifndef _java_util_concurrent_CompletableFuture$OrAccept_h_
#define _java_util_concurrent_CompletableFuture$OrAccept_h_
//$ class java.util.concurrent.CompletableFuture$OrAccept
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
			class Consumer;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class $export CompletableFuture$OrAccept : public ::java::util::concurrent::CompletableFuture$BiCompletion {
	$class(CompletableFuture$OrAccept, $NO_CLASS_INIT, ::java::util::concurrent::CompletableFuture$BiCompletion)
public:
	CompletableFuture$OrAccept();
	void init$(::java::util::concurrent::Executor* executor, ::java::util::concurrent::CompletableFuture* dep, ::java::util::concurrent::CompletableFuture* src, ::java::util::concurrent::CompletableFuture* snd, ::java::util::function::Consumer* fn);
	virtual ::java::util::concurrent::CompletableFuture* tryFire(int32_t mode) override;
	::java::util::function::Consumer* fn = nullptr;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_CompletableFuture$OrAccept_h_