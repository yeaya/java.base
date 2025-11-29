#include <java/security/interfaces/RSAMultiPrimePrivateCrtKey.h>

#include <java/math/BigInteger.h>
#include <java/security/spec/RSAOtherPrimeInfo.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace security {
		namespace interfaces {

$CompoundAttribute _RSAMultiPrimePrivateCrtKey_FieldAnnotations_serialVersionUID[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _RSAMultiPrimePrivateCrtKey_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $constField(RSAMultiPrimePrivateCrtKey, serialVersionUID), _RSAMultiPrimePrivateCrtKey_FieldAnnotations_serialVersionUID},
	{}
};

$MethodInfo _RSAMultiPrimePrivateCrtKey_MethodInfo_[] = {
	{"getCrtCoefficient", "()Ljava/math/BigInteger;", nullptr, $PUBLIC | $ABSTRACT},
	{"getOtherPrimeInfo", "()[Ljava/security/spec/RSAOtherPrimeInfo;", nullptr, $PUBLIC | $ABSTRACT},
	{"getPrimeExponentP", "()Ljava/math/BigInteger;", nullptr, $PUBLIC | $ABSTRACT},
	{"getPrimeExponentQ", "()Ljava/math/BigInteger;", nullptr, $PUBLIC | $ABSTRACT},
	{"getPrimeP", "()Ljava/math/BigInteger;", nullptr, $PUBLIC | $ABSTRACT},
	{"getPrimeQ", "()Ljava/math/BigInteger;", nullptr, $PUBLIC | $ABSTRACT},
	{"getPublicExponent", "()Ljava/math/BigInteger;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _RSAMultiPrimePrivateCrtKey_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.security.interfaces.RSAMultiPrimePrivateCrtKey",
	nullptr,
	"java.security.interfaces.RSAPrivateKey",
	_RSAMultiPrimePrivateCrtKey_FieldInfo_,
	_RSAMultiPrimePrivateCrtKey_MethodInfo_
};

$Object* allocate$RSAMultiPrimePrivateCrtKey($Class* clazz) {
	return $of($alloc(RSAMultiPrimePrivateCrtKey));
}

$Class* RSAMultiPrimePrivateCrtKey::load$($String* name, bool initialize) {
	$loadClass(RSAMultiPrimePrivateCrtKey, name, initialize, &_RSAMultiPrimePrivateCrtKey_ClassInfo_, allocate$RSAMultiPrimePrivateCrtKey);
	return class$;
}

$Class* RSAMultiPrimePrivateCrtKey::class$ = nullptr;

		} // interfaces
	} // security
} // java