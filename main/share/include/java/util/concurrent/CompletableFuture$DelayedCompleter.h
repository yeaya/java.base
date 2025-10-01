#ifndef _java_util_concurrent_CompletableFuture$DelayedCompleter_h_
#define _java_util_concurrent_CompletableFuture$DelayedCompleter_h_
//$ class java.util.concurrent.CompletableFuture$DelayedCompleter
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

class $import CompletableFuture$DelayedCompleter : public ::java::lang::Runnable {
	$class(CompletableFuture$DelayedCompleter, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	CompletableFuture$DelayedCompleter();
	void init$(::java::util::concurrent::CompletableFuture* f, Object$* u);
	virtual void run() override;
	::java::util::concurrent::CompletableFuture* f = nullptr;
	$Object* u = nullptr;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_CompletableFuture$DelayedCompleter_h_