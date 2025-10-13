#ifndef _java_util_concurrent_locks_AbstractQueuedLongSynchronizer_h_
#define _java_util_concurrent_locks_AbstractQueuedLongSynchronizer_h_
//$ class java.util.concurrent.locks.AbstractQueuedLongSynchronizer
//$ extends java.util.concurrent.locks.AbstractOwnableSynchronizer

#include <java/util/concurrent/locks/AbstractOwnableSynchronizer.h>

#pragma push_macro("CANCELLED")
#undef CANCELLED
#pragma push_macro("COND")
#undef COND
#pragma push_macro("HEAD")
#undef HEAD
#pragma push_macro("STATE")
#undef STATE
#pragma push_macro("TAIL")
#undef TAIL
#pragma push_macro("U")
#undef U
#pragma push_macro("WAITING")
#undef WAITING

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
				class AbstractQueuedLongSynchronizer$ConditionObject;
				class AbstractQueuedLongSynchronizer$Node;
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

class $export AbstractQueuedLongSynchronizer : public ::java::util::concurrent::locks::AbstractOwnableSynchronizer {
	$class(AbstractQueuedLongSynchronizer, 0, ::java::util::concurrent::locks::AbstractOwnableSynchronizer)
public:
	AbstractQueuedLongSynchronizer();
	void init$();
	int32_t acquire(::java::util::concurrent::locks::AbstractQueuedLongSynchronizer$Node* node, int64_t arg, bool shared, bool interruptible, bool timed, int64_t time);
	void acquire(int64_t arg);
	void acquireInterruptibly(int64_t arg);
	void acquireShared(int64_t arg);
	void acquireSharedInterruptibly(int64_t arg);
	bool apparentlyFirstQueuedIsExclusive();
	int32_t cancelAcquire(::java::util::concurrent::locks::AbstractQueuedLongSynchronizer$Node* node, bool interrupted, bool interruptible);
	bool casTail(::java::util::concurrent::locks::AbstractQueuedLongSynchronizer$Node* c, ::java::util::concurrent::locks::AbstractQueuedLongSynchronizer$Node* v);
	void cleanQueue();
	bool compareAndSetState(int64_t expect, int64_t update);
	void enqueue(::java::util::concurrent::locks::AbstractQueuedLongSynchronizer$Node* node);
	::java::util::Collection* getExclusiveQueuedThreads();
	$Thread* getFirstQueuedThread();
	int32_t getQueueLength();
	::java::util::Collection* getQueuedThreads();
	::java::util::Collection* getSharedQueuedThreads();
	int64_t getState();
	int32_t getWaitQueueLength(::java::util::concurrent::locks::AbstractQueuedLongSynchronizer$ConditionObject* condition);
	::java::util::Collection* getWaitingThreads(::java::util::concurrent::locks::AbstractQueuedLongSynchronizer$ConditionObject* condition);
	bool hasContended();
	bool hasQueuedPredecessors();
	bool hasQueuedThreads();
	bool hasWaiters(::java::util::concurrent::locks::AbstractQueuedLongSynchronizer$ConditionObject* condition);
	bool isEnqueued(::java::util::concurrent::locks::AbstractQueuedLongSynchronizer$Node* node);
	virtual bool isHeldExclusively();
	bool isQueued($Thread* thread);
	bool owns(::java::util::concurrent::locks::AbstractQueuedLongSynchronizer$ConditionObject* condition);
	bool release(int64_t arg);
	bool releaseShared(int64_t arg);
	void setState(int64_t newState);
	static void signalNext(::java::util::concurrent::locks::AbstractQueuedLongSynchronizer$Node* h);
	static void signalNextIfShared(::java::util::concurrent::locks::AbstractQueuedLongSynchronizer$Node* h);
	virtual $String* toString() override;
	virtual bool tryAcquire(int64_t arg);
	bool tryAcquireNanos(int64_t arg, int64_t nanosTimeout);
	virtual int64_t tryAcquireShared(int64_t arg);
	bool tryAcquireSharedNanos(int64_t arg, int64_t nanosTimeout);
	void tryInitializeHead();
	virtual bool tryRelease(int64_t arg);
	virtual bool tryReleaseShared(int64_t arg);
	static const int64_t serialVersionUID = (int64_t)0x6655A843753F52E4;
	static const int32_t WAITING = 1;
	static const int32_t CANCELLED = 0x80000000;
	static const int32_t COND = 2;
	$volatile(::java::util::concurrent::locks::AbstractQueuedLongSynchronizer$Node*) head = nullptr;
	$volatile(::java::util::concurrent::locks::AbstractQueuedLongSynchronizer$Node*) tail = nullptr;
	$volatile(int64_t) state = 0;
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
#pragma pop_macro("COND")
#pragma pop_macro("HEAD")
#pragma pop_macro("STATE")
#pragma pop_macro("TAIL")
#pragma pop_macro("U")
#pragma pop_macro("WAITING")

#endif // _java_util_concurrent_locks_AbstractQueuedLongSynchronizer_h_