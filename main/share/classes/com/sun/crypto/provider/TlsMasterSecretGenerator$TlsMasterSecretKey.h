#ifndef _com_sun_crypto_provider_TlsMasterSecretGenerator$TlsMasterSecretKey_h_
#define _com_sun_crypto_provider_TlsMasterSecretGenerator$TlsMasterSecretKey_h_
//$ class com.sun.crypto.provider.TlsMasterSecretGenerator$TlsMasterSecretKey
//$ extends sun.security.internal.interfaces.TlsMasterSecret

#include <java/lang/Array.h>
#include <sun/security/internal/interfaces/TlsMasterSecret.h>

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

class TlsMasterSecretGenerator$TlsMasterSecretKey : public ::sun::security::internal::interfaces::TlsMasterSecret {
	$class(TlsMasterSecretGenerator$TlsMasterSecretKey, $NO_CLASS_INIT, ::sun::security::internal::interfaces::TlsMasterSecret)
public:
	TlsMasterSecretGenerator$TlsMasterSecretKey();
	void init$($bytes* key, int32_t majorVersion, int32_t minorVersion);
	virtual $String* getAlgorithm() override;
	virtual $bytes* getEncoded() override;
	virtual $String* getFormat() override;
	virtual int32_t getMajorVersion() override;
	virtual int32_t getMinorVersion() override;
	static const int64_t serialVersionUID = (int64_t)0x0E263F0A97D26CB0;
	$bytes* key = nullptr;
	int32_t majorVersion = 0;
	int32_t minorVersion = 0;
};

			} // provider
		} // crypto
	} // sun
} // com

#endif // _com_sun_crypto_provider_TlsMasterSecretGenerator$TlsMasterSecretKey_h_