#ifndef _java_util_concurrent_CompletableFuture$UniRelay_h_
#define _java_util_concurrent_CompletableFuture$UniRelay_h_
//$ class java.util.concurrent.CompletableFuture$UniRelay
//$ extends java.util.concurrent.CompletableFuture$UniCompletion

#include <java/util/concurrent/CompletableFuture$UniCompletion.h>

namespace java {
	namespace util {
		namespace concurrent {
			class CompletableFuture;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class $import CompletableFuture$UniRelay : public ::java::util::concurrent::CompletableFuture$UniCompletion {
	$class(CompletableFuture$UniRelay, $NO_CLASS_INIT, ::java::util::concurrent::CompletableFuture$UniCompletion)
public:
	CompletableFuture$UniRelay();
	void init$(::java::util::concurrent::CompletableFuture* dep, ::java::util::concurrent::CompletableFuture* src);
	virtual ::java::util::concurrent::CompletableFuture* tryFire(int32_t mode) override;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_CompletableFuture$UniRelay_h_