#ifndef _java_security_PrivilegedExceptionAction_h_
#define _java_security_PrivilegedExceptionAction_h_
//$ interface java.security.PrivilegedExceptionAction
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace security {

class $import PrivilegedExceptionAction : public ::java::lang::Object {
	$interface(PrivilegedExceptionAction, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $Object* run() {return nullptr;}
};

	} // security
} // java

#endif // _java_security_PrivilegedExceptionAction_h_