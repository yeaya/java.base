#ifndef _java_util_concurrent_locks_StampedLock$ReadLockView_h_
#define _java_util_concurrent_locks_StampedLock$ReadLockView_h_
//$ class java.util.concurrent.locks.StampedLock$ReadLockView
//$ extends java.util.concurrent.locks.Lock

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
				class StampedLock;
			}
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {

class $import StampedLock$ReadLockView : public ::java::util::concurrent::locks::Lock {
	$class(StampedLock$ReadLockView, $NO_CLASS_INIT, ::java::util::concurrent::locks::Lock)
public:
	StampedLock$ReadLockView();
	void init$(::java::util::concurrent::locks::StampedLock* this$0);
	virtual void lock() override;
	virtual void lockInterruptibly() override;
	virtual ::java::util::concurrent::locks::Condition* newCondition() override;
	virtual bool tryLock() override;
	virtual bool tryLock(int64_t time, ::java::util::concurrent::TimeUnit* unit) override;
	virtual void unlock() override;
	::java::util::concurrent::locks::StampedLock* this$0 = nullptr;
};

			} // locks
		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_locks_StampedLock$ReadLockView_h_