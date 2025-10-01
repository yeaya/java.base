#include <javax/crypto/spec/DHGenParameterSpec.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;

namespace javax {
	namespace crypto {
		namespace spec {

$FieldInfo _DHGenParameterSpec_FieldInfo_[] = {
	{"primeSize", "I", nullptr, $PRIVATE, $field(DHGenParameterSpec, primeSize)},
	{"exponentSize", "I", nullptr, $PRIVATE, $field(DHGenParameterSpec, exponentSize)},
	{}
};

$MethodInfo _DHGenParameterSpec_MethodInfo_[] = {
	{"<init>", "(II)V", nullptr, $PUBLIC, $method(static_cast<void(DHGenParameterSpec::*)(int32_t,int32_t)>(&DHGenParameterSpec::init$))},
	{"getExponentSize", "()I", nullptr, $PUBLIC},
	{"getPrimeSize", "()I", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DHGenParameterSpec_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.crypto.spec.DHGenParameterSpec",
	"java.lang.Object",
	"java.security.spec.AlgorithmParameterSpec",
	_DHGenParameterSpec_FieldInfo_,
	_DHGenParameterSpec_MethodInfo_
};

$Object* allocate$DHGenParameterSpec($Class* clazz) {
	return $of($alloc(DHGenParameterSpec));
}

void DHGenParameterSpec::init$(int32_t primeSize, int32_t exponentSize) {
	this->primeSize = primeSize;
	this->exponentSize = exponentSize;
}

int32_t DHGenParameterSpec::getPrimeSize() {
	return this->primeSize;
}

int32_t DHGenParameterSpec::getExponentSize() {
	return this->exponentSize;
}

DHGenParameterSpec::DHGenParameterSpec() {
}

$Class* DHGenParameterSpec::load$($String* name, bool initialize) {
	$loadClass(DHGenParameterSpec, name, initialize, &_DHGenParameterSpec_ClassInfo_, allocate$DHGenParameterSpec);
	return class$;
}

$Class* DHGenParameterSpec::class$ = nullptr;

		} // spec
	} // crypto
} // javax