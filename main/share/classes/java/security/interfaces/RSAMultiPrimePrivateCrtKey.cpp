#include <java/security/interfaces/RSAMultiPrimePrivateCrtKey.h>
#include <java/math/BigInteger.h>
#include <java/security/spec/RSAOtherPrimeInfo.h>
#include <jcpp.h>

using $RSAOtherPrimeInfoArray = $Array<::java::security::spec::RSAOtherPrimeInfo>;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigInteger = ::java::math::BigInteger;

namespace java {
	namespace security {
		namespace interfaces {

$Class* RSAMultiPrimePrivateCrtKey::load$($String* name, bool initialize) {
	$CompoundAttribute serialVersionUIDfieldAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $constField(RSAMultiPrimePrivateCrtKey, serialVersionUID), serialVersionUIDfieldAnnotations$$},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"getCrtCoefficient", "()Ljava/math/BigInteger;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RSAMultiPrimePrivateCrtKey, getCrtCoefficient, $BigInteger*)},
		{"getOtherPrimeInfo", "()[Ljava/security/spec/RSAOtherPrimeInfo;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RSAMultiPrimePrivateCrtKey, getOtherPrimeInfo, $RSAOtherPrimeInfoArray*)},
		{"getPrimeExponentP", "()Ljava/math/BigInteger;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RSAMultiPrimePrivateCrtKey, getPrimeExponentP, $BigInteger*)},
		{"getPrimeExponentQ", "()Ljava/math/BigInteger;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RSAMultiPrimePrivateCrtKey, getPrimeExponentQ, $BigInteger*)},
		{"getPrimeP", "()Ljava/math/BigInteger;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RSAMultiPrimePrivateCrtKey, getPrimeP, $BigInteger*)},
		{"getPrimeQ", "()Ljava/math/BigInteger;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RSAMultiPrimePrivateCrtKey, getPrimeQ, $BigInteger*)},
		{"getPublicExponent", "()Ljava/math/BigInteger;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RSAMultiPrimePrivateCrtKey, getPublicExponent, $BigInteger*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.security.interfaces.RSAMultiPrimePrivateCrtKey",
		nullptr,
		"java.security.interfaces.RSAPrivateKey",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(RSAMultiPrimePrivateCrtKey, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(RSAMultiPrimePrivateCrtKey));
	});
	return class$;
}

$Class* RSAMultiPrimePrivateCrtKey::class$ = nullptr;

		} // interfaces
	} // security
} // java