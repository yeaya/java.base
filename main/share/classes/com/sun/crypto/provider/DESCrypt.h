#ifndef _com_sun_crypto_provider_DESCrypt_h_
#define _com_sun_crypto_provider_DESCrypt_h_
//$ class com.sun.crypto.provider.DESCrypt
//$ extends com.sun.crypto.provider.SymmetricCipher
//$ implements com.sun.crypto.provider.DESConstants

#include <com/sun/crypto/provider/DESConstants.h>
#include <com/sun/crypto/provider/SymmetricCipher.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

class DESCrypt : public ::com::sun::crypto::provider::SymmetricCipher, public ::com::sun::crypto::provider::DESConstants {
	$class(DESCrypt, 0, ::com::sun::crypto::provider::SymmetricCipher, ::com::sun::crypto::provider::DESConstants)
public:
	DESCrypt();
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void cipherBlock($bytes* in, int32_t inOffset, $bytes* out, int32_t outOffset);
	virtual void decryptBlock($bytes* cipher, int32_t cipherOffset, $bytes* plain, int32_t plainOffset) override;
	virtual void encryptBlock($bytes* plain, int32_t plainOffset, $bytes* cipher, int32_t cipherOffset) override;
	virtual void expandKey($bytes* key);
	virtual int32_t getBlockSize() override;
	virtual void init(bool decrypting, $String* algorithm, $bytes* rawKey) override;
	static int32_t initialPermutationLeft($bytes* block, int32_t offset);
	static int32_t initialPermutationRight($bytes* block, int32_t offset);
	static void perm(int32_t left, int32_t right, $bytes* out, int32_t offset);
	virtual $String* toString() override;
	static $ints* s0p;
	static $ints* s1p;
	static $ints* s2p;
	static $ints* s3p;
	static $ints* s4p;
	static $ints* s5p;
	static $ints* s6p;
	static $ints* s7p;
	static $ints* permRight0;
	static $ints* permLeft1;
	static $ints* permRight2;
	static $ints* permLeft3;
	static $ints* permRight4;
	static $ints* permLeft5;
	static $ints* permRight6;
	static $ints* permLeft7;
	static $ints* permRight8;
	static $ints* permLeft9;
	static $ints* permRightA;
	static $ints* permLeftB;
	static $ints* permRightC;
	static $ints* permLeftD;
	static $ints* permRightE;
	static $ints* permLeftF;
	static $ints* initPermLeft0;
	static $ints* initPermRight0;
	static $ints* initPermLeft1;
	static $ints* initPermRight1;
	static $ints* initPermLeft2;
	static $ints* initPermRight2;
	static $ints* initPermLeft3;
	static $ints* initPermRight3;
	static $ints* initPermLeft4;
	static $ints* initPermRight4;
	static $ints* initPermLeft5;
	static $ints* initPermRight5;
	static $ints* initPermLeft6;
	static $ints* initPermRight6;
	static $ints* initPermLeft7;
	static $ints* initPermRight7;
	static $ints* initPermLeft8;
	static $ints* initPermRight8;
	static $ints* initPermLeft9;
	static $ints* initPermRight9;
	static $ints* initPermLeftA;
	static $ints* initPermRightA;
	static $ints* initPermLeftB;
	static $ints* initPermRightB;
	static $ints* initPermLeftC;
	static $ints* initPermRightC;
	static $ints* initPermLeftD;
	static $ints* initPermRightD;
	static $ints* initPermLeftE;
	static $ints* initPermRightE;
	static $ints* initPermLeftF;
	static $ints* initPermRightF;
	$bytes* expandedKey = nullptr;
	bool decrypting = false;
};

			} // provider
		} // crypto
	} // sun
} // com

#endif // _com_sun_crypto_provider_DESCrypt_h_