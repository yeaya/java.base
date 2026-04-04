#include <java/security/spec/ECPublicKeySpec.h>
#include <java/security/spec/ECParameterSpec.h>
#include <java/security/spec/ECPoint.h>
#include <jcpp.h>

#undef POINT_INFINITY

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $ECParameterSpec = ::java::security::spec::ECParameterSpec;
using $ECPoint = ::java::security::spec::ECPoint;

namespace java {
	namespace security {
		namespace spec {

void ECPublicKeySpec::init$($ECPoint* w, $ECParameterSpec* params) {
	if (w == nullptr) {
		$throwNew($NullPointerException, "w is null"_s);
	}
	if (params == nullptr) {
		$throwNew($NullPointerException, "params is null"_s);
	}
	$init($ECPoint);
	if (w == $ECPoint::POINT_INFINITY) {
		$throwNew($IllegalArgumentException, "w is ECPoint.POINT_INFINITY"_s);
	}
	$set(this, w, w);
	$set(this, params, params);
}

$ECPoint* ECPublicKeySpec::getW() {
	return this->w;
}

$ECParameterSpec* ECPublicKeySpec::getParams() {
	return this->params;
}

ECPublicKeySpec::ECPublicKeySpec() {
}

$Class* ECPublicKeySpec::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"w", "Ljava/security/spec/ECPoint;", nullptr, $PRIVATE, $field(ECPublicKeySpec, w)},
		{"params", "Ljava/security/spec/ECParameterSpec;", nullptr, $PRIVATE, $field(ECPublicKeySpec, params)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/security/spec/ECPoint;Ljava/security/spec/ECParameterSpec;)V", nullptr, $PUBLIC, $method(ECPublicKeySpec, init$, void, $ECPoint*, $ECParameterSpec*)},
		{"getParams", "()Ljava/security/spec/ECParameterSpec;", nullptr, $PUBLIC, $virtualMethod(ECPublicKeySpec, getParams, $ECParameterSpec*)},
		{"getW", "()Ljava/security/spec/ECPoint;", nullptr, $PUBLIC, $virtualMethod(ECPublicKeySpec, getW, $ECPoint*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.security.spec.ECPublicKeySpec",
		"java.lang.Object",
		"java.security.spec.KeySpec",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ECPublicKeySpec, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ECPublicKeySpec);
	});
	return class$;
}

$Class* ECPublicKeySpec::class$ = nullptr;

		} // spec
	} // security
} // java