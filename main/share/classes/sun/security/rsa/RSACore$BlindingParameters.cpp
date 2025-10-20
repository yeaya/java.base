#include <sun/security/rsa/RSACore$BlindingParameters.h>

#include <java/lang/ArithmeticException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/math/BigInteger.h>
#include <java/security/SecureRandom.h>
#include <java/util/Random.h>
#include <sun/security/jca/JCAUtil.h>
#include <sun/security/rsa/RSACore$BlindingRandomPair.h>
#include <sun/security/rsa/RSACore.h>
#include <jcpp.h>

#undef BIG_TWO
#undef ONE
#undef ZERO

using $ArithmeticException = ::java::lang::ArithmeticException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigInteger = ::java::math::BigInteger;
using $SecureRandom = ::java::security::SecureRandom;
using $Random = ::java::util::Random;
using $JCAUtil = ::sun::security::jca::JCAUtil;
using $RSACore = ::sun::security::rsa::RSACore;
using $RSACore$BlindingRandomPair = ::sun::security::rsa::RSACore$BlindingRandomPair;

namespace sun {
	namespace security {
		namespace rsa {

$FieldInfo _RSACore$BlindingParameters_FieldInfo_[] = {
	{"BIG_TWO", "Ljava/math/BigInteger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(RSACore$BlindingParameters, BIG_TWO)},
	{"e", "Ljava/math/BigInteger;", nullptr, $PRIVATE | $FINAL, $field(RSACore$BlindingParameters, e)},
	{"d", "Ljava/math/BigInteger;", nullptr, $PRIVATE | $FINAL, $field(RSACore$BlindingParameters, d)},
	{"u", "Ljava/math/BigInteger;", nullptr, $PRIVATE, $field(RSACore$BlindingParameters, u)},
	{"v", "Ljava/math/BigInteger;", nullptr, $PRIVATE, $field(RSACore$BlindingParameters, v)},
	{}
};

$MethodInfo _RSACore$BlindingParameters_MethodInfo_[] = {
	{"<init>", "(Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;)V", nullptr, 0, $method(static_cast<void(RSACore$BlindingParameters::*)($BigInteger*,$BigInteger*,$BigInteger*)>(&RSACore$BlindingParameters::init$))},
	{"getBlindingRandomPair", "(Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;)Lsun/security/rsa/RSACore$BlindingRandomPair;", nullptr, 0, $method(static_cast<$RSACore$BlindingRandomPair*(RSACore$BlindingParameters::*)($BigInteger*,$BigInteger*,$BigInteger*)>(&RSACore$BlindingParameters::getBlindingRandomPair))},
	{"isReusable", "()Z", nullptr, 0, $method(static_cast<bool(RSACore$BlindingParameters::*)()>(&RSACore$BlindingParameters::isReusable))},
	{}
};

$InnerClassInfo _RSACore$BlindingParameters_InnerClassesInfo_[] = {
	{"sun.security.rsa.RSACore$BlindingParameters", "sun.security.rsa.RSACore", "BlindingParameters", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _RSACore$BlindingParameters_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.rsa.RSACore$BlindingParameters",
	"java.lang.Object",
	nullptr,
	_RSACore$BlindingParameters_FieldInfo_,
	_RSACore$BlindingParameters_MethodInfo_,
	nullptr,
	nullptr,
	_RSACore$BlindingParameters_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.rsa.RSACore"
};

$Object* allocate$RSACore$BlindingParameters($Class* clazz) {
	return $of($alloc(RSACore$BlindingParameters));
}

$BigInteger* RSACore$BlindingParameters::BIG_TWO = nullptr;

void RSACore$BlindingParameters::init$($BigInteger* e, $BigInteger* d, $BigInteger* n) {
	$useLocalCurrentObjectStackCache();
	$set(this, u, nullptr);
	$set(this, v, nullptr);
	$set(this, e, e);
	$set(this, d, d);
	int32_t len = $nc(n)->bitLength();
	$var($SecureRandom, random, $JCAUtil::getSecureRandom());
	$set(this, u, $$new($BigInteger, len, static_cast<$Random*>(random))->mod(n));
	if ($nc(this->u)->equals($BigInteger::ZERO)) {
		$set(this, u, $BigInteger::ONE);
	}
	try {
		$set(this, v, $nc(this->u)->modInverse(n));
	} catch ($ArithmeticException&) {
		$var($ArithmeticException, ae, $catch());
		$set(this, u, $BigInteger::ONE);
		$set(this, v, $BigInteger::ONE);
	}
	if (e != nullptr) {
		$set(this, u, $nc(this->u)->modPow(e, n));
	} else {
		$set(this, v, $nc(this->v)->modPow(d, n));
	}
}

$RSACore$BlindingRandomPair* RSACore$BlindingParameters::getBlindingRandomPair($BigInteger* e, $BigInteger* d, $BigInteger* n) {
	bool var$0 = (this->e != nullptr && $nc(this->e)->equals(e));
	if (var$0 || (this->d != nullptr && $nc(this->d)->equals(d))) {
		$var($RSACore$BlindingRandomPair, brp, $new($RSACore$BlindingRandomPair, this->u, this->v));
		bool var$1 = $nc(this->u)->compareTo($BigInteger::ONE) <= 0;
		if (var$1 || $nc(this->v)->compareTo($BigInteger::ONE) <= 0) {
			$set(this, u, $BigInteger::ZERO);
			$set(this, v, $BigInteger::ZERO);
		} else {
			$set(this, u, $nc(this->u)->modPow(RSACore$BlindingParameters::BIG_TWO, n));
			$set(this, v, $nc(this->v)->modPow(RSACore$BlindingParameters::BIG_TWO, n));
		}
		return brp;
	}
	return nullptr;
}

bool RSACore$BlindingParameters::isReusable() {
	$init($BigInteger);
	bool var$0 = !$nc(this->u)->equals($BigInteger::ZERO);
	return var$0 && !$nc(this->v)->equals($BigInteger::ZERO);
}

void clinit$RSACore$BlindingParameters($Class* class$) {
	$assignStatic(RSACore$BlindingParameters::BIG_TWO, $BigInteger::valueOf((int64_t)2));
}

RSACore$BlindingParameters::RSACore$BlindingParameters() {
}

$Class* RSACore$BlindingParameters::load$($String* name, bool initialize) {
	$loadClass(RSACore$BlindingParameters, name, initialize, &_RSACore$BlindingParameters_ClassInfo_, clinit$RSACore$BlindingParameters, allocate$RSACore$BlindingParameters);
	return class$;
}

$Class* RSACore$BlindingParameters::class$ = nullptr;

		} // rsa
	} // security
} // sun