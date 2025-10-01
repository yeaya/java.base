#ifndef _com_sun_crypto_provider_PBES2Core$HmacSHA224AndAES_128_h_
#define _com_sun_crypto_provider_PBES2Core$HmacSHA224AndAES_128_h_
//$ class com.sun.crypto.provider.PBES2Core$HmacSHA224AndAES_128
//$ extends com.sun.crypto.provider.PBES2Core

#include <com/sun/crypto/provider/PBES2Core.h>

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

class PBES2Core$HmacSHA224AndAES_128 : public ::com::sun::crypto::provider::PBES2Core {
	$class(PBES2Core$HmacSHA224AndAES_128, $NO_CLASS_INIT, ::com::sun::crypto::provider::PBES2Core)
public:
	PBES2Core$HmacSHA224AndAES_128();
	using ::com::sun::crypto::provider::PBES2Core::engineUpdate;
	using ::com::sun::crypto::provider::PBES2Core::engineDoFinal;
	void init$();
};

			} // provider
		} // crypto
	} // sun
} // com

#endif // _com_sun_crypto_provider_PBES2Core$HmacSHA224AndAES_128_h_