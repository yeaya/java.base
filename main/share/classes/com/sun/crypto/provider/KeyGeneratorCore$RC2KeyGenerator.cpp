#include <com/sun/crypto/provider/KeyGeneratorCore$RC2KeyGenerator.h>

#include <com/sun/crypto/provider/KeyGeneratorCore.h>
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

$FieldInfo _KeyGeneratorCore$RC2KeyGenerator_FieldInfo_[] = {
	{"core", "Lcom/sun/crypto/provider/KeyGeneratorCore;", nullptr, $PRIVATE | $FINAL, $field(KeyGeneratorCore$RC2KeyGenerator, core)},
	{}
};

$MethodInfo _KeyGeneratorCore$RC2KeyGenerator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(KeyGeneratorCore$RC2KeyGenerator::*)()>(&KeyGeneratorCore$RC2KeyGenerator::init$))},
	{"engineGenerateKey", "()Ljavax/crypto/SecretKey;", nullptr, $PROTECTED},
	{"engineInit", "(Ljava/security/SecureRandom;)V", nullptr, $PROTECTED},
	{"engineInit", "(Ljava/security/spec/AlgorithmParameterSpec;Ljava/security/SecureRandom;)V", nullptr, $PROTECTED, nullptr, "java.security.InvalidAlgorithmParameterException"},
	{"engineInit", "(ILjava/security/SecureRandom;)V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _KeyGeneratorCore$RC2KeyGenerator_InnerClassesInfo_[] = {
	{"com.sun.crypto.provider.KeyGeneratorCore$RC2KeyGenerator", "com.sun.crypto.provider.KeyGeneratorCore", "RC2KeyGenerator", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _KeyGeneratorCore$RC2KeyGenerator_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.crypto.provider.KeyGeneratorCore$RC2KeyGenerator",
	"javax.crypto.KeyGeneratorSpi",
	nullptr,
	_KeyGeneratorCore$RC2KeyGenerator_FieldInfo_,
	_KeyGeneratorCore$RC2KeyGenerator_MethodInfo_,
	nullptr,
	nullptr,
	_KeyGeneratorCore$RC2KeyGenerator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.crypto.provider.KeyGeneratorCore"
};

$Object* allocate$KeyGeneratorCore$RC2KeyGenerator($Class* clazz) {
	return $of($alloc(KeyGeneratorCore$RC2KeyGenerator));
}

void KeyGeneratorCore$RC2KeyGenerator::init$() {
	$KeyGeneratorSpi::init$();
	$set(this, core, $new($KeyGeneratorCore, "RC2"_s, 128));
}

void KeyGeneratorCore$RC2KeyGenerator::engineInit($SecureRandom* random) {
	$nc(this->core)->implInit(random);
}

void KeyGeneratorCore$RC2KeyGenerator::engineInit($AlgorithmParameterSpec* params, $SecureRandom* random) {
	$nc(this->core)->implInit(params, random);
}

void KeyGeneratorCore$RC2KeyGenerator::engineInit(int32_t keySize, $SecureRandom* random) {
	if ((keySize < 40) || (keySize > 1024)) {
		$throwNew($InvalidParameterException, "Key length for RC2 must be between 40 and 1024 bits"_s);
	}
	$nc(this->core)->implInit(keySize, random);
}

$SecretKey* KeyGeneratorCore$RC2KeyGenerator::engineGenerateKey() {
	return $nc(this->core)->implGenerateKey();
}

KeyGeneratorCore$RC2KeyGenerator::KeyGeneratorCore$RC2KeyGenerator() {
}

$Class* KeyGeneratorCore$RC2KeyGenerator::load$($String* name, bool initialize) {
	$loadClass(KeyGeneratorCore$RC2KeyGenerator, name, initialize, &_KeyGeneratorCore$RC2KeyGenerator_ClassInfo_, allocate$KeyGeneratorCore$RC2KeyGenerator);
	return class$;
}

$Class* KeyGeneratorCore$RC2KeyGenerator::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com