#ifndef _java_security_interfaces_XECKey_h_
#define _java_security_interfaces_XECKey_h_
//$ interface java.security.interfaces.XECKey
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace security {
		namespace spec {
			class AlgorithmParameterSpec;
		}
	}
}

namespace java {
	namespace security {
		namespace interfaces {

class $export XECKey : public ::java::lang::Object {
	$interface(XECKey, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::security::spec::AlgorithmParameterSpec* getParams() {return nullptr;}
};

		} // interfaces
	} // security
} // java

#endif // _java_security_interfaces_XECKey_h_