#include <com/sun/crypto/provider/TlsRsaPremasterSecretGenerator.h>

#include <java/lang/IllegalStateException.h>
#include <java/security/InvalidAlgorithmParameterException.h>
#include <java/security/InvalidParameterException.h>
#include <java/security/SecureRandom.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <java/util/Arrays.h>
#include <javax/crypto/KeyGeneratorSpi.h>
#include <javax/crypto/SecretKey.h>
#include <javax/crypto/spec/SecretKeySpec.h>
#include <sun/security/internal/spec/TlsRsaPremasterSecretParameterSpec.h>
#include <jcpp.h>

#undef MSG

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;
using $InvalidAlgorithmParameterException = ::java::security::InvalidAlgorithmParameterException;
using $InvalidParameterException = ::java::security::InvalidParameterException;
using $SecureRandom = ::java::security::SecureRandom;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $Arrays = ::java::util::Arrays;
using $KeyGeneratorSpi = ::javax::crypto::KeyGeneratorSpi;
using $SecretKey = ::javax::crypto::SecretKey;
using $SecretKeySpec = ::javax::crypto::spec::SecretKeySpec;
using $TlsRsaPremasterSecretParameterSpec = ::sun::security::internal::spec::TlsRsaPremasterSecretParameterSpec;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

$FieldInfo _TlsRsaPremasterSecretGenerator_FieldInfo_[] = {
	{"MSG", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TlsRsaPremasterSecretGenerator, MSG)},
	{"spec", "Lsun/security/internal/spec/TlsRsaPremasterSecretParameterSpec;", nullptr, $PRIVATE, $field(TlsRsaPremasterSecretGenerator, spec)},
	{"random", "Ljava/security/SecureRandom;", nullptr, $PRIVATE, $field(TlsRsaPremasterSecretGenerator, random)},
	{}
};

$MethodInfo _TlsRsaPremasterSecretGenerator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(TlsRsaPremasterSecretGenerator, init$, void)},
	{"engineGenerateKey", "()Ljavax/crypto/SecretKey;", nullptr, $PROTECTED, $virtualMethod(TlsRsaPremasterSecretGenerator, engineGenerateKey, $SecretKey*)},
	{"engineInit", "(Ljava/security/SecureRandom;)V", nullptr, $PROTECTED, $virtualMethod(TlsRsaPremasterSecretGenerator, engineInit, void, $SecureRandom*)},
	{"engineInit", "(Ljava/security/spec/AlgorithmParameterSpec;Ljava/security/SecureRandom;)V", nullptr, $PROTECTED, $virtualMethod(TlsRsaPremasterSecretGenerator, engineInit, void, $AlgorithmParameterSpec*, $SecureRandom*), "java.security.InvalidAlgorithmParameterException"},
	{"engineInit", "(ILjava/security/SecureRandom;)V", nullptr, $PROTECTED, $virtualMethod(TlsRsaPremasterSecretGenerator, engineInit, void, int32_t, $SecureRandom*)},
	{}
};

$ClassInfo _TlsRsaPremasterSecretGenerator_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.crypto.provider.TlsRsaPremasterSecretGenerator",
	"javax.crypto.KeyGeneratorSpi",
	nullptr,
	_TlsRsaPremasterSecretGenerator_FieldInfo_,
	_TlsRsaPremasterSecretGenerator_MethodInfo_
};

$Object* allocate$TlsRsaPremasterSecretGenerator($Class* clazz) {
	return $of($alloc(TlsRsaPremasterSecretGenerator));
}

$String* TlsRsaPremasterSecretGenerator::MSG = nullptr;

void TlsRsaPremasterSecretGenerator::init$() {
	$KeyGeneratorSpi::init$();
}

void TlsRsaPremasterSecretGenerator::engineInit($SecureRandom* random) {
	$throwNew($InvalidParameterException, TlsRsaPremasterSecretGenerator::MSG);
}

void TlsRsaPremasterSecretGenerator::engineInit($AlgorithmParameterSpec* params, $SecureRandom* random) {
	if (!($instanceOf($TlsRsaPremasterSecretParameterSpec, params))) {
		$throwNew($InvalidAlgorithmParameterException, TlsRsaPremasterSecretGenerator::MSG);
	}
	$set(this, spec, $cast($TlsRsaPremasterSecretParameterSpec, params));
	$set(this, random, random);
}

void TlsRsaPremasterSecretGenerator::engineInit(int32_t keysize, $SecureRandom* random) {
	$throwNew($InvalidParameterException, TlsRsaPremasterSecretGenerator::MSG);
}

$SecretKey* TlsRsaPremasterSecretGenerator::engineGenerateKey() {
	$useLocalCurrentObjectStackCache();
	if (this->spec == nullptr) {
		$throwNew($IllegalStateException, "TlsRsaPremasterSecretGenerator must be initialized"_s);
	}
	$var($bytes, b, $nc(this->spec)->getEncodedSecret());
	if (b == nullptr) {
		if (this->random == nullptr) {
			$set(this, random, $new($SecureRandom));
		}
		$assign(b, $new($bytes, 48));
		$nc(this->random)->nextBytes(b);
	}
	$nc(b)->set(0, (int8_t)$nc(this->spec)->getMajorVersion());
	b->set(1, (int8_t)$nc(this->spec)->getMinorVersion());
	{
		$var($Throwable, var$0, nullptr);
		$var($SecretKey, var$2, nullptr);
		bool return$1 = false;
		try {
			$assign(var$2, $new($SecretKeySpec, b, "TlsRsaPremasterSecret"_s));
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
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

TlsRsaPremasterSecretGenerator::TlsRsaPremasterSecretGenerator() {
}

void clinit$TlsRsaPremasterSecretGenerator($Class* class$) {
	$assignStatic(TlsRsaPremasterSecretGenerator::MSG, "TlsRsaPremasterSecretGenerator must be initialized using a TlsRsaPremasterSecretParameterSpec"_s);
}

$Class* TlsRsaPremasterSecretGenerator::load$($String* name, bool initialize) {
	$loadClass(TlsRsaPremasterSecretGenerator, name, initialize, &_TlsRsaPremasterSecretGenerator_ClassInfo_, clinit$TlsRsaPremasterSecretGenerator, allocate$TlsRsaPremasterSecretGenerator);
	return class$;
}

$Class* TlsRsaPremasterSecretGenerator::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com