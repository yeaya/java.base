#ifndef _com_sun_crypto_provider_AESCrypt_h_
#define _com_sun_crypto_provider_AESCrypt_h_
//$ class com.sun.crypto.provider.AESCrypt
//$ extends com.sun.crypto.provider.SymmetricCipher
//$ implements com.sun.crypto.provider.AESConstants

#include <com/sun/crypto/provider/AESConstants.h>
#include <com/sun/crypto/provider/SymmetricCipher.h>
#include <java/lang/Array.h>

#pragma push_macro("T4")
#undef T4
#pragma push_macro("T5")
#undef T5
#pragma push_macro("ROUNDS_12")
#undef ROUNDS_12
#pragma push_macro("T6")
#undef T6
#pragma push_macro("T7")
#undef T7
#pragma push_macro("ROUNDS_14")
#undef ROUNDS_14
#pragma push_macro("T8")
#undef T8
#pragma push_macro("K")
#undef K
#pragma push_macro("S")
#undef S
#pragma push_macro("U1")
#undef U1
#pragma push_macro("T1")
#undef T1
#pragma push_macro("U2")
#undef U2
#pragma push_macro("T2")
#undef T2
#pragma push_macro("U3")
#undef U3
#pragma push_macro("T3")
#undef T3
#pragma push_macro("U4")
#undef U4

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

class AESCrypt : public ::com::sun::crypto::provider::SymmetricCipher, public ::com::sun::crypto::provider::AESConstants {
	$class(AESCrypt, 0, ::com::sun::crypto::provider::SymmetricCipher, ::com::sun::crypto::provider::AESConstants)
public:
	AESCrypt();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void decryptBlock($bytes* in, int32_t inOffset, $bytes* out, int32_t outOffset) override;
	virtual void encryptBlock($bytes* in, int32_t inOffset, $bytes* out, int32_t outOffset) override;
	static $ints* expandToSubKey($Array<int32_t, 2>* kr, bool decrypting);
	virtual int32_t getBlockSize() override;
	static int32_t getRounds(int32_t keySize);
	void implDecryptBlock($bytes* in, int32_t inOffset, $bytes* out, int32_t outOffset);
	void implEncryptBlock($bytes* in, int32_t inOffset, $bytes* out, int32_t outOffset);
	virtual void init(bool decrypting, $String* algorithm, $bytes* key) override;
	static bool isKeySizeValid(int32_t len);
	void makeSessionKey($bytes* k);
	static int32_t mul(int32_t a, int32_t b);
	static int32_t mul4(int32_t a, $bytes* b);
	virtual $String* toString() override;
	bool ROUNDS_12 = false;
	bool ROUNDS_14 = false;
	$Array<int32_t, 2>* sessionK = nullptr;
	$ints* K = nullptr;
	$bytes* lastKey = nullptr;
	int32_t limit = 0;
	static $ints* alog;
	static $ints* log;
	static $bytes* S;
	static $bytes* Si;
	static $ints* T1;
	static $ints* T2;
	static $ints* T3;
	static $ints* T4;
	static $ints* T5;
	static $ints* T6;
	static $ints* T7;
	static $ints* T8;
	static $ints* U1;
	static $ints* U2;
	static $ints* U3;
	static $ints* U4;
	static $bytes* rcon;
};

			} // provider
		} // crypto
	} // sun
} // com

#pragma pop_macro("T4")
#pragma pop_macro("T5")
#pragma pop_macro("ROUNDS_12")
#pragma pop_macro("T6")
#pragma pop_macro("T7")
#pragma pop_macro("ROUNDS_14")
#pragma pop_macro("T8")
#pragma pop_macro("K")
#pragma pop_macro("S")
#pragma pop_macro("U1")
#pragma pop_macro("T1")
#pragma pop_macro("U2")
#pragma pop_macro("T2")
#pragma pop_macro("U3")
#pragma pop_macro("T3")
#pragma pop_macro("U4")

#endif // _com_sun_crypto_provider_AESCrypt_h_