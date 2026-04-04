#include <java/security/spec/NamedParameterSpec.h>
#include <java/util/Objects.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Objects = ::java::util::Objects;

namespace java {
	namespace security {
		namespace spec {

NamedParameterSpec* NamedParameterSpec::X25519 = nullptr;
NamedParameterSpec* NamedParameterSpec::X448 = nullptr;
NamedParameterSpec* NamedParameterSpec::ED25519 = nullptr;
NamedParameterSpec* NamedParameterSpec::ED448 = nullptr;

void NamedParameterSpec::init$($String* stdName) {
	$Objects::requireNonNull(stdName, "stdName must not be null"_s);
	$set(this, name, stdName);
}

$String* NamedParameterSpec::getName() {
	return this->name;
}

void NamedParameterSpec::clinit$($Class* clazz) {
	$assignStatic(NamedParameterSpec::X25519, $new(NamedParameterSpec, "X25519"_s));
	$assignStatic(NamedParameterSpec::X448, $new(NamedParameterSpec, "X448"_s));
	$assignStatic(NamedParameterSpec::ED25519, $new(NamedParameterSpec, "Ed25519"_s));
	$assignStatic(NamedParameterSpec::ED448, $new(NamedParameterSpec, "Ed448"_s));
}

NamedParameterSpec::NamedParameterSpec() {
}

$Class* NamedParameterSpec::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"X25519", "Ljava/security/spec/NamedParameterSpec;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(NamedParameterSpec, X25519)},
		{"X448", "Ljava/security/spec/NamedParameterSpec;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(NamedParameterSpec, X448)},
		{"ED25519", "Ljava/security/spec/NamedParameterSpec;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(NamedParameterSpec, ED25519)},
		{"ED448", "Ljava/security/spec/NamedParameterSpec;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(NamedParameterSpec, ED448)},
		{"name", "Ljava/lang/String;", nullptr, $PRIVATE, $field(NamedParameterSpec, name)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(NamedParameterSpec, init$, void, $String*)},
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(NamedParameterSpec, getName, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.security.spec.NamedParameterSpec",
		"java.lang.Object",
		"java.security.spec.AlgorithmParameterSpec",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(NamedParameterSpec, name, initialize, &classInfo$$, NamedParameterSpec::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(NamedParameterSpec);
	});
	return class$;
}

$Class* NamedParameterSpec::class$ = nullptr;

		} // spec
	} // security
} // java