#ifndef _java_util_concurrent_locks_ReentrantReadWriteLock$Sync$ThreadLocalHoldCounter_h_
#define _java_util_concurrent_locks_ReentrantReadWriteLock$Sync$ThreadLocalHoldCounter_h_
//$ class java.util.concurrent.locks.ReentrantReadWriteLock$Sync$ThreadLocalHoldCounter
//$ extends java.lang.ThreadLocal

#include <java/lang/ThreadLocal.h>

namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {

class $import ReentrantReadWriteLock$Sync$ThreadLocalHoldCounter : public ::java::lang::ThreadLocal {
	$class(ReentrantReadWriteLock$Sync$ThreadLocalHoldCounter, $NO_CLASS_INIT, ::java::lang::ThreadLocal)
public:
	ReentrantReadWriteLock$Sync$ThreadLocalHoldCounter();
	void init$();
	virtual $Object* initialValue() override;
};

			} // locks
		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_locks_ReentrantReadWriteLock$Sync$ThreadLocalHoldCounter_h_