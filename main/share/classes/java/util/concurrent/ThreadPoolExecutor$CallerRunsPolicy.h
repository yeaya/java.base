#ifndef _java_util_concurrent_ThreadPoolExecutor$CallerRunsPolicy_h_
#define _java_util_concurrent_ThreadPoolExecutor$CallerRunsPolicy_h_
//$ class java.util.concurrent.ThreadPoolExecutor$CallerRunsPolicy
//$ extends java.util.concurrent.RejectedExecutionHandler

#include <java/util/concurrent/RejectedExecutionHandler.h>

namespace java {
	namespace lang {
		class Runnable;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class ThreadPoolExecutor;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class $export ThreadPoolExecutor$CallerRunsPolicy : public ::java::util::concurrent::RejectedExecutionHandler {
	$class(ThreadPoolExecutor$CallerRunsPolicy, $NO_CLASS_INIT, ::java::util::concurrent::RejectedExecutionHandler)
public:
	ThreadPoolExecutor$CallerRunsPolicy();
	void init$();
	virtual void rejectedExecution(::java::lang::Runnable* r, ::java::util::concurrent::ThreadPoolExecutor* e) override;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_ThreadPoolExecutor$CallerRunsPolicy_h_