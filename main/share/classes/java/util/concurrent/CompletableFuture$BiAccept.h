#ifndef _java_util_concurrent_CompletableFuture$BiAccept_h_
#define _java_util_concurrent_CompletableFuture$BiAccept_h_
//$ class java.util.concurrent.CompletableFuture$BiAccept
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
			class BiConsumer;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class $export CompletableFuture$BiAccept : public ::java::util::concurrent::CompletableFuture$BiCompletion {
	$class(CompletableFuture$BiAccept, $NO_CLASS_INIT, ::java::util::concurrent::CompletableFuture$BiCompletion)
public:
	CompletableFuture$BiAccept();
	void init$(::java::util::concurrent::Executor* executor, ::java::util::concurrent::CompletableFuture* dep, ::java::util::concurrent::CompletableFuture* src, ::java::util::concurrent::CompletableFuture* snd, ::java::util::function::BiConsumer* fn);
	virtual ::java::util::concurrent::CompletableFuture* tryFire(int32_t mode) override;
	::java::util::function::BiConsumer* fn = nullptr;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_CompletableFuture$BiAccept_h_