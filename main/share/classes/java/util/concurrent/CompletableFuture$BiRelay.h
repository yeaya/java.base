#ifndef _java_util_concurrent_CompletableFuture$BiRelay_h_
#define _java_util_concurrent_CompletableFuture$BiRelay_h_
//$ class java.util.concurrent.CompletableFuture$BiRelay
//$ extends java.util.concurrent.CompletableFuture$BiCompletion

#include <java/util/concurrent/CompletableFuture$BiCompletion.h>

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

class $export CompletableFuture$BiRelay : public ::java::util::concurrent::CompletableFuture$BiCompletion {
	$class(CompletableFuture$BiRelay, $NO_CLASS_INIT, ::java::util::concurrent::CompletableFuture$BiCompletion)
public:
	CompletableFuture$BiRelay();
	void init$(::java::util::concurrent::CompletableFuture* dep, ::java::util::concurrent::CompletableFuture* src, ::java::util::concurrent::CompletableFuture* snd);
	virtual ::java::util::concurrent::CompletableFuture* tryFire(int32_t mode) override;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_CompletableFuture$BiRelay_h_