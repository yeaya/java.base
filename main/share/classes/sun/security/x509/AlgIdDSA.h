#ifndef _sun_security_x509_AlgIdDSA_h_
#define _sun_security_x509_AlgIdDSA_h_
//$ class sun.security.x509.AlgIdDSA
//$ extends sun.security.x509.AlgorithmId
//$ implements java.security.interfaces.DSAParams

#include <java/security/interfaces/DSAParams.h>
#include <sun/security/x509/AlgorithmId.h>

namespace java {
	namespace math {
		class BigInteger;
	}
}

namespace sun {
	namespace security {
		namespace x509 {

class $export AlgIdDSA : public ::sun::security::x509::AlgorithmId, public ::java::security::interfaces::DSAParams {
	$class(AlgIdDSA, $NO_CLASS_INIT, ::sun::security::x509::AlgorithmId, ::java::security::interfaces::DSAParams)
public:
	AlgIdDSA();
	using ::sun::security::x509::AlgorithmId::equals;
	virtual $Object* clone() override;
	virtual bool equals(Object$* other) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(::java::math::BigInteger* p, ::java::math::BigInteger* q, ::java::math::BigInteger* g);
	virtual void decodeParams() override;
	virtual ::java::math::BigInteger* getG() override;
	virtual $String* getName() override;
	virtual ::java::math::BigInteger* getP() override;
	virtual ::java::math::BigInteger* getQ() override;
	void initializeParams();
	virtual $String* paramsToString() override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x2FB34F0818292A2E;
	::java::math::BigInteger* p = nullptr;
	::java::math::BigInteger* q = nullptr;
	::java::math::BigInteger* g = nullptr;
};

		} // x509
	} // security
} // sun

#endif // _sun_security_x509_AlgIdDSA_h_