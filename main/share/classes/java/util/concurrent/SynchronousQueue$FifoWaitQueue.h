#ifndef _java_util_concurrent_SynchronousQueue$FifoWaitQueue_h_
#define _java_util_concurrent_SynchronousQueue$FifoWaitQueue_h_
//$ class java.util.concurrent.SynchronousQueue$FifoWaitQueue
//$ extends java.util.concurrent.SynchronousQueue$WaitQueue

#include <java/util/concurrent/SynchronousQueue$WaitQueue.h>

namespace java {
	namespace util {
		namespace concurrent {

class $export SynchronousQueue$FifoWaitQueue : public ::java::util::concurrent::SynchronousQueue$WaitQueue {
	$class(SynchronousQueue$FifoWaitQueue, $NO_CLASS_INIT, ::java::util::concurrent::SynchronousQueue$WaitQueue)
public:
	SynchronousQueue$FifoWaitQueue();
	void init$();
	static const int64_t serialVersionUID = (int64_t)0xCDB81D8CA9343E9A;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_SynchronousQueue$FifoWaitQueue_h_