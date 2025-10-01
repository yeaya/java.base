#ifndef _java_util_concurrent_CompletableFuture$UniAccept_h_
#define _java_util_concurrent_CompletableFuture$UniAccept_h_
//$ class java.util.concurrent.CompletableFuture$UniAccept
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
			class Consumer;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class $export CompletableFuture$UniAccept : public ::java::util::concurrent::CompletableFuture$UniCompletion {
	$class(CompletableFuture$UniAccept, $NO_CLASS_INIT, ::java::util::concurrent::CompletableFuture$UniCompletion)
public:
	CompletableFuture$UniAccept();
	void init$(::java::util::concurrent::Executor* executor, ::java::util::concurrent::CompletableFuture* dep, ::java::util::concurrent::CompletableFuture* src, ::java::util::function::Consumer* fn);
	virtual ::java::util::concurrent::CompletableFuture* tryFire(int32_t mode) override;
	::java::util::function::Consumer* fn = nullptr;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_CompletableFuture$UniAccept_h_