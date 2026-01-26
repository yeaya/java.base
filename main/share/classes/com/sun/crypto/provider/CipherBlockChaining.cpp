#include <com/sun/crypto/provider/CipherBlockChaining.h>

#include <com/sun/crypto/provider/FeedbackCipher.h>
#include <com/sun/crypto/provider/SymmetricCipher.h>
#include <java/security/InvalidKeyException.h>
#include <sun/security/util/ArrayUtil.h>
#include <jcpp.h>

using $FeedbackCipher = ::com::sun::crypto::provider::FeedbackCipher;
using $SymmetricCipher = ::com::sun::crypto::provider::SymmetricCipher;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InvalidKeyException = ::java::security::InvalidKeyException;
using $ArrayUtil = ::sun::security::util::ArrayUtil;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

$CompoundAttribute _CipherBlockChaining_MethodAnnotations_implDecrypt4[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _CipherBlockChaining_MethodAnnotations_implEncrypt5[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$FieldInfo _CipherBlockChaining_FieldInfo_[] = {
	{"r", "[B", nullptr, $PROTECTED, $field(CipherBlockChaining, r)},
	{"k", "[B", nullptr, $PRIVATE, $field(CipherBlockChaining, k)},
	{"rSave", "[B", nullptr, $PRIVATE, $field(CipherBlockChaining, rSave)},
	{}
};

$MethodInfo _CipherBlockChaining_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/crypto/provider/SymmetricCipher;)V", nullptr, 0, $method(CipherBlockChaining, init$, void, $SymmetricCipher*)},
	{"decrypt", "([BII[BI)I", nullptr, 0, $virtualMethod(CipherBlockChaining, decrypt, int32_t, $bytes*, int32_t, int32_t, $bytes*, int32_t)},
	{"encrypt", "([BII[BI)I", nullptr, 0, $virtualMethod(CipherBlockChaining, encrypt, int32_t, $bytes*, int32_t, int32_t, $bytes*, int32_t)},
	{"getFeedback", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(CipherBlockChaining, getFeedback, $String*)},
	{"implDecrypt", "([BII[BI)I", nullptr, $PRIVATE, $method(CipherBlockChaining, implDecrypt, int32_t, $bytes*, int32_t, int32_t, $bytes*, int32_t), nullptr, nullptr, _CipherBlockChaining_MethodAnnotations_implDecrypt4},
	{"implEncrypt", "([BII[BI)I", nullptr, $PRIVATE, $method(CipherBlockChaining, implEncrypt, int32_t, $bytes*, int32_t, int32_t, $bytes*, int32_t), nullptr, nullptr, _CipherBlockChaining_MethodAnnotations_implEncrypt5},
	{"init", "(ZLjava/lang/String;[B[B)V", nullptr, 0, $virtualMethod(CipherBlockChaining, init, void, bool, $String*, $bytes*, $bytes*), "java.security.InvalidKeyException"},
	{"reset", "()V", nullptr, 0, $virtualMethod(CipherBlockChaining, reset, void)},
	{"restore", "()V", nullptr, 0, $virtualMethod(CipherBlockChaining, restore, void)},
	{"save", "()V", nullptr, 0, $virtualMethod(CipherBlockChaining, save, void)},
	{}
};

$ClassInfo _CipherBlockChaining_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.crypto.provider.CipherBlockChaining",
	"com.sun.crypto.provider.FeedbackCipher",
	nullptr,
	_CipherBlockChaining_FieldInfo_,
	_CipherBlockChaining_MethodInfo_
};

$Object* allocate$CipherBlockChaining($Class* clazz) {
	return $of($alloc(CipherBlockChaining));
}

void CipherBlockChaining::init$($SymmetricCipher* embeddedCipher) {
	$FeedbackCipher::init$(embeddedCipher);
	$set(this, rSave, nullptr);
	$set(this, k, $new($bytes, this->blockSize));
	$set(this, r, $new($bytes, this->blockSize));
}

$String* CipherBlockChaining::getFeedback() {
	return "CBC"_s;
}

void CipherBlockChaining::init(bool decrypting, $String* algorithm, $bytes* key, $bytes* iv) {
	if ((key == nullptr) || (iv == nullptr) || ($nc(iv)->length != this->blockSize)) {
		$throwNew($InvalidKeyException, "Internal error"_s);
	}
	$set(this, iv, iv);
	reset();
	$nc(this->embeddedCipher)->init(decrypting, algorithm, key);
}

void CipherBlockChaining::reset() {
	$System::arraycopy(this->iv, 0, this->r, 0, this->blockSize);
}

void CipherBlockChaining::save() {
	if (this->rSave == nullptr) {
		$set(this, rSave, $new($bytes, this->blockSize));
	}
	$System::arraycopy(this->r, 0, this->rSave, 0, this->blockSize);
}

void CipherBlockChaining::restore() {
	$System::arraycopy(this->rSave, 0, this->r, 0, this->blockSize);
}

int32_t CipherBlockChaining::encrypt($bytes* plain, int32_t plainOffset, int32_t plainLen, $bytes* cipher, int32_t cipherOffset) {
	if (plainLen <= 0) {
		return plainLen;
	}
	$ArrayUtil::blockSizeCheck(plainLen, this->blockSize);
	$ArrayUtil::nullAndBoundsCheck(plain, plainOffset, plainLen);
	$ArrayUtil::nullAndBoundsCheck(cipher, cipherOffset, plainLen);
	return implEncrypt(plain, plainOffset, plainLen, cipher, cipherOffset);
}

int32_t CipherBlockChaining::implEncrypt($bytes* plain, int32_t plainOffset, int32_t plainLen, $bytes* cipher, int32_t cipherOffset) {
	int32_t endIndex = plainOffset + plainLen;
	for (; plainOffset < endIndex; plainOffset += this->blockSize, cipherOffset += this->blockSize) {
		for (int32_t i = 0; i < this->blockSize; ++i) {
			$nc(this->k)->set(i, (int8_t)($nc(plain)->get(i + plainOffset) ^ $nc(this->r)->get(i)));
		}
		$nc(this->embeddedCipher)->encryptBlock(this->k, 0, cipher, cipherOffset);
		$System::arraycopy(cipher, cipherOffset, this->r, 0, this->blockSize);
	}
	return plainLen;
}

int32_t CipherBlockChaining::decrypt($bytes* cipher, int32_t cipherOffset, int32_t cipherLen, $bytes* plain, int32_t plainOffset) {
	if (cipherLen <= 0) {
		return cipherLen;
	}
	$ArrayUtil::blockSizeCheck(cipherLen, this->blockSize);
	$ArrayUtil::nullAndBoundsCheck(cipher, cipherOffset, cipherLen);
	$ArrayUtil::nullAndBoundsCheck(plain, plainOffset, cipherLen);
	return implDecrypt(cipher, cipherOffset, cipherLen, plain, plainOffset);
}

int32_t CipherBlockChaining::implDecrypt($bytes* cipher, int32_t cipherOffset, int32_t cipherLen, $bytes* plain, int32_t plainOffset) {
	int32_t endIndex = cipherOffset + cipherLen;
	for (; cipherOffset < endIndex; cipherOffset += this->blockSize, plainOffset += this->blockSize) {
		$nc(this->embeddedCipher)->decryptBlock(cipher, cipherOffset, this->k, 0);
		for (int32_t i = 0; i < this->blockSize; ++i) {
			$nc(plain)->set(i + plainOffset, (int8_t)($nc(this->k)->get(i) ^ $nc(this->r)->get(i)));
		}
		$System::arraycopy(cipher, cipherOffset, this->r, 0, this->blockSize);
	}
	return cipherLen;
}

CipherBlockChaining::CipherBlockChaining() {
}

$Class* CipherBlockChaining::load$($String* name, bool initialize) {
	$loadClass(CipherBlockChaining, name, initialize, &_CipherBlockChaining_ClassInfo_, allocate$CipherBlockChaining);
	return class$;
}

$Class* CipherBlockChaining::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com