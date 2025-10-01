#ifndef _java_util_concurrent_atomic_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl$1_h_
#define _java_util_concurrent_atomic_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl$1_h_
//$ class java.util.concurrent.atomic.AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl$1
//$ extends java.security.PrivilegedExceptionAction

#include <java/security/PrivilegedExceptionAction.h>

namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {
				class AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl;
			}
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {

class AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl$1 : public ::java::security::PrivilegedExceptionAction {
	$class(AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl$1, $NO_CLASS_INIT, ::java::security::PrivilegedExceptionAction)
public:
	AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl$1();
	void init$(::java::util::concurrent::atomic::AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl* this$0, $Class* val$tclass, $String* val$fieldName);
	virtual $Object* run() override;
	::java::util::concurrent::atomic::AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl* this$0 = nullptr;
	$String* val$fieldName = nullptr;
	$Class* val$tclass = nullptr;
};

			} // atomic
		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_atomic_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl$1_h_