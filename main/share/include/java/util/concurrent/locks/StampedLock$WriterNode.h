#ifndef _java_util_concurrent_locks_StampedLock$WriterNode_h_
#define _java_util_concurrent_locks_StampedLock$WriterNode_h_
//$ class java.util.concurrent.locks.StampedLock$WriterNode
//$ extends java.util.concurrent.locks.StampedLock$Node

#include <java/util/concurrent/locks/StampedLock$Node.h>

namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {

class $import StampedLock$WriterNode : public ::java::util::concurrent::locks::StampedLock$Node {
	$class(StampedLock$WriterNode, $NO_CLASS_INIT, ::java::util::concurrent::locks::StampedLock$Node)
public:
	StampedLock$WriterNode();
	void init$();
};

			} // locks
		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_locks_StampedLock$WriterNode_h_