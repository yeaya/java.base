#ifndef _java_security_Guard_h_
#define _java_security_Guard_h_
//$ interface java.security.Guard
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace security {

class $import Guard : public ::java::lang::Object {
	$interface(Guard, $PRELOAD | $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void checkGuard(Object$* object) {}
};

	} // security
} // java

#endif // _java_security_Guard_h_