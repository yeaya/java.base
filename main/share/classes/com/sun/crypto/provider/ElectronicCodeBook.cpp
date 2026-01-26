#include <com/sun/crypto/provider/ElectronicCodeBook.h>

#include <com/sun/crypto/provider/FeedbackCipher.h>
#include <com/sun/crypto/provider/SymmetricCipher.h>
#include <java/security/InvalidKeyException.h>
#include <sun/security/util/ArrayUtil.h>
#include <jcpp.h>

using $FeedbackCipher = ::com::sun::crypto::provider::FeedbackCipher;
using $SymmetricCipher = ::com::sun::crypto::provider::SymmetricCipher;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $InvalidKeyException = ::java::security::InvalidKeyException;
using $ArrayUtil = ::sun::security::util::ArrayUtil;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

$CompoundAttribute _ElectronicCodeBook_MethodAnnotations_implECBDecrypt4[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _ElectronicCodeBook_MethodAnnotations_implECBEncrypt5[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$MethodInfo _ElectronicCodeBook_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/crypto/provider/SymmetricCipher;)V", nullptr, 0, $method(ElectronicCodeBook, init$, void, $SymmetricCipher*)},
	{"decrypt", "([BII[BI)I", nullptr, 0, $virtualMethod(ElectronicCodeBook, decrypt, int32_t, $bytes*, int32_t, int32_t, $bytes*, int32_t)},
	{"encrypt", "([BII[BI)I", nullptr, 0, $virtualMethod(ElectronicCodeBook, encrypt, int32_t, $bytes*, int32_t, int32_t, $bytes*, int32_t)},
	{"getFeedback", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(ElectronicCodeBook, getFeedback, $String*)},
	{"implECBDecrypt", "([BII[BI)I", nullptr, $PRIVATE, $method(ElectronicCodeBook, implECBDecrypt, int32_t, $bytes*, int32_t, int32_t, $bytes*, int32_t), nullptr, nullptr, _ElectronicCodeBook_MethodAnnotations_implECBDecrypt4},
	{"implECBEncrypt", "([BII[BI)I", nullptr, $PRIVATE, $method(ElectronicCodeBook, implECBEncrypt, int32_t, $bytes*, int32_t, int32_t, $bytes*, int32_t), nullptr, nullptr, _ElectronicCodeBook_MethodAnnotations_implECBEncrypt5},
	{"init", "(ZLjava/lang/String;[B[B)V", nullptr, 0, $virtualMethod(ElectronicCodeBook, init, void, bool, $String*, $bytes*, $bytes*), "java.security.InvalidKeyException"},
	{"reset", "()V", nullptr, 0, $virtualMethod(ElectronicCodeBook, reset, void)},
	{"restore", "()V", nullptr, 0, $virtualMethod(ElectronicCodeBook, restore, void)},
	{"save", "()V", nullptr, 0, $virtualMethod(ElectronicCodeBook, save, void)},
	{}
};

$ClassInfo _ElectronicCodeBook_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.crypto.provider.ElectronicCodeBook",
	"com.sun.crypto.provider.FeedbackCipher",
	nullptr,
	nullptr,
	_ElectronicCodeBook_MethodInfo_
};

$Object* allocate$ElectronicCodeBook($Class* clazz) {
	return $of($alloc(ElectronicCodeBook));
}

void ElectronicCodeBook::init$($SymmetricCipher* embeddedCipher) {
	$FeedbackCipher::init$(embeddedCipher);
}

$String* ElectronicCodeBook::getFeedback() {
	return "ECB"_s;
}

void ElectronicCodeBook::reset() {
}

void ElectronicCodeBook::save() {
}

void ElectronicCodeBook::restore() {
}

void ElectronicCodeBook::init(bool decrypting, $String* algorithm, $bytes* key, $bytes* iv) {
	if ((key == nullptr) || (iv != nullptr)) {
		$throwNew($InvalidKeyException, "Internal error"_s);
	}
	$nc(this->embeddedCipher)->init(decrypting, algorithm, key);
}

int32_t ElectronicCodeBook::implECBEncrypt($bytes* in, int32_t inOff, int32_t len, $bytes* out, int32_t outOff) {
	for (int32_t i = len; i >= this->blockSize; i -= this->blockSize) {
		$nc(this->embeddedCipher)->encryptBlock(in, inOff, out, outOff);
		inOff += this->blockSize;
		outOff += this->blockSize;
	}
	return len;
}

int32_t ElectronicCodeBook::encrypt($bytes* in, int32_t inOff, int32_t len, $bytes* out, int32_t outOff) {
	$ArrayUtil::blockSizeCheck(len, this->blockSize);
	$ArrayUtil::nullAndBoundsCheck(in, inOff, len);
	$ArrayUtil::nullAndBoundsCheck(out, outOff, len);
	return implECBEncrypt(in, inOff, len, out, outOff);
}

int32_t ElectronicCodeBook::implECBDecrypt($bytes* in, int32_t inOff, int32_t len, $bytes* out, int32_t outOff) {
	for (int32_t i = len; i >= this->blockSize; i -= this->blockSize) {
		$nc(this->embeddedCipher)->decryptBlock(in, inOff, out, outOff);
		inOff += this->blockSize;
		outOff += this->blockSize;
	}
	return len;
}

int32_t ElectronicCodeBook::decrypt($bytes* in, int32_t inOff, int32_t len, $bytes* out, int32_t outOff) {
	$ArrayUtil::blockSizeCheck(len, this->blockSize);
	$ArrayUtil::nullAndBoundsCheck(in, inOff, len);
	$ArrayUtil::nullAndBoundsCheck(out, outOff, len);
	return implECBDecrypt(in, inOff, len, out, outOff);
}

ElectronicCodeBook::ElectronicCodeBook() {
}

$Class* ElectronicCodeBook::load$($String* name, bool initialize) {
	$loadClass(ElectronicCodeBook, name, initialize, &_ElectronicCodeBook_ClassInfo_, allocate$ElectronicCodeBook);
	return class$;
}

$Class* ElectronicCodeBook::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com