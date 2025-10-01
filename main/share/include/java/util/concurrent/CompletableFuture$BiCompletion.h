#ifndef _java_util_concurrent_CompletableFuture$BiCompletion_h_
#define _java_util_concurrent_CompletableFuture$BiCompletion_h_
//$ class java.util.concurrent.CompletableFuture$BiCompletion
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
		namespace concurrent {

class $import CompletableFuture$BiCompletion : public ::java::util::concurrent::CompletableFuture$UniCompletion {
	$class(CompletableFuture$BiCompletion, $NO_CLASS_INIT, ::java::util::concurrent::CompletableFuture$UniCompletion)
public:
	CompletableFuture$BiCompletion();
	void init$(::java::util::concurrent::Executor* executor, ::java::util::concurrent::CompletableFuture* dep, ::java::util::concurrent::CompletableFuture* src, ::java::util::concurrent::CompletableFuture* snd);
	::java::util::concurrent::CompletableFuture* snd = nullptr;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_CompletableFuture$BiCompletion_h_