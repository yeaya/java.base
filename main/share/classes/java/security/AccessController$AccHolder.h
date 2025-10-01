#ifndef _java_security_AccessController$AccHolder_h_
#define _java_security_AccessController$AccHolder_h_
//$ class java.security.AccessController$AccHolder
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace security {
		class AccessControlContext;
	}
}

namespace java {
	namespace security {

class AccessController$AccHolder : public ::java::lang::Object {
	$class(AccessController$AccHolder, 0, ::java::lang::Object)
public:
	AccessController$AccHolder();
	void init$();
	static ::java::security::AccessControlContext* innocuousAcc;
};

	} // security
} // java

#endif // _java_security_AccessController$AccHolder_h_