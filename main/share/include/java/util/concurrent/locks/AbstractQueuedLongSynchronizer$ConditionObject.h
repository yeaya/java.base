#ifndef _java_util_concurrent_locks_AbstractQueuedLongSynchronizer$ConditionObject_h_
#define _java_util_concurrent_locks_AbstractQueuedLongSynchronizer$ConditionObject_h_
//$ class java.util.concurrent.locks.AbstractQueuedLongSynchronizer$ConditionObject
//$ extends java.util.concurrent.locks.Condition
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <java/util/concurrent/locks/Condition.h>

namespace java {
	namespace util {
		class Collection;
		class Date;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class TimeUnit;
		}
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {
				class AbstractQueuedLongSynchronizer;
				class AbstractQueuedLongSynchronizer$ConditionNode;
			}
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {

class $import AbstractQueuedLongSynchronizer$ConditionObject : public ::java::util::concurrent::locks::Condition, public ::java::io::Serializable {
	$class(AbstractQueuedLongSynchronizer$ConditionObject, $NO_CLASS_INIT, ::java::util::concurrent::locks::Condition, ::java::io::Serializable)
public:
	AbstractQueuedLongSynchronizer$ConditionObject();
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::util::concurrent::locks::AbstractQueuedLongSynchronizer* this$0);
	virtual void await() override;
	virtual bool await(int64_t time, ::java::util::concurrent::TimeUnit* unit) override;
	virtual int64_t awaitNanos(int64_t nanosTimeout) override;
	virtual void awaitUninterruptibly() override;
	virtual bool awaitUntil(::java::util::Date* deadline) override;
	bool canReacquire(::java::util::concurrent::locks::AbstractQueuedLongSynchronizer$ConditionNode* node);
	void doSignal(::java::util::concurrent::locks::AbstractQueuedLongSynchronizer$ConditionNode* first, bool all);
	int64_t enableWait(::java::util::concurrent::locks::AbstractQueuedLongSynchronizer$ConditionNode* node);
	int32_t getWaitQueueLength();
	::java::util::Collection* getWaitingThreads();
	bool hasWaiters();
	bool isOwnedBy(::java::util::concurrent::locks::AbstractQueuedLongSynchronizer* sync);
	virtual void signal() override;
	virtual void signalAll() override;
	virtual $String* toString() override;
	void unlinkCancelledWaiters(::java::util::concurrent::locks::AbstractQueuedLongSynchronizer$ConditionNode* node);
	::java::util::concurrent::locks::AbstractQueuedLongSynchronizer* this$0 = nullptr;
	static const int64_t serialVersionUID = (int64_t)0x104AD505855C6AEB;
	::java::util::concurrent::locks::AbstractQueuedLongSynchronizer$ConditionNode* firstWaiter = nullptr;
	::java::util::concurrent::locks::AbstractQueuedLongSynchronizer$ConditionNode* lastWaiter = nullptr;
};

			} // locks
		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_locks_AbstractQueuedLongSynchronizer$ConditionObject_h_