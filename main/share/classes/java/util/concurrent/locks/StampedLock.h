#ifndef _java_util_concurrent_locks_StampedLock_h_
#define _java_util_concurrent_locks_StampedLock_h_
//$ class java.util.concurrent.locks.StampedLock
//$ extends java.io.Serializable

#include <java/io/Serializable.h>

#pragma push_macro("ABITS")
#undef ABITS
#pragma push_macro("CANCELLED")
#undef CANCELLED
#pragma push_macro("HEAD")
#undef HEAD
#pragma push_macro("INTERRUPTED")
#undef INTERRUPTED
#pragma push_macro("LG_READERS")
#undef LG_READERS
#pragma push_macro("ORIGIN")
#undef ORIGIN
#pragma push_macro("RBITS")
#undef RBITS
#pragma push_macro("RFULL")
#undef RFULL
#pragma push_macro("RSAFE")
#undef RSAFE
#pragma push_macro("RUNIT")
#undef RUNIT
#pragma push_macro("SBITS")
#undef SBITS
#pragma push_macro("STATE")
#undef STATE
#pragma push_macro("TAIL")
#undef TAIL
#pragma push_macro("U")
#undef U
#pragma push_macro("WAITING")
#undef WAITING
#pragma push_macro("WBIT")
#undef WBIT

namespace java {
	namespace io {
		class ObjectInputStream;
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
				class Lock;
				class ReadWriteLock;
				class StampedLock$Node;
				class StampedLock$ReadLockView;
				class StampedLock$ReadWriteLockView;
				class StampedLock$ReaderNode;
				class StampedLock$WriteLockView;
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

class $export StampedLock : public ::java::io::Serializable {
	$class(StampedLock, 0, ::java::io::Serializable)
public:
	StampedLock();
	void init$();
	int64_t acquireRead(bool interruptible, bool timed, int64_t time);
	int64_t acquireWrite(bool interruptible, bool timed, int64_t time);
	virtual ::java::util::concurrent::locks::Lock* asReadLock();
	virtual ::java::util::concurrent::locks::ReadWriteLock* asReadWriteLock();
	virtual ::java::util::concurrent::locks::Lock* asWriteLock();
	int64_t cancelAcquire(::java::util::concurrent::locks::StampedLock$Node* node, bool interrupted);
	int64_t cancelCowaiter(::java::util::concurrent::locks::StampedLock$ReaderNode* node, ::java::util::concurrent::locks::StampedLock$ReaderNode* leader, bool interrupted);
	bool casState(int64_t expect, int64_t update);
	bool casTail(::java::util::concurrent::locks::StampedLock$Node* c, ::java::util::concurrent::locks::StampedLock$Node* v);
	void cleanQueue();
	int32_t getReadLockCount(int64_t s);
	virtual int32_t getReadLockCount();
	static bool isLockStamp(int64_t stamp);
	static bool isOptimisticReadStamp(int64_t stamp);
	static bool isReadLockStamp(int64_t stamp);
	virtual bool isReadLocked();
	static bool isWriteLockStamp(int64_t stamp);
	virtual bool isWriteLocked();
	virtual int64_t readLock();
	virtual int64_t readLockInterruptibly();
	void readObject(::java::io::ObjectInputStream* s);
	int64_t releaseWrite(int64_t s);
	static void signalCowaiters(::java::util::concurrent::locks::StampedLock$ReaderNode* node);
	static void signalNext(::java::util::concurrent::locks::StampedLock$Node* h);
	virtual $String* toString() override;
	int64_t tryAcquireRead();
	int64_t tryAcquireWrite();
	virtual int64_t tryConvertToOptimisticRead(int64_t stamp);
	virtual int64_t tryConvertToReadLock(int64_t stamp);
	virtual int64_t tryConvertToWriteLock(int64_t stamp);
	int64_t tryDecReaderOverflow(int64_t s);
	int64_t tryIncReaderOverflow(int64_t s);
	void tryInitializeHead();
	virtual int64_t tryOptimisticRead();
	virtual int64_t tryReadLock();
	virtual int64_t tryReadLock(int64_t time, ::java::util::concurrent::TimeUnit* unit);
	virtual bool tryUnlockRead();
	virtual bool tryUnlockWrite();
	virtual int64_t tryWriteLock();
	virtual int64_t tryWriteLock(int64_t time, ::java::util::concurrent::TimeUnit* unit);
	void unlinkCowaiter(::java::util::concurrent::locks::StampedLock$ReaderNode* node, ::java::util::concurrent::locks::StampedLock$ReaderNode* leader);
	virtual void unlock(int64_t stamp);
	virtual void unlockRead(int64_t stamp);
	virtual void unlockWrite(int64_t stamp);
	static int64_t unlockWriteState(int64_t s);
	void unstampedUnlockRead();
	void unstampedUnlockWrite();
	virtual bool validate(int64_t stamp);
	virtual int64_t writeLock();
	virtual int64_t writeLockInterruptibly();
	static const int64_t serialVersionUID = (int64_t)0xACB606331AC7AFFD;
	static const int32_t LG_READERS = 7;
	static const int64_t RUNIT = (int64_t)1;
	static const int64_t WBIT = 128; // 1L << LG_READERS
	static const int64_t RBITS = 127; // WBIT - 1L
	static const int64_t RFULL = 126; // RBITS - 1L
	static const int64_t ABITS = 255; // RBITS | WBIT
	static const int64_t SBITS = ~RBITS;
	static const int64_t RSAFE = -193; // ~(3L << (LG_READERS - 1))
	static const int64_t ORIGIN = 256; // WBIT << 1
	static const int64_t INTERRUPTED = (int64_t)1;
	static const int32_t WAITING = 1;
	static const int32_t CANCELLED = 0x80000000;
	$volatile(::java::util::concurrent::locks::StampedLock$Node*) head = nullptr;
	$volatile(::java::util::concurrent::locks::StampedLock$Node*) tail = nullptr;
	::java::util::concurrent::locks::StampedLock$ReadLockView* readLockView = nullptr;
	::java::util::concurrent::locks::StampedLock$WriteLockView* writeLockView = nullptr;
	::java::util::concurrent::locks::StampedLock$ReadWriteLockView* readWriteLockView = nullptr;
	$volatile(int64_t) state = 0;
	int32_t readerOverflow = 0;
	static ::jdk::internal::misc::Unsafe* U;
	static int64_t STATE;
	static int64_t HEAD;
	static int64_t TAIL;
};

			} // locks
		} // concurrent
	} // util
} // java

#pragma pop_macro("ABITS")
#pragma pop_macro("CANCELLED")
#pragma pop_macro("HEAD")
#pragma pop_macro("INTERRUPTED")
#pragma pop_macro("LG_READERS")
#pragma pop_macro("ORIGIN")
#pragma pop_macro("RBITS")
#pragma pop_macro("RFULL")
#pragma pop_macro("RSAFE")
#pragma pop_macro("RUNIT")
#pragma pop_macro("SBITS")
#pragma pop_macro("STATE")
#pragma pop_macro("TAIL")
#pragma pop_macro("U")
#pragma pop_macro("WAITING")
#pragma pop_macro("WBIT")

#endif // _java_util_concurrent_locks_StampedLock_h_