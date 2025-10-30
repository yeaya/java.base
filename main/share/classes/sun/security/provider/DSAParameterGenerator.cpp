#include <sun/security/provider/DSAParameterGenerator.h>

#include <java/math/BigInteger.h>
#include <java/security/AlgorithmParameterGeneratorSpi.h>
#include <java/security/AlgorithmParameters.h>
#include <java/security/InvalidAlgorithmParameterException.h>
#include <java/security/InvalidParameterException.h>
#include <java/security/MessageDigest.h>
#include <java/security/NoSuchAlgorithmException.h>
#include <java/security/NoSuchProviderException.h>
#include <java/security/ProviderException.h>
#include <java/security/SecureRandom.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <java/security/spec/DSAGenParameterSpec.h>
#include <java/security/spec/DSAParameterSpec.h>
#include <java/security/spec/InvalidParameterSpecException.h>
#include <sun/security/util/SecurityProviderConstants.h>
#include <jcpp.h>

#undef DEF_DSA_KEY_SIZE
#undef J
#undef ONE
#undef TWO
#undef U
#undef V
#undef W
#undef X

using $BigIntegerArray = $Array<::java::math::BigInteger>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $BigInteger = ::java::math::BigInteger;
using $AlgorithmParameterGeneratorSpi = ::java::security::AlgorithmParameterGeneratorSpi;
using $AlgorithmParameters = ::java::security::AlgorithmParameters;
using $InvalidAlgorithmParameterException = ::java::security::InvalidAlgorithmParameterException;
using $InvalidParameterException = ::java::security::InvalidParameterException;
using $MessageDigest = ::java::security::MessageDigest;
using $NoSuchAlgorithmException = ::java::security::NoSuchAlgorithmException;
using $NoSuchProviderException = ::java::security::NoSuchProviderException;
using $ProviderException = ::java::security::ProviderException;
using $SecureRandom = ::java::security::SecureRandom;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $DSAGenParameterSpec = ::java::security::spec::DSAGenParameterSpec;
using $DSAParameterSpec = ::java::security::spec::DSAParameterSpec;
using $InvalidParameterSpecException = ::java::security::spec::InvalidParameterSpecException;
using $SecurityProviderConstants = ::sun::security::util::SecurityProviderConstants;

namespace sun {
	namespace security {
		namespace provider {

$FieldInfo _DSAParameterGenerator_FieldInfo_[] = {
	{"valueL", "I", nullptr, $PRIVATE, $field(DSAParameterGenerator, valueL)},
	{"valueN", "I", nullptr, $PRIVATE, $field(DSAParameterGenerator, valueN)},
	{"seedLen", "I", nullptr, $PRIVATE, $field(DSAParameterGenerator, seedLen)},
	{"random", "Ljava/security/SecureRandom;", nullptr, $PRIVATE, $field(DSAParameterGenerator, random)},
	{}
};

$MethodInfo _DSAParameterGenerator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DSAParameterGenerator::*)()>(&DSAParameterGenerator::init$))},
	{"engineGenerateParameters", "()Ljava/security/AlgorithmParameters;", nullptr, $PROTECTED},
	{"engineInit", "(ILjava/security/SecureRandom;)V", nullptr, $PROTECTED},
	{"engineInit", "(Ljava/security/spec/AlgorithmParameterSpec;Ljava/security/SecureRandom;)V", nullptr, $PROTECTED, nullptr, "java.security.InvalidAlgorithmParameterException"},
	{"generateG", "(Ljava/math/BigInteger;Ljava/math/BigInteger;)Ljava/math/BigInteger;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$BigInteger*(*)($BigInteger*,$BigInteger*)>(&DSAParameterGenerator::generateG))},
	{"generatePandQ", "(Ljava/security/SecureRandom;III)[Ljava/math/BigInteger;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$BigIntegerArray*(*)($SecureRandom*,int32_t,int32_t,int32_t)>(&DSAParameterGenerator::generatePandQ))},
	{"toByteArray", "(Ljava/math/BigInteger;)[B", nullptr, $PRIVATE | $STATIC, $method(static_cast<$bytes*(*)($BigInteger*)>(&DSAParameterGenerator::toByteArray))},
	{}
};

$ClassInfo _DSAParameterGenerator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.provider.DSAParameterGenerator",
	"java.security.AlgorithmParameterGeneratorSpi",
	nullptr,
	_DSAParameterGenerator_FieldInfo_,
	_DSAParameterGenerator_MethodInfo_
};

$Object* allocate$DSAParameterGenerator($Class* clazz) {
	return $of($alloc(DSAParameterGenerator));
}

void DSAParameterGenerator::init$() {
	$AlgorithmParameterGeneratorSpi::init$();
	this->valueL = -1;
	this->valueN = -1;
	this->seedLen = -1;
}

void DSAParameterGenerator::engineInit(int32_t strength, $SecureRandom* random) {
	$useLocalCurrentObjectStackCache();
	if ((strength != 2048) && (strength != 3072) && ((strength < 512) || (strength > 1024) || (strength % 64 != 0))) {
		$throwNew($InvalidParameterException, $$str({"Unexpected strength (size of prime): "_s, $$str(strength), ". Prime size should be 512-1024, 2048, or 3072"_s}));
	}
	this->valueL = strength;
	this->valueN = $SecurityProviderConstants::getDefDSASubprimeSize(strength);
	this->seedLen = this->valueN;
	$set(this, random, random);
}

void DSAParameterGenerator::engineInit($AlgorithmParameterSpec* genParamSpec, $SecureRandom* random) {
	if (!($instanceOf($DSAGenParameterSpec, genParamSpec))) {
		$throwNew($InvalidAlgorithmParameterException, "Invalid parameter"_s);
	}
	$var($DSAGenParameterSpec, dsaGenParams, $cast($DSAGenParameterSpec, genParamSpec));
	this->valueL = $nc(dsaGenParams)->getPrimePLength();
	this->valueN = dsaGenParams->getSubprimeQLength();
	this->seedLen = dsaGenParams->getSeedLength();
	$set(this, random, random);
}

$AlgorithmParameters* DSAParameterGenerator::engineGenerateParameters() {
	$useLocalCurrentObjectStackCache();
	$var($AlgorithmParameters, algParams, nullptr);
	try {
		if (this->random == nullptr) {
			$set(this, random, $new($SecureRandom));
		}
		if (this->valueL == -1) {
			$init($SecurityProviderConstants);
			engineInit($SecurityProviderConstants::DEF_DSA_KEY_SIZE, this->random);
		}
		$var($BigIntegerArray, pAndQ, generatePandQ(this->random, this->valueL, this->valueN, this->seedLen));
		$var($BigInteger, paramP, $nc(pAndQ)->get(0));
		$var($BigInteger, paramQ, pAndQ->get(1));
		$var($BigInteger, paramG, generateG(paramP, paramQ));
		$var($DSAParameterSpec, dsaParamSpec, $new($DSAParameterSpec, paramP, paramQ, paramG));
		$assign(algParams, $AlgorithmParameters::getInstance("DSA"_s, "SUN"_s));
		$nc(algParams)->init(static_cast<$AlgorithmParameterSpec*>(dsaParamSpec));
	} catch ($InvalidParameterSpecException& e) {
		$throwNew($RuntimeException, $(e->getMessage()));
	} catch ($NoSuchAlgorithmException& e) {
		$throwNew($RuntimeException, $(e->getMessage()));
	} catch ($NoSuchProviderException& e) {
		$throwNew($RuntimeException, $(e->getMessage()));
	}
	return algParams;
}

$BigIntegerArray* DSAParameterGenerator::generatePandQ($SecureRandom* random, int32_t valueL, int32_t valueN, int32_t seedLen) {
	$init(DSAParameterGenerator);
	$useLocalCurrentObjectStackCache();
	$var($String, hashAlg, nullptr);
	if (valueN == 160) {
		$assign(hashAlg, "SHA"_s);
	} else if (valueN == 224) {
		$assign(hashAlg, "SHA-224"_s);
	} else if (valueN == 256) {
		$assign(hashAlg, "SHA-256"_s);
	}
	$var($MessageDigest, hashObj, nullptr);
	try {
		$assign(hashObj, $MessageDigest::getInstance(hashAlg));
	} catch ($NoSuchAlgorithmException& nsae) {
		nsae->printStackTrace();
	}
	int32_t outLen = $nc(hashObj)->getDigestLength() * 8;
	int32_t n = $div((valueL - 1), outLen);
	int32_t b = $mod((valueL - 1), outLen);
	$var($bytes, seedBytes, $new($bytes, seedLen / 8));
	$init($BigInteger);
	$var($BigInteger, twoSl, $nc($BigInteger::TWO)->pow(seedLen));
	int32_t primeCertainty = -1;
	if (valueL <= 1024) {
		primeCertainty = 80;
	} else if (valueL == 2048) {
		primeCertainty = 112;
	} else if (valueL == 3072) {
		primeCertainty = 128;
	}
	if (primeCertainty < 0) {
		$throwNew($ProviderException, $$str({"Invalid valueL: "_s, $$str(valueL)}));
	}
	$var($BigInteger, resultP, nullptr);
	$var($BigInteger, resultQ, nullptr);
	$var($BigInteger, seed, nullptr);
	int32_t counter = 0;
	while (true) {
		do {
			$nc(random)->nextBytes(seedBytes);
			$assign(seed, $new($BigInteger, 1, seedBytes));
			$var($BigInteger, U, $$new($BigInteger, 1, $(hashObj->digest(seedBytes)))->mod($($nc($BigInteger::TWO)->pow(valueN - 1))));
			$assign(resultQ, $nc($($nc($($nc($($nc($BigInteger::TWO)->pow(valueN - 1)))->add(U)))->add($BigInteger::ONE)))->subtract($($nc(U)->mod($BigInteger::TWO))));
		} while (!$nc(resultQ)->isProbablePrime(primeCertainty));
		$var($BigInteger, offset, $BigInteger::ONE);
		for (counter = 0; counter < 4 * valueL; ++counter) {
			$var($BigIntegerArray, V, $new($BigIntegerArray, n + 1));
			for (int32_t j = 0; j <= n; ++j) {
				$var($BigInteger, J, $BigInteger::valueOf((int64_t)j));
				$var($BigInteger, tmp, $nc(($($nc($($nc(seed)->add(offset)))->add(J))))->mod(twoSl));
				$var($bytes, vjBytes, hashObj->digest($(toByteArray(tmp))));
				V->set(j, $$new($BigInteger, 1, vjBytes));
			}
			$var($BigInteger, W, V->get(0));
			for (int32_t i = 1; i < n; ++i) {
				$assign(W, $nc(W)->add($($nc(V->get(i))->multiply($($nc($BigInteger::TWO)->pow(i * outLen))))));
			}
			$assign(W, $nc(W)->add($($nc(($($nc(V->get(n))->mod($($nc($BigInteger::TWO)->pow(b))))))->multiply($($nc($BigInteger::TWO)->pow(n * outLen))))));
			$var($BigInteger, twoLm1, $nc($BigInteger::TWO)->pow(valueL - 1));
			$var($BigInteger, X, W->add(twoLm1));
			$var($BigInteger, c, $nc(X)->mod($(resultQ->multiply($BigInteger::TWO))));
			$assign(resultP, X->subtract($($nc(c)->subtract($BigInteger::ONE))));
			bool var$0 = $nc(resultP)->compareTo(twoLm1) > -1;
			if (var$0 && resultP->isProbablePrime(primeCertainty)) {
				$var($BigIntegerArray, result, $new($BigIntegerArray, {
					resultP,
					resultQ,
					seed,
					$($BigInteger::valueOf((int64_t)counter))
				}));
				return result;
			}
			$assign(offset, $nc($($nc(offset)->add($($BigInteger::valueOf((int64_t)n)))))->add($BigInteger::ONE));
		}
	}
}

$BigInteger* DSAParameterGenerator::generateG($BigInteger* p, $BigInteger* q) {
	$init(DSAParameterGenerator);
	$useLocalCurrentObjectStackCache();
	$init($BigInteger);
	$var($BigInteger, h, $BigInteger::ONE);
	$var($BigInteger, pMinusOneOverQ, $nc(($($nc(p)->subtract($BigInteger::ONE))))->divide(q));
	$var($BigInteger, resultG, $BigInteger::ONE);
	while ($nc(resultG)->compareTo($BigInteger::TWO) < 0) {
		$assign(resultG, $nc(h)->modPow(pMinusOneOverQ, p));
		$assign(h, h->add($BigInteger::ONE));
	}
	return resultG;
}

$bytes* DSAParameterGenerator::toByteArray($BigInteger* bigInt) {
	$init(DSAParameterGenerator);
	$useLocalCurrentObjectStackCache();
	$var($bytes, result, $nc(bigInt)->toByteArray());
	if ($nc(result)->get(0) == 0) {
		$var($bytes, tmp, $new($bytes, result->length - 1));
		$System::arraycopy(result, 1, tmp, 0, tmp->length);
		$assign(result, tmp);
	}
	return result;
}

DSAParameterGenerator::DSAParameterGenerator() {
}

$Class* DSAParameterGenerator::load$($String* name, bool initialize) {
	$loadClass(DSAParameterGenerator, name, initialize, &_DSAParameterGenerator_ClassInfo_, allocate$DSAParameterGenerator);
	return class$;
}

$Class* DSAParameterGenerator::class$ = nullptr;

		} // provider
	} // security
} // sun