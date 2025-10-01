#ifndef _java_util_concurrent_CompletableFuture$Timeout_h_
#define _java_util_concurrent_CompletableFuture$Timeout_h_
//$ class java.util.concurrent.CompletableFuture$Timeout
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

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

class $import CompletableFuture$Timeout : public ::java::lang::Runnable {
	$class(CompletableFuture$Timeout, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	CompletableFuture$Timeout();
	void init$(::java::util::concurrent::CompletableFuture* f);
	virtual void run() override;
	::java::util::concurrent::CompletableFuture* f = nullptr;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_CompletableFuture$Timeout_h_