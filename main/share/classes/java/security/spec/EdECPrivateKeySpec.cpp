#include <java/security/spec/EdECPrivateKeySpec.h>
#include <java/security/spec/NamedParameterSpec.h>
#include <java/util/Objects.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedParameterSpec = ::java::security::spec::NamedParameterSpec;
using $Objects = ::java::util::Objects;

namespace java {
	namespace security {
		namespace spec {

void EdECPrivateKeySpec::init$($NamedParameterSpec* params, $bytes* bytes) {
	$Objects::requireNonNull(params, "params must not be null"_s);
	$Objects::requireNonNull(bytes, "bytes must not be null"_s);
	$set(this, params, params);
	$set(this, bytes, $cast($bytes, $nc(bytes)->clone()));
}

$NamedParameterSpec* EdECPrivateKeySpec::getParams() {
	return this->params;
}

$bytes* EdECPrivateKeySpec::getBytes() {
	return $cast($bytes, $nc(this->bytes)->clone());
}

EdECPrivateKeySpec::EdECPrivateKeySpec() {
}

$Class* EdECPrivateKeySpec::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"params", "Ljava/security/spec/NamedParameterSpec;", nullptr, $PRIVATE | $FINAL, $field(EdECPrivateKeySpec, params)},
		{"bytes", "[B", nullptr, $PRIVATE | $FINAL, $field(EdECPrivateKeySpec, bytes)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/security/spec/NamedParameterSpec;[B)V", nullptr, $PUBLIC, $method(EdECPrivateKeySpec, init$, void, $NamedParameterSpec*, $bytes*)},
		{"getBytes", "()[B", nullptr, $PUBLIC, $method(EdECPrivateKeySpec, getBytes, $bytes*)},
		{"getParams", "()Ljava/security/spec/NamedParameterSpec;", nullptr, $PUBLIC, $method(EdECPrivateKeySpec, getParams, $NamedParameterSpec*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"java.security.spec.EdECPrivateKeySpec",
		"java.lang.Object",
		"java.security.spec.KeySpec",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(EdECPrivateKeySpec, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(EdECPrivateKeySpec);
	});
	return class$;
}

$Class* EdECPrivateKeySpec::class$ = nullptr;

		} // spec
	} // security
} // java