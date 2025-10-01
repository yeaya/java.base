#ifndef _sun_security_jca_GetInstance$Instance_h_
#define _sun_security_jca_GetInstance$Instance_h_
//$ class sun.security.jca.GetInstance$Instance
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace security {
		class Provider;
	}
}

namespace sun {
	namespace security {
		namespace jca {

class $import GetInstance$Instance : public ::java::lang::Object {
	$class(GetInstance$Instance, $NO_CLASS_INIT, ::java::lang::Object)
public:
	GetInstance$Instance();
	void init$(::java::security::Provider* provider, Object$* impl);
	$ObjectArray* toArray();
	::java::security::Provider* provider = nullptr;
	$Object* impl = nullptr;
};

		} // jca
	} // security
} // sun

#endif // _sun_security_jca_GetInstance$Instance_h_