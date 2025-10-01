#include <com/sun/crypto/provider/OutputFeedback.h>

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

$FieldInfo _OutputFeedback_FieldInfo_[] = {
	{"k", "[B", nullptr, $PRIVATE, $field(OutputFeedback, k)},
	{"register", "[B", nullptr, $PRIVATE, $field(OutputFeedback, register$)},
	{"numBytes", "I", nullptr, $PRIVATE, $field(OutputFeedback, numBytes)},
	{"registerSave", "[B", nullptr, $PRIVATE, $field(OutputFeedback, registerSave)},
	{}
};

$MethodInfo _OutputFeedback_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/crypto/provider/SymmetricCipher;I)V", nullptr, 0, $method(static_cast<void(OutputFeedback::*)($SymmetricCipher*,int32_t)>(&OutputFeedback::init$))},
	{"decrypt", "([BII[BI)I", nullptr, 0},
	{"decryptFinal", "([BII[BI)I", nullptr, 0},
	{"encrypt", "([BII[BI)I", nullptr, 0},
	{"encryptFinal", "([BII[BI)I", nullptr, 0},
	{"getFeedback", "()Ljava/lang/String;", nullptr, 0},
	{"init", "(ZLjava/lang/String;[B[B)V", nullptr, 0, nullptr, "java.security.InvalidKeyException"},
	{"reset", "()V", nullptr, 0},
	{"restore", "()V", nullptr, 0},
	{"save", "()V", nullptr, 0},
	{}
};

$ClassInfo _OutputFeedback_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.crypto.provider.OutputFeedback",
	"com.sun.crypto.provider.FeedbackCipher",
	nullptr,
	_OutputFeedback_FieldInfo_,
	_OutputFeedback_MethodInfo_
};

$Object* allocate$OutputFeedback($Class* clazz) {
	return $of($alloc(OutputFeedback));
}

void OutputFeedback::init$($SymmetricCipher* embeddedCipher, int32_t numBytes) {
	$FeedbackCipher::init$(embeddedCipher);
	$set(this, k, nullptr);
	$set(this, register$, nullptr);
	$set(this, registerSave, nullptr);
	if (numBytes > this->blockSize) {
		numBytes = this->blockSize;
	}
	this->numBytes = numBytes;
	$set(this, k, $new($bytes, this->blockSize));
	$set(this, register$, $new($bytes, this->blockSize));
}

$String* OutputFeedback::getFeedback() {
	return "OFB"_s;
}

void OutputFeedback::init(bool decrypting, $String* algorithm, $bytes* key, $bytes* iv) {
	if ((key == nullptr) || (iv == nullptr) || ($nc(iv)->length != this->blockSize)) {
		$throwNew($InvalidKeyException, "Internal error"_s);
	}
	$set(this, iv, iv);
	reset();
	$nc(this->embeddedCipher)->init(false, algorithm, key);
}

void OutputFeedback::reset() {
	$System::arraycopy(this->iv, 0, this->register$, 0, this->blockSize);
}

void OutputFeedback::save() {
	if (this->registerSave == nullptr) {
		$set(this, registerSave, $new($bytes, this->blockSize));
	}
	$System::arraycopy(this->register$, 0, this->registerSave, 0, this->blockSize);
}

void OutputFeedback::restore() {
	$System::arraycopy(this->registerSave, 0, this->register$, 0, this->blockSize);
}

int32_t OutputFeedback::encrypt($bytes* plain, int32_t plainOffset, int32_t plainLen, $bytes* cipher, int32_t cipherOffset) {
	$ArrayUtil::blockSizeCheck(plainLen, this->numBytes);
	$ArrayUtil::nullAndBoundsCheck(plain, plainOffset, plainLen);
	$ArrayUtil::nullAndBoundsCheck(cipher, cipherOffset, plainLen);
	int32_t nShift = this->blockSize - this->numBytes;
	int32_t loopCount = $div(plainLen, this->numBytes);
	for (; loopCount > 0; plainOffset += this->numBytes, cipherOffset += this->numBytes, --loopCount) {
		$nc(this->embeddedCipher)->encryptBlock(this->register$, 0, this->k, 0);
		for (int32_t i = 0; i < this->numBytes; ++i) {
			$nc(cipher)->set(i + cipherOffset, (int8_t)($nc(this->k)->get(i) ^ $nc(plain)->get(i + plainOffset)));
		}
		if (nShift != 0) {
			$System::arraycopy(this->register$, this->numBytes, this->register$, 0, nShift);
		}
		$System::arraycopy(this->k, 0, this->register$, nShift, this->numBytes);
	}
	return plainLen;
}

int32_t OutputFeedback::encryptFinal($bytes* plain, int32_t plainOffset, int32_t plainLen, $bytes* cipher, int32_t cipherOffset) {
	$ArrayUtil::nullAndBoundsCheck(plain, plainOffset, plainLen);
	$ArrayUtil::nullAndBoundsCheck(cipher, cipherOffset, plainLen);
	int32_t oddBytes = $mod(plainLen, this->numBytes);
	int32_t len = encrypt(plain, plainOffset, (plainLen - oddBytes), cipher, cipherOffset);
	plainOffset += len;
	cipherOffset += len;
	if (oddBytes != 0) {
		$nc(this->embeddedCipher)->encryptBlock(this->register$, 0, this->k, 0);
		for (int32_t i = 0; i < oddBytes; ++i) {
			$nc(cipher)->set(i + cipherOffset, (int8_t)($nc(this->k)->get(i) ^ $nc(plain)->get(i + plainOffset)));
		}
	}
	return plainLen;
}

int32_t OutputFeedback::decrypt($bytes* cipher, int32_t cipherOffset, int32_t cipherLen, $bytes* plain, int32_t plainOffset) {
	return encrypt(cipher, cipherOffset, cipherLen, plain, plainOffset);
}

int32_t OutputFeedback::decryptFinal($bytes* cipher, int32_t cipherOffset, int32_t cipherLen, $bytes* plain, int32_t plainOffset) {
	return encryptFinal(cipher, cipherOffset, cipherLen, plain, plainOffset);
}

OutputFeedback::OutputFeedback() {
}

$Class* OutputFeedback::load$($String* name, bool initialize) {
	$loadClass(OutputFeedback, name, initialize, &_OutputFeedback_ClassInfo_, allocate$OutputFeedback);
	return class$;
}

$Class* OutputFeedback::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com