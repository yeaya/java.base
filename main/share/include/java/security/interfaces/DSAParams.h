#ifndef _java_security_interfaces_DSAParams_h_
#define _java_security_interfaces_DSAParams_h_
//$ interface java.security.interfaces.DSAParams
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace math {
		class BigInteger;
	}
}

namespace java {
	namespace security {
		namespace interfaces {

class $import DSAParams : public ::java::lang::Object {
	$interface(DSAParams, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::math::BigInteger* getG() {return nullptr;}
	virtual ::java::math::BigInteger* getP() {return nullptr;}
	virtual ::java::math::BigInteger* getQ() {return nullptr;}
};

		} // interfaces
	} // security
} // java

#endif // _java_security_interfaces_DSAParams_h_