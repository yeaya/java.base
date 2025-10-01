#ifndef _java_security_interfaces_DSAKeyPairGenerator_h_
#define _java_security_interfaces_DSAKeyPairGenerator_h_
//$ interface java.security.interfaces.DSAKeyPairGenerator
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace security {
		class SecureRandom;
	}
}
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

class $import DSAKeyPairGenerator : public ::java::lang::Object {
	$interface(DSAKeyPairGenerator, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void initialize(::java::security::interfaces::DSAParams* params, ::java::security::SecureRandom* random) {}
	virtual void initialize(int32_t modlen, bool genParams, ::java::security::SecureRandom* random) {}
};

		} // interfaces
	} // security
} // java

#endif // _java_security_interfaces_DSAKeyPairGenerator_h_