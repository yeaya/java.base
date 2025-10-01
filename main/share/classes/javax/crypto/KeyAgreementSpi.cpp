#include <javax/crypto/KeyAgreementSpi.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/SecureRandom.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <javax/crypto/SecretKey.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Key = ::java::security::Key;
using $SecureRandom = ::java::security::SecureRandom;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $SecretKey = ::javax::crypto::SecretKey;

namespace javax {
	namespace crypto {

$MethodInfo _KeyAgreementSpi_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(KeyAgreementSpi::*)()>(&KeyAgreementSpi::init$))},
	{"engineDoPhase", "(Ljava/security/Key;Z)Ljava/security/Key;", nullptr, $PROTECTED | $ABSTRACT, nullptr, "java.security.InvalidKeyException,java.lang.IllegalStateException"},
	{"engineGenerateSecret", "()[B", nullptr, $PROTECTED | $ABSTRACT, nullptr, "java.lang.IllegalStateException"},
	{"engineGenerateSecret", "([BI)I", nullptr, $PROTECTED | $ABSTRACT, nullptr, "java.lang.IllegalStateException,javax.crypto.ShortBufferException"},
	{"engineGenerateSecret", "(Ljava/lang/String;)Ljavax/crypto/SecretKey;", nullptr, $PROTECTED | $ABSTRACT, nullptr, "java.lang.IllegalStateException,java.security.NoSuchAlgorithmException,java.security.InvalidKeyException"},
	{"engineInit", "(Ljava/security/Key;Ljava/security/SecureRandom;)V", nullptr, $PROTECTED | $ABSTRACT, nullptr, "java.security.InvalidKeyException"},
	{"engineInit", "(Ljava/security/Key;Ljava/security/spec/AlgorithmParameterSpec;Ljava/security/SecureRandom;)V", nullptr, $PROTECTED | $ABSTRACT, nullptr, "java.security.InvalidKeyException,java.security.InvalidAlgorithmParameterException"},
	{}
};

$ClassInfo _KeyAgreementSpi_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.crypto.KeyAgreementSpi",
	"java.lang.Object",
	nullptr,
	nullptr,
	_KeyAgreementSpi_MethodInfo_
};

$Object* allocate$KeyAgreementSpi($Class* clazz) {
	return $of($alloc(KeyAgreementSpi));
}

void KeyAgreementSpi::init$() {
}

KeyAgreementSpi::KeyAgreementSpi() {
}

$Class* KeyAgreementSpi::load$($String* name, bool initialize) {
	$loadClass(KeyAgreementSpi, name, initialize, &_KeyAgreementSpi_ClassInfo_, allocate$KeyAgreementSpi);
	return class$;
}

$Class* KeyAgreementSpi::class$ = nullptr;

	} // crypto
} // javax