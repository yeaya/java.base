#ifndef _java_util_concurrent_locks_ReentrantLock_h_
#define _java_util_concurrent_locks_ReentrantLock_h_
//$ class java.util.concurrent.locks.ReentrantLock
//$ extends java.util.concurrent.locks.Lock
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <java/util/concurrent/locks/Lock.h>

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
			class TimeUnit;
		}
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {
				class Condition;
				class ReentrantLock$Sync;
			}
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {

class $export ReentrantLock : public ::java::util::concurrent::locks::Lock, public ::java::io::Serializable {
	$class(ReentrantLock, $NO_CLASS_INIT, ::java::util::concurrent::locks::Lock, ::java::io::Serializable)
public:
	ReentrantLock();
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(bool fair);
	virtual int32_t getHoldCount();
	virtual $Thread* getOwner();
	int32_t getQueueLength();
	virtual ::java::util::Collection* getQueuedThreads();
	virtual int32_t getWaitQueueLength(::java::util::concurrent::locks::Condition* condition);
	virtual ::java::util::Collection* getWaitingThreads(::java::util::concurrent::locks::Condition* condition);
	bool hasQueuedThread($Thread* thread);
	bool hasQueuedThreads();
	virtual bool hasWaiters(::java::util::concurrent::locks::Condition* condition);
	bool isFair();
	virtual bool isHeldByCurrentThread();
	virtual bool isLocked();
	virtual void lock() override;
	virtual void lockInterruptibly() override;
	virtual ::java::util::concurrent::locks::Condition* newCondition() override;
	virtual $String* toString() override;
	virtual bool tryLock() override;
	virtual bool tryLock(int64_t timeout, ::java::util::concurrent::TimeUnit* unit) override;
	virtual void unlock() override;
	static const int64_t serialVersionUID = (int64_t)0x6655A82C2CC86AEB;
	::java::util::concurrent::locks::ReentrantLock$Sync* sync = nullptr;
};

			} // locks
		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_locks_ReentrantLock_h_