#ifndef _com_sun_crypto_provider_ElectronicCodeBook_h_
#define _com_sun_crypto_provider_ElectronicCodeBook_h_
//$ class com.sun.crypto.provider.ElectronicCodeBook
//$ extends com.sun.crypto.provider.FeedbackCipher

#include <com/sun/crypto/provider/FeedbackCipher.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {
				class SymmetricCipher;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

class ElectronicCodeBook : public ::com::sun::crypto::provider::FeedbackCipher {
	$class(ElectronicCodeBook, $NO_CLASS_INIT, ::com::sun::crypto::provider::FeedbackCipher)
public:
	ElectronicCodeBook();
	void init$(::com::sun::crypto::provider::SymmetricCipher* embeddedCipher);
	virtual int32_t decrypt($bytes* in, int32_t inOff, int32_t len, $bytes* out, int32_t outOff) override;
	virtual int32_t encrypt($bytes* in, int32_t inOff, int32_t len, $bytes* out, int32_t outOff) override;
	virtual $String* getFeedback() override;
	int32_t implECBDecrypt($bytes* in, int32_t inOff, int32_t len, $bytes* out, int32_t outOff);
	int32_t implECBEncrypt($bytes* in, int32_t inOff, int32_t len, $bytes* out, int32_t outOff);
	virtual void init(bool decrypting, $String* algorithm, $bytes* key, $bytes* iv) override;
	virtual void reset() override;
	virtual void restore() override;
	virtual void save() override;
};

			} // provider
		} // crypto
	} // sun
} // com

#endif // _com_sun_crypto_provider_ElectronicCodeBook_h_