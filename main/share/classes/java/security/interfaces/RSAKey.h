#ifndef _java_security_interfaces_RSAKey_h_
#define _java_security_interfaces_RSAKey_h_
//$ interface java.security.interfaces.RSAKey
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace math {
		class BigInteger;
	}
}
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

class $export RSAKey : public ::java::lang::Object {
	$interface(RSAKey, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::math::BigInteger* getModulus() {return nullptr;}
	virtual ::java::security::spec::AlgorithmParameterSpec* getParams();
};

		} // interfaces
	} // security
} // java

#endif // _java_security_interfaces_RSAKey_h_