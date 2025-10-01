#ifndef _java_util_concurrent_ExecutorService_h_
#define _java_util_concurrent_ExecutorService_h_
//$ interface java.util.concurrent.ExecutorService
//$ extends java.util.concurrent.Executor

#include <java/util/concurrent/Executor.h>

namespace java {
	namespace lang {
		class Runnable;
	}
}
namespace java {
	namespace util {
		class Collection;
		class List;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class Callable;
			class Future;
			class TimeUnit;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class $import ExecutorService : public ::java::util::concurrent::Executor {
	$interface(ExecutorService, $NO_CLASS_INIT, ::java::util::concurrent::Executor)
public:
	virtual bool awaitTermination(int64_t timeout, ::java::util::concurrent::TimeUnit* unit) {return false;}
	virtual ::java::util::List* invokeAll(::java::util::Collection* tasks) {return nullptr;}
	virtual ::java::util::List* invokeAll(::java::util::Collection* tasks, int64_t timeout, ::java::util::concurrent::TimeUnit* unit) {return nullptr;}
	virtual $Object* invokeAny(::java::util::Collection* tasks) {return nullptr;}
	virtual $Object* invokeAny(::java::util::Collection* tasks, int64_t timeout, ::java::util::concurrent::TimeUnit* unit) {return nullptr;}
	virtual bool isShutdown() {return false;}
	virtual bool isTerminated() {return false;}
	virtual void shutdown() {}
	virtual ::java::util::List* shutdownNow() {return nullptr;}
	virtual ::java::util::concurrent::Future* submit(::java::util::concurrent::Callable* task) {return nullptr;}
	virtual ::java::util::concurrent::Future* submit(::java::lang::Runnable* task, Object$* result) {return nullptr;}
	virtual ::java::util::concurrent::Future* submit(::java::lang::Runnable* task) {return nullptr;}
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_ExecutorService_h_