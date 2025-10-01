#ifndef _java_util_concurrent_CompletableFuture$AnyOf_h_
#define _java_util_concurrent_CompletableFuture$AnyOf_h_
//$ class java.util.concurrent.CompletableFuture$AnyOf
//$ extends java.util.concurrent.CompletableFuture$Completion

#include <java/lang/Array.h>
#include <java/util/concurrent/CompletableFuture$Completion.h>

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

class $import CompletableFuture$AnyOf : public ::java::util::concurrent::CompletableFuture$Completion {
	$class(CompletableFuture$AnyOf, $NO_CLASS_INIT, ::java::util::concurrent::CompletableFuture$Completion)
public:
	CompletableFuture$AnyOf();
	void init$(::java::util::concurrent::CompletableFuture* dep, ::java::util::concurrent::CompletableFuture* src, $Array<::java::util::concurrent::CompletableFuture>* srcs);
	virtual bool isLive() override;
	virtual ::java::util::concurrent::CompletableFuture* tryFire(int32_t mode) override;
	::java::util::concurrent::CompletableFuture* dep = nullptr;
	::java::util::concurrent::CompletableFuture* src = nullptr;
	$Array<::java::util::concurrent::CompletableFuture>* srcs = nullptr;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_CompletableFuture$AnyOf_h_