#ifndef _java_util_concurrent_locks_ReadWriteLock_h_
#define _java_util_concurrent_locks_ReadWriteLock_h_
//$ interface java.util.concurrent.locks.ReadWriteLock
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {
				class Lock;
			}
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {

class $export ReadWriteLock : public ::java::lang::Object {
	$interface(ReadWriteLock, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::util::concurrent::locks::Lock* readLock() {return nullptr;}
	virtual ::java::util::concurrent::locks::Lock* writeLock() {return nullptr;}
};

			} // locks
		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_locks_ReadWriteLock_h_