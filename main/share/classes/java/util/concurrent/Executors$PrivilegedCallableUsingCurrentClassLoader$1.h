#ifndef _java_util_concurrent_Executors$PrivilegedCallableUsingCurrentClassLoader$1_h_
#define _java_util_concurrent_Executors$PrivilegedCallableUsingCurrentClassLoader$1_h_
//$ class java.util.concurrent.Executors$PrivilegedCallableUsingCurrentClassLoader$1
//$ extends java.security.PrivilegedExceptionAction

#include <java/security/PrivilegedExceptionAction.h>

namespace java {
	namespace util {
		namespace concurrent {
			class Executors$PrivilegedCallableUsingCurrentClassLoader;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class Executors$PrivilegedCallableUsingCurrentClassLoader$1 : public ::java::security::PrivilegedExceptionAction {
	$class(Executors$PrivilegedCallableUsingCurrentClassLoader$1, $NO_CLASS_INIT, ::java::security::PrivilegedExceptionAction)
public:
	Executors$PrivilegedCallableUsingCurrentClassLoader$1();
	void init$(::java::util::concurrent::Executors$PrivilegedCallableUsingCurrentClassLoader* this$0);
	virtual $Object* run() override;
	::java::util::concurrent::Executors$PrivilegedCallableUsingCurrentClassLoader* this$0 = nullptr;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_Executors$PrivilegedCallableUsingCurrentClassLoader$1_h_