#ifndef _java_util_concurrent_atomic_Striped64$1_h_
#define _java_util_concurrent_atomic_Striped64$1_h_
//$ class java.util.concurrent.atomic.Striped64$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {

class Striped64$1 : public ::java::security::PrivilegedAction {
	$class(Striped64$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	Striped64$1();
	void init$();
	virtual $Object* run() override;
};

			} // atomic
		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_atomic_Striped64$1_h_