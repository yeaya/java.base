#ifndef _java_util_concurrent_ThreadPoolExecutor$DiscardPolicy_h_
#define _java_util_concurrent_ThreadPoolExecutor$DiscardPolicy_h_
//$ class java.util.concurrent.ThreadPoolExecutor$DiscardPolicy
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

class $export ThreadPoolExecutor$DiscardPolicy : public ::java::util::concurrent::RejectedExecutionHandler {
	$class(ThreadPoolExecutor$DiscardPolicy, $NO_CLASS_INIT, ::java::util::concurrent::RejectedExecutionHandler)
public:
	ThreadPoolExecutor$DiscardPolicy();
	void init$();
	virtual void rejectedExecution(::java::lang::Runnable* r, ::java::util::concurrent::ThreadPoolExecutor* e) override;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_ThreadPoolExecutor$DiscardPolicy_h_