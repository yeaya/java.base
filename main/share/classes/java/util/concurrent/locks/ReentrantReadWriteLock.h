#ifndef _java_util_concurrent_locks_ReentrantReadWriteLock_h_
#define _java_util_concurrent_locks_ReentrantReadWriteLock_h_
//$ class java.util.concurrent.locks.ReentrantReadWriteLock
//$ extends java.util.concurrent.locks.ReadWriteLock
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <java/util/concurrent/locks/ReadWriteLock.h>

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
				class Condition;
				class Lock;
				class ReentrantReadWriteLock$ReadLock;
				class ReentrantReadWriteLock$Sync;
				class ReentrantReadWriteLock$WriteLock;
			}
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {

class $export ReentrantReadWriteLock : public ::java::util::concurrent::locks::ReadWriteLock, public ::java::io::Serializable {
	$class(ReentrantReadWriteLock, $NO_CLASS_INIT, ::java::util::concurrent::locks::ReadWriteLock, ::java::io::Serializable)
public:
	ReentrantReadWriteLock();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(bool fair);
	virtual $Thread* getOwner();
	int32_t getQueueLength();
	virtual ::java::util::Collection* getQueuedReaderThreads();
	virtual ::java::util::Collection* getQueuedThreads();
	virtual ::java::util::Collection* getQueuedWriterThreads();
	virtual int32_t getReadHoldCount();
	virtual int32_t getReadLockCount();
	virtual int32_t getWaitQueueLength(::java::util::concurrent::locks::Condition* condition);
	virtual ::java::util::Collection* getWaitingThreads(::java::util::concurrent::locks::Condition* condition);
	virtual int32_t getWriteHoldCount();
	bool hasQueuedThread($Thread* thread);
	bool hasQueuedThreads();
	virtual bool hasWaiters(::java::util::concurrent::locks::Condition* condition);
	bool isFair();
	virtual bool isWriteLocked();
	virtual bool isWriteLockedByCurrentThread();
	virtual ::java::util::concurrent::locks::Lock* readLock() override;
	virtual $String* toString() override;
	virtual ::java::util::concurrent::locks::Lock* writeLock() override;
	static const int64_t serialVersionUID = (int64_t)0x9EF5D500F0B5684C;
	::java::util::concurrent::locks::ReentrantReadWriteLock$ReadLock* readerLock = nullptr;
	::java::util::concurrent::locks::ReentrantReadWriteLock$WriteLock* writerLock = nullptr;
	::java::util::concurrent::locks::ReentrantReadWriteLock$Sync* sync = nullptr;
};

			} // locks
		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_locks_ReentrantReadWriteLock_h_