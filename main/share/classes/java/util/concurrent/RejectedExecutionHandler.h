#ifndef _java_util_concurrent_RejectedExecutionHandler_h_
#define _java_util_concurrent_RejectedExecutionHandler_h_
//$ interface java.util.concurrent.RejectedExecutionHandler
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
			class ThreadPoolExecutor;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class $export RejectedExecutionHandler : public ::java::lang::Object {
	$interface(RejectedExecutionHandler, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void rejectedExecution(::java::lang::Runnable* r, ::java::util::concurrent::ThreadPoolExecutor* executor) {}
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_RejectedExecutionHandler_h_