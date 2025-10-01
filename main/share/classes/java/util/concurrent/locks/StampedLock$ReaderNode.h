#ifndef _java_util_concurrent_locks_StampedLock$ReaderNode_h_
#define _java_util_concurrent_locks_StampedLock$ReaderNode_h_
//$ class java.util.concurrent.locks.StampedLock$ReaderNode
//$ extends java.util.concurrent.locks.StampedLock$Node

#include <java/util/concurrent/locks/StampedLock$Node.h>

#pragma push_macro("COWAITERS")
#undef COWAITERS

namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {

class $export StampedLock$ReaderNode : public ::java::util::concurrent::locks::StampedLock$Node {
	$class(StampedLock$ReaderNode, 0, ::java::util::concurrent::locks::StampedLock$Node)
public:
	StampedLock$ReaderNode();
	void init$();
	bool casCowaiters(::java::util::concurrent::locks::StampedLock$ReaderNode* c, ::java::util::concurrent::locks::StampedLock$ReaderNode* v);
	void setCowaitersRelaxed(::java::util::concurrent::locks::StampedLock$ReaderNode* p);
	$volatile(::java::util::concurrent::locks::StampedLock$ReaderNode*) cowaiters = nullptr;
	static int64_t COWAITERS;
};

			} // locks
		} // concurrent
	} // util
} // java

#pragma pop_macro("COWAITERS")

#endif // _java_util_concurrent_locks_StampedLock$ReaderNode_h_