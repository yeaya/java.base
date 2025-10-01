#ifndef _java_util_concurrent_ScheduledExecutorService_h_
#define _java_util_concurrent_ScheduledExecutorService_h_
//$ interface java.util.concurrent.ScheduledExecutorService
//$ extends java.util.concurrent.ExecutorService

#include <java/util/concurrent/ExecutorService.h>

namespace java {
	namespace lang {
		class Runnable;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class Callable;
			class ScheduledFuture;
			class TimeUnit;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class $export ScheduledExecutorService : public ::java::util::concurrent::ExecutorService {
	$interface(ScheduledExecutorService, $NO_CLASS_INIT, ::java::util::concurrent::ExecutorService)
public:
	virtual ::java::util::concurrent::ScheduledFuture* schedule(::java::lang::Runnable* command, int64_t delay, ::java::util::concurrent::TimeUnit* unit) {return nullptr;}
	virtual ::java::util::concurrent::ScheduledFuture* schedule(::java::util::concurrent::Callable* callable, int64_t delay, ::java::util::concurrent::TimeUnit* unit) {return nullptr;}
	virtual ::java::util::concurrent::ScheduledFuture* scheduleAtFixedRate(::java::lang::Runnable* command, int64_t initialDelay, int64_t period, ::java::util::concurrent::TimeUnit* unit) {return nullptr;}
	virtual ::java::util::concurrent::ScheduledFuture* scheduleWithFixedDelay(::java::lang::Runnable* command, int64_t initialDelay, int64_t delay, ::java::util::concurrent::TimeUnit* unit) {return nullptr;}
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_ScheduledExecutorService_h_