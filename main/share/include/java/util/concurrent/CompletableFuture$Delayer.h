#ifndef _java_util_concurrent_CompletableFuture$Delayer_h_
#define _java_util_concurrent_CompletableFuture$Delayer_h_
//$ class java.util.concurrent.CompletableFuture$Delayer
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class Runnable;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class ScheduledFuture;
			class ScheduledThreadPoolExecutor;
			class TimeUnit;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class $import CompletableFuture$Delayer : public ::java::lang::Object {
	$class(CompletableFuture$Delayer, 0, ::java::lang::Object)
public:
	CompletableFuture$Delayer();
	void init$();
	static ::java::util::concurrent::ScheduledFuture* delay(::java::lang::Runnable* command, int64_t delay, ::java::util::concurrent::TimeUnit* unit);
	static ::java::util::concurrent::ScheduledThreadPoolExecutor* delayer;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_CompletableFuture$Delayer_h_