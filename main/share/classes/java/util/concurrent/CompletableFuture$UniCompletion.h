#ifndef _java_util_concurrent_CompletableFuture$UniCompletion_h_
#define _java_util_concurrent_CompletableFuture$UniCompletion_h_
//$ class java.util.concurrent.CompletableFuture$UniCompletion
//$ extends java.util.concurrent.CompletableFuture$Completion

#include <java/util/concurrent/CompletableFuture$Completion.h>

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
		namespace concurrent {

class $export CompletableFuture$UniCompletion : public ::java::util::concurrent::CompletableFuture$Completion {
	$class(CompletableFuture$UniCompletion, $NO_CLASS_INIT, ::java::util::concurrent::CompletableFuture$Completion)
public:
	CompletableFuture$UniCompletion();
	void init$(::java::util::concurrent::Executor* executor, ::java::util::concurrent::CompletableFuture* dep, ::java::util::concurrent::CompletableFuture* src);
	bool claim();
	virtual bool isLive() override;
	::java::util::concurrent::Executor* executor = nullptr;
	::java::util::concurrent::CompletableFuture* dep = nullptr;
	::java::util::concurrent::CompletableFuture* src = nullptr;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_CompletableFuture$UniCompletion_h_