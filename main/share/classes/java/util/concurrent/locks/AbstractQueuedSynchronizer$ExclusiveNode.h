#ifndef _java_util_concurrent_locks_AbstractQueuedSynchronizer$ExclusiveNode_h_
#define _java_util_concurrent_locks_AbstractQueuedSynchronizer$ExclusiveNode_h_
//$ class java.util.concurrent.locks.AbstractQueuedSynchronizer$ExclusiveNode
//$ extends java.util.concurrent.locks.AbstractQueuedSynchronizer$Node

#include <java/util/concurrent/locks/AbstractQueuedSynchronizer$Node.h>

namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {

class $export AbstractQueuedSynchronizer$ExclusiveNode : public ::java::util::concurrent::locks::AbstractQueuedSynchronizer$Node {
	$class(AbstractQueuedSynchronizer$ExclusiveNode, $NO_CLASS_INIT, ::java::util::concurrent::locks::AbstractQueuedSynchronizer$Node)
public:
	AbstractQueuedSynchronizer$ExclusiveNode();
	void init$();
};

			} // locks
		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_locks_AbstractQueuedSynchronizer$ExclusiveNode_h_