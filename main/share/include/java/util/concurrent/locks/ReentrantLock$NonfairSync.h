#ifndef _java_util_concurrent_locks_ReentrantLock$NonfairSync_h_
#define _java_util_concurrent_locks_ReentrantLock$NonfairSync_h_
//$ class java.util.concurrent.locks.ReentrantLock$NonfairSync
//$ extends java.util.concurrent.locks.ReentrantLock$Sync

#include <java/util/concurrent/locks/ReentrantLock$Sync.h>

namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {

class $import ReentrantLock$NonfairSync : public ::java::util::concurrent::locks::ReentrantLock$Sync {
	$class(ReentrantLock$NonfairSync, $NO_CLASS_INIT, ::java::util::concurrent::locks::ReentrantLock$Sync)
public:
	ReentrantLock$NonfairSync();
	void init$();
	virtual bool initialTryLock() override;
	virtual bool tryAcquire(int32_t acquires) override;
	static const int64_t serialVersionUID = (int64_t)0x658832E7537BBF0B;
};

			} // locks
		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_locks_ReentrantLock$NonfairSync_h_