#ifndef _java_util_concurrent_CompletableFuture$Delayer$DaemonThreadFactory_h_
#define _java_util_concurrent_CompletableFuture$Delayer$DaemonThreadFactory_h_
//$ class java.util.concurrent.CompletableFuture$Delayer$DaemonThreadFactory
//$ extends java.util.concurrent.ThreadFactory

#include <java/util/concurrent/ThreadFactory.h>

namespace java {
	namespace lang {
		class Runnable;
		class Thread;
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class $export CompletableFuture$Delayer$DaemonThreadFactory : public ::java::util::concurrent::ThreadFactory {
	$class(CompletableFuture$Delayer$DaemonThreadFactory, $NO_CLASS_INIT, ::java::util::concurrent::ThreadFactory)
public:
	CompletableFuture$Delayer$DaemonThreadFactory();
	void init$();
	virtual $Thread* newThread(::java::lang::Runnable* r) override;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_CompletableFuture$Delayer$DaemonThreadFactory_h_