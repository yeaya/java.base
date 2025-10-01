#include <java/security/spec/ECPrivateKeySpec.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/math/BigInteger.h>
#include <java/security/spec/ECParameterSpec.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $BigInteger = ::java::math::BigInteger;
using $ECParameterSpec = ::java::security::spec::ECParameterSpec;
using $KeySpec = ::java::security::spec::KeySpec;

namespace java {
	namespace security {
		namespace spec {

$FieldInfo _ECPrivateKeySpec_FieldInfo_[] = {
	{"s", "Ljava/math/BigInteger;", nullptr, $PRIVATE, $field(ECPrivateKeySpec, s)},
	{"params", "Ljava/security/spec/ECParameterSpec;", nullptr, $PRIVATE, $field(ECPrivateKeySpec, params)},
	{}
};

$MethodInfo _ECPrivateKeySpec_MethodInfo_[] = {
	{"<init>", "(Ljava/math/BigInteger;Ljava/security/spec/ECParameterSpec;)V", nullptr, $PUBLIC, $method(static_cast<void(ECPrivateKeySpec::*)($BigInteger*,$ECParameterSpec*)>(&ECPrivateKeySpec::init$))},
	{"getParams", "()Ljava/security/spec/ECParameterSpec;", nullptr, $PUBLIC},
	{"getS", "()Ljava/math/BigInteger;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ECPrivateKeySpec_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.security.spec.ECPrivateKeySpec",
	"java.lang.Object",
	"java.security.spec.KeySpec",
	_ECPrivateKeySpec_FieldInfo_,
	_ECPrivateKeySpec_MethodInfo_
};

$Object* allocate$ECPrivateKeySpec($Class* clazz) {
	return $of($alloc(ECPrivateKeySpec));
}

void ECPrivateKeySpec::init$($BigInteger* s, $ECParameterSpec* params) {
	if (s == nullptr) {
		$throwNew($NullPointerException, "s is null"_s);
	}
	if (params == nullptr) {
		$throwNew($NullPointerException, "params is null"_s);
	}
	$set(this, s, s);
	$set(this, params, params);
}

$BigInteger* ECPrivateKeySpec::getS() {
	return this->s;
}

$ECParameterSpec* ECPrivateKeySpec::getParams() {
	return this->params;
}

ECPrivateKeySpec::ECPrivateKeySpec() {
}

$Class* ECPrivateKeySpec::load$($String* name, bool initialize) {
	$loadClass(ECPrivateKeySpec, name, initialize, &_ECPrivateKeySpec_ClassInfo_, allocate$ECPrivateKeySpec);
	return class$;
}

$Class* ECPrivateKeySpec::class$ = nullptr;

		} // spec
	} // security
} // java