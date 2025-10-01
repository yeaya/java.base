#ifndef _java_security_spec_ECFieldFp_h_
#define _java_security_spec_ECFieldFp_h_
//$ class java.security.spec.ECFieldFp
//$ extends java.security.spec.ECField

#include <java/security/spec/ECField.h>

namespace java {
	namespace math {
		class BigInteger;
	}
}

namespace java {
	namespace security {
		namespace spec {

class $export ECFieldFp : public ::java::security::spec::ECField {
	$class(ECFieldFp, $NO_CLASS_INIT, ::java::security::spec::ECField)
public:
	ECFieldFp();
	void init$(::java::math::BigInteger* p);
	virtual bool equals(Object$* obj) override;
	virtual int32_t getFieldSize() override;
	virtual ::java::math::BigInteger* getP();
	virtual int32_t hashCode() override;
	::java::math::BigInteger* p = nullptr;
};

		} // spec
	} // security
} // java

#endif // _java_security_spec_ECFieldFp_h_