#ifndef _com_sun_crypto_provider_PBKDF2KeyImpl_h_
#define _com_sun_crypto_provider_PBKDF2KeyImpl_h_
//$ class com.sun.crypto.provider.PBKDF2KeyImpl
//$ extends javax.crypto.interfaces.PBEKey

#include <java/lang/Array.h>
#include <javax/crypto/interfaces/PBEKey.h>

namespace javax {
	namespace crypto {
		class Mac;
	}
}
namespace javax {
	namespace crypto {
		namespace spec {
			class PBEKeySpec;
		}
	}
}

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

class PBKDF2KeyImpl : public ::javax::crypto::interfaces::PBEKey {
	$class(PBKDF2KeyImpl, $NO_CLASS_INIT, ::javax::crypto::interfaces::PBEKey)
public:
	PBKDF2KeyImpl();
	void init$(::javax::crypto::spec::PBEKeySpec* keySpec, $String* prfAlgo);
	void clearPassword();
	static $bytes* deriveKey(::javax::crypto::Mac* prf, $bytes* password, $bytes* salt, int32_t iterCount, int32_t keyLengthInBit);
	virtual bool equals(Object$* obj) override;
	virtual $String* getAlgorithm() override;
	virtual $bytes* getEncoded() override;
	virtual $String* getFormat() override;
	virtual int32_t getIterationCount() override;
	virtual $chars* getPassword() override;
	static $bytes* getPasswordBytes($chars* passwd);
	virtual $bytes* getSalt() override;
	virtual int32_t hashCode() override;
	static void lambda$new$0($bytes* k, $chars* p);
	$Object* writeReplace();
	static const int64_t serialVersionUID = (int64_t)0xE0FC269148183943;
	$chars* passwd = nullptr;
	$bytes* salt = nullptr;
	int32_t iterCount = 0;
	$bytes* key = nullptr;
	::javax::crypto::Mac* prf = nullptr;
};

			} // provider
		} // crypto
	} // sun
} // com

#endif // _com_sun_crypto_provider_PBKDF2KeyImpl_h_