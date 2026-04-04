#include <java/security/spec/XECPrivateKeySpec.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <java/util/Objects.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $Objects = ::java::util::Objects;

namespace java {
	namespace security {
		namespace spec {

void XECPrivateKeySpec::init$($AlgorithmParameterSpec* params, $bytes* scalar) {
	$Objects::requireNonNull(params, "params must not be null"_s);
	$Objects::requireNonNull(scalar, "scalar must not be null"_s);
	$set(this, params, params);
	$set(this, scalar, $cast($bytes, $nc(scalar)->clone()));
}

$AlgorithmParameterSpec* XECPrivateKeySpec::getParams() {
	return this->params;
}

$bytes* XECPrivateKeySpec::getScalar() {
	return $cast($bytes, $nc(this->scalar)->clone());
}

XECPrivateKeySpec::XECPrivateKeySpec() {
}

$Class* XECPrivateKeySpec::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"params", "Ljava/security/spec/AlgorithmParameterSpec;", nullptr, $PRIVATE | $FINAL, $field(XECPrivateKeySpec, params)},
		{"scalar", "[B", nullptr, $PRIVATE | $FINAL, $field(XECPrivateKeySpec, scalar)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/security/spec/AlgorithmParameterSpec;[B)V", nullptr, $PUBLIC, $method(XECPrivateKeySpec, init$, void, $AlgorithmParameterSpec*, $bytes*)},
		{"getParams", "()Ljava/security/spec/AlgorithmParameterSpec;", nullptr, $PUBLIC, $virtualMethod(XECPrivateKeySpec, getParams, $AlgorithmParameterSpec*)},
		{"getScalar", "()[B", nullptr, $PUBLIC, $virtualMethod(XECPrivateKeySpec, getScalar, $bytes*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.security.spec.XECPrivateKeySpec",
		"java.lang.Object",
		"java.security.spec.KeySpec",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(XECPrivateKeySpec, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XECPrivateKeySpec);
	});
	return class$;
}

$Class* XECPrivateKeySpec::class$ = nullptr;

		} // spec
	} // security
} // java