#ifndef _com_sun_crypto_provider_HmacPKCS12PBECore_h_
#define _com_sun_crypto_provider_HmacPKCS12PBECore_h_
//$ class com.sun.crypto.provider.HmacPKCS12PBECore
//$ extends com.sun.crypto.provider.HmacCore

#include <com/sun/crypto/provider/HmacCore.h>

namespace java {
	namespace security {
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

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

class HmacPKCS12PBECore : public ::com::sun::crypto::provider::HmacCore {
	$class(HmacPKCS12PBECore, $NO_CLASS_INIT, ::com::sun::crypto::provider::HmacCore)
public:
	HmacPKCS12PBECore();
	void init$($String* algorithm, int32_t bl);
	virtual void engineInit(::java::security::Key* key, ::java::security::spec::AlgorithmParameterSpec* params) override;
	$String* algorithm = nullptr;
	int32_t bl = 0;
};

			} // provider
		} // crypto
	} // sun
} // com

#endif // _com_sun_crypto_provider_HmacPKCS12PBECore_h_