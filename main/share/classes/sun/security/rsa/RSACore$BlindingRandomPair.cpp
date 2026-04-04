#include <sun/security/rsa/RSACore$BlindingRandomPair.h>
#include <java/math/BigInteger.h>
#include <sun/security/rsa/RSACore.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigInteger = ::java::math::BigInteger;

namespace sun {
	namespace security {
		namespace rsa {

void RSACore$BlindingRandomPair::init$($BigInteger* u, $BigInteger* v) {
	$set(this, u, u);
	$set(this, v, v);
}

RSACore$BlindingRandomPair::RSACore$BlindingRandomPair() {
}

$Class* RSACore$BlindingRandomPair::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"u", "Ljava/math/BigInteger;", nullptr, $FINAL, $field(RSACore$BlindingRandomPair, u)},
		{"v", "Ljava/math/BigInteger;", nullptr, $FINAL, $field(RSACore$BlindingRandomPair, v)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/math/BigInteger;Ljava/math/BigInteger;)V", nullptr, 0, $method(RSACore$BlindingRandomPair, init$, void, $BigInteger*, $BigInteger*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.rsa.RSACore$BlindingRandomPair", "sun.security.rsa.RSACore", "BlindingRandomPair", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.rsa.RSACore$BlindingRandomPair",
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
	$loadClass(RSACore$BlindingRandomPair, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RSACore$BlindingRandomPair);
	});
	return class$;
}

$Class* RSACore$BlindingRandomPair::class$ = nullptr;

		} // rsa
	} // security
} // sun