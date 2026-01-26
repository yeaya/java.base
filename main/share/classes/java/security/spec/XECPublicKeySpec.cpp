#include <java/security/spec/XECPublicKeySpec.h>

#include <java/math/BigInteger.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <java/util/Objects.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigInteger = ::java::math::BigInteger;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $Objects = ::java::util::Objects;

namespace java {
	namespace security {
		namespace spec {

$FieldInfo _XECPublicKeySpec_FieldInfo_[] = {
	{"params", "Ljava/security/spec/AlgorithmParameterSpec;", nullptr, $PRIVATE | $FINAL, $field(XECPublicKeySpec, params)},
	{"u", "Ljava/math/BigInteger;", nullptr, $PRIVATE | $FINAL, $field(XECPublicKeySpec, u)},
	{}
};

$MethodInfo _XECPublicKeySpec_MethodInfo_[] = {
	{"<init>", "(Ljava/security/spec/AlgorithmParameterSpec;Ljava/math/BigInteger;)V", nullptr, $PUBLIC, $method(XECPublicKeySpec, init$, void, $AlgorithmParameterSpec*, $BigInteger*)},
	{"getParams", "()Ljava/security/spec/AlgorithmParameterSpec;", nullptr, $PUBLIC, $virtualMethod(XECPublicKeySpec, getParams, $AlgorithmParameterSpec*)},
	{"getU", "()Ljava/math/BigInteger;", nullptr, $PUBLIC, $virtualMethod(XECPublicKeySpec, getU, $BigInteger*)},
	{}
};

$ClassInfo _XECPublicKeySpec_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.security.spec.XECPublicKeySpec",
	"java.lang.Object",
	"java.security.spec.KeySpec",
	_XECPublicKeySpec_FieldInfo_,
	_XECPublicKeySpec_MethodInfo_
};

$Object* allocate$XECPublicKeySpec($Class* clazz) {
	return $of($alloc(XECPublicKeySpec));
}

void XECPublicKeySpec::init$($AlgorithmParameterSpec* params, $BigInteger* u) {
	$Objects::requireNonNull($of(params), "params must not be null"_s);
	$Objects::requireNonNull($of(u), "u must not be null"_s);
	$set(this, params, params);
	$set(this, u, u);
}

$AlgorithmParameterSpec* XECPublicKeySpec::getParams() {
	return this->params;
}

$BigInteger* XECPublicKeySpec::getU() {
	return this->u;
}

XECPublicKeySpec::XECPublicKeySpec() {
}

$Class* XECPublicKeySpec::load$($String* name, bool initialize) {
	$loadClass(XECPublicKeySpec, name, initialize, &_XECPublicKeySpec_ClassInfo_, allocate$XECPublicKeySpec);
	return class$;
}

$Class* XECPublicKeySpec::class$ = nullptr;

		} // spec
	} // security
} // java