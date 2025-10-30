#ifndef _sun_security_validator_ValidatorException_h_
#define _sun_security_validator_ValidatorException_h_
//$ class sun.security.validator.ValidatorException
//$ extends java.security.cert.CertificateException

#include <java/security/cert/CertificateException.h>

#pragma push_macro("T_ALGORITHM_DISABLED")
#undef T_ALGORITHM_DISABLED
#pragma push_macro("T_CA_EXTENSIONS")
#undef T_CA_EXTENSIONS
#pragma push_macro("T_CERT_EXPIRED")
#undef T_CERT_EXPIRED
#pragma push_macro("T_EE_EXTENSIONS")
#undef T_EE_EXTENSIONS
#pragma push_macro("T_NAME_CHAINING")
#undef T_NAME_CHAINING
#pragma push_macro("T_NO_TRUST_ANCHOR")
#undef T_NO_TRUST_ANCHOR
#pragma push_macro("T_SIGNATURE_ERROR")
#undef T_SIGNATURE_ERROR
#pragma push_macro("T_UNTRUSTED_CERT")
#undef T_UNTRUSTED_CERT

namespace java {
	namespace lang {
		class Throwable;
	}
}
namespace java {
	namespace security {
		namespace cert {
			class X509Certificate;
		}
	}
}

namespace sun {
	namespace security {
		namespace validator {

class $export ValidatorException : public ::java::security::cert::CertificateException {
	$class(ValidatorException, 0, ::java::security::cert::CertificateException)
public:
	ValidatorException();
	void init$($String* msg);
	void init$($String* msg, $Throwable* cause);
	void init$(Object$* type);
	void init$(Object$* type, ::java::security::cert::X509Certificate* cert);
	void init$(Object$* type, ::java::security::cert::X509Certificate* cert, $Throwable* cause);
	void init$($String* msg, Object$* type, ::java::security::cert::X509Certificate* cert);
	void init$($String* msg, Object$* type, ::java::security::cert::X509Certificate* cert, $Throwable* cause);
	virtual ::java::security::cert::X509Certificate* getErrorCertificate();
	virtual $Object* getErrorType();
	static const int64_t serialVersionUID = (int64_t)0xD8A160ED39461445;
	static $Object* T_NO_TRUST_ANCHOR;
	static $Object* T_EE_EXTENSIONS;
	static $Object* T_CA_EXTENSIONS;
	static $Object* T_CERT_EXPIRED;
	static $Object* T_SIGNATURE_ERROR;
	static $Object* T_NAME_CHAINING;
	static $Object* T_ALGORITHM_DISABLED;
	static $Object* T_UNTRUSTED_CERT;
	$Object* type = nullptr;
	::java::security::cert::X509Certificate* cert = nullptr;
	ValidatorException(const ValidatorException& e);
	virtual void throw$() override;
	inline ValidatorException* operator ->() {
		return (ValidatorException*)throwing$;
	}
};

		} // validator
	} // security
} // sun

#pragma pop_macro("T_ALGORITHM_DISABLED")
#pragma pop_macro("T_CA_EXTENSIONS")
#pragma pop_macro("T_CERT_EXPIRED")
#pragma pop_macro("T_EE_EXTENSIONS")
#pragma pop_macro("T_NAME_CHAINING")
#pragma pop_macro("T_NO_TRUST_ANCHOR")
#pragma pop_macro("T_SIGNATURE_ERROR")
#pragma pop_macro("T_UNTRUSTED_CERT")

#endif // _sun_security_validator_ValidatorException_h_