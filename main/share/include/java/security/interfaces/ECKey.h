#ifndef _java_security_interfaces_ECKey_h_
#define _java_security_interfaces_ECKey_h_
//$ interface java.security.interfaces.ECKey
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace security {
		namespace spec {
			class ECParameterSpec;
		}
	}
}

namespace java {
	namespace security {
		namespace interfaces {

class $import ECKey : public ::java::lang::Object {
	$interface(ECKey, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::security::spec::ECParameterSpec* getParams() {return nullptr;}
};

		} // interfaces
	} // security
} // java

#endif // _java_security_interfaces_ECKey_h_