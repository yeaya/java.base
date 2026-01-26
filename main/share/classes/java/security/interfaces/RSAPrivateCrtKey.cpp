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

$CompoundAttribute _RSAPrivateCrtKey_FieldAnnotations_serialVersionUID[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _RSAPrivateCrtKey_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $constField(RSAPrivateCrtKey, serialVersionUID), _RSAPrivateCrtKey_FieldAnnotations_serialVersionUID},
	{}
};

$MethodInfo _RSAPrivateCrtKey_MethodInfo_[] = {
	{"getCrtCoefficient", "()Ljava/math/BigInteger;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RSAPrivateCrtKey, getCrtCoefficient, $BigInteger*)},
	{"getPrimeExponentP", "()Ljava/math/BigInteger;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RSAPrivateCrtKey, getPrimeExponentP, $BigInteger*)},
	{"getPrimeExponentQ", "()Ljava/math/BigInteger;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RSAPrivateCrtKey, getPrimeExponentQ, $BigInteger*)},
	{"getPrimeP", "()Ljava/math/BigInteger;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RSAPrivateCrtKey, getPrimeP, $BigInteger*)},
	{"getPrimeQ", "()Ljava/math/BigInteger;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RSAPrivateCrtKey, getPrimeQ, $BigInteger*)},
	{"getPublicExponent", "()Ljava/math/BigInteger;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RSAPrivateCrtKey, getPublicExponent, $BigInteger*)},
	{}
};

$ClassInfo _RSAPrivateCrtKey_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.security.interfaces.RSAPrivateCrtKey",
	nullptr,
	"java.security.interfaces.RSAPrivateKey",
	_RSAPrivateCrtKey_FieldInfo_,
	_RSAPrivateCrtKey_MethodInfo_
};

$Object* allocate$RSAPrivateCrtKey($Class* clazz) {
	return $of($alloc(RSAPrivateCrtKey));
}

$Class* RSAPrivateCrtKey::load$($String* name, bool initialize) {
	$loadClass(RSAPrivateCrtKey, name, initialize, &_RSAPrivateCrtKey_ClassInfo_, allocate$RSAPrivateCrtKey);
	return class$;
}

$Class* RSAPrivateCrtKey::class$ = nullptr;

		} // interfaces
	} // security
} // java