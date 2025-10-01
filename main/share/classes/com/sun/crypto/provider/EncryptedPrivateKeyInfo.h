#ifndef _com_sun_crypto_provider_EncryptedPrivateKeyInfo_h_
#define _com_sun_crypto_provider_EncryptedPrivateKeyInfo_h_
//$ class com.sun.crypto.provider.EncryptedPrivateKeyInfo
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace sun {
	namespace security {
		namespace x509 {
			class AlgorithmId;
		}
	}
}

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

class EncryptedPrivateKeyInfo : public ::java::lang::Object {
	$class(EncryptedPrivateKeyInfo, $NO_CLASS_INIT, ::java::lang::Object)
public:
	EncryptedPrivateKeyInfo();
	void init$($bytes* encoded);
	void init$(::sun::security::x509::AlgorithmId* algid, $bytes* encryptedData);
	::sun::security::x509::AlgorithmId* getAlgorithm();
	$bytes* getEncoded();
	$bytes* getEncryptedData();
	::sun::security::x509::AlgorithmId* algid = nullptr;
	$bytes* encryptedData = nullptr;
	$bytes* encoded = nullptr;
};

			} // provider
		} // crypto
	} // sun
} // com

#endif // _com_sun_crypto_provider_EncryptedPrivateKeyInfo_h_