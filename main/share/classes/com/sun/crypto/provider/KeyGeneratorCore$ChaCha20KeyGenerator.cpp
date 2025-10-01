#include <com/sun/crypto/provider/KeyGeneratorCore$ChaCha20KeyGenerator.h>

#include <com/sun/crypto/provider/KeyGeneratorCore.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/InvalidParameterException.h>
#include <java/security/SecureRandom.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <javax/crypto/KeyGeneratorSpi.h>
#include <javax/crypto/SecretKey.h>
#include <jcpp.h>

using $KeyGeneratorCore = ::com::sun::crypto::provider::KeyGeneratorCore;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InvalidParameterException = ::java::security::InvalidParameterException;
using $SecureRandom = ::java::security::SecureRandom;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $KeyGeneratorSpi = ::javax::crypto::KeyGeneratorSpi;
using $SecretKey = ::javax::crypto::SecretKey;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

$FieldInfo _KeyGeneratorCore$ChaCha20KeyGenerator_FieldInfo_[] = {
	{"core", "Lcom/sun/crypto/provider/KeyGeneratorCore;", nullptr, $PRIVATE | $FINAL, $field(KeyGeneratorCore$ChaCha20KeyGenerator, core)},
	{}
};

$MethodInfo _KeyGeneratorCore$ChaCha20KeyGenerator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(KeyGeneratorCore$ChaCha20KeyGenerator::*)()>(&KeyGeneratorCore$ChaCha20KeyGenerator::init$))},
	{"engineGenerateKey", "()Ljavax/crypto/SecretKey;", nullptr, $PROTECTED},
	{"engineInit", "(Ljava/security/SecureRandom;)V", nullptr, $PROTECTED},
	{"engineInit", "(Ljava/security/spec/AlgorithmParameterSpec;Ljava/security/SecureRandom;)V", nullptr, $PROTECTED, nullptr, "java.security.InvalidAlgorithmParameterException"},
	{"engineInit", "(ILjava/security/SecureRandom;)V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _KeyGeneratorCore$ChaCha20KeyGenerator_InnerClassesInfo_[] = {
	{"com.sun.crypto.provider.KeyGeneratorCore$ChaCha20KeyGenerator", "com.sun.crypto.provider.KeyGeneratorCore", "ChaCha20KeyGenerator", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _KeyGeneratorCore$ChaCha20KeyGenerator_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.crypto.provider.KeyGeneratorCore$ChaCha20KeyGenerator",
	"javax.crypto.KeyGeneratorSpi",
	nullptr,
	_KeyGeneratorCore$ChaCha20KeyGenerator_FieldInfo_,
	_KeyGeneratorCore$ChaCha20KeyGenerator_MethodInfo_,
	nullptr,
	nullptr,
	_KeyGeneratorCore$ChaCha20KeyGenerator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.crypto.provider.KeyGeneratorCore"
};

$Object* allocate$KeyGeneratorCore$ChaCha20KeyGenerator($Class* clazz) {
	return $of($alloc(KeyGeneratorCore$ChaCha20KeyGenerator));
}

void KeyGeneratorCore$ChaCha20KeyGenerator::init$() {
	$KeyGeneratorSpi::init$();
	$set(this, core, $new($KeyGeneratorCore, "ChaCha20"_s, 256));
}

void KeyGeneratorCore$ChaCha20KeyGenerator::engineInit($SecureRandom* random) {
	$nc(this->core)->implInit(random);
}

void KeyGeneratorCore$ChaCha20KeyGenerator::engineInit($AlgorithmParameterSpec* params, $SecureRandom* random) {
	$nc(this->core)->implInit(params, random);
}

void KeyGeneratorCore$ChaCha20KeyGenerator::engineInit(int32_t keySize, $SecureRandom* random) {
	if (keySize != 256) {
		$throwNew($InvalidParameterException, "Key length for ChaCha20 must be 256 bits"_s);
	}
	$nc(this->core)->implInit(keySize, random);
}

$SecretKey* KeyGeneratorCore$ChaCha20KeyGenerator::engineGenerateKey() {
	return $nc(this->core)->implGenerateKey();
}

KeyGeneratorCore$ChaCha20KeyGenerator::KeyGeneratorCore$ChaCha20KeyGenerator() {
}

$Class* KeyGeneratorCore$ChaCha20KeyGenerator::load$($String* name, bool initialize) {
	$loadClass(KeyGeneratorCore$ChaCha20KeyGenerator, name, initialize, &_KeyGeneratorCore$ChaCha20KeyGenerator_ClassInfo_, allocate$KeyGeneratorCore$ChaCha20KeyGenerator);
	return class$;
}

$Class* KeyGeneratorCore$ChaCha20KeyGenerator::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com