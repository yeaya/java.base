#ifndef _java_security_spec_EllipticCurve_h_
#define _java_security_spec_EllipticCurve_h_
//$ class java.security.spec.EllipticCurve
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace math {
		class BigInteger;
	}
}
namespace java {
	namespace security {
		namespace spec {
			class ECField;
		}
	}
}

namespace java {
	namespace security {
		namespace spec {

class $import EllipticCurve : public ::java::lang::Object {
	$class(EllipticCurve, $NO_CLASS_INIT, ::java::lang::Object)
public:
	EllipticCurve();
	void init$(::java::security::spec::ECField* field, ::java::math::BigInteger* a, ::java::math::BigInteger* b);
	void init$(::java::security::spec::ECField* field, ::java::math::BigInteger* a, ::java::math::BigInteger* b, $bytes* seed);
	static void checkValidity(::java::security::spec::ECField* field, ::java::math::BigInteger* c, $String* cName);
	virtual bool equals(Object$* obj) override;
	virtual ::java::math::BigInteger* getA();
	virtual ::java::math::BigInteger* getB();
	virtual ::java::security::spec::ECField* getField();
	virtual $bytes* getSeed();
	virtual int32_t hashCode() override;
	::java::security::spec::ECField* field = nullptr;
	::java::math::BigInteger* a = nullptr;
	::java::math::BigInteger* b = nullptr;
	$bytes* seed = nullptr;
};

		} // spec
	} // security
} // java

#endif // _java_security_spec_EllipticCurve_h_