#ifndef _sun_security_provider_DSAKeyPairGenerator$Legacy_h_
#define _sun_security_provider_DSAKeyPairGenerator$Legacy_h_
//$ class sun.security.provider.DSAKeyPairGenerator$Legacy
//$ extends sun.security.provider.DSAKeyPairGenerator
//$ implements java.security.interfaces.DSAKeyPairGenerator

#include <java/security/interfaces/DSAKeyPairGenerator.h>
#include <sun/security/provider/DSAKeyPairGenerator.h>

namespace java {
	namespace security {
		class KeyPair;
		class SecureRandom;
	}
}
namespace java {
	namespace security {
		namespace interfaces {
			class DSAParams;
		}
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

class DSAKeyPairGenerator$Legacy : public ::sun::security::provider::DSAKeyPairGenerator, public ::java::security::interfaces::DSAKeyPairGenerator {
	$class(DSAKeyPairGenerator$Legacy, $NO_CLASS_INIT, ::sun::security::provider::DSAKeyPairGenerator, ::java::security::interfaces::DSAKeyPairGenerator)
public:
	DSAKeyPairGenerator$Legacy();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual ::java::security::KeyPair* generateKeyPair() override;
	using ::sun::security::provider::DSAKeyPairGenerator::initialize;
	virtual void initialize(int32_t modlen, bool genParams, ::java::security::SecureRandom* random) override;
	virtual void initialize(::java::security::interfaces::DSAParams* params, ::java::security::SecureRandom* random) override;
	virtual void initialize(::java::security::spec::AlgorithmParameterSpec* params, ::java::security::SecureRandom* random) override;
	virtual void initialize(int32_t modlen, ::java::security::SecureRandom* random) override;
	virtual $String* toString() override;
};

		} // provider
	} // security
} // sun

#endif // _sun_security_provider_DSAKeyPairGenerator$Legacy_h_