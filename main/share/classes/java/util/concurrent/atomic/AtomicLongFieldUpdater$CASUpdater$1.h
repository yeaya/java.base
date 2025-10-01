#ifndef _java_util_concurrent_atomic_AtomicLongFieldUpdater$CASUpdater$1_h_
#define _java_util_concurrent_atomic_AtomicLongFieldUpdater$CASUpdater$1_h_
//$ class java.util.concurrent.atomic.AtomicLongFieldUpdater$CASUpdater$1
//$ extends java.security.PrivilegedExceptionAction

#include <java/security/PrivilegedExceptionAction.h>

namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {
				class AtomicLongFieldUpdater$CASUpdater;
			}
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {

class AtomicLongFieldUpdater$CASUpdater$1 : public ::java::security::PrivilegedExceptionAction {
	$class(AtomicLongFieldUpdater$CASUpdater$1, $NO_CLASS_INIT, ::java::security::PrivilegedExceptionAction)
public:
	AtomicLongFieldUpdater$CASUpdater$1();
	void init$(::java::util::concurrent::atomic::AtomicLongFieldUpdater$CASUpdater* this$0, $Class* val$tclass, $String* val$fieldName);
	virtual $Object* run() override;
	::java::util::concurrent::atomic::AtomicLongFieldUpdater$CASUpdater* this$0 = nullptr;
	$String* val$fieldName = nullptr;
	$Class* val$tclass = nullptr;
};

			} // atomic
		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_atomic_AtomicLongFieldUpdater$CASUpdater$1_h_