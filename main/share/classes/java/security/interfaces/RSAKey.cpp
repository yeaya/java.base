#include <java/security/interfaces/RSAKey.h>
#include <java/math/BigInteger.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigInteger = ::java::math::BigInteger;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;

namespace java {
	namespace security {
		namespace interfaces {

$AlgorithmParameterSpec* RSAKey::getParams() {
	return nullptr;
}

$Class* RSAKey::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getModulus", "()Ljava/math/BigInteger;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RSAKey, getModulus, $BigInteger*)},
		{"getParams", "()Ljava/security/spec/AlgorithmParameterSpec;", nullptr, $PUBLIC, $virtualMethod(RSAKey, getParams, $AlgorithmParameterSpec*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.security.interfaces.RSAKey",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(RSAKey, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RSAKey);
	});
	return class$;
}

$Class* RSAKey::class$ = nullptr;

		} // interfaces
	} // security
} // java