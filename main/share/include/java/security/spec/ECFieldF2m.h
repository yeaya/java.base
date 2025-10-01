#ifndef _java_security_spec_ECFieldF2m_h_
#define _java_security_spec_ECFieldF2m_h_
//$ class java.security.spec.ECFieldF2m
//$ extends java.security.spec.ECField

#include <java/lang/Array.h>
#include <java/security/spec/ECField.h>

namespace java {
	namespace math {
		class BigInteger;
	}
}

namespace java {
	namespace security {
		namespace spec {

class $import ECFieldF2m : public ::java::security::spec::ECField {
	$class(ECFieldF2m, $NO_CLASS_INIT, ::java::security::spec::ECField)
public:
	ECFieldF2m();
	void init$(int32_t m);
	void init$(int32_t m, ::java::math::BigInteger* rp);
	void init$(int32_t m, $ints* ks);
	virtual bool equals(Object$* obj) override;
	virtual int32_t getFieldSize() override;
	virtual int32_t getM();
	virtual $ints* getMidTermsOfReductionPolynomial();
	virtual ::java::math::BigInteger* getReductionPolynomial();
	virtual int32_t hashCode() override;
	int32_t m = 0;
	$ints* ks = nullptr;
	::java::math::BigInteger* rp = nullptr;
};

		} // spec
	} // security
} // java

#endif // _java_security_spec_ECFieldF2m_h_