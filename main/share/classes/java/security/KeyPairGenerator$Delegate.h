#ifndef _java_security_KeyPairGenerator$Delegate_h_
#define _java_security_KeyPairGenerator$Delegate_h_
//$ class java.security.KeyPairGenerator$Delegate
//$ extends java.security.KeyPairGenerator

#include <java/security/KeyPairGenerator.h>

#pragma push_macro("I_NONE")
#undef I_NONE
#pragma push_macro("I_PARAMS")
#undef I_PARAMS
#pragma push_macro("I_SIZE")
#undef I_SIZE

namespace java {
	namespace security {
		class KeyPair;
		class KeyPairGeneratorSpi;
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
	namespace util {
		class Iterator;
	}
}
namespace sun {
	namespace security {
		namespace jca {
			class GetInstance$Instance;
		}
	}
}

namespace java {
	namespace security {

class KeyPairGenerator$Delegate : public ::java::security::KeyPairGenerator {
	$class(KeyPairGenerator$Delegate, $NO_CLASS_INIT, ::java::security::KeyPairGenerator)
public:
	KeyPairGenerator$Delegate();
	void init$(::java::security::KeyPairGeneratorSpi* spi, $String* algorithm);
	void init$(::sun::security::jca::GetInstance$Instance* instance, ::java::util::Iterator* serviceIterator, $String* algorithm);
	virtual void disableFailover() override;
	virtual ::java::security::KeyPair* generateKeyPair() override;
	using ::java::security::KeyPairGenerator::initialize;
	virtual void initialize(int32_t keysize, ::java::security::SecureRandom* random) override;
	virtual void initialize(::java::security::spec::AlgorithmParameterSpec* params, ::java::security::SecureRandom* random) override;
	::java::security::KeyPairGeneratorSpi* nextSpi(::java::security::KeyPairGeneratorSpi* oldSpi, bool reinit);
	$volatile(::java::security::KeyPairGeneratorSpi*) spi = nullptr;
	$Object* lock = nullptr;
	::java::util::Iterator* serviceIterator = nullptr;
	static const int32_t I_NONE = 1;
	static const int32_t I_SIZE = 2;
	static const int32_t I_PARAMS = 3;
	int32_t initType = 0;
	int32_t initKeySize = 0;
	::java::security::spec::AlgorithmParameterSpec* initParams = nullptr;
	::java::security::SecureRandom* initRandom = nullptr;
};

	} // security
} // java

#pragma pop_macro("I_NONE")
#pragma pop_macro("I_PARAMS")
#pragma pop_macro("I_SIZE")

#endif // _java_security_KeyPairGenerator$Delegate_h_