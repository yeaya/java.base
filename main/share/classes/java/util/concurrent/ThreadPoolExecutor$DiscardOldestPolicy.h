#ifndef _java_util_concurrent_ThreadPoolExecutor$DiscardOldestPolicy_h_
#define _java_util_concurrent_ThreadPoolExecutor$DiscardOldestPolicy_h_
//$ class java.util.concurrent.ThreadPoolExecutor$DiscardOldestPolicy
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

class $export ThreadPoolExecutor$DiscardOldestPolicy : public ::java::util::concurrent::RejectedExecutionHandler {
	$class(ThreadPoolExecutor$DiscardOldestPolicy, $NO_CLASS_INIT, ::java::util::concurrent::RejectedExecutionHandler)
public:
	ThreadPoolExecutor$DiscardOldestPolicy();
	void init$();
	virtual void rejectedExecution(::java::lang::Runnable* r, ::java::util::concurrent::ThreadPoolExecutor* e) override;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_ThreadPoolExecutor$DiscardOldestPolicy_h_