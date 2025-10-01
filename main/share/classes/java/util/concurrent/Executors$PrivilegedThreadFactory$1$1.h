#ifndef _java_util_concurrent_Executors$PrivilegedThreadFactory$1$1_h_
#define _java_util_concurrent_Executors$PrivilegedThreadFactory$1$1_h_
//$ class java.util.concurrent.Executors$PrivilegedThreadFactory$1$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace util {
		namespace concurrent {
			class Executors$PrivilegedThreadFactory$1;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class Executors$PrivilegedThreadFactory$1$1 : public ::java::security::PrivilegedAction {
	$class(Executors$PrivilegedThreadFactory$1$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	Executors$PrivilegedThreadFactory$1$1();
	void init$(::java::util::concurrent::Executors$PrivilegedThreadFactory$1* this$1);
	virtual $Object* run() override;
	::java::util::concurrent::Executors$PrivilegedThreadFactory$1* this$1 = nullptr;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_Executors$PrivilegedThreadFactory$1$1_h_