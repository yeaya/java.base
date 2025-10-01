#ifndef _java_util_concurrent_locks_Condition_h_
#define _java_util_concurrent_locks_Condition_h_
//$ interface java.util.concurrent.locks.Condition
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class Date;
	}
}
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

class $import Condition : public ::java::lang::Object {
	$interface(Condition, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void await() {}
	virtual bool await(int64_t time, ::java::util::concurrent::TimeUnit* unit) {return false;}
	virtual int64_t awaitNanos(int64_t nanosTimeout) {return 0;}
	virtual void awaitUninterruptibly() {}
	virtual bool awaitUntil(::java::util::Date* deadline) {return false;}
	virtual void signal() {}
	virtual void signalAll() {}
};

			} // locks
		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_locks_Condition_h_