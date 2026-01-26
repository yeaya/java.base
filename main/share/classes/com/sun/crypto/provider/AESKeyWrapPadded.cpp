#include <com/sun/crypto/provider/AESKeyWrapPadded.h>

#include <com/sun/crypto/provider/AESCrypt.h>
#include <com/sun/crypto/provider/FeedbackCipher.h>
#include <com/sun/crypto/provider/KWUtil.h>
#include <com/sun/crypto/provider/SymmetricCipher.h>
#include <java/lang/AssertionError.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/security/InvalidAlgorithmParameterException.h>
#include <java/security/InvalidKeyException.h>
#include <javax/crypto/IllegalBlockSizeException.h>
#include <jcpp.h>

#undef ICV2
#undef PAD_BLK

using $AESCrypt = ::com::sun::crypto::provider::AESCrypt;
using $FeedbackCipher = ::com::sun::crypto::provider::FeedbackCipher;
using $KWUtil = ::com::sun::crypto::provider::KWUtil;
using $SymmetricCipher = ::com::sun::crypto::provider::SymmetricCipher;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $InvalidAlgorithmParameterException = ::java::security::InvalidAlgorithmParameterException;
using $InvalidKeyException = ::java::security::InvalidKeyException;
using $IllegalBlockSizeException = ::javax::crypto::IllegalBlockSizeException;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

$FieldInfo _AESKeyWrapPadded_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(AESKeyWrapPadded, $assertionsDisabled)},
	{"ICV2", "[B", nullptr, $STATIC | $FINAL, $staticField(AESKeyWrapPadded, ICV2)},
	{"PAD_BLK", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AESKeyWrapPadded, PAD_BLK)},
	{}
};

$MethodInfo _AESKeyWrapPadded_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(AESKeyWrapPadded, init$, void)},
	{"decrypt", "([BII[BI)I", nullptr, 0, $virtualMethod(AESKeyWrapPadded, decrypt, int32_t, $bytes*, int32_t, int32_t, $bytes*, int32_t)},
	{"decryptFinal", "([BII[BI)I", nullptr, 0, $virtualMethod(AESKeyWrapPadded, decryptFinal, int32_t, $bytes*, int32_t, int32_t, $bytes*, int32_t), "javax.crypto.IllegalBlockSizeException"},
	{"encrypt", "([BII[BI)I", nullptr, 0, $virtualMethod(AESKeyWrapPadded, encrypt, int32_t, $bytes*, int32_t, int32_t, $bytes*, int32_t)},
	{"encryptFinal", "([BII[BI)I", nullptr, 0, $virtualMethod(AESKeyWrapPadded, encryptFinal, int32_t, $bytes*, int32_t, int32_t, $bytes*, int32_t), "javax.crypto.IllegalBlockSizeException"},
	{"getFeedback", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(AESKeyWrapPadded, getFeedback, $String*)},
	{"init", "(ZLjava/lang/String;[B[B)V", nullptr, 0, $virtualMethod(AESKeyWrapPadded, init, void, bool, $String*, $bytes*, $bytes*), "java.security.InvalidKeyException,java.security.InvalidAlgorithmParameterException"},
	{"reset", "()V", nullptr, 0, $virtualMethod(AESKeyWrapPadded, reset, void)},
	{"restore", "()V", nullptr, 0, $virtualMethod(AESKeyWrapPadded, restore, void)},
	{"save", "()V", nullptr, 0, $virtualMethod(AESKeyWrapPadded, save, void)},
	{"setIvAndLen", "([B[BI)V", nullptr, $PRIVATE | $STATIC, $staticMethod(AESKeyWrapPadded, setIvAndLen, void, $bytes*, $bytes*, int32_t)},
	{"validateIV", "([B[B)I", nullptr, $PRIVATE | $STATIC, $staticMethod(AESKeyWrapPadded, validateIV, int32_t, $bytes*, $bytes*), "javax.crypto.IllegalBlockSizeException"},
	{}
};

$ClassInfo _AESKeyWrapPadded_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.crypto.provider.AESKeyWrapPadded",
	"com.sun.crypto.provider.FeedbackCipher",
	nullptr,
	_AESKeyWrapPadded_FieldInfo_,
	_AESKeyWrapPadded_MethodInfo_
};

$Object* allocate$AESKeyWrapPadded($Class* clazz) {
	return $of($alloc(AESKeyWrapPadded));
}

bool AESKeyWrapPadded::$assertionsDisabled = false;
$bytes* AESKeyWrapPadded::ICV2 = nullptr;
$bytes* AESKeyWrapPadded::PAD_BLK = nullptr;

void AESKeyWrapPadded::setIvAndLen($bytes* dest, $bytes* iv, int32_t inLen) {
	$init(AESKeyWrapPadded);
	if (!AESKeyWrapPadded::$assertionsDisabled && !($nc(dest)->length >= 8)) {
		$throwNew($AssertionError, $of("buffer needs at least 8 bytes"_s));
	}
	$System::arraycopy(iv, 0, dest, 0, $nc(iv)->length);
	$nc(dest)->set(4, (int8_t)((int32_t)(((int32_t)((uint32_t)inLen >> 24)) & (uint32_t)255)));
	dest->set(5, (int8_t)((int32_t)(((int32_t)((uint32_t)inLen >> 16)) & (uint32_t)255)));
	dest->set(6, (int8_t)((int32_t)(((int32_t)((uint32_t)inLen >> 8)) & (uint32_t)255)));
	dest->set(7, (int8_t)((int32_t)(inLen & (uint32_t)255)));
}

int32_t AESKeyWrapPadded::validateIV($bytes* ivAndLen, $bytes* iv) {
	$init(AESKeyWrapPadded);
	int32_t match = 0;
	for (int32_t i = 0; i < $nc(AESKeyWrapPadded::ICV2)->length; ++i) {
		match |= ($nc(ivAndLen)->get(i) ^ $nc(iv)->get(i));
	}
	if (match != 0) {
		$throwNew($IllegalBlockSizeException, "Integrity check failed"_s);
	}
	int32_t outLen = $nc(ivAndLen)->get(4);
	for (int32_t k = 5; k < 8; ++k) {
		if (outLen != 0) {
			outLen <<= 8;
		}
		outLen |= (int32_t)(ivAndLen->get(k) & (uint32_t)255);
	}
	return outLen;
}

void AESKeyWrapPadded::init$() {
	$FeedbackCipher::init$($$new($AESCrypt));
}

$String* AESKeyWrapPadded::getFeedback() {
	return "KWP"_s;
}

void AESKeyWrapPadded::save() {
	$throwNew($UnsupportedOperationException, "save not supported"_s);
}

void AESKeyWrapPadded::restore() {
	$throwNew($UnsupportedOperationException, "restore not supported"_s);
}

void AESKeyWrapPadded::init(bool decrypting, $String* algorithm, $bytes* key, $bytes* iv) {
	if (key == nullptr) {
		$throwNew($InvalidKeyException, "Invalid null key"_s);
	}
	if (iv != nullptr && iv->length != $nc(AESKeyWrapPadded::ICV2)->length) {
		$throwNew($InvalidAlgorithmParameterException, "Invalid IV length"_s);
	}
	$nc(this->embeddedCipher)->init(decrypting, algorithm, key);
	$set(this, iv, iv == nullptr ? AESKeyWrapPadded::ICV2 : iv);
}

void AESKeyWrapPadded::reset() {
	$throwNew($UnsupportedOperationException, "reset not supported"_s);
}

int32_t AESKeyWrapPadded::encrypt($bytes* pt, int32_t ptOfs, int32_t ptLen, $bytes* ct, int32_t ctOfs) {
	$throwNew($UnsupportedOperationException, "multi-part not supported"_s);
	$shouldNotReachHere();
}

int32_t AESKeyWrapPadded::decrypt($bytes* ct, int32_t ctOfs, int32_t ctLen, $bytes* pt, int32_t ptOfs) {
	$throwNew($UnsupportedOperationException, "multi-part not supported"_s);
	$shouldNotReachHere();
}

int32_t AESKeyWrapPadded::encryptFinal($bytes* pt, int32_t dummy1, int32_t ptLen, $bytes* dummy2, int32_t dummy3) {
	int32_t actualLen = ptLen - 8;
	if (actualLen < 1) {
		$throwNew($IllegalBlockSizeException, "data should have at least 1 byte"_s);
	}
	if (ptLen % 8 != 0) {
		int32_t rem = 8 - (ptLen % 8);
		$System::arraycopy(AESKeyWrapPadded::PAD_BLK, 0, pt, ptLen, rem);
		ptLen += rem;
	}
	if (ptLen <= 16) {
		setIvAndLen(pt, this->iv, actualLen);
		$nc(this->embeddedCipher)->encryptBlock(pt, 0, pt, 0);
	} else {
		$var($bytes, ivAndLen, $new($bytes, 8));
		setIvAndLen(ivAndLen, this->iv, actualLen);
		ptLen = $KWUtil::W(ivAndLen, pt, ptLen, this->embeddedCipher);
	}
	return ptLen;
}

int32_t AESKeyWrapPadded::decryptFinal($bytes* ct, int32_t dummy1, int32_t ctLen, $bytes* dummy2, int32_t dummy3) {
	$useLocalCurrentObjectStackCache();
	if (ctLen < 16 || ctLen % 8 != 0) {
		$throwNew($IllegalBlockSizeException, "data should be at least 16 bytes and multiples of 8"_s);
	}
	$var($bytes, ivAndLen, $new($bytes, 8));
	if (ctLen == 16) {
		$nc(this->embeddedCipher)->decryptBlock(ct, 0, ct, 0);
		$System::arraycopy(ct, 0, ivAndLen, 0, 8);
		$System::arraycopy(ct, 8, ct, 0, 8);
		ctLen -= 8;
	} else {
		ctLen = $KWUtil::W_INV(ct, ctLen, ivAndLen, this->embeddedCipher);
	}
	int32_t outLen = validateIV(ivAndLen, this->iv);
	int32_t padLen = ctLen - outLen;
	if (padLen < 0 || padLen >= 8) {
		$throwNew($IllegalBlockSizeException, $$str({"Invalid KWP pad length "_s, $$str(padLen)}));
	}
	for (int32_t k = padLen; k > 0; --k) {
		if ($nc(ct)->get(ctLen - k) != 0) {
			$throwNew($IllegalBlockSizeException, "Invalid KWP pad value"_s);
		}
	}
	return outLen;
}

void clinit$AESKeyWrapPadded($Class* class$) {
	AESKeyWrapPadded::$assertionsDisabled = !AESKeyWrapPadded::class$->desiredAssertionStatus();
	$assignStatic(AESKeyWrapPadded::ICV2, $new($bytes, {
		(int8_t)166,
		(int8_t)89,
		(int8_t)89,
		(int8_t)166
	}));
	$assignStatic(AESKeyWrapPadded::PAD_BLK, $new($bytes, 8 - 1));
}

AESKeyWrapPadded::AESKeyWrapPadded() {
}

$Class* AESKeyWrapPadded::load$($String* name, bool initialize) {
	$loadClass(AESKeyWrapPadded, name, initialize, &_AESKeyWrapPadded_ClassInfo_, clinit$AESKeyWrapPadded, allocate$AESKeyWrapPadded);
	return class$;
}

$Class* AESKeyWrapPadded::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com