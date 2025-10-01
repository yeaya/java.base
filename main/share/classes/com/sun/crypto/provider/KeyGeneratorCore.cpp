#include <com/sun/crypto/provider/KeyGeneratorCore.h>

#include <com/sun/crypto/provider/SunJCE.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/InvalidAlgorithmParameterException.h>
#include <java/security/InvalidParameterException.h>
#include <java/security/SecureRandom.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <java/util/Arrays.h>
#include <javax/crypto/SecretKey.h>
#include <javax/crypto/spec/SecretKeySpec.h>
#include <jcpp.h>

using $SunJCE = ::com::sun::crypto::provider::SunJCE;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InvalidAlgorithmParameterException = ::java::security::InvalidAlgorithmParameterException;
using $InvalidParameterException = ::java::security::InvalidParameterException;
using $SecureRandom = ::java::security::SecureRandom;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $Arrays = ::java::util::Arrays;
using $SecretKey = ::javax::crypto::SecretKey;
using $SecretKeySpec = ::javax::crypto::spec::SecretKeySpec;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

$FieldInfo _KeyGeneratorCore_FieldInfo_[] = {
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(KeyGeneratorCore, name)},
	{"defaultKeySize", "I", nullptr, $PRIVATE | $FINAL, $field(KeyGeneratorCore, defaultKeySize)},
	{"keySize", "I", nullptr, $PRIVATE, $field(KeyGeneratorCore, keySize)},
	{"random", "Ljava/security/SecureRandom;", nullptr, $PRIVATE, $field(KeyGeneratorCore, random)},
	{}
};

$MethodInfo _KeyGeneratorCore_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;I)V", nullptr, 0, $method(static_cast<void(KeyGeneratorCore::*)($String*,int32_t)>(&KeyGeneratorCore::init$))},
	{"implGenerateKey", "()Ljavax/crypto/SecretKey;", nullptr, 0, $method(static_cast<$SecretKey*(KeyGeneratorCore::*)()>(&KeyGeneratorCore::implGenerateKey))},
	{"implInit", "(Ljava/security/SecureRandom;)V", nullptr, 0, $method(static_cast<void(KeyGeneratorCore::*)($SecureRandom*)>(&KeyGeneratorCore::implInit))},
	{"implInit", "(Ljava/security/spec/AlgorithmParameterSpec;Ljava/security/SecureRandom;)V", nullptr, 0, $method(static_cast<void(KeyGeneratorCore::*)($AlgorithmParameterSpec*,$SecureRandom*)>(&KeyGeneratorCore::implInit)), "java.security.InvalidAlgorithmParameterException"},
	{"implInit", "(ILjava/security/SecureRandom;)V", nullptr, 0, $method(static_cast<void(KeyGeneratorCore::*)(int32_t,$SecureRandom*)>(&KeyGeneratorCore::implInit))},
	{}
};

$InnerClassInfo _KeyGeneratorCore_InnerClassesInfo_[] = {
	{"com.sun.crypto.provider.KeyGeneratorCore$ChaCha20KeyGenerator", "com.sun.crypto.provider.KeyGeneratorCore", "ChaCha20KeyGenerator", $PUBLIC | $STATIC | $FINAL},
	{"com.sun.crypto.provider.KeyGeneratorCore$ARCFOURKeyGenerator", "com.sun.crypto.provider.KeyGeneratorCore", "ARCFOURKeyGenerator", $PUBLIC | $STATIC | $FINAL},
	{"com.sun.crypto.provider.KeyGeneratorCore$RC2KeyGenerator", "com.sun.crypto.provider.KeyGeneratorCore", "RC2KeyGenerator", $PUBLIC | $STATIC | $FINAL},
	{"com.sun.crypto.provider.KeyGeneratorCore$HmacKG", "com.sun.crypto.provider.KeyGeneratorCore", "HmacKG", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _KeyGeneratorCore_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.crypto.provider.KeyGeneratorCore",
	"java.lang.Object",
	nullptr,
	_KeyGeneratorCore_FieldInfo_,
	_KeyGeneratorCore_MethodInfo_,
	nullptr,
	nullptr,
	_KeyGeneratorCore_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.crypto.provider.KeyGeneratorCore$ChaCha20KeyGenerator,com.sun.crypto.provider.KeyGeneratorCore$ARCFOURKeyGenerator,com.sun.crypto.provider.KeyGeneratorCore$RC2KeyGenerator,com.sun.crypto.provider.KeyGeneratorCore$HmacKG,com.sun.crypto.provider.KeyGeneratorCore$HmacKG$SHA3_512,com.sun.crypto.provider.KeyGeneratorCore$HmacKG$SHA3_384,com.sun.crypto.provider.KeyGeneratorCore$HmacKG$SHA3_256,com.sun.crypto.provider.KeyGeneratorCore$HmacKG$SHA3_224,com.sun.crypto.provider.KeyGeneratorCore$HmacKG$SHA512_256,com.sun.crypto.provider.KeyGeneratorCore$HmacKG$SHA512_224,com.sun.crypto.provider.KeyGeneratorCore$HmacKG$SHA512,com.sun.crypto.provider.KeyGeneratorCore$HmacKG$SHA384,com.sun.crypto.provider.KeyGeneratorCore$HmacKG$SHA256,com.sun.crypto.provider.KeyGeneratorCore$HmacKG$SHA224"
};

$Object* allocate$KeyGeneratorCore($Class* clazz) {
	return $of($alloc(KeyGeneratorCore));
}

void KeyGeneratorCore::init$($String* name, int32_t defaultKeySize) {
	$set(this, name, name);
	this->defaultKeySize = defaultKeySize;
	implInit(nullptr);
}

void KeyGeneratorCore::implInit($SecureRandom* random) {
	this->keySize = this->defaultKeySize;
	$set(this, random, random);
}

void KeyGeneratorCore::implInit($AlgorithmParameterSpec* params, $SecureRandom* random) {
	$throwNew($InvalidAlgorithmParameterException, $$str({this->name, " key generation does not take any parameters"_s}));
}

void KeyGeneratorCore::implInit(int32_t keysize, $SecureRandom* random) {
	if (keysize < 40) {
		$throwNew($InvalidParameterException, "Key length must be at least 40 bits"_s);
	}
	this->keySize = keysize;
	$set(this, random, random);
}

$SecretKey* KeyGeneratorCore::implGenerateKey() {
	if (this->random == nullptr) {
		$set(this, random, $SunJCE::getRandom());
	}
	$var($bytes, b, $new($bytes, (this->keySize + 7) >> 3));
	$nc(this->random)->nextBytes(b);
	{
		$var($Throwable, var$0, nullptr);
		$var($SecretKey, var$2, nullptr);
		bool return$1 = false;
		try {
			$assign(var$2, $new($SecretKeySpec, b, this->name));
			return$1 = true;
			goto $finally;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			$Arrays::fill(b, (int8_t)0);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

KeyGeneratorCore::KeyGeneratorCore() {
}

$Class* KeyGeneratorCore::load$($String* name, bool initialize) {
	$loadClass(KeyGeneratorCore, name, initialize, &_KeyGeneratorCore_ClassInfo_, allocate$KeyGeneratorCore);
	return class$;
}

$Class* KeyGeneratorCore::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com