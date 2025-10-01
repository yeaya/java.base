#ifndef _java_util_concurrent_locks_StampedLock$ReadWriteLockView_h_
#define _java_util_concurrent_locks_StampedLock$ReadWriteLockView_h_
//$ class java.util.concurrent.locks.StampedLock$ReadWriteLockView
//$ extends java.util.concurrent.locks.ReadWriteLock

#include <java/util/concurrent/locks/ReadWriteLock.h>

namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {
				class Lock;
				class StampedLock;
			}
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {

class $import StampedLock$ReadWriteLockView : public ::java::util::concurrent::locks::ReadWriteLock {
	$class(StampedLock$ReadWriteLockView, $NO_CLASS_INIT, ::java::util::concurrent::locks::ReadWriteLock)
public:
	StampedLock$ReadWriteLockView();
	void init$(::java::util::concurrent::locks::StampedLock* this$0);
	virtual ::java::util::concurrent::locks::Lock* readLock() override;
	virtual ::java::util::concurrent::locks::Lock* writeLock() override;
	::java::util::concurrent::locks::StampedLock* this$0 = nullptr;
};

			} // locks
		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_locks_StampedLock$ReadWriteLockView_h_