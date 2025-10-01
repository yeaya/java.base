#ifndef _java_util_concurrent_locks_Lock_h_
#define _java_util_concurrent_locks_Lock_h_
//$ interface java.util.concurrent.locks.Lock
//$ extends java.lang.Object

#include <java/lang/Object.h>

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
			}
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {

class $export Lock : public ::java::lang::Object {
	$interface(Lock, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void lock() {}
	virtual void lockInterruptibly() {}
	virtual ::java::util::concurrent::locks::Condition* newCondition() {return nullptr;}
	virtual bool tryLock() {return false;}
	virtual bool tryLock(int64_t time, ::java::util::concurrent::TimeUnit* unit) {return false;}
	virtual void unlock() {}
};

			} // locks
		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_locks_Lock_h_