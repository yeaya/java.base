#ifndef _java_util_concurrent_atomic_AtomicIntegerFieldUpdater$AtomicIntegerFieldUpdaterImpl$1_h_
#define _java_util_concurrent_atomic_AtomicIntegerFieldUpdater$AtomicIntegerFieldUpdaterImpl$1_h_
//$ class java.util.concurrent.atomic.AtomicIntegerFieldUpdater$AtomicIntegerFieldUpdaterImpl$1
//$ extends java.security.PrivilegedExceptionAction

#include <java/security/PrivilegedExceptionAction.h>

namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {
				class AtomicIntegerFieldUpdater$AtomicIntegerFieldUpdaterImpl;
			}
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {

class AtomicIntegerFieldUpdater$AtomicIntegerFieldUpdaterImpl$1 : public ::java::security::PrivilegedExceptionAction {
	$class(AtomicIntegerFieldUpdater$AtomicIntegerFieldUpdaterImpl$1, $NO_CLASS_INIT, ::java::security::PrivilegedExceptionAction)
public:
	AtomicIntegerFieldUpdater$AtomicIntegerFieldUpdaterImpl$1();
	void init$(::java::util::concurrent::atomic::AtomicIntegerFieldUpdater$AtomicIntegerFieldUpdaterImpl* this$0, $Class* val$tclass, $String* val$fieldName);
	virtual $Object* run() override;
	::java::util::concurrent::atomic::AtomicIntegerFieldUpdater$AtomicIntegerFieldUpdaterImpl* this$0 = nullptr;
	$String* val$fieldName = nullptr;
	$Class* val$tclass = nullptr;
};

			} // atomic
		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_atomic_AtomicIntegerFieldUpdater$AtomicIntegerFieldUpdaterImpl$1_h_