#ifndef _java_util_concurrent_CompletableFuture$CoCompletion_h_
#define _java_util_concurrent_CompletableFuture$CoCompletion_h_
//$ class java.util.concurrent.CompletableFuture$CoCompletion
//$ extends java.util.concurrent.CompletableFuture$Completion

#include <java/util/concurrent/CompletableFuture$Completion.h>

namespace java {
	namespace util {
		namespace concurrent {
			class CompletableFuture;
			class CompletableFuture$BiCompletion;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class $export CompletableFuture$CoCompletion : public ::java::util::concurrent::CompletableFuture$Completion {
	$class(CompletableFuture$CoCompletion, $NO_CLASS_INIT, ::java::util::concurrent::CompletableFuture$Completion)
public:
	CompletableFuture$CoCompletion();
	void init$(::java::util::concurrent::CompletableFuture$BiCompletion* base);
	virtual bool isLive() override;
	virtual ::java::util::concurrent::CompletableFuture* tryFire(int32_t mode) override;
	::java::util::concurrent::CompletableFuture$BiCompletion* base = nullptr;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_CompletableFuture$CoCompletion_h_