#ifndef _java_util_concurrent_locks_ReentrantReadWriteLock$FairSync_h_
#define _java_util_concurrent_locks_ReentrantReadWriteLock$FairSync_h_
//$ class java.util.concurrent.locks.ReentrantReadWriteLock$FairSync
//$ extends java.util.concurrent.locks.ReentrantReadWriteLock$Sync

#include <java/util/concurrent/locks/ReentrantReadWriteLock$Sync.h>

namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {

class $import ReentrantReadWriteLock$FairSync : public ::java::util::concurrent::locks::ReentrantReadWriteLock$Sync {
	$class(ReentrantReadWriteLock$FairSync, $NO_CLASS_INIT, ::java::util::concurrent::locks::ReentrantReadWriteLock$Sync)
public:
	ReentrantReadWriteLock$FairSync();
	void init$();
	virtual bool readerShouldBlock() override;
	virtual bool writerShouldBlock() override;
	static const int64_t serialVersionUID = (int64_t)0xE06D9BCE412D8715;
};

			} // locks
		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_locks_ReentrantReadWriteLock$FairSync_h_