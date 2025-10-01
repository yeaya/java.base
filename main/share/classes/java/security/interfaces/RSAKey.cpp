#include <java/security/interfaces/RSAKey.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$MethodInfo _RSAKey_MethodInfo_[] = {
	{"getModulus", "()Ljava/math/BigInteger;", nullptr, $PUBLIC | $ABSTRACT},
	{"getParams", "()Ljava/security/spec/AlgorithmParameterSpec;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _RSAKey_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.security.interfaces.RSAKey",
	nullptr,
	nullptr,
	nullptr,
	_RSAKey_MethodInfo_
};

$Object* allocate$RSAKey($Class* clazz) {
	return $of($alloc(RSAKey));
}

$AlgorithmParameterSpec* RSAKey::getParams() {
	return nullptr;
}

$Class* RSAKey::load$($String* name, bool initialize) {
	$loadClass(RSAKey, name, initialize, &_RSAKey_ClassInfo_, allocate$RSAKey);
	return class$;
}

$Class* RSAKey::class$ = nullptr;

		} // interfaces
	} // security
} // java