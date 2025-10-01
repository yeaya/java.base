#ifndef _java_security_KeyPairGeneratorSpi_h_
#define _java_security_KeyPairGeneratorSpi_h_
//$ class java.security.KeyPairGeneratorSpi
//$ extends java.lang.Object

#include <java/lang/Object.h>

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

namespace java {
	namespace security {

class $import KeyPairGeneratorSpi : public ::java::lang::Object {
	$class(KeyPairGeneratorSpi, $NO_CLASS_INIT, ::java::lang::Object)
public:
	KeyPairGeneratorSpi();
	void init$();
	virtual ::java::security::KeyPair* generateKeyPair() {return nullptr;}
	virtual void initialize(int32_t keysize, ::java::security::SecureRandom* random) {}
	virtual void initialize(::java::security::spec::AlgorithmParameterSpec* params, ::java::security::SecureRandom* random);
};

	} // security
} // java

#endif // _java_security_KeyPairGeneratorSpi_h_