#include <java/security/Signature$CipherAdapter.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/security/InvalidParameterException.h>
#include <java/security/MessageDigest.h>
#include <java/security/PrivateKey.h>
#include <java/security/PublicKey.h>
#include <java/security/SecureRandom.h>
#include <java/security/Signature.h>
#include <java/security/SignatureException.h>
#include <java/security/SignatureSpi.h>
#include <javax/crypto/BadPaddingException.h>
#include <javax/crypto/Cipher.h>
#include <javax/crypto/IllegalBlockSizeException.h>
#include <jcpp.h>

#undef DECRYPT_MODE
#undef ENCRYPT_MODE

using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InvalidParameterException = ::java::security::InvalidParameterException;
using $MessageDigest = ::java::security::MessageDigest;
using $PrivateKey = ::java::security::PrivateKey;
using $PublicKey = ::java::security::PublicKey;
using $SecureRandom = ::java::security::SecureRandom;
using $SignatureException = ::java::security::SignatureException;
using $SignatureSpi = ::java::security::SignatureSpi;
using $BadPaddingException = ::javax::crypto::BadPaddingException;
using $Cipher = ::javax::crypto::Cipher;
using $IllegalBlockSizeException = ::javax::crypto::IllegalBlockSizeException;

namespace java {
	namespace security {

void Signature$CipherAdapter::init$($Cipher* cipher) {
	$SignatureSpi::init$();
	$set(this, cipher, cipher);
}

void Signature$CipherAdapter::engineInitVerify($PublicKey* publicKey) {
	$nc(this->cipher)->init($Cipher::DECRYPT_MODE, publicKey);
	if (this->data == nullptr) {
		$set(this, data, $new($ByteArrayOutputStream, 128));
	} else {
		this->data->reset();
	}
}

void Signature$CipherAdapter::engineInitSign($PrivateKey* privateKey) {
	$nc(this->cipher)->init($Cipher::ENCRYPT_MODE, privateKey);
	$set(this, data, nullptr);
}

void Signature$CipherAdapter::engineInitSign($PrivateKey* privateKey, $SecureRandom* random) {
	$nc(this->cipher)->init($Cipher::ENCRYPT_MODE, privateKey, random);
	$set(this, data, nullptr);
}

void Signature$CipherAdapter::engineUpdate(int8_t b) {
	engineUpdate($$new($bytes, {b}), 0, 1);
}

void Signature$CipherAdapter::engineUpdate($bytes* b, int32_t off, int32_t len) {
	if (this->data != nullptr) {
		this->data->write(b, off, len);
		return;
	}
	$var($bytes, out, $nc(this->cipher)->update(b, off, len));
	if ((out != nullptr) && (out->length != 0)) {
		$throwNew($SignatureException, "Cipher unexpectedly returned data"_s);
	}
}

$bytes* Signature$CipherAdapter::engineSign() {
	try {
		return $nc(this->cipher)->doFinal();
	} catch ($IllegalBlockSizeException& e) {
		$throwNew($SignatureException, "doFinal() failed"_s, e);
	} catch ($BadPaddingException& e) {
		$throwNew($SignatureException, "doFinal() failed"_s, e);
	}
	$shouldNotReachHere();
}

bool Signature$CipherAdapter::engineVerify($bytes* sigBytes) {
	$useLocalObjectStack();
	try {
		$var($bytes, out, $nc(this->cipher)->doFinal(sigBytes));
		$var($bytes, dataBytes, $nc(this->data)->toByteArray());
		this->data->reset();
		return $MessageDigest::isEqual(out, dataBytes);
	} catch ($BadPaddingException& e) {
		return false;
	} catch ($IllegalBlockSizeException& e) {
		$throwNew($SignatureException, "doFinal() failed"_s, e);
	}
	$shouldNotReachHere();
}

void Signature$CipherAdapter::engineSetParameter($String* param, Object$* value) {
	$throwNew($InvalidParameterException, "Parameters not supported"_s);
}

$Object* Signature$CipherAdapter::engineGetParameter($String* param) {
	$throwNew($InvalidParameterException, "Parameters not supported"_s);
	$shouldNotReachHere();
}

Signature$CipherAdapter::Signature$CipherAdapter() {
}

$Class* Signature$CipherAdapter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"cipher", "Ljavax/crypto/Cipher;", nullptr, $PRIVATE | $FINAL, $field(Signature$CipherAdapter, cipher)},
		{"data", "Ljava/io/ByteArrayOutputStream;", nullptr, $PRIVATE, $field(Signature$CipherAdapter, data)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/crypto/Cipher;)V", nullptr, 0, $method(Signature$CipherAdapter, init$, void, $Cipher*)},
		{"engineGetParameter", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PROTECTED, $virtualMethod(Signature$CipherAdapter, engineGetParameter, $Object*, $String*), "java.security.InvalidParameterException"},
		{"engineInitSign", "(Ljava/security/PrivateKey;)V", nullptr, $PROTECTED, $virtualMethod(Signature$CipherAdapter, engineInitSign, void, $PrivateKey*), "java.security.InvalidKeyException"},
		{"engineInitSign", "(Ljava/security/PrivateKey;Ljava/security/SecureRandom;)V", nullptr, $PROTECTED, $virtualMethod(Signature$CipherAdapter, engineInitSign, void, $PrivateKey*, $SecureRandom*), "java.security.InvalidKeyException"},
		{"engineInitVerify", "(Ljava/security/PublicKey;)V", nullptr, $PROTECTED, $virtualMethod(Signature$CipherAdapter, engineInitVerify, void, $PublicKey*), "java.security.InvalidKeyException"},
		{"engineSetParameter", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PROTECTED, $virtualMethod(Signature$CipherAdapter, engineSetParameter, void, $String*, Object$*), "java.security.InvalidParameterException"},
		{"engineSign", "()[B", nullptr, $PROTECTED, $virtualMethod(Signature$CipherAdapter, engineSign, $bytes*), "java.security.SignatureException"},
		{"engineUpdate", "(B)V", nullptr, $PROTECTED, $virtualMethod(Signature$CipherAdapter, engineUpdate, void, int8_t), "java.security.SignatureException"},
		{"engineUpdate", "([BII)V", nullptr, $PROTECTED, $virtualMethod(Signature$CipherAdapter, engineUpdate, void, $bytes*, int32_t, int32_t), "java.security.SignatureException"},
		{"engineVerify", "([B)Z", nullptr, $PROTECTED, $virtualMethod(Signature$CipherAdapter, engineVerify, bool, $bytes*), "java.security.SignatureException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.security.Signature$CipherAdapter", "java.security.Signature", "CipherAdapter", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.security.Signature$CipherAdapter",
		"java.security.SignatureSpi",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.security.Signature"
	};
	$loadClass(Signature$CipherAdapter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Signature$CipherAdapter);
	});
	return class$;
}

$Class* Signature$CipherAdapter::class$ = nullptr;

	} // security
} // java