#ifndef _java_security_interfaces_EdECKey_h_
#define _java_security_interfaces_EdECKey_h_
//$ interface java.security.interfaces.EdECKey
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace security {
		namespace spec {
			class NamedParameterSpec;
		}
	}
}

namespace java {
	namespace security {
		namespace interfaces {

class $import EdECKey : public ::java::lang::Object {
	$interface(EdECKey, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::security::spec::NamedParameterSpec* getParams() {return nullptr;}
};

		} // interfaces
	} // security
} // java

#endif // _java_security_interfaces_EdECKey_h_