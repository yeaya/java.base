#include <com/sun/crypto/provider/KeyGeneratorCore$ARCFOURKeyGenerator.h>

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

$FieldInfo _KeyGeneratorCore$ARCFOURKeyGenerator_FieldInfo_[] = {
	{"core", "Lcom/sun/crypto/provider/KeyGeneratorCore;", nullptr, $PRIVATE | $FINAL, $field(KeyGeneratorCore$ARCFOURKeyGenerator, core)},
	{}
};

$MethodInfo _KeyGeneratorCore$ARCFOURKeyGenerator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(KeyGeneratorCore$ARCFOURKeyGenerator::*)()>(&KeyGeneratorCore$ARCFOURKeyGenerator::init$))},
	{"engineGenerateKey", "()Ljavax/crypto/SecretKey;", nullptr, $PROTECTED},
	{"engineInit", "(Ljava/security/SecureRandom;)V", nullptr, $PROTECTED},
	{"engineInit", "(Ljava/security/spec/AlgorithmParameterSpec;Ljava/security/SecureRandom;)V", nullptr, $PROTECTED, nullptr, "java.security.InvalidAlgorithmParameterException"},
	{"engineInit", "(ILjava/security/SecureRandom;)V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _KeyGeneratorCore$ARCFOURKeyGenerator_InnerClassesInfo_[] = {
	{"com.sun.crypto.provider.KeyGeneratorCore$ARCFOURKeyGenerator", "com.sun.crypto.provider.KeyGeneratorCore", "ARCFOURKeyGenerator", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _KeyGeneratorCore$ARCFOURKeyGenerator_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.crypto.provider.KeyGeneratorCore$ARCFOURKeyGenerator",
	"javax.crypto.KeyGeneratorSpi",
	nullptr,
	_KeyGeneratorCore$ARCFOURKeyGenerator_FieldInfo_,
	_KeyGeneratorCore$ARCFOURKeyGenerator_MethodInfo_,
	nullptr,
	nullptr,
	_KeyGeneratorCore$ARCFOURKeyGenerator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.crypto.provider.KeyGeneratorCore"
};

$Object* allocate$KeyGeneratorCore$ARCFOURKeyGenerator($Class* clazz) {
	return $of($alloc(KeyGeneratorCore$ARCFOURKeyGenerator));
}

void KeyGeneratorCore$ARCFOURKeyGenerator::init$() {
	$KeyGeneratorSpi::init$();
	$set(this, core, $new($KeyGeneratorCore, "ARCFOUR"_s, 128));
}

void KeyGeneratorCore$ARCFOURKeyGenerator::engineInit($SecureRandom* random) {
	$nc(this->core)->implInit(random);
}

void KeyGeneratorCore$ARCFOURKeyGenerator::engineInit($AlgorithmParameterSpec* params, $SecureRandom* random) {
	$nc(this->core)->implInit(params, random);
}

void KeyGeneratorCore$ARCFOURKeyGenerator::engineInit(int32_t keySize, $SecureRandom* random) {
	if ((keySize < 40) || (keySize > 1024)) {
		$throwNew($InvalidParameterException, "Key length for ARCFOUR must be between 40 and 1024 bits"_s);
	}
	$nc(this->core)->implInit(keySize, random);
}

$SecretKey* KeyGeneratorCore$ARCFOURKeyGenerator::engineGenerateKey() {
	return $nc(this->core)->implGenerateKey();
}

KeyGeneratorCore$ARCFOURKeyGenerator::KeyGeneratorCore$ARCFOURKeyGenerator() {
}

$Class* KeyGeneratorCore$ARCFOURKeyGenerator::load$($String* name, bool initialize) {
	$loadClass(KeyGeneratorCore$ARCFOURKeyGenerator, name, initialize, &_KeyGeneratorCore$ARCFOURKeyGenerator_ClassInfo_, allocate$KeyGeneratorCore$ARCFOURKeyGenerator);
	return class$;
}

$Class* KeyGeneratorCore$ARCFOURKeyGenerator::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com