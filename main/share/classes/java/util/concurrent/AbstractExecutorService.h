#ifndef _java_util_concurrent_AbstractExecutorService_h_
#define _java_util_concurrent_AbstractExecutorService_h_
//$ class java.util.concurrent.AbstractExecutorService
//$ extends java.util.concurrent.ExecutorService

#include <java/util/concurrent/ExecutorService.h>

namespace java {
	namespace lang {
		class Runnable;
	}
}
namespace java {
	namespace util {
		class ArrayList;
		class Collection;
		class List;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class Callable;
			class Future;
			class RunnableFuture;
			class TimeUnit;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class $export AbstractExecutorService : public ::java::util::concurrent::ExecutorService {
	$class(AbstractExecutorService, 0, ::java::util::concurrent::ExecutorService)
public:
	AbstractExecutorService();
	void init$();
	static void cancelAll(::java::util::ArrayList* futures);
	static void cancelAll(::java::util::ArrayList* futures, int32_t j);
	$Object* doInvokeAny(::java::util::Collection* tasks, bool timed, int64_t nanos);
	virtual ::java::util::List* invokeAll(::java::util::Collection* tasks) override;
	virtual ::java::util::List* invokeAll(::java::util::Collection* tasks, int64_t timeout, ::java::util::concurrent::TimeUnit* unit) override;
	virtual $Object* invokeAny(::java::util::Collection* tasks) override;
	virtual $Object* invokeAny(::java::util::Collection* tasks, int64_t timeout, ::java::util::concurrent::TimeUnit* unit) override;
	virtual ::java::util::concurrent::RunnableFuture* newTaskFor(::java::lang::Runnable* runnable, Object$* value);
	virtual ::java::util::concurrent::RunnableFuture* newTaskFor(::java::util::concurrent::Callable* callable);
	virtual ::java::util::concurrent::Future* submit(::java::lang::Runnable* task) override;
	virtual ::java::util::concurrent::Future* submit(::java::lang::Runnable* task, Object$* result) override;
	virtual ::java::util::concurrent::Future* submit(::java::util::concurrent::Callable* task) override;
	static bool $assertionsDisabled;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_AbstractExecutorService_h_