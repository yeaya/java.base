#ifndef _sun_security_rsa_RSASignature$SHA3_224withRSA_h_
#define _sun_security_rsa_RSASignature$SHA3_224withRSA_h_
//$ class sun.security.rsa.RSASignature$SHA3_224withRSA
//$ extends sun.security.rsa.RSASignature

#include <sun/security/rsa/RSASignature.h>

namespace sun {
	namespace security {
		namespace rsa {

class $export RSASignature$SHA3_224withRSA : public ::sun::security::rsa::RSASignature {
	$class(RSASignature$SHA3_224withRSA, $NO_CLASS_INIT, ::sun::security::rsa::RSASignature)
public:
	RSASignature$SHA3_224withRSA();
	using ::sun::security::rsa::RSASignature::engineInitVerify;
	using ::sun::security::rsa::RSASignature::engineInitSign;
	using ::sun::security::rsa::RSASignature::engineSign;
	using ::sun::security::rsa::RSASignature::engineVerify;
	void init$();
};

		} // rsa
	} // security
} // sun

#endif // _sun_security_rsa_RSASignature$SHA3_224withRSA_h_