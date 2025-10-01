#ifndef _java_security_KeyPairGenerator_h_
#define _java_security_KeyPairGenerator_h_
//$ class java.security.KeyPairGenerator
//$ extends java.security.KeyPairGeneratorSpi

#include <java/security/KeyPairGeneratorSpi.h>

namespace java {
	namespace security {
		class KeyPair;
		class Provider;
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
		namespace jca {
			class GetInstance$Instance;
		}
	}
}
namespace sun {
	namespace security {
		namespace util {
			class Debug;
		}
	}
}

namespace java {
	namespace security {

class $import KeyPairGenerator : public ::java::security::KeyPairGeneratorSpi {
	$class(KeyPairGenerator, 0, ::java::security::KeyPairGeneratorSpi)
public:
	KeyPairGenerator();
	void init$($String* algorithm);
	virtual void disableFailover();
	::java::security::KeyPair* genKeyPair();
	virtual ::java::security::KeyPair* generateKeyPair() override;
	virtual $String* getAlgorithm();
	static ::java::security::KeyPairGenerator* getInstance(::sun::security::jca::GetInstance$Instance* instance, $String* algorithm);
	static ::java::security::KeyPairGenerator* getInstance($String* algorithm);
	static ::java::security::KeyPairGenerator* getInstance($String* algorithm, $String* provider);
	static ::java::security::KeyPairGenerator* getInstance($String* algorithm, ::java::security::Provider* provider);
	::java::security::Provider* getProvider();
	virtual void initialize(int32_t keysize);
	virtual void initialize(int32_t keysize, ::java::security::SecureRandom* random) override;
	virtual void initialize(::java::security::spec::AlgorithmParameterSpec* params);
	virtual void initialize(::java::security::spec::AlgorithmParameterSpec* params, ::java::security::SecureRandom* random) override;
	static ::sun::security::util::Debug* pdebug;
	static bool skipDebug;
	$String* algorithm = nullptr;
	::java::security::Provider* provider = nullptr;
};

	} // security
} // java

#endif // _java_security_KeyPairGenerator_h_