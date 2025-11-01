#ifndef _java_security_spec_DSAParameterSpec_h_
#define _java_security_spec_DSAParameterSpec_h_
//$ class java.security.spec.DSAParameterSpec
//$ extends java.security.spec.AlgorithmParameterSpec
//$ implements java.security.interfaces.DSAParams

#include <java/security/interfaces/DSAParams.h>
#include <java/security/spec/AlgorithmParameterSpec.h>

namespace java {
	namespace math {
		class BigInteger;
	}
}

namespace java {
	namespace security {
		namespace spec {

class $export DSAParameterSpec : public ::java::security::spec::AlgorithmParameterSpec, public ::java::security::interfaces::DSAParams {
	$class(DSAParameterSpec, $NO_CLASS_INIT, ::java::security::spec::AlgorithmParameterSpec, ::java::security::interfaces::DSAParams)
public:
	DSAParameterSpec();
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::math::BigInteger* p, ::java::math::BigInteger* q, ::java::math::BigInteger* g);
	virtual ::java::math::BigInteger* getG() override;
	virtual ::java::math::BigInteger* getP() override;
	virtual ::java::math::BigInteger* getQ() override;
	virtual $String* toString() override;
	::java::math::BigInteger* p = nullptr;
	::java::math::BigInteger* q = nullptr;
	::java::math::BigInteger* g = nullptr;
};

		} // spec
	} // security
} // java

#endif // _java_security_spec_DSAParameterSpec_h_