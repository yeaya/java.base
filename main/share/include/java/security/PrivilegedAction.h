#ifndef _java_security_PrivilegedAction_h_
#define _java_security_PrivilegedAction_h_
//$ interface java.security.PrivilegedAction
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace security {

class $import PrivilegedAction : public ::java::lang::Object {
	$interface(PrivilegedAction, $PRELOAD | $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $Object* run() {return nullptr;}
};

	} // security
} // java

#endif // _java_security_PrivilegedAction_h_