#include <javax/crypto/spec/DHGenParameterSpec.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace crypto {
		namespace spec {

$FieldInfo _DHGenParameterSpec_FieldInfo_[] = {
	{"primeSize", "I", nullptr, $PRIVATE, $field(DHGenParameterSpec, primeSize)},
	{"exponentSize", "I", nullptr, $PRIVATE, $field(DHGenParameterSpec, exponentSize)},
	{}
};

$MethodInfo _DHGenParameterSpec_MethodInfo_[] = {
	{"<init>", "(II)V", nullptr, $PUBLIC, $method(DHGenParameterSpec, init$, void, int32_t, int32_t)},
	{"getExponentSize", "()I", nullptr, $PUBLIC, $virtualMethod(DHGenParameterSpec, getExponentSize, int32_t)},
	{"getPrimeSize", "()I", nullptr, $PUBLIC, $virtualMethod(DHGenParameterSpec, getPrimeSize, int32_t)},
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