#ifndef _java_util_concurrent_locks_LockSupport_h_
#define _java_util_concurrent_locks_LockSupport_h_
//$ class java.util.concurrent.locks.LockSupport
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("U")
#undef U
#pragma push_macro("PARKBLOCKER")
#undef PARKBLOCKER
#pragma push_macro("TID")
#undef TID

namespace java {
	namespace lang {
		class Thread;
	}
}
namespace jdk {
	namespace internal {
		namespace misc {
			class Unsafe;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {

class $export LockSupport : public ::java::lang::Object {
	$class(LockSupport, $PRELOAD, ::java::lang::Object)
public:
	LockSupport();
	void init$();
	static $Object* getBlocker($Thread* t);
	static int64_t getThreadId($Thread* thread);
	static void park(Object$* blocker);
	static void park();
	static void parkNanos(Object$* blocker, int64_t nanos);
	static void parkNanos(int64_t nanos);
	static void parkUntil(Object$* blocker, int64_t deadline);
	static void parkUntil(int64_t deadline);
	static void setBlocker($Thread* t, Object$* arg);
	static void setCurrentBlocker(Object$* blocker);
	static void unpark($Thread* thread);
	static ::jdk::internal::misc::Unsafe* U;
	static int64_t PARKBLOCKER;
	static int64_t TID;
};

			} // locks
		} // concurrent
	} // util
} // java

#pragma pop_macro("U")
#pragma pop_macro("PARKBLOCKER")
#pragma pop_macro("TID")

#endif // _java_util_concurrent_locks_LockSupport_h_