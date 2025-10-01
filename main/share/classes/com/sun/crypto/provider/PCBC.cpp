#include <com/sun/crypto/provider/PCBC.h>

#include <com/sun/crypto/provider/FeedbackCipher.h>
#include <com/sun/crypto/provider/SymmetricCipher.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/InvalidKeyException.h>
#include <sun/security/util/ArrayUtil.h>
#include <jcpp.h>

using $FeedbackCipher = ::com::sun::crypto::provider::FeedbackCipher;
using $SymmetricCipher = ::com::sun::crypto::provider::SymmetricCipher;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InvalidKeyException = ::java::security::InvalidKeyException;
using $ArrayUtil = ::sun::security::util::ArrayUtil;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

$FieldInfo _PCBC_FieldInfo_[] = {
	{"k", "[B", nullptr, $PRIVATE | $FINAL, $field(PCBC, k)},
	{"kSave", "[B", nullptr, $PRIVATE, $field(PCBC, kSave)},
	{}
};

$MethodInfo _PCBC_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/crypto/provider/SymmetricCipher;)V", nullptr, 0, $method(static_cast<void(PCBC::*)($SymmetricCipher*)>(&PCBC::init$))},
	{"decrypt", "([BII[BI)I", nullptr, 0},
	{"encrypt", "([BII[BI)I", nullptr, 0},
	{"getFeedback", "()Ljava/lang/String;", nullptr, 0},
	{"init", "(ZLjava/lang/String;[B[B)V", nullptr, 0, nullptr, "java.security.InvalidKeyException"},
	{"reset", "()V", nullptr, 0},
	{"restore", "()V", nullptr, 0},
	{"save", "()V", nullptr, 0},
	{}
};

$ClassInfo _PCBC_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.crypto.provider.PCBC",
	"com.sun.crypto.provider.FeedbackCipher",
	nullptr,
	_PCBC_FieldInfo_,
	_PCBC_MethodInfo_
};

$Object* allocate$PCBC($Class* clazz) {
	return $of($alloc(PCBC));
}

void PCBC::init$($SymmetricCipher* embeddedCipher) {
	$FeedbackCipher::init$(embeddedCipher);
	$set(this, kSave, nullptr);
	$set(this, k, $new($bytes, this->blockSize));
}

$String* PCBC::getFeedback() {
	return "PCBC"_s;
}

void PCBC::init(bool decrypting, $String* algorithm, $bytes* key, $bytes* iv) {
	if ((key == nullptr) || (iv == nullptr) || ($nc(iv)->length != this->blockSize)) {
		$throwNew($InvalidKeyException, "Internal error"_s);
	}
	$set(this, iv, iv);
	reset();
	$nc(this->embeddedCipher)->init(decrypting, algorithm, key);
}

void PCBC::reset() {
	$System::arraycopy(this->iv, 0, this->k, 0, this->blockSize);
}

void PCBC::save() {
	if (this->kSave == nullptr) {
		$set(this, kSave, $new($bytes, this->blockSize));
	}
	$System::arraycopy(this->k, 0, this->kSave, 0, this->blockSize);
}

void PCBC::restore() {
	$System::arraycopy(this->kSave, 0, this->k, 0, this->blockSize);
}

int32_t PCBC::encrypt($bytes* plain, int32_t plainOffset, int32_t plainLen, $bytes* cipher, int32_t cipherOffset) {
	$ArrayUtil::blockSizeCheck(plainLen, this->blockSize);
	$ArrayUtil::nullAndBoundsCheck(plain, plainOffset, plainLen);
	$ArrayUtil::nullAndBoundsCheck(cipher, cipherOffset, plainLen);
	int32_t i = 0;
	int32_t endIndex = plainOffset + plainLen;
	for (; plainOffset < endIndex; plainOffset += this->blockSize, cipherOffset += this->blockSize) {
		for (i = 0; i < this->blockSize; ++i) {
			(*$nc(this->k))[i] ^= $nc(plain)->get(i + plainOffset);
		}
		$nc(this->embeddedCipher)->encryptBlock(this->k, 0, cipher, cipherOffset);
		for (i = 0; i < this->blockSize; ++i) {
			$nc(this->k)->set(i, (int8_t)($nc(plain)->get(i + plainOffset) ^ $nc(cipher)->get(i + cipherOffset)));
		}
	}
	return plainLen;
}

int32_t PCBC::decrypt($bytes* cipher, int32_t cipherOffset, int32_t cipherLen, $bytes* plain, int32_t plainOffset) {
	$ArrayUtil::blockSizeCheck(cipherLen, this->blockSize);
	$ArrayUtil::nullAndBoundsCheck(cipher, cipherOffset, cipherLen);
	$ArrayUtil::nullAndBoundsCheck(plain, plainOffset, cipherLen);
	int32_t i = 0;
	int32_t endIndex = cipherOffset + cipherLen;
	for (; cipherOffset < endIndex; plainOffset += this->blockSize, cipherOffset += this->blockSize) {
		$nc(this->embeddedCipher)->decryptBlock(cipher, cipherOffset, plain, plainOffset);
		for (i = 0; i < this->blockSize; ++i) {
			(*$nc(plain))[i + plainOffset] ^= $nc(this->k)->get(i);
		}
		for (i = 0; i < this->blockSize; ++i) {
			$nc(this->k)->set(i, (int8_t)($nc(plain)->get(i + plainOffset) ^ $nc(cipher)->get(i + cipherOffset)));
		}
	}
	return cipherLen;
}

PCBC::PCBC() {
}

$Class* PCBC::load$($String* name, bool initialize) {
	$loadClass(PCBC, name, initialize, &_PCBC_ClassInfo_, allocate$PCBC);
	return class$;
}

$Class* PCBC::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com