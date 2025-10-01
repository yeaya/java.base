#ifndef _sun_security_ssl_SSLBasicKeyDerivation$SecretSizeSpec_h_
#define _sun_security_ssl_SSLBasicKeyDerivation$SecretSizeSpec_h_
//$ class sun.security.ssl.SSLBasicKeyDerivation$SecretSizeSpec
//$ extends java.security.spec.AlgorithmParameterSpec

#include <java/security/spec/AlgorithmParameterSpec.h>

namespace sun {
	namespace security {
		namespace ssl {

class SSLBasicKeyDerivation$SecretSizeSpec : public ::java::security::spec::AlgorithmParameterSpec {
	$class(SSLBasicKeyDerivation$SecretSizeSpec, $NO_CLASS_INIT, ::java::security::spec::AlgorithmParameterSpec)
public:
	SSLBasicKeyDerivation$SecretSizeSpec();
	void init$(int32_t length);
	int32_t length = 0;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_SSLBasicKeyDerivation$SecretSizeSpec_h_