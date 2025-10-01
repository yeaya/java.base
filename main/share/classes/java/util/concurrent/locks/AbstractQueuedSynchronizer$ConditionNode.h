#ifndef _java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionNode_h_
#define _java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionNode_h_
//$ class java.util.concurrent.locks.AbstractQueuedSynchronizer$ConditionNode
//$ extends java.util.concurrent.locks.AbstractQueuedSynchronizer$Node
//$ implements java.util.concurrent.ForkJoinPool$ManagedBlocker

#include <java/util/concurrent/ForkJoinPool$ManagedBlocker.h>
#include <java/util/concurrent/locks/AbstractQueuedSynchronizer$Node.h>

namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {

class $export AbstractQueuedSynchronizer$ConditionNode : public ::java::util::concurrent::locks::AbstractQueuedSynchronizer$Node, public ::java::util::concurrent::ForkJoinPool$ManagedBlocker {
	$class(AbstractQueuedSynchronizer$ConditionNode, $NO_CLASS_INIT, ::java::util::concurrent::locks::AbstractQueuedSynchronizer$Node, ::java::util::concurrent::ForkJoinPool$ManagedBlocker)
public:
	AbstractQueuedSynchronizer$ConditionNode();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual bool block() override;
	virtual bool isReleasable() override;
	virtual $String* toString() override;
	::java::util::concurrent::locks::AbstractQueuedSynchronizer$ConditionNode* nextWaiter = nullptr;
};

			} // locks
		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionNode_h_