#include <java/security/interfaces/RSAPrivateCrtKey.h>
#include <java/math/BigInteger.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigInteger = ::java::math::BigInteger;

namespace java {
	namespace security {
		namespace interfaces {

$Class* RSAPrivateCrtKey::load$($String* name, bool initialize) {
	$CompoundAttribute serialVersionUIDfieldAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $constField(RSAPrivateCrtKey, serialVersionUID), serialVersionUIDfieldAnnotations$$},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"getCrtCoefficient", "()Ljava/math/BigInteger;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RSAPrivateCrtKey, getCrtCoefficient, $BigInteger*)},
		{"getPrimeExponentP", "()Ljava/math/BigInteger;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RSAPrivateCrtKey, getPrimeExponentP, $BigInteger*)},
		{"getPrimeExponentQ", "()Ljava/math/BigInteger;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RSAPrivateCrtKey, getPrimeExponentQ, $BigInteger*)},
		{"getPrimeP", "()Ljava/math/BigInteger;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RSAPrivateCrtKey, getPrimeP, $BigInteger*)},
		{"getPrimeQ", "()Ljava/math/BigInteger;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RSAPrivateCrtKey, getPrimeQ, $BigInteger*)},
		{"getPublicExponent", "()Ljava/math/BigInteger;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RSAPrivateCrtKey, getPublicExponent, $BigInteger*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.security.interfaces.RSAPrivateCrtKey",
		nullptr,
		"java.security.interfaces.RSAPrivateKey",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(RSAPrivateCrtKey, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(RSAPrivateCrtKey));
	});
	return class$;
}

$Class* RSAPrivateCrtKey::class$ = nullptr;

		} // interfaces
	} // security
} // java