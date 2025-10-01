#ifndef _java_security_spec_ECPoint_h_
#define _java_security_spec_ECPoint_h_
//$ class java.security.spec.ECPoint
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("POINT_INFINITY")
#undef POINT_INFINITY

namespace java {
	namespace math {
		class BigInteger;
	}
}

namespace java {
	namespace security {
		namespace spec {

class $export ECPoint : public ::java::lang::Object {
	$class(ECPoint, 0, ::java::lang::Object)
public:
	ECPoint();
	void init$();
	void init$(::java::math::BigInteger* x, ::java::math::BigInteger* y);
	virtual bool equals(Object$* obj) override;
	virtual ::java::math::BigInteger* getAffineX();
	virtual ::java::math::BigInteger* getAffineY();
	virtual int32_t hashCode() override;
	::java::math::BigInteger* x = nullptr;
	::java::math::BigInteger* y = nullptr;
	static ::java::security::spec::ECPoint* POINT_INFINITY;
};

		} // spec
	} // security
} // java

#pragma pop_macro("POINT_INFINITY")

#endif // _java_security_spec_ECPoint_h_