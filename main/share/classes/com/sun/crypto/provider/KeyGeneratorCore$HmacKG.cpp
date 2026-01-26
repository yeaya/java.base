#include <com/sun/crypto/provider/KeyGeneratorCore$HmacKG.h>

#include <com/sun/crypto/provider/KeyGeneratorCore.h>
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
using $SecureRandom = ::java::security::SecureRandom;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $KeyGeneratorSpi = ::javax::crypto::KeyGeneratorSpi;
using $SecretKey = ::javax::crypto::SecretKey;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

$FieldInfo _KeyGeneratorCore$HmacKG_FieldInfo_[] = {
	{"core", "Lcom/sun/crypto/provider/KeyGeneratorCore;", nullptr, $PRIVATE | $FINAL, $field(KeyGeneratorCore$HmacKG, core)},
	{}
};

$MethodInfo _KeyGeneratorCore$HmacKG_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PROTECTED, $method(KeyGeneratorCore$HmacKG, init$, void, $String*, int32_t)},
	{"engineGenerateKey", "()Ljavax/crypto/SecretKey;", nullptr, $PROTECTED, $virtualMethod(KeyGeneratorCore$HmacKG, engineGenerateKey, $SecretKey*)},
	{"engineInit", "(Ljava/security/SecureRandom;)V", nullptr, $PROTECTED, $virtualMethod(KeyGeneratorCore$HmacKG, engineInit, void, $SecureRandom*)},
	{"engineInit", "(Ljava/security/spec/AlgorithmParameterSpec;Ljava/security/SecureRandom;)V", nullptr, $PROTECTED, $virtualMethod(KeyGeneratorCore$HmacKG, engineInit, void, $AlgorithmParameterSpec*, $SecureRandom*), "java.security.InvalidAlgorithmParameterException"},
	{"engineInit", "(ILjava/security/SecureRandom;)V", nullptr, $PROTECTED, $virtualMethod(KeyGeneratorCore$HmacKG, engineInit, void, int32_t, $SecureRandom*)},
	{}
};

$InnerClassInfo _KeyGeneratorCore$HmacKG_InnerClassesInfo_[] = {
	{"com.sun.crypto.provider.KeyGeneratorCore$HmacKG", "com.sun.crypto.provider.KeyGeneratorCore", "HmacKG", $STATIC | $ABSTRACT},
	{"com.sun.crypto.provider.KeyGeneratorCore$HmacKG$SHA3_512", "com.sun.crypto.provider.KeyGeneratorCore$HmacKG", "SHA3_512", $PUBLIC | $STATIC | $FINAL},
	{"com.sun.crypto.provider.KeyGeneratorCore$HmacKG$SHA3_384", "com.sun.crypto.provider.KeyGeneratorCore$HmacKG", "SHA3_384", $PUBLIC | $STATIC | $FINAL},
	{"com.sun.crypto.provider.KeyGeneratorCore$HmacKG$SHA3_256", "com.sun.crypto.provider.KeyGeneratorCore$HmacKG", "SHA3_256", $PUBLIC | $STATIC | $FINAL},
	{"com.sun.crypto.provider.KeyGeneratorCore$HmacKG$SHA3_224", "com.sun.crypto.provider.KeyGeneratorCore$HmacKG", "SHA3_224", $PUBLIC | $STATIC | $FINAL},
	{"com.sun.crypto.provider.KeyGeneratorCore$HmacKG$SHA512_256", "com.sun.crypto.provider.KeyGeneratorCore$HmacKG", "SHA512_256", $PUBLIC | $STATIC | $FINAL},
	{"com.sun.crypto.provider.KeyGeneratorCore$HmacKG$SHA512_224", "com.sun.crypto.provider.KeyGeneratorCore$HmacKG", "SHA512_224", $PUBLIC | $STATIC | $FINAL},
	{"com.sun.crypto.provider.KeyGeneratorCore$HmacKG$SHA512", "com.sun.crypto.provider.KeyGeneratorCore$HmacKG", "SHA512", $PUBLIC | $STATIC | $FINAL},
	{"com.sun.crypto.provider.KeyGeneratorCore$HmacKG$SHA384", "com.sun.crypto.provider.KeyGeneratorCore$HmacKG", "SHA384", $PUBLIC | $STATIC | $FINAL},
	{"com.sun.crypto.provider.KeyGeneratorCore$HmacKG$SHA256", "com.sun.crypto.provider.KeyGeneratorCore$HmacKG", "SHA256", $PUBLIC | $STATIC | $FINAL},
	{"com.sun.crypto.provider.KeyGeneratorCore$HmacKG$SHA224", "com.sun.crypto.provider.KeyGeneratorCore$HmacKG", "SHA224", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _KeyGeneratorCore$HmacKG_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"com.sun.crypto.provider.KeyGeneratorCore$HmacKG",
	"javax.crypto.KeyGeneratorSpi",
	nullptr,
	_KeyGeneratorCore$HmacKG_FieldInfo_,
	_KeyGeneratorCore$HmacKG_MethodInfo_,
	nullptr,
	nullptr,
	_KeyGeneratorCore$HmacKG_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.crypto.provider.KeyGeneratorCore"
};

$Object* allocate$KeyGeneratorCore$HmacKG($Class* clazz) {
	return $of($alloc(KeyGeneratorCore$HmacKG));
}

void KeyGeneratorCore$HmacKG::init$($String* algoName, int32_t len) {
	$KeyGeneratorSpi::init$();
	$set(this, core, $new($KeyGeneratorCore, algoName, len));
}

void KeyGeneratorCore$HmacKG::engineInit($SecureRandom* random) {
	$nc(this->core)->implInit(random);
}

void KeyGeneratorCore$HmacKG::engineInit($AlgorithmParameterSpec* params, $SecureRandom* random) {
	$nc(this->core)->implInit(params, random);
}

void KeyGeneratorCore$HmacKG::engineInit(int32_t keySize, $SecureRandom* random) {
	$nc(this->core)->implInit(keySize, random);
}

$SecretKey* KeyGeneratorCore$HmacKG::engineGenerateKey() {
	return $nc(this->core)->implGenerateKey();
}

KeyGeneratorCore$HmacKG::KeyGeneratorCore$HmacKG() {
}

$Class* KeyGeneratorCore$HmacKG::load$($String* name, bool initialize) {
	$loadClass(KeyGeneratorCore$HmacKG, name, initialize, &_KeyGeneratorCore$HmacKG_ClassInfo_, allocate$KeyGeneratorCore$HmacKG);
	return class$;
}

$Class* KeyGeneratorCore$HmacKG::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com