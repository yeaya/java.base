#include <java/security/spec/EdDSAParameterSpec.h>

#include <java/security/InvalidParameterException.h>
#include <java/util/Objects.h>
#include <java/util/Optional.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InvalidParameterException = ::java::security::InvalidParameterException;
using $Objects = ::java::util::Objects;
using $Optional = ::java::util::Optional;

namespace java {
	namespace security {
		namespace spec {

$FieldInfo _EdDSAParameterSpec_FieldInfo_[] = {
	{"prehash", "Z", nullptr, $PRIVATE | $FINAL, $field(EdDSAParameterSpec, prehash)},
	{"context", "[B", nullptr, $PRIVATE | $FINAL, $field(EdDSAParameterSpec, context)},
	{}
};

$MethodInfo _EdDSAParameterSpec_MethodInfo_[] = {
	{"<init>", "(Z)V", nullptr, $PUBLIC, $method(static_cast<void(EdDSAParameterSpec::*)(bool)>(&EdDSAParameterSpec::init$))},
	{"<init>", "(Z[B)V", nullptr, $PUBLIC, $method(static_cast<void(EdDSAParameterSpec::*)(bool,$bytes*)>(&EdDSAParameterSpec::init$))},
	{"getContext", "()Ljava/util/Optional;", "()Ljava/util/Optional<[B>;", $PUBLIC},
	{"isPrehash", "()Z", nullptr, $PUBLIC},
	{}
};

$ClassInfo _EdDSAParameterSpec_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.security.spec.EdDSAParameterSpec",
	"java.lang.Object",
	"java.security.spec.AlgorithmParameterSpec",
	_EdDSAParameterSpec_FieldInfo_,
	_EdDSAParameterSpec_MethodInfo_
};

$Object* allocate$EdDSAParameterSpec($Class* clazz) {
	return $of($alloc(EdDSAParameterSpec));
}

void EdDSAParameterSpec::init$(bool prehash) {
	this->prehash = prehash;
	$set(this, context, nullptr);
}

void EdDSAParameterSpec::init$(bool prehash, $bytes* context) {
	$Objects::requireNonNull($of(context), "context may not be null"_s);
	if ($nc(context)->length > 255) {
		$throwNew($InvalidParameterException, "context length cannot be greater than 255"_s);
	}
	this->prehash = prehash;
	$set(this, context, $cast($bytes, $nc(context)->clone()));
}

bool EdDSAParameterSpec::isPrehash() {
	return this->prehash;
}

$Optional* EdDSAParameterSpec::getContext() {
	if (this->context == nullptr) {
		return $Optional::empty();
	} else {
		return $Optional::of($cast($bytes, $($nc(this->context)->clone())));
	}
}

EdDSAParameterSpec::EdDSAParameterSpec() {
}

$Class* EdDSAParameterSpec::load$($String* name, bool initialize) {
	$loadClass(EdDSAParameterSpec, name, initialize, &_EdDSAParameterSpec_ClassInfo_, allocate$EdDSAParameterSpec);
	return class$;
}

$Class* EdDSAParameterSpec::class$ = nullptr;

		} // spec
	} // security
} // java