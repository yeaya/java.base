#include <com/sun/crypto/provider/FeedbackCipher.h>

#include <com/sun/crypto/provider/SymmetricCipher.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
	{"<init>", "(Lcom/sun/crypto/provider/SymmetricCipher;)V", nullptr, 0, $method(static_cast<void(FeedbackCipher::*)($SymmetricCipher*)>(&FeedbackCipher::init$))},
	{"decrypt", "([BII[BI)I", nullptr, $ABSTRACT},
	{"decryptFinal", "([BII[BI)I", nullptr, 0, nullptr, "javax.crypto.IllegalBlockSizeException,javax.crypto.ShortBufferException"},
	{"encrypt", "([BII[BI)I", nullptr, $ABSTRACT},
	{"encryptFinal", "([BII[BI)I", nullptr, 0, nullptr, "javax.crypto.IllegalBlockSizeException,javax.crypto.ShortBufferException"},
	{"getBlockSize", "()I", nullptr, $FINAL, $method(static_cast<int32_t(FeedbackCipher::*)()>(&FeedbackCipher::getBlockSize))},
	{"getEmbeddedCipher", "()Lcom/sun/crypto/provider/SymmetricCipher;", nullptr, $FINAL, $method(static_cast<$SymmetricCipher*(FeedbackCipher::*)()>(&FeedbackCipher::getEmbeddedCipher))},
	{"getFeedback", "()Ljava/lang/String;", nullptr, $ABSTRACT},
	{"getIV", "()[B", nullptr, $FINAL, $method(static_cast<$bytes*(FeedbackCipher::*)()>(&FeedbackCipher::getIV))},
	{"init", "(ZLjava/lang/String;[B[B)V", nullptr, $ABSTRACT, nullptr, "java.security.InvalidKeyException,java.security.InvalidAlgorithmParameterException"},
	{"reset", "()V", nullptr, $ABSTRACT},
	{"restore", "()V", nullptr, $ABSTRACT},
	{"save", "()V", nullptr, $ABSTRACT},
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