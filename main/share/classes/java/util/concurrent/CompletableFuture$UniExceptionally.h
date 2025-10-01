#ifndef _java_util_concurrent_CompletableFuture$UniExceptionally_h_
#define _java_util_concurrent_CompletableFuture$UniExceptionally_h_
//$ class java.util.concurrent.CompletableFuture$UniExceptionally
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
			class Function;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class $export CompletableFuture$UniExceptionally : public ::java::util::concurrent::CompletableFuture$UniCompletion {
	$class(CompletableFuture$UniExceptionally, $NO_CLASS_INIT, ::java::util::concurrent::CompletableFuture$UniCompletion)
public:
	CompletableFuture$UniExceptionally();
	void init$(::java::util::concurrent::Executor* executor, ::java::util::concurrent::CompletableFuture* dep, ::java::util::concurrent::CompletableFuture* src, ::java::util::function::Function* fn);
	virtual ::java::util::concurrent::CompletableFuture* tryFire(int32_t mode) override;
	::java::util::function::Function* fn = nullptr;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_CompletableFuture$UniExceptionally_h_