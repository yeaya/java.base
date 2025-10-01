#ifndef _java_util_concurrent_ForkJoinPool$1_h_
#define _java_util_concurrent_ForkJoinPool$1_h_
//$ class java.util.concurrent.ForkJoinPool$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace util {
		namespace concurrent {

class ForkJoinPool$1 : public ::java::security::PrivilegedAction {
	$class(ForkJoinPool$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	ForkJoinPool$1();
	void init$();
	virtual $Object* run() override;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_ForkJoinPool$1_h_