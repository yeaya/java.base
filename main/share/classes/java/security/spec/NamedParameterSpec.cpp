#include <java/security/spec/NamedParameterSpec.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$FieldInfo _NamedParameterSpec_FieldInfo_[] = {
	{"X25519", "Ljava/security/spec/NamedParameterSpec;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(NamedParameterSpec, X25519)},
	{"X448", "Ljava/security/spec/NamedParameterSpec;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(NamedParameterSpec, X448)},
	{"ED25519", "Ljava/security/spec/NamedParameterSpec;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(NamedParameterSpec, ED25519)},
	{"ED448", "Ljava/security/spec/NamedParameterSpec;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(NamedParameterSpec, ED448)},
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE, $field(NamedParameterSpec, name)},
	{}
};

$MethodInfo _NamedParameterSpec_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(NamedParameterSpec::*)($String*)>(&NamedParameterSpec::init$))},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _NamedParameterSpec_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.security.spec.NamedParameterSpec",
	"java.lang.Object",
	"java.security.spec.AlgorithmParameterSpec",
	_NamedParameterSpec_FieldInfo_,
	_NamedParameterSpec_MethodInfo_
};

$Object* allocate$NamedParameterSpec($Class* clazz) {
	return $of($alloc(NamedParameterSpec));
}


NamedParameterSpec* NamedParameterSpec::X25519 = nullptr;

NamedParameterSpec* NamedParameterSpec::X448 = nullptr;

NamedParameterSpec* NamedParameterSpec::ED25519 = nullptr;

NamedParameterSpec* NamedParameterSpec::ED448 = nullptr;

void NamedParameterSpec::init$($String* stdName) {
	$Objects::requireNonNull($of(stdName), "stdName must not be null"_s);
	$set(this, name, stdName);
}

$String* NamedParameterSpec::getName() {
	return this->name;
}

void clinit$NamedParameterSpec($Class* class$) {
	$assignStatic(NamedParameterSpec::X25519, $new(NamedParameterSpec, "X25519"_s));
	$assignStatic(NamedParameterSpec::X448, $new(NamedParameterSpec, "X448"_s));
	$assignStatic(NamedParameterSpec::ED25519, $new(NamedParameterSpec, "Ed25519"_s));
	$assignStatic(NamedParameterSpec::ED448, $new(NamedParameterSpec, "Ed448"_s));
}

NamedParameterSpec::NamedParameterSpec() {
}

$Class* NamedParameterSpec::load$($String* name, bool initialize) {
	$loadClass(NamedParameterSpec, name, initialize, &_NamedParameterSpec_ClassInfo_, clinit$NamedParameterSpec, allocate$NamedParameterSpec);
	return class$;
}

$Class* NamedParameterSpec::class$ = nullptr;

		} // spec
	} // security
} // java