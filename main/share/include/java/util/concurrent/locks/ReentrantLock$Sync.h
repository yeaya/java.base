#ifndef _java_util_concurrent_locks_ReentrantLock$Sync_h_
#define _java_util_concurrent_locks_ReentrantLock$Sync_h_
//$ class java.util.concurrent.locks.ReentrantLock$Sync
//$ extends java.util.concurrent.locks.AbstractQueuedSynchronizer

#include <java/util/concurrent/locks/AbstractQueuedSynchronizer.h>

namespace java {
	namespace io {
		class ObjectInputStream;
	}
}
namespace java {
	namespace lang {
		class Thread;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {
				class AbstractQueuedSynchronizer$ConditionObject;
			}
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {

class $import ReentrantLock$Sync : public ::java::util::concurrent::locks::AbstractQueuedSynchronizer {
	$class(ReentrantLock$Sync, $NO_CLASS_INIT, ::java::util::concurrent::locks::AbstractQueuedSynchronizer)
public:
	ReentrantLock$Sync();
	void init$();
	int32_t getHoldCount();
	$Thread* getOwner();
	virtual bool initialTryLock() {return false;}
	virtual bool isHeldExclusively() override;
	bool isLocked();
	void lock();
	void lockInterruptibly();
	::java::util::concurrent::locks::AbstractQueuedSynchronizer$ConditionObject* newCondition();
	void readObject(::java::io::ObjectInputStream* s);
	bool tryLock();
	bool tryLockNanos(int64_t nanos);
	virtual bool tryRelease(int32_t releases) override;
	static const int64_t serialVersionUID = (int64_t)0xB81EA294AA445A7C;
};

			} // locks
		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_locks_ReentrantLock$Sync_h_