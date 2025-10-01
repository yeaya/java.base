#ifndef _sun_security_provider_DSAKeyPairGenerator$Current_h_
#define _sun_security_provider_DSAKeyPairGenerator$Current_h_
//$ class sun.security.provider.DSAKeyPairGenerator$Current
//$ extends sun.security.provider.DSAKeyPairGenerator

#include <sun/security/provider/DSAKeyPairGenerator.h>

namespace java {
	namespace security {
		class KeyPair;
		class SecureRandom;
	}
}
namespace java {
	namespace security {
		namespace spec {
			class AlgorithmParameterSpec;
		}
	}
}

namespace sun {
	namespace security {
		namespace provider {

class DSAKeyPairGenerator$Current : public ::sun::security::provider::DSAKeyPairGenerator {
	$class(DSAKeyPairGenerator$Current, $NO_CLASS_INIT, ::sun::security::provider::DSAKeyPairGenerator)
public:
	DSAKeyPairGenerator$Current();
	void init$();
	virtual ::java::security::KeyPair* generateKeyPair() override;
	using ::sun::security::provider::DSAKeyPairGenerator::initialize;
	virtual void initialize(::java::security::spec::AlgorithmParameterSpec* params, ::java::security::SecureRandom* random) override;
	virtual void initialize(int32_t modlen, ::java::security::SecureRandom* random) override;
};

		} // provider
	} // security
} // sun

#endif // _sun_security_provider_DSAKeyPairGenerator$Current_h_