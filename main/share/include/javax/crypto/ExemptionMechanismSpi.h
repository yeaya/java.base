#ifndef _javax_crypto_ExemptionMechanismSpi_h_
#define _javax_crypto_ExemptionMechanismSpi_h_
//$ class javax.crypto.ExemptionMechanismSpi
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace security {
		class AlgorithmParameters;
		class Key;
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

class $import ExemptionMechanismSpi : public ::java::lang::Object {
	$class(ExemptionMechanismSpi, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ExemptionMechanismSpi();
	void init$();
	virtual $bytes* engineGenExemptionBlob() {return nullptr;}
	virtual int32_t engineGenExemptionBlob($bytes* output, int32_t outputOffset) {return 0;}
	virtual int32_t engineGetOutputSize(int32_t inputLen) {return 0;}
	virtual void engineInit(::java::security::Key* key) {}
	virtual void engineInit(::java::security::Key* key, ::java::security::spec::AlgorithmParameterSpec* params) {}
	virtual void engineInit(::java::security::Key* key, ::java::security::AlgorithmParameters* params) {}
};

	} // crypto
} // javax

#endif // _javax_crypto_ExemptionMechanismSpi_h_