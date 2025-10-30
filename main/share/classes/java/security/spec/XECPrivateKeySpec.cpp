#include <java/security/spec/XECPrivateKeySpec.h>

#include <java/security/spec/AlgorithmParameterSpec.h>
#include <java/util/Objects.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $KeySpec = ::java::security::spec::KeySpec;
using $Objects = ::java::util::Objects;

namespace java {
	namespace security {
		namespace spec {

$FieldInfo _XECPrivateKeySpec_FieldInfo_[] = {
	{"params", "Ljava/security/spec/AlgorithmParameterSpec;", nullptr, $PRIVATE | $FINAL, $field(XECPrivateKeySpec, params)},
	{"scalar", "[B", nullptr, $PRIVATE | $FINAL, $field(XECPrivateKeySpec, scalar)},
	{}
};

$MethodInfo _XECPrivateKeySpec_MethodInfo_[] = {
	{"<init>", "(Ljava/security/spec/AlgorithmParameterSpec;[B)V", nullptr, $PUBLIC, $method(static_cast<void(XECPrivateKeySpec::*)($AlgorithmParameterSpec*,$bytes*)>(&XECPrivateKeySpec::init$))},
	{"getParams", "()Ljava/security/spec/AlgorithmParameterSpec;", nullptr, $PUBLIC},
	{"getScalar", "()[B", nullptr, $PUBLIC},
	{}
};

$ClassInfo _XECPrivateKeySpec_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.security.spec.XECPrivateKeySpec",
	"java.lang.Object",
	"java.security.spec.KeySpec",
	_XECPrivateKeySpec_FieldInfo_,
	_XECPrivateKeySpec_MethodInfo_
};

$Object* allocate$XECPrivateKeySpec($Class* clazz) {
	return $of($alloc(XECPrivateKeySpec));
}

void XECPrivateKeySpec::init$($AlgorithmParameterSpec* params, $bytes* scalar) {
	$Objects::requireNonNull($of(params), "params must not be null"_s);
	$Objects::requireNonNull($of(scalar), "scalar must not be null"_s);
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
	$loadClass(XECPrivateKeySpec, name, initialize, &_XECPrivateKeySpec_ClassInfo_, allocate$XECPrivateKeySpec);
	return class$;
}

$Class* XECPrivateKeySpec::class$ = nullptr;

		} // spec
	} // security
} // java