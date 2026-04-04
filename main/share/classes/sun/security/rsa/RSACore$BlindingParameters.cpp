#include <sun/security/rsa/RSACore$BlindingParameters.h>
#include <java/math/BigInteger.h>
#include <java/security/SecureRandom.h>
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
using $JCAUtil = ::sun::security::jca::JCAUtil;
using $RSACore$BlindingRandomPair = ::sun::security::rsa::RSACore$BlindingRandomPair;

namespace sun {
	namespace security {
		namespace rsa {

$BigInteger* RSACore$BlindingParameters::BIG_TWO = nullptr;

void RSACore$BlindingParameters::init$($BigInteger* e, $BigInteger* d, $BigInteger* n) {
	$useLocalObjectStack();
	$set(this, u, nullptr);
	$set(this, v, nullptr);
	$set(this, e, e);
	$set(this, d, d);
	int32_t len = $nc(n)->bitLength();
	$var($SecureRandom, random, $JCAUtil::getSecureRandom());
	$set(this, u, $$new($BigInteger, len, random)->mod(n));
	if (this->u->equals($BigInteger::ZERO)) {
		$set(this, u, $BigInteger::ONE);
	}
	try {
		$set(this, v, $nc(this->u)->modInverse(n));
	} catch ($ArithmeticException& ae) {
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
	bool var$0 = this->e != nullptr && this->e->equals(e);
	if (var$0 || (this->d != nullptr && this->d->equals(d))) {
		$var($RSACore$BlindingRandomPair, brp, $new($RSACore$BlindingRandomPair, this->u, this->v));
		bool var$1 = $nc(this->u)->compareTo($BigInteger::ONE) <= 0;
		if (var$1 || $nc(this->v)->compareTo($BigInteger::ONE) <= 0) {
			$set(this, u, $BigInteger::ZERO);
			$set(this, v, $BigInteger::ZERO);
		} else {
			$set(this, u, this->u->modPow(RSACore$BlindingParameters::BIG_TWO, n));
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

void RSACore$BlindingParameters::clinit$($Class* clazz) {
	$assignStatic(RSACore$BlindingParameters::BIG_TWO, $BigInteger::valueOf(2));
}

RSACore$BlindingParameters::RSACore$BlindingParameters() {
}

$Class* RSACore$BlindingParameters::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"BIG_TWO", "Ljava/math/BigInteger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(RSACore$BlindingParameters, BIG_TWO)},
		{"e", "Ljava/math/BigInteger;", nullptr, $PRIVATE | $FINAL, $field(RSACore$BlindingParameters, e)},
		{"d", "Ljava/math/BigInteger;", nullptr, $PRIVATE | $FINAL, $field(RSACore$BlindingParameters, d)},
		{"u", "Ljava/math/BigInteger;", nullptr, $PRIVATE, $field(RSACore$BlindingParameters, u)},
		{"v", "Ljava/math/BigInteger;", nullptr, $PRIVATE, $field(RSACore$BlindingParameters, v)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;)V", nullptr, 0, $method(RSACore$BlindingParameters, init$, void, $BigInteger*, $BigInteger*, $BigInteger*)},
		{"getBlindingRandomPair", "(Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;)Lsun/security/rsa/RSACore$BlindingRandomPair;", nullptr, 0, $method(RSACore$BlindingParameters, getBlindingRandomPair, $RSACore$BlindingRandomPair*, $BigInteger*, $BigInteger*, $BigInteger*)},
		{"isReusable", "()Z", nullptr, 0, $method(RSACore$BlindingParameters, isReusable, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.rsa.RSACore$BlindingParameters", "sun.security.rsa.RSACore", "BlindingParameters", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.rsa.RSACore$BlindingParameters",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.rsa.RSACore"
	};
	$loadClass(RSACore$BlindingParameters, name, initialize, &classInfo$$, RSACore$BlindingParameters::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(RSACore$BlindingParameters);
	});
	return class$;
}

$Class* RSACore$BlindingParameters::class$ = nullptr;

		} // rsa
	} // security
} // sun