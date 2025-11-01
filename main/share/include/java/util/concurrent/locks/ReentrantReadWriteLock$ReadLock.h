#ifndef _java_util_concurrent_locks_ReentrantReadWriteLock$ReadLock_h_
#define _java_util_concurrent_locks_ReentrantReadWriteLock$ReadLock_h_
//$ class java.util.concurrent.locks.ReentrantReadWriteLock$ReadLock
//$ extends java.util.concurrent.locks.Lock
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <java/util/concurrent/locks/Lock.h>

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
				class ReentrantReadWriteLock;
				class ReentrantReadWriteLock$Sync;
			}
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {

class $import ReentrantReadWriteLock$ReadLock : public ::java::util::concurrent::locks::Lock, public ::java::io::Serializable {
	$class(ReentrantReadWriteLock$ReadLock, $NO_CLASS_INIT, ::java::util::concurrent::locks::Lock, ::java::io::Serializable)
public:
	ReentrantReadWriteLock$ReadLock();
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::util::concurrent::locks::ReentrantReadWriteLock* lock);
	virtual void lock() override;
	virtual void lockInterruptibly() override;
	virtual ::java::util::concurrent::locks::Condition* newCondition() override;
	virtual $String* toString() override;
	virtual bool tryLock() override;
	virtual bool tryLock(int64_t timeout, ::java::util::concurrent::TimeUnit* unit) override;
	virtual void unlock() override;
	static const int64_t serialVersionUID = (int64_t)0xACD68BB49819684C;
	::java::util::concurrent::locks::ReentrantReadWriteLock$Sync* sync = nullptr;
};

			} // locks
		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_locks_ReentrantReadWriteLock$ReadLock_h_