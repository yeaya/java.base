#include <com/sun/crypto/provider/AESKeyWrap.h>
#include <com/sun/crypto/provider/AESCrypt.h>
#include <com/sun/crypto/provider/FeedbackCipher.h>
#include <com/sun/crypto/provider/KWUtil.h>
#include <com/sun/crypto/provider/SymmetricCipher.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/security/InvalidAlgorithmParameterException.h>
#include <java/security/InvalidKeyException.h>
#include <java/security/MessageDigest.h>
#include <javax/crypto/IllegalBlockSizeException.h>
#include <jcpp.h>

#undef ICV1

using $AESCrypt = ::com::sun::crypto::provider::AESCrypt;
using $FeedbackCipher = ::com::sun::crypto::provider::FeedbackCipher;
using $KWUtil = ::com::sun::crypto::provider::KWUtil;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $InvalidAlgorithmParameterException = ::java::security::InvalidAlgorithmParameterException;
using $InvalidKeyException = ::java::security::InvalidKeyException;
using $MessageDigest = ::java::security::MessageDigest;
using $IllegalBlockSizeException = ::javax::crypto::IllegalBlockSizeException;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

$bytes* AESKeyWrap::ICV1 = nullptr;

void AESKeyWrap::init$() {
	$FeedbackCipher::init$($$new($AESCrypt));
}

$String* AESKeyWrap::getFeedback() {
	return "KW"_s;
}

void AESKeyWrap::save() {
	$throwNew($UnsupportedOperationException, "save not supported"_s);
}

void AESKeyWrap::restore() {
	$throwNew($UnsupportedOperationException, "restore not supported"_s);
}

void AESKeyWrap::init(bool decrypting, $String* algorithm, $bytes* key, $bytes* iv) {
	if (key == nullptr) {
		$throwNew($InvalidKeyException, "Invalid null key"_s);
	}
	if (iv != nullptr && iv->length != 8) {
		$throwNew($InvalidAlgorithmParameterException, "Invalid IV"_s);
	}
	$nc(this->embeddedCipher)->init(decrypting, algorithm, key);
	$set(this, iv, iv == nullptr ? AESKeyWrap::ICV1 : iv);
}

void AESKeyWrap::reset() {
	$throwNew($UnsupportedOperationException, "reset not supported"_s);
}

int32_t AESKeyWrap::encrypt($bytes* pt, int32_t ptOfs, int32_t ptLen, $bytes* ct, int32_t ctOfs) {
	$throwNew($UnsupportedOperationException, "multi-part not supported"_s);
	$shouldNotReachHere();
}

int32_t AESKeyWrap::decrypt($bytes* ct, int32_t ctOfs, int32_t ctLen, $bytes* pt, int32_t ptOfs) {
	$throwNew($UnsupportedOperationException, "multi-part not supported"_s);
	$shouldNotReachHere();
}

int32_t AESKeyWrap::encryptFinal($bytes* pt, int32_t dummy1, int32_t ptLen, $bytes* dummy2, int32_t dummy3) {
	if (ptLen < 24 || (ptLen % 8) != 0) {
		$throwNew($IllegalBlockSizeException, "data should be at least 16 bytes and multiples of 8"_s);
	}
	return $KWUtil::W(this->iv, pt, ptLen, this->embeddedCipher);
}

int32_t AESKeyWrap::decryptFinal($bytes* ct, int32_t dummy1, int32_t ctLen, $bytes* dummy2, int32_t dummy3) {
	if (ctLen < 24 || (ctLen % 8) != 0) {
		$throwNew($IllegalBlockSizeException, "data should be at least 24 bytes and multiples of 8"_s);
	}
	$var($bytes, ivOut, $new($bytes, 8));
	ctLen = $KWUtil::W_INV(ct, ctLen, ivOut, this->embeddedCipher);
	if (!$MessageDigest::isEqual(ivOut, this->iv)) {
		$throwNew($IllegalBlockSizeException, "Integrity check failed"_s);
	}
	return ctLen;
}

void AESKeyWrap::clinit$($Class* clazz) {
	$assignStatic(AESKeyWrap::ICV1, $new($bytes, {
		(int8_t)166,
		(int8_t)166,
		(int8_t)166,
		(int8_t)166,
		(int8_t)166,
		(int8_t)166,
		(int8_t)166,
		(int8_t)166
	}));
}

AESKeyWrap::AESKeyWrap() {
}

$Class* AESKeyWrap::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"ICV1", "[B", nullptr, $STATIC | $FINAL, $staticField(AESKeyWrap, ICV1)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(AESKeyWrap, init$, void)},
		{"decrypt", "([BII[BI)I", nullptr, 0, $virtualMethod(AESKeyWrap, decrypt, int32_t, $bytes*, int32_t, int32_t, $bytes*, int32_t)},
		{"decryptFinal", "([BII[BI)I", nullptr, 0, $virtualMethod(AESKeyWrap, decryptFinal, int32_t, $bytes*, int32_t, int32_t, $bytes*, int32_t), "javax.crypto.IllegalBlockSizeException"},
		{"encrypt", "([BII[BI)I", nullptr, 0, $virtualMethod(AESKeyWrap, encrypt, int32_t, $bytes*, int32_t, int32_t, $bytes*, int32_t)},
		{"encryptFinal", "([BII[BI)I", nullptr, 0, $virtualMethod(AESKeyWrap, encryptFinal, int32_t, $bytes*, int32_t, int32_t, $bytes*, int32_t), "javax.crypto.IllegalBlockSizeException"},
		{"getFeedback", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(AESKeyWrap, getFeedback, $String*)},
		{"init", "(ZLjava/lang/String;[B[B)V", nullptr, 0, $virtualMethod(AESKeyWrap, init, void, bool, $String*, $bytes*, $bytes*), "java.security.InvalidKeyException,java.security.InvalidAlgorithmParameterException"},
		{"reset", "()V", nullptr, 0, $virtualMethod(AESKeyWrap, reset, void)},
		{"restore", "()V", nullptr, 0, $virtualMethod(AESKeyWrap, restore, void)},
		{"save", "()V", nullptr, 0, $virtualMethod(AESKeyWrap, save, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.crypto.provider.AESKeyWrap",
		"com.sun.crypto.provider.FeedbackCipher",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(AESKeyWrap, name, initialize, &classInfo$$, AESKeyWrap::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(AESKeyWrap);
	});
	return class$;
}

$Class* AESKeyWrap::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com