#include <java/security/interfaces/RSAPrivateCrtKey.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/math/BigInteger.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigInteger = ::java::math::BigInteger;
using $RSAPrivateKey = ::java::security::interfaces::RSAPrivateKey;

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
	{"getCrtCoefficient", "()Ljava/math/BigInteger;", nullptr, $PUBLIC | $ABSTRACT},
	{"getPrimeExponentP", "()Ljava/math/BigInteger;", nullptr, $PUBLIC | $ABSTRACT},
	{"getPrimeExponentQ", "()Ljava/math/BigInteger;", nullptr, $PUBLIC | $ABSTRACT},
	{"getPrimeP", "()Ljava/math/BigInteger;", nullptr, $PUBLIC | $ABSTRACT},
	{"getPrimeQ", "()Ljava/math/BigInteger;", nullptr, $PUBLIC | $ABSTRACT},
	{"getPublicExponent", "()Ljava/math/BigInteger;", nullptr, $PUBLIC | $ABSTRACT},
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