#ifndef _java_util_concurrent_locks_ReentrantReadWriteLock$Sync$HoldCounter_h_
#define _java_util_concurrent_locks_ReentrantReadWriteLock$Sync$HoldCounter_h_
//$ class java.util.concurrent.locks.ReentrantReadWriteLock$Sync$HoldCounter
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {

class $export ReentrantReadWriteLock$Sync$HoldCounter : public ::java::lang::Object {
	$class(ReentrantReadWriteLock$Sync$HoldCounter, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ReentrantReadWriteLock$Sync$HoldCounter();
	void init$();
	int32_t count = 0;
	int64_t tid = 0;
};

			} // locks
		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_locks_ReentrantReadWriteLock$Sync$HoldCounter_h_