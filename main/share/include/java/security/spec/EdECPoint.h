#ifndef _java_security_spec_EdECPoint_h_
#define _java_security_spec_EdECPoint_h_
//$ class java.security.spec.EdECPoint
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

class $import EdECPoint : public ::java::lang::Object {
	$class(EdECPoint, $NO_CLASS_INIT, ::java::lang::Object)
public:
	EdECPoint();
	void init$(bool xOdd, ::java::math::BigInteger* y);
	::java::math::BigInteger* getY();
	bool isXOdd();
	bool xOdd = false;
	::java::math::BigInteger* y = nullptr;
};

		} // spec
	} // security
} // java

#endif // _java_security_spec_EdECPoint_h_