#ifndef _java_util_concurrent_SynchronousQueue$LifoWaitQueue_h_
#define _java_util_concurrent_SynchronousQueue$LifoWaitQueue_h_
//$ class java.util.concurrent.SynchronousQueue$LifoWaitQueue
//$ extends java.util.concurrent.SynchronousQueue$WaitQueue

#include <java/util/concurrent/SynchronousQueue$WaitQueue.h>

namespace java {
	namespace util {
		namespace concurrent {

class $import SynchronousQueue$LifoWaitQueue : public ::java::util::concurrent::SynchronousQueue$WaitQueue {
	$class(SynchronousQueue$LifoWaitQueue, $NO_CLASS_INIT, ::java::util::concurrent::SynchronousQueue$WaitQueue)
public:
	SynchronousQueue$LifoWaitQueue();
	void init$();
	static const int64_t serialVersionUID = (int64_t)0xCD94969A39733E9A;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_SynchronousQueue$LifoWaitQueue_h_