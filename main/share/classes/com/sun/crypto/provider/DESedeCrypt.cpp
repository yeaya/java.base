#include <com/sun/crypto/provider/DESedeCrypt.h>

#include <com/sun/crypto/provider/DESConstants.h>
#include <com/sun/crypto/provider/DESCrypt.h>
#include <java/security/InvalidKeyException.h>
#include <jcpp.h>

#undef DES_BLOCK_SIZE

using $DESConstants = ::com::sun::crypto::provider::DESConstants;
using $DESCrypt = ::com::sun::crypto::provider::DESCrypt;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InvalidKeyException = ::java::security::InvalidKeyException;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

$FieldInfo _DESedeCrypt_FieldInfo_[] = {
	{"key1", "[B", nullptr, $PRIVATE, $field(DESedeCrypt, key1)},
	{"key2", "[B", nullptr, $PRIVATE, $field(DESedeCrypt, key2)},
	{"key3", "[B", nullptr, $PRIVATE, $field(DESedeCrypt, key3)},
	{"buf1", "[B", nullptr, $PRIVATE, $field(DESedeCrypt, buf1)},
	{"buf2", "[B", nullptr, $PRIVATE, $field(DESedeCrypt, buf2)},
	{}
};

$MethodInfo _DESedeCrypt_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(DESedeCrypt, init$, void)},
	{"decryptBlock", "([BI[BI)V", nullptr, 0, $virtualMethod(DESedeCrypt, decryptBlock, void, $bytes*, int32_t, $bytes*, int32_t)},
	{"encryptBlock", "([BI[BI)V", nullptr, 0, $virtualMethod(DESedeCrypt, encryptBlock, void, $bytes*, int32_t, $bytes*, int32_t)},
	{"init", "(ZLjava/lang/String;[B)V", nullptr, 0, $virtualMethod(DESedeCrypt, init, void, bool, $String*, $bytes*), "java.security.InvalidKeyException"},
	{"keyEquals", "([BI[BII)Z", nullptr, $PRIVATE, $method(DESedeCrypt, keyEquals, bool, $bytes*, int32_t, $bytes*, int32_t, int32_t)},
	{}
};

$ClassInfo _DESedeCrypt_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.crypto.provider.DESedeCrypt",
	"com.sun.crypto.provider.DESCrypt",
	nullptr,
	_DESedeCrypt_FieldInfo_,
	_DESedeCrypt_MethodInfo_
};

$Object* allocate$DESedeCrypt($Class* clazz) {
	return $of($alloc(DESedeCrypt));
}

void DESedeCrypt::init$() {
	$DESCrypt::init$();
	$set(this, key1, nullptr);
	$set(this, key2, nullptr);
	$set(this, key3, nullptr);
	$set(this, buf1, $new($bytes, $DESConstants::DES_BLOCK_SIZE));
	$set(this, buf2, $new($bytes, $DESConstants::DES_BLOCK_SIZE));
}

void DESedeCrypt::init(bool decrypting, $String* algorithm, $bytes* keys) {
	bool var$0 = !$nc(algorithm)->equalsIgnoreCase("DESede"_s);
	if (var$0 && !algorithm->equalsIgnoreCase("TripleDES"_s)) {
		$throwNew($InvalidKeyException, "Wrong algorithm: DESede or TripleDES required"_s);
	}
	if ($nc(keys)->length != $DESConstants::DES_BLOCK_SIZE * 3) {
		$throwNew($InvalidKeyException, "Wrong key size"_s);
	}
	$var($bytes, keybuf, $new($bytes, $DESConstants::DES_BLOCK_SIZE));
	$set(this, key1, $new($bytes, 128));
	$System::arraycopy(keys, 0, keybuf, 0, $DESConstants::DES_BLOCK_SIZE);
	expandKey(keybuf);
	$System::arraycopy(this->expandedKey, 0, this->key1, 0, 128);
	if (keyEquals(keybuf, 0, keys, $DESConstants::DES_BLOCK_SIZE * 2, $DESConstants::DES_BLOCK_SIZE)) {
		$set(this, key3, this->key1);
	} else {
		$set(this, key3, $new($bytes, 128));
		$System::arraycopy(keys, $DESConstants::DES_BLOCK_SIZE * 2, keybuf, 0, $DESConstants::DES_BLOCK_SIZE);
		expandKey(keybuf);
		$System::arraycopy(this->expandedKey, 0, this->key3, 0, 128);
	}
	$set(this, key2, $new($bytes, 128));
	$System::arraycopy(keys, $DESConstants::DES_BLOCK_SIZE, keybuf, 0, $DESConstants::DES_BLOCK_SIZE);
	expandKey(keybuf);
	$System::arraycopy(this->expandedKey, 0, this->key2, 0, 128);
}

void DESedeCrypt::encryptBlock($bytes* plain, int32_t plainOffset, $bytes* cipher, int32_t cipherOffset) {
	$set(this, expandedKey, this->key1);
	this->decrypting = false;
	cipherBlock(plain, plainOffset, this->buf1, 0);
	$set(this, expandedKey, this->key2);
	this->decrypting = true;
	cipherBlock(this->buf1, 0, this->buf2, 0);
	$set(this, expandedKey, this->key3);
	this->decrypting = false;
	cipherBlock(this->buf2, 0, cipher, cipherOffset);
}

void DESedeCrypt::decryptBlock($bytes* cipher, int32_t cipherOffset, $bytes* plain, int32_t plainOffset) {
	$set(this, expandedKey, this->key3);
	this->decrypting = true;
	cipherBlock(cipher, cipherOffset, this->buf1, 0);
	$set(this, expandedKey, this->key2);
	this->decrypting = false;
	cipherBlock(this->buf1, 0, this->buf2, 0);
	$set(this, expandedKey, this->key1);
	this->decrypting = true;
	cipherBlock(this->buf2, 0, plain, plainOffset);
}

bool DESedeCrypt::keyEquals($bytes* key1, int32_t off1, $bytes* key2, int32_t off2, int32_t len) {
	for (int32_t i = 0; i < len; ++i) {
		if ($nc(key1)->get(i + off1) != $nc(key2)->get(i + off2)) {
			return false;
		}
	}
	return true;
}

DESedeCrypt::DESedeCrypt() {
}

$Class* DESedeCrypt::load$($String* name, bool initialize) {
	$loadClass(DESedeCrypt, name, initialize, &_DESedeCrypt_ClassInfo_, allocate$DESedeCrypt);
	return class$;
}

$Class* DESedeCrypt::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com