#ifndef _java_util_concurrent_locks_ReentrantLock$FairSync_h_
#define _java_util_concurrent_locks_ReentrantLock$FairSync_h_
//$ class java.util.concurrent.locks.ReentrantLock$FairSync
//$ extends java.util.concurrent.locks.ReentrantLock$Sync

#include <java/util/concurrent/locks/ReentrantLock$Sync.h>

namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {

class $import ReentrantLock$FairSync : public ::java::util::concurrent::locks::ReentrantLock$Sync {
	$class(ReentrantLock$FairSync, $NO_CLASS_INIT, ::java::util::concurrent::locks::ReentrantLock$Sync)
public:
	ReentrantLock$FairSync();
	void init$();
	virtual bool initialTryLock() override;
	virtual bool tryAcquire(int32_t acquires) override;
	static const int64_t serialVersionUID = (int64_t)0xD65AAB4314B4BD14;
};

			} // locks
		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_locks_ReentrantLock$FairSync_h_