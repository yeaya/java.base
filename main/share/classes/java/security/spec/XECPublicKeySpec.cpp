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

void XECPublicKeySpec::init$($AlgorithmParameterSpec* params, $BigInteger* u) {
	$Objects::requireNonNull(params, "params must not be null"_s);
	$Objects::requireNonNull(u, "u must not be null"_s);
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
	$FieldInfo fieldInfos$$[] = {
		{"params", "Ljava/security/spec/AlgorithmParameterSpec;", nullptr, $PRIVATE | $FINAL, $field(XECPublicKeySpec, params)},
		{"u", "Ljava/math/BigInteger;", nullptr, $PRIVATE | $FINAL, $field(XECPublicKeySpec, u)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/security/spec/AlgorithmParameterSpec;Ljava/math/BigInteger;)V", nullptr, $PUBLIC, $method(XECPublicKeySpec, init$, void, $AlgorithmParameterSpec*, $BigInteger*)},
		{"getParams", "()Ljava/security/spec/AlgorithmParameterSpec;", nullptr, $PUBLIC, $virtualMethod(XECPublicKeySpec, getParams, $AlgorithmParameterSpec*)},
		{"getU", "()Ljava/math/BigInteger;", nullptr, $PUBLIC, $virtualMethod(XECPublicKeySpec, getU, $BigInteger*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.security.spec.XECPublicKeySpec",
		"java.lang.Object",
		"java.security.spec.KeySpec",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(XECPublicKeySpec, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XECPublicKeySpec);
	});
	return class$;
}

$Class* XECPublicKeySpec::class$ = nullptr;

		} // spec
	} // security
} // java