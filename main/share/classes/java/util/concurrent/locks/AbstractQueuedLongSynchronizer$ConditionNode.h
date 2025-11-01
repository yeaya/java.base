#ifndef _java_util_concurrent_locks_AbstractQueuedLongSynchronizer$ConditionNode_h_
#define _java_util_concurrent_locks_AbstractQueuedLongSynchronizer$ConditionNode_h_
//$ class java.util.concurrent.locks.AbstractQueuedLongSynchronizer$ConditionNode
//$ extends java.util.concurrent.locks.AbstractQueuedLongSynchronizer$Node
//$ implements java.util.concurrent.ForkJoinPool$ManagedBlocker

#include <java/util/concurrent/ForkJoinPool$ManagedBlocker.h>
#include <java/util/concurrent/locks/AbstractQueuedLongSynchronizer$Node.h>

namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {

class $export AbstractQueuedLongSynchronizer$ConditionNode : public ::java::util::concurrent::locks::AbstractQueuedLongSynchronizer$Node, public ::java::util::concurrent::ForkJoinPool$ManagedBlocker {
	$class(AbstractQueuedLongSynchronizer$ConditionNode, $NO_CLASS_INIT, ::java::util::concurrent::locks::AbstractQueuedLongSynchronizer$Node, ::java::util::concurrent::ForkJoinPool$ManagedBlocker)
public:
	AbstractQueuedLongSynchronizer$ConditionNode();
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual bool block() override;
	virtual bool isReleasable() override;
	virtual $String* toString() override;
	::java::util::concurrent::locks::AbstractQueuedLongSynchronizer$ConditionNode* nextWaiter = nullptr;
};

			} // locks
		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_locks_AbstractQueuedLongSynchronizer$ConditionNode_h_