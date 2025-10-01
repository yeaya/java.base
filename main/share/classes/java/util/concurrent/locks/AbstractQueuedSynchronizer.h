#ifndef _java_util_concurrent_locks_AbstractQueuedSynchronizer_h_
#define _java_util_concurrent_locks_AbstractQueuedSynchronizer_h_
//$ class java.util.concurrent.locks.AbstractQueuedSynchronizer
//$ extends java.util.concurrent.locks.AbstractOwnableSynchronizer

#include <java/util/concurrent/locks/AbstractOwnableSynchronizer.h>

#pragma push_macro("CANCELLED")
#undef CANCELLED
#pragma push_macro("HEAD")
#undef HEAD
#pragma push_macro("U")
#undef U
#pragma push_macro("TAIL")
#undef TAIL
#pragma push_macro("WAITING")
#undef WAITING
#pragma push_macro("STATE")
#undef STATE
#pragma push_macro("COND")
#undef COND

namespace java {
	namespace lang {
		class Thread;
	}
}
namespace java {
	namespace util {
		class Collection;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {
				class AbstractQueuedSynchronizer$ConditionObject;
				class AbstractQueuedSynchronizer$Node;
			}
		}
	}
}
namespace jdk {
	namespace internal {
		namespace misc {
			class Unsafe;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {

class $export AbstractQueuedSynchronizer : public ::java::util::concurrent::locks::AbstractOwnableSynchronizer {
	$class(AbstractQueuedSynchronizer, 0, ::java::util::concurrent::locks::AbstractOwnableSynchronizer)
public:
	AbstractQueuedSynchronizer();
	void init$();
	int32_t acquire(::java::util::concurrent::locks::AbstractQueuedSynchronizer$Node* node, int32_t arg, bool shared, bool interruptible, bool timed, int64_t time);
	void acquire(int32_t arg);
	void acquireInterruptibly(int32_t arg);
	void acquireShared(int32_t arg);
	void acquireSharedInterruptibly(int32_t arg);
	bool apparentlyFirstQueuedIsExclusive();
	int32_t cancelAcquire(::java::util::concurrent::locks::AbstractQueuedSynchronizer$Node* node, bool interrupted, bool interruptible);
	bool casTail(::java::util::concurrent::locks::AbstractQueuedSynchronizer$Node* c, ::java::util::concurrent::locks::AbstractQueuedSynchronizer$Node* v);
	void cleanQueue();
	bool compareAndSetState(int32_t expect, int32_t update);
	void enqueue(::java::util::concurrent::locks::AbstractQueuedSynchronizer$Node* node);
	::java::util::Collection* getExclusiveQueuedThreads();
	$Thread* getFirstQueuedThread();
	int32_t getQueueLength();
	::java::util::Collection* getQueuedThreads();
	::java::util::Collection* getSharedQueuedThreads();
	int32_t getState();
	int32_t getWaitQueueLength(::java::util::concurrent::locks::AbstractQueuedSynchronizer$ConditionObject* condition);
	::java::util::Collection* getWaitingThreads(::java::util::concurrent::locks::AbstractQueuedSynchronizer$ConditionObject* condition);
	bool hasContended();
	bool hasQueuedPredecessors();
	bool hasQueuedThreads();
	bool hasWaiters(::java::util::concurrent::locks::AbstractQueuedSynchronizer$ConditionObject* condition);
	bool isEnqueued(::java::util::concurrent::locks::AbstractQueuedSynchronizer$Node* node);
	virtual bool isHeldExclusively();
	bool isQueued($Thread* thread);
	bool owns(::java::util::concurrent::locks::AbstractQueuedSynchronizer$ConditionObject* condition);
	bool release(int32_t arg);
	bool releaseShared(int32_t arg);
	void setState(int32_t newState);
	static void signalNext(::java::util::concurrent::locks::AbstractQueuedSynchronizer$Node* h);
	static void signalNextIfShared(::java::util::concurrent::locks::AbstractQueuedSynchronizer$Node* h);
	virtual $String* toString() override;
	virtual bool tryAcquire(int32_t arg);
	bool tryAcquireNanos(int32_t arg, int64_t nanosTimeout);
	virtual int32_t tryAcquireShared(int32_t arg);
	bool tryAcquireSharedNanos(int32_t arg, int64_t nanosTimeout);
	void tryInitializeHead();
	virtual bool tryRelease(int32_t arg);
	virtual bool tryReleaseShared(int32_t arg);
	static const int64_t serialVersionUID = (int64_t)0x6655A843753F52E3;
	static const int32_t WAITING = 1;
	static const int32_t CANCELLED = 0x80000000;
	static const int32_t COND = 2;
	$volatile(::java::util::concurrent::locks::AbstractQueuedSynchronizer$Node*) head = nullptr;
	$volatile(::java::util::concurrent::locks::AbstractQueuedSynchronizer$Node*) tail = nullptr;
	$volatile(int32_t) state = 0;
	static ::jdk::internal::misc::Unsafe* U;
	static int64_t STATE;
	static int64_t HEAD;
	static int64_t TAIL;
};

			} // locks
		} // concurrent
	} // util
} // java

#pragma pop_macro("CANCELLED")
#pragma pop_macro("HEAD")
#pragma pop_macro("U")
#pragma pop_macro("TAIL")
#pragma pop_macro("WAITING")
#pragma pop_macro("STATE")
#pragma pop_macro("COND")

#endif // _java_util_concurrent_locks_AbstractQueuedSynchronizer_h_