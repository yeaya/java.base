#ifndef _javax_crypto_ExemptionMechanismException_h_
#define _javax_crypto_ExemptionMechanismException_h_
//$ class javax.crypto.ExemptionMechanismException
//$ extends java.security.GeneralSecurityException

#include <java/security/GeneralSecurityException.h>

namespace javax {
	namespace crypto {

class $import ExemptionMechanismException : public ::java::security::GeneralSecurityException {
	$class(ExemptionMechanismException, $NO_CLASS_INIT, ::java::security::GeneralSecurityException)
public:
	ExemptionMechanismException();
	void init$();
	void init$($String* msg);
	static const int64_t serialVersionUID = (int64_t)0x15D359CC64927BF5;
	ExemptionMechanismException(const ExemptionMechanismException& e);
	ExemptionMechanismException wrapper$();
	virtual void throwWrapper$() override;
};

	} // crypto
} // javax

#endif // _javax_crypto_ExemptionMechanismException_h_