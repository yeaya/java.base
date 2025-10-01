#ifndef _java_util_concurrent_Executors$PrivilegedCallable$1_h_
#define _java_util_concurrent_Executors$PrivilegedCallable$1_h_
//$ class java.util.concurrent.Executors$PrivilegedCallable$1
//$ extends java.security.PrivilegedExceptionAction

#include <java/security/PrivilegedExceptionAction.h>

namespace java {
	namespace util {
		namespace concurrent {
			class Executors$PrivilegedCallable;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class Executors$PrivilegedCallable$1 : public ::java::security::PrivilegedExceptionAction {
	$class(Executors$PrivilegedCallable$1, $NO_CLASS_INIT, ::java::security::PrivilegedExceptionAction)
public:
	Executors$PrivilegedCallable$1();
	void init$(::java::util::concurrent::Executors$PrivilegedCallable* this$0);
	virtual $Object* run() override;
	::java::util::concurrent::Executors$PrivilegedCallable* this$0 = nullptr;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_Executors$PrivilegedCallable$1_h_