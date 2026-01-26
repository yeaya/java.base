#include <java/security/spec/EdECPublicKeySpec.h>

#include <java/security/spec/EdECPoint.h>
#include <java/security/spec/NamedParameterSpec.h>
#include <java/util/Objects.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EdECPoint = ::java::security::spec::EdECPoint;
using $NamedParameterSpec = ::java::security::spec::NamedParameterSpec;
using $Objects = ::java::util::Objects;

namespace java {
	namespace security {
		namespace spec {

$FieldInfo _EdECPublicKeySpec_FieldInfo_[] = {
	{"params", "Ljava/security/spec/NamedParameterSpec;", nullptr, $PRIVATE | $FINAL, $field(EdECPublicKeySpec, params)},
	{"point", "Ljava/security/spec/EdECPoint;", nullptr, $PRIVATE | $FINAL, $field(EdECPublicKeySpec, point)},
	{}
};

$MethodInfo _EdECPublicKeySpec_MethodInfo_[] = {
	{"<init>", "(Ljava/security/spec/NamedParameterSpec;Ljava/security/spec/EdECPoint;)V", nullptr, $PUBLIC, $method(EdECPublicKeySpec, init$, void, $NamedParameterSpec*, $EdECPoint*)},
	{"getParams", "()Ljava/security/spec/NamedParameterSpec;", nullptr, $PUBLIC, $method(EdECPublicKeySpec, getParams, $NamedParameterSpec*)},
	{"getPoint", "()Ljava/security/spec/EdECPoint;", nullptr, $PUBLIC, $method(EdECPublicKeySpec, getPoint, $EdECPoint*)},
	{}
};

$ClassInfo _EdECPublicKeySpec_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.security.spec.EdECPublicKeySpec",
	"java.lang.Object",
	"java.security.spec.KeySpec",
	_EdECPublicKeySpec_FieldInfo_,
	_EdECPublicKeySpec_MethodInfo_
};

$Object* allocate$EdECPublicKeySpec($Class* clazz) {
	return $of($alloc(EdECPublicKeySpec));
}

void EdECPublicKeySpec::init$($NamedParameterSpec* params, $EdECPoint* point) {
	$Objects::requireNonNull($of(params), "params must not be null"_s);
	$Objects::requireNonNull($of(point), "point must not be null"_s);
	$set(this, params, params);
	$set(this, point, point);
}

$NamedParameterSpec* EdECPublicKeySpec::getParams() {
	return this->params;
}

$EdECPoint* EdECPublicKeySpec::getPoint() {
	return this->point;
}

EdECPublicKeySpec::EdECPublicKeySpec() {
}

$Class* EdECPublicKeySpec::load$($String* name, bool initialize) {
	$loadClass(EdECPublicKeySpec, name, initialize, &_EdECPublicKeySpec_ClassInfo_, allocate$EdECPublicKeySpec);
	return class$;
}

$Class* EdECPublicKeySpec::class$ = nullptr;

		} // spec
	} // security
} // java