#include <sun/security/provider/DSAKeyPairGenerator$Legacy.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/math/BigInteger.h>
#include <java/security/InvalidParameterException.h>
#include <java/security/KeyPair.h>
#include <java/security/SecureRandom.h>
#include <java/security/interfaces/DSAParams.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <java/security/spec/DSAParameterSpec.h>
#include <sun/security/provider/DSAKeyPairGenerator.h>
#include <sun/security/provider/ParameterCache.h>
#include <sun/security/util/SecurityProviderConstants.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigInteger = ::java::math::BigInteger;
using $InvalidParameterException = ::java::security::InvalidParameterException;
using $KeyPair = ::java::security::KeyPair;
using $SecureRandom = ::java::security::SecureRandom;
using $DSAKeyPairGenerator = ::java::security::interfaces::DSAKeyPairGenerator;
using $DSAParams = ::java::security::interfaces::DSAParams;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $DSAParameterSpec = ::java::security::spec::DSAParameterSpec;
using $1DSAKeyPairGenerator = ::sun::security::provider::DSAKeyPairGenerator;
using $ParameterCache = ::sun::security::provider::ParameterCache;
using $SecurityProviderConstants = ::sun::security::util::SecurityProviderConstants;

namespace sun {
	namespace security {
		namespace provider {

$MethodInfo _DSAKeyPairGenerator$Legacy_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DSAKeyPairGenerator$Legacy::*)()>(&DSAKeyPairGenerator$Legacy::init$))},
	{"generateKeyPair", "()Ljava/security/KeyPair;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"initialize", "(IZLjava/security/SecureRandom;)V", nullptr, $PUBLIC, nullptr, "java.security.InvalidParameterException"},
	{"initialize", "(Ljava/security/interfaces/DSAParams;Ljava/security/SecureRandom;)V", nullptr, $PUBLIC, nullptr, "java.security.InvalidParameterException"},
	{"initialize", "(Ljava/security/spec/AlgorithmParameterSpec;Ljava/security/SecureRandom;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, nullptr, "java.security.InvalidAlgorithmParameterException"},
	{"initialize", "(ILjava/security/SecureRandom;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DSAKeyPairGenerator$Legacy_InnerClassesInfo_[] = {
	{"sun.security.provider.DSAKeyPairGenerator$Legacy", "sun.security.provider.DSAKeyPairGenerator", "Legacy", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _DSAKeyPairGenerator$Legacy_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.security.provider.DSAKeyPairGenerator$Legacy",
	"sun.security.provider.DSAKeyPairGenerator",
	"java.security.interfaces.DSAKeyPairGenerator",
	nullptr,
	_DSAKeyPairGenerator$Legacy_MethodInfo_,
	nullptr,
	nullptr,
	_DSAKeyPairGenerator$Legacy_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.provider.DSAKeyPairGenerator"
};

$Object* allocate$DSAKeyPairGenerator$Legacy($Class* clazz) {
	return $of($alloc(DSAKeyPairGenerator$Legacy));
}

int32_t DSAKeyPairGenerator$Legacy::hashCode() {
	 return this->$1DSAKeyPairGenerator::hashCode();
}

bool DSAKeyPairGenerator$Legacy::equals(Object$* obj) {
	 return this->$1DSAKeyPairGenerator::equals(obj);
}

$Object* DSAKeyPairGenerator$Legacy::clone() {
	 return this->$1DSAKeyPairGenerator::clone();
}

$String* DSAKeyPairGenerator$Legacy::toString() {
	 return this->$1DSAKeyPairGenerator::toString();
}

void DSAKeyPairGenerator$Legacy::finalize() {
	this->$1DSAKeyPairGenerator::finalize();
}

void DSAKeyPairGenerator$Legacy::init$() {
	$1DSAKeyPairGenerator::init$(1024);
}

void DSAKeyPairGenerator$Legacy::initialize(int32_t modlen, bool genParams, $SecureRandom* random) {
	if (genParams) {
		$1DSAKeyPairGenerator::init(modlen, random, true);
	} else {
		$var($DSAParameterSpec, cachedParams, $ParameterCache::getCachedDSAParameterSpec(modlen, $SecurityProviderConstants::getDefDSASubprimeSize(modlen)));
		if (cachedParams == nullptr) {
			$throwNew($InvalidParameterException, "No precomputed parameters for requested modulus size available"_s);
		}
		$1DSAKeyPairGenerator::init(cachedParams, random, false);
	}
}

void DSAKeyPairGenerator$Legacy::initialize($DSAParams* params, $SecureRandom* random) {
	$useLocalCurrentObjectStackCache();
	if (params == nullptr) {
		$throwNew($InvalidParameterException, "Params must not be null"_s);
	}
	$var($BigInteger, var$0, $nc(params)->getP());
	$var($BigInteger, var$1, params->getQ());
	$var($DSAParameterSpec, spec, $new($DSAParameterSpec, var$0, var$1, $(params->getG())));
	$1DSAKeyPairGenerator::init(spec, random, false);
}

$KeyPair* DSAKeyPairGenerator$Legacy::generateKeyPair() {
	return $1DSAKeyPairGenerator::generateKeyPair();
}

void DSAKeyPairGenerator$Legacy::initialize($AlgorithmParameterSpec* params, $SecureRandom* random) {
	$1DSAKeyPairGenerator::initialize(params, random);
}

void DSAKeyPairGenerator$Legacy::initialize(int32_t modlen, $SecureRandom* random) {
	$1DSAKeyPairGenerator::initialize(modlen, random);
}

DSAKeyPairGenerator$Legacy::DSAKeyPairGenerator$Legacy() {
}

$Class* DSAKeyPairGenerator$Legacy::load$($String* name, bool initialize) {
	$loadClass(DSAKeyPairGenerator$Legacy, name, initialize, &_DSAKeyPairGenerator$Legacy_ClassInfo_, allocate$DSAKeyPairGenerator$Legacy);
	return class$;
}

$Class* DSAKeyPairGenerator$Legacy::class$ = nullptr;

		} // provider
	} // security
} // sun