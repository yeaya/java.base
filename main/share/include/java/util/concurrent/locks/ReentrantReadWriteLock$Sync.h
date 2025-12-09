#ifndef _java_util_concurrent_locks_ReentrantReadWriteLock$Sync_h_
#define _java_util_concurrent_locks_ReentrantReadWriteLock$Sync_h_
//$ class java.util.concurrent.locks.ReentrantReadWriteLock$Sync
//$ extends java.util.concurrent.locks.AbstractQueuedSynchronizer

#include <java/util/concurrent/locks/AbstractQueuedSynchronizer.h>

#pragma push_macro("EXCLUSIVE_MASK")
#undef EXCLUSIVE_MASK
#pragma push_macro("MAX_COUNT")
#undef MAX_COUNT
#pragma push_macro("SHARED_SHIFT")
#undef SHARED_SHIFT
#pragma push_macro("SHARED_UNIT")
#undef SHARED_UNIT

namespace java {
	namespace io {
		class ObjectInputStream;
	}
}
namespace java {
	namespace lang {
		class IllegalMonitorStateException;
		class Thread;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {
				class AbstractQueuedSynchronizer$ConditionObject;
				class ReentrantReadWriteLock$Sync$HoldCounter;
				class ReentrantReadWriteLock$Sync$ThreadLocalHoldCounter;
			}
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {

class $import ReentrantReadWriteLock$Sync : public ::java::util::concurrent::locks::AbstractQueuedSynchronizer {
	$class(ReentrantReadWriteLock$Sync, $NO_CLASS_INIT, ::java::util::concurrent::locks::AbstractQueuedSynchronizer)
public:
	ReentrantReadWriteLock$Sync();
	void init$();
	static int32_t exclusiveCount(int32_t c);
	int32_t fullTryAcquireShared($Thread* current);
	int32_t getCount();
	$Thread* getOwner();
	int32_t getReadHoldCount();
	int32_t getReadLockCount();
	int32_t getWriteHoldCount();
	virtual bool isHeldExclusively() override;
	bool isWriteLocked();
	::java::util::concurrent::locks::AbstractQueuedSynchronizer$ConditionObject* newCondition();
	void readObject(::java::io::ObjectInputStream* s);
	virtual bool readerShouldBlock() {return false;}
	static int32_t sharedCount(int32_t c);
	virtual bool tryAcquire(int32_t acquires) override;
	virtual int32_t tryAcquireShared(int32_t unused) override;
	bool tryReadLock();
	virtual bool tryRelease(int32_t releases) override;
	virtual bool tryReleaseShared(int32_t unused) override;
	bool tryWriteLock();
	static ::java::lang::IllegalMonitorStateException* unmatchedUnlockException();
	virtual bool writerShouldBlock() {return false;}
	static const int64_t serialVersionUID = (int64_t)0x57ACE0C53F412BB9;
	static const int32_t SHARED_SHIFT = 16;
	static const int32_t SHARED_UNIT = 65536; // (1 << SHARED_SHIFT)
	static const int32_t MAX_COUNT = 65535; // (1 << SHARED_SHIFT) - 1
	static const int32_t EXCLUSIVE_MASK = 65535; // (1 << SHARED_SHIFT) - 1
	::java::util::concurrent::locks::ReentrantReadWriteLock$Sync$ThreadLocalHoldCounter* readHolds = nullptr;
	::java::util::concurrent::locks::ReentrantReadWriteLock$Sync$HoldCounter* cachedHoldCounter = nullptr;
	$Thread* firstReader = nullptr;
	int32_t firstReaderHoldCount = 0;
};

			} // locks
		} // concurrent
	} // util
} // java

#pragma pop_macro("EXCLUSIVE_MASK")
#pragma pop_macro("MAX_COUNT")
#pragma pop_macro("SHARED_SHIFT")
#pragma pop_macro("SHARED_UNIT")

#endif // _java_util_concurrent_locks_ReentrantReadWriteLock$Sync_h_