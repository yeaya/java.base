#ifndef _java_security_interfaces_DSAKey_h_
#define _java_security_interfaces_DSAKey_h_
//$ interface java.security.interfaces.DSAKey
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace security {
		namespace interfaces {
			class DSAParams;
		}
	}
}

namespace java {
	namespace security {
		namespace interfaces {

class $export DSAKey : public ::java::lang::Object {
	$interface(DSAKey, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::security::interfaces::DSAParams* getParams() {return nullptr;}
};

		} // interfaces
	} // security
} // java

#endif // _java_security_interfaces_DSAKey_h_