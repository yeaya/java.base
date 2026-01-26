#include <com/sun/crypto/provider/FeedbackCipher.h>

#include <com/sun/crypto/provider/SymmetricCipher.h>
#include <jcpp.h>

using $SymmetricCipher = ::com::sun::crypto::provider::SymmetricCipher;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

$FieldInfo _FeedbackCipher_FieldInfo_[] = {
	{"embeddedCipher", "Lcom/sun/crypto/provider/SymmetricCipher;", nullptr, $FINAL, $field(FeedbackCipher, embeddedCipher)},
	{"blockSize", "I", nullptr, $FINAL, $field(FeedbackCipher, blockSize)},
	{"iv", "[B", nullptr, 0, $field(FeedbackCipher, iv)},
	{}
};

$MethodInfo _FeedbackCipher_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/crypto/provider/SymmetricCipher;)V", nullptr, 0, $method(FeedbackCipher, init$, void, $SymmetricCipher*)},
	{"decrypt", "([BII[BI)I", nullptr, $ABSTRACT, $virtualMethod(FeedbackCipher, decrypt, int32_t, $bytes*, int32_t, int32_t, $bytes*, int32_t)},
	{"decryptFinal", "([BII[BI)I", nullptr, 0, $virtualMethod(FeedbackCipher, decryptFinal, int32_t, $bytes*, int32_t, int32_t, $bytes*, int32_t), "javax.crypto.IllegalBlockSizeException,javax.crypto.ShortBufferException"},
	{"encrypt", "([BII[BI)I", nullptr, $ABSTRACT, $virtualMethod(FeedbackCipher, encrypt, int32_t, $bytes*, int32_t, int32_t, $bytes*, int32_t)},
	{"encryptFinal", "([BII[BI)I", nullptr, 0, $virtualMethod(FeedbackCipher, encryptFinal, int32_t, $bytes*, int32_t, int32_t, $bytes*, int32_t), "javax.crypto.IllegalBlockSizeException,javax.crypto.ShortBufferException"},
	{"getBlockSize", "()I", nullptr, $FINAL, $method(FeedbackCipher, getBlockSize, int32_t)},
	{"getEmbeddedCipher", "()Lcom/sun/crypto/provider/SymmetricCipher;", nullptr, $FINAL, $method(FeedbackCipher, getEmbeddedCipher, $SymmetricCipher*)},
	{"getFeedback", "()Ljava/lang/String;", nullptr, $ABSTRACT, $virtualMethod(FeedbackCipher, getFeedback, $String*)},
	{"getIV", "()[B", nullptr, $FINAL, $method(FeedbackCipher, getIV, $bytes*)},
	{"init", "(ZLjava/lang/String;[B[B)V", nullptr, $ABSTRACT, $virtualMethod(FeedbackCipher, init, void, bool, $String*, $bytes*, $bytes*), "java.security.InvalidKeyException,java.security.InvalidAlgorithmParameterException"},
	{"reset", "()V", nullptr, $ABSTRACT, $virtualMethod(FeedbackCipher, reset, void)},
	{"restore", "()V", nullptr, $ABSTRACT, $virtualMethod(FeedbackCipher, restore, void)},
	{"save", "()V", nullptr, $ABSTRACT, $virtualMethod(FeedbackCipher, save, void)},
	{}
};

$ClassInfo _FeedbackCipher_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"com.sun.crypto.provider.FeedbackCipher",
	"java.lang.Object",
	nullptr,
	_FeedbackCipher_FieldInfo_,
	_FeedbackCipher_MethodInfo_
};

$Object* allocate$FeedbackCipher($Class* clazz) {
	return $of($alloc(FeedbackCipher));
}

void FeedbackCipher::init$($SymmetricCipher* embeddedCipher) {
	$set(this, embeddedCipher, embeddedCipher);
	this->blockSize = $nc(embeddedCipher)->getBlockSize();
}

$SymmetricCipher* FeedbackCipher::getEmbeddedCipher() {
	return this->embeddedCipher;
}

int32_t FeedbackCipher::getBlockSize() {
	return this->blockSize;
}

$bytes* FeedbackCipher::getIV() {
	return this->iv;
}

int32_t FeedbackCipher::encryptFinal($bytes* plain, int32_t plainOffset, int32_t plainLen, $bytes* cipher, int32_t cipherOffset) {
	return encrypt(plain, plainOffset, plainLen, cipher, cipherOffset);
}

int32_t FeedbackCipher::decryptFinal($bytes* cipher, int32_t cipherOffset, int32_t cipherLen, $bytes* plain, int32_t plainOffset) {
	return decrypt(cipher, cipherOffset, cipherLen, plain, plainOffset);
}

FeedbackCipher::FeedbackCipher() {
}

$Class* FeedbackCipher::load$($String* name, bool initialize) {
	$loadClass(FeedbackCipher, name, initialize, &_FeedbackCipher_ClassInfo_, allocate$FeedbackCipher);
	return class$;
}

$Class* FeedbackCipher::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com