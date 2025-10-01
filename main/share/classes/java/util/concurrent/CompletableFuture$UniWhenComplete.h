#ifndef _java_util_concurrent_CompletableFuture$UniWhenComplete_h_
#define _java_util_concurrent_CompletableFuture$UniWhenComplete_h_
//$ class java.util.concurrent.CompletableFuture$UniWhenComplete
//$ extends java.util.concurrent.CompletableFuture$UniCompletion

#include <java/util/concurrent/CompletableFuture$UniCompletion.h>

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
			class BiConsumer;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class $export CompletableFuture$UniWhenComplete : public ::java::util::concurrent::CompletableFuture$UniCompletion {
	$class(CompletableFuture$UniWhenComplete, $NO_CLASS_INIT, ::java::util::concurrent::CompletableFuture$UniCompletion)
public:
	CompletableFuture$UniWhenComplete();
	void init$(::java::util::concurrent::Executor* executor, ::java::util::concurrent::CompletableFuture* dep, ::java::util::concurrent::CompletableFuture* src, ::java::util::function::BiConsumer* fn);
	virtual ::java::util::concurrent::CompletableFuture* tryFire(int32_t mode) override;
	::java::util::function::BiConsumer* fn = nullptr;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_CompletableFuture$UniWhenComplete_h_