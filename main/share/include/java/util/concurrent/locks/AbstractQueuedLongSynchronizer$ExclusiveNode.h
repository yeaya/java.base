#ifndef _java_util_concurrent_locks_AbstractQueuedLongSynchronizer$ExclusiveNode_h_
#define _java_util_concurrent_locks_AbstractQueuedLongSynchronizer$ExclusiveNode_h_
//$ class java.util.concurrent.locks.AbstractQueuedLongSynchronizer$ExclusiveNode
//$ extends java.util.concurrent.locks.AbstractQueuedLongSynchronizer$Node

#include <java/util/concurrent/locks/AbstractQueuedLongSynchronizer$Node.h>

namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {

class $import AbstractQueuedLongSynchronizer$ExclusiveNode : public ::java::util::concurrent::locks::AbstractQueuedLongSynchronizer$Node {
	$class(AbstractQueuedLongSynchronizer$ExclusiveNode, $NO_CLASS_INIT, ::java::util::concurrent::locks::AbstractQueuedLongSynchronizer$Node)
public:
	AbstractQueuedLongSynchronizer$ExclusiveNode();
	void init$();
};

			} // locks
		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_locks_AbstractQueuedLongSynchronizer$ExclusiveNode_h_