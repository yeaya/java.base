#ifndef _com_sun_crypto_provider_PBMAC1Core_h_
#define _com_sun_crypto_provider_PBMAC1Core_h_
//$ class com.sun.crypto.provider.PBMAC1Core
//$ extends com.sun.crypto.provider.HmacCore

#include <com/sun/crypto/provider/HmacCore.h>

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {
				class PBKDF2Core;
			}
		}
	}
}
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

class PBMAC1Core : public ::com::sun::crypto::provider::HmacCore {
	$class(PBMAC1Core, $NO_CLASS_INIT, ::com::sun::crypto::provider::HmacCore)
public:
	PBMAC1Core();
	void init$($String* kdfAlgo, $String* hashAlgo, int32_t blockLength);
	virtual void engineInit(::java::security::Key* key, ::java::security::spec::AlgorithmParameterSpec* params) override;
	static ::com::sun::crypto::provider::PBKDF2Core* getKDFImpl($String* algo);
	$String* kdfAlgo = nullptr;
	$String* hashAlgo = nullptr;
	int32_t blockLength = 0;
};

			} // provider
		} // crypto
	} // sun
} // com

#endif // _com_sun_crypto_provider_PBMAC1Core_h_