#ifndef _com_sun_crypto_provider_PBKDF2KeyImpl$1_h_
#define _com_sun_crypto_provider_PBKDF2KeyImpl$1_h_
//$ class com.sun.crypto.provider.PBKDF2KeyImpl$1
//$ extends javax.crypto.SecretKey

#include <java/lang/Array.h>
#include <javax/crypto/SecretKey.h>

namespace javax {
	namespace crypto {
		class Mac;
	}
}

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

class PBKDF2KeyImpl$1 : public ::javax::crypto::SecretKey {
	$class(PBKDF2KeyImpl$1, $NO_CLASS_INIT, ::javax::crypto::SecretKey)
public:
	PBKDF2KeyImpl$1();
	void init$(::javax::crypto::Mac* val$prf, $bytes* val$password);
	virtual bool equals(Object$* obj) override;
	virtual $String* getAlgorithm() override;
	virtual $bytes* getEncoded() override;
	virtual $String* getFormat() override;
	virtual int32_t hashCode() override;
	$bytes* val$password = nullptr;
	::javax::crypto::Mac* val$prf = nullptr;
	static const int64_t serialVersionUID = (int64_t)0x6D47D233D2F69363;
};

			} // provider
		} // crypto
	} // sun
} // com

#endif // _com_sun_crypto_provider_PBKDF2KeyImpl$1_h_