#ifndef _java_util_concurrent_locks_ReentrantReadWriteLock$NonfairSync_h_
#define _java_util_concurrent_locks_ReentrantReadWriteLock$NonfairSync_h_
//$ class java.util.concurrent.locks.ReentrantReadWriteLock$NonfairSync
//$ extends java.util.concurrent.locks.ReentrantReadWriteLock$Sync

#include <java/util/concurrent/locks/ReentrantReadWriteLock$Sync.h>

namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {

class $import ReentrantReadWriteLock$NonfairSync : public ::java::util::concurrent::locks::ReentrantReadWriteLock$Sync {
	$class(ReentrantReadWriteLock$NonfairSync, $NO_CLASS_INIT, ::java::util::concurrent::locks::ReentrantReadWriteLock$Sync)
public:
	ReentrantReadWriteLock$NonfairSync();
	void init$();
	virtual bool readerShouldBlock() override;
	virtual bool writerShouldBlock() override;
	static const int64_t serialVersionUID = (int64_t)0x8EC32FCE8F1D0363;
};

			} // locks
		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_locks_ReentrantReadWriteLock$NonfairSync_h_