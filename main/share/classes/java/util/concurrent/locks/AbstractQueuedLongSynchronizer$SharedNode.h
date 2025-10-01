#ifndef _java_util_concurrent_locks_AbstractQueuedLongSynchronizer$SharedNode_h_
#define _java_util_concurrent_locks_AbstractQueuedLongSynchronizer$SharedNode_h_
//$ class java.util.concurrent.locks.AbstractQueuedLongSynchronizer$SharedNode
//$ extends java.util.concurrent.locks.AbstractQueuedLongSynchronizer$Node

#include <java/util/concurrent/locks/AbstractQueuedLongSynchronizer$Node.h>

namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {

class $export AbstractQueuedLongSynchronizer$SharedNode : public ::java::util::concurrent::locks::AbstractQueuedLongSynchronizer$Node {
	$class(AbstractQueuedLongSynchronizer$SharedNode, $NO_CLASS_INIT, ::java::util::concurrent::locks::AbstractQueuedLongSynchronizer$Node)
public:
	AbstractQueuedLongSynchronizer$SharedNode();
	void init$();
};

			} // locks
		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_locks_AbstractQueuedLongSynchronizer$SharedNode_h_