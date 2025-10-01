#ifndef _javax_crypto_ExemptionMechanism_h_
#define _javax_crypto_ExemptionMechanism_h_
//$ class javax.crypto.ExemptionMechanism
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace security {
		class AlgorithmParameters;
		class Key;
		class Provider;
	}
}
namespace java {
	namespace security {
		namespace spec {
			class AlgorithmParameterSpec;
		}
	}
}
namespace javax {
	namespace crypto {
		class ExemptionMechanismSpi;
	}
}

namespace javax {
	namespace crypto {

class $import ExemptionMechanism : public ::java::lang::Object {
	$class(ExemptionMechanism, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ExemptionMechanism();
	void init$(::javax::crypto::ExemptionMechanismSpi* exmechSpi, ::java::security::Provider* provider, $String* mechanism);
	$bytes* genExemptionBlob();
	int32_t genExemptionBlob($bytes* output);
	int32_t genExemptionBlob($bytes* output, int32_t outputOffset);
	static ::javax::crypto::ExemptionMechanism* getInstance($String* algorithm);
	static ::javax::crypto::ExemptionMechanism* getInstance($String* algorithm, $String* provider);
	static ::javax::crypto::ExemptionMechanism* getInstance($String* algorithm, ::java::security::Provider* provider);
	$String* getName();
	int32_t getOutputSize(int32_t inputLen);
	::java::security::Provider* getProvider();
	void init(::java::security::Key* key);
	void init(::java::security::Key* key, ::java::security::spec::AlgorithmParameterSpec* params);
	void init(::java::security::Key* key, ::java::security::AlgorithmParameters* params);
	bool isCryptoAllowed(::java::security::Key* key);
	::java::security::Provider* provider = nullptr;
	::javax::crypto::ExemptionMechanismSpi* exmechSpi = nullptr;
	$String* mechanism = nullptr;
	bool done = false;
	bool initialized = false;
	::java::security::Key* keyStored = nullptr;
};

	} // crypto
} // javax

#endif // _javax_crypto_ExemptionMechanism_h_