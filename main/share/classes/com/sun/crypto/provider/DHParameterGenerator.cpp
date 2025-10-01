#include <com/sun/crypto/provider/DHParameterGenerator.h>

#include <com/sun/crypto/provider/SunJCE.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/math/BigInteger.h>
#include <java/security/AlgorithmParameterGenerator.h>
#include <java/security/AlgorithmParameterGeneratorSpi.h>
#include <java/security/AlgorithmParameters.h>
#include <java/security/InvalidAlgorithmParameterException.h>
#include <java/security/InvalidParameterException.h>
#include <java/security/Provider.h>
#include <java/security/ProviderException.h>
#include <java/security/SecureRandom.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <java/security/spec/DSAParameterSpec.h>
#include <javax/crypto/spec/DHGenParameterSpec.h>
#include <javax/crypto/spec/DHParameterSpec.h>
#include <sun/security/util/SecurityProviderConstants.h>
#include <jcpp.h>

#undef DEF_DH_KEY_SIZE

using $SunJCE = ::com::sun::crypto::provider::SunJCE;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigInteger = ::java::math::BigInteger;
using $AlgorithmParameterGenerator = ::java::security::AlgorithmParameterGenerator;
using $AlgorithmParameterGeneratorSpi = ::java::security::AlgorithmParameterGeneratorSpi;
using $AlgorithmParameters = ::java::security::AlgorithmParameters;
using $InvalidAlgorithmParameterException = ::java::security::InvalidAlgorithmParameterException;
using $InvalidParameterException = ::java::security::InvalidParameterException;
using $Provider = ::java::security::Provider;
using $ProviderException = ::java::security::ProviderException;
using $SecureRandom = ::java::security::SecureRandom;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $DSAParameterSpec = ::java::security::spec::DSAParameterSpec;
using $DHGenParameterSpec = ::javax::crypto::spec::DHGenParameterSpec;
using $DHParameterSpec = ::javax::crypto::spec::DHParameterSpec;
using $SecurityProviderConstants = ::sun::security::util::SecurityProviderConstants;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

$FieldInfo _DHParameterGenerator_FieldInfo_[] = {
	{"primeSize", "I", nullptr, $PRIVATE, $field(DHParameterGenerator, primeSize)},
	{"exponentSize", "I", nullptr, $PRIVATE, $field(DHParameterGenerator, exponentSize)},
	{"random", "Ljava/security/SecureRandom;", nullptr, $PRIVATE, $field(DHParameterGenerator, random)},
	{}
};

$MethodInfo _DHParameterGenerator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DHParameterGenerator::*)()>(&DHParameterGenerator::init$))},
	{"checkKeySize", "(I)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(int32_t)>(&DHParameterGenerator::checkKeySize)), "java.security.InvalidParameterException"},
	{"engineGenerateParameters", "()Ljava/security/AlgorithmParameters;", nullptr, $PROTECTED},
	{"engineInit", "(ILjava/security/SecureRandom;)V", nullptr, $PROTECTED},
	{"engineInit", "(Ljava/security/spec/AlgorithmParameterSpec;Ljava/security/SecureRandom;)V", nullptr, $PROTECTED, nullptr, "java.security.InvalidAlgorithmParameterException"},
	{}
};

$ClassInfo _DHParameterGenerator_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.crypto.provider.DHParameterGenerator",
	"java.security.AlgorithmParameterGeneratorSpi",
	nullptr,
	_DHParameterGenerator_FieldInfo_,
	_DHParameterGenerator_MethodInfo_
};

$Object* allocate$DHParameterGenerator($Class* clazz) {
	return $of($alloc(DHParameterGenerator));
}

void DHParameterGenerator::init$() {
	$AlgorithmParameterGeneratorSpi::init$();
	$init($SecurityProviderConstants);
	this->primeSize = $SecurityProviderConstants::DEF_DH_KEY_SIZE;
	this->exponentSize = 0;
	$set(this, random, nullptr);
}

void DHParameterGenerator::checkKeySize(int32_t keysize) {
	$init(DHParameterGenerator);
	bool supported = ((keysize == 2048) || (keysize == 3072) || ((keysize >= 512) && (keysize <= 1024) && (((int32_t)(keysize & (uint32_t)63)) == 0)));
	if (!supported) {
		$throwNew($InvalidParameterException, $$str({"DH key size must be multiple of 64 and range from 512 to 1024 (inclusive), or 2048, 3072. The specific key size "_s, $$str(keysize), " is not supported"_s}));
	}
}

void DHParameterGenerator::engineInit(int32_t keysize, $SecureRandom* random) {
	checkKeySize(keysize);
	this->primeSize = keysize;
	$set(this, random, random);
}

void DHParameterGenerator::engineInit($AlgorithmParameterSpec* genParamSpec, $SecureRandom* random) {
	if (!($instanceOf($DHGenParameterSpec, genParamSpec))) {
		$throwNew($InvalidAlgorithmParameterException, "Inappropriate parameter type"_s);
	}
	$var($DHGenParameterSpec, dhParamSpec, $cast($DHGenParameterSpec, genParamSpec));
	this->primeSize = $nc(dhParamSpec)->getPrimeSize();
	this->exponentSize = dhParamSpec->getExponentSize();
	if ((this->exponentSize <= 0) || (this->exponentSize >= this->primeSize)) {
		$throwNew($InvalidAlgorithmParameterException, $$str({"Exponent size ("_s, $$str(this->exponentSize), ") must be positive and less than modulus size ("_s, $$str(this->primeSize), ")"_s}));
	}
	try {
		checkKeySize(this->primeSize);
	} catch ($InvalidParameterException&) {
		$var($InvalidParameterException, ipe, $catch());
		$throwNew($InvalidAlgorithmParameterException, $(ipe->getMessage()));
	}
	$set(this, random, random);
}

$AlgorithmParameters* DHParameterGenerator::engineGenerateParameters() {
	if (this->random == nullptr) {
		$set(this, random, $SunJCE::getRandom());
	}
	$var($BigInteger, paramP, nullptr);
	$var($BigInteger, paramG, nullptr);
	try {
		$var($AlgorithmParameterGenerator, dsaParamGen, $AlgorithmParameterGenerator::getInstance("DSA"_s));
		$nc(dsaParamGen)->init(this->primeSize, this->random);
		$var($AlgorithmParameters, dsaParams, dsaParamGen->generateParameters());
		$load($DSAParameterSpec);
		$var($DSAParameterSpec, dsaParamSpec, $cast($DSAParameterSpec, $nc(dsaParams)->getParameterSpec($DSAParameterSpec::class$)));
		$var($DHParameterSpec, dhParamSpec, nullptr);
		if (this->exponentSize > 0) {
			$var($BigInteger, var$0, $nc(dsaParamSpec)->getP());
			$assign(dhParamSpec, $new($DHParameterSpec, var$0, $(dsaParamSpec->getG()), this->exponentSize));
		} else {
			$var($BigInteger, var$1, $nc(dsaParamSpec)->getP());
			$assign(dhParamSpec, $new($DHParameterSpec, var$1, $(dsaParamSpec->getG())));
		}
		$var($AlgorithmParameters, algParams, $AlgorithmParameters::getInstance("DH"_s, $(static_cast<$Provider*>($SunJCE::getInstance()))));
		$nc(algParams)->init(static_cast<$AlgorithmParameterSpec*>(dhParamSpec));
		return algParams;
	} catch ($Exception&) {
		$var($Exception, ex, $catch());
		$throwNew($ProviderException, "Unexpected exception"_s, ex);
	}
	$shouldNotReachHere();
}

DHParameterGenerator::DHParameterGenerator() {
}

$Class* DHParameterGenerator::load$($String* name, bool initialize) {
	$loadClass(DHParameterGenerator, name, initialize, &_DHParameterGenerator_ClassInfo_, allocate$DHParameterGenerator);
	return class$;
}

$Class* DHParameterGenerator::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com