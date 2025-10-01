#ifndef _java_util_concurrent_locks_AbstractQueuedSynchronizer$SharedNode_h_
#define _java_util_concurrent_locks_AbstractQueuedSynchronizer$SharedNode_h_
//$ class java.util.concurrent.locks.AbstractQueuedSynchronizer$SharedNode
//$ extends java.util.concurrent.locks.AbstractQueuedSynchronizer$Node

#include <java/util/concurrent/locks/AbstractQueuedSynchronizer$Node.h>

namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {

class $export AbstractQueuedSynchronizer$SharedNode : public ::java::util::concurrent::locks::AbstractQueuedSynchronizer$Node {
	$class(AbstractQueuedSynchronizer$SharedNode, $NO_CLASS_INIT, ::java::util::concurrent::locks::AbstractQueuedSynchronizer$Node)
public:
	AbstractQueuedSynchronizer$SharedNode();
	void init$();
};

			} // locks
		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_locks_AbstractQueuedSynchronizer$SharedNode_h_