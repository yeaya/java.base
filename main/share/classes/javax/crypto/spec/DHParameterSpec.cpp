#include <javax/crypto/spec/DHParameterSpec.h>

#include <java/math/BigInteger.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigInteger = ::java::math::BigInteger;

namespace javax {
	namespace crypto {
		namespace spec {

$FieldInfo _DHParameterSpec_FieldInfo_[] = {
	{"p", "Ljava/math/BigInteger;", nullptr, $PRIVATE, $field(DHParameterSpec, p)},
	{"g", "Ljava/math/BigInteger;", nullptr, $PRIVATE, $field(DHParameterSpec, g)},
	{"l", "I", nullptr, $PRIVATE, $field(DHParameterSpec, l)},
	{}
};

$MethodInfo _DHParameterSpec_MethodInfo_[] = {
	{"<init>", "(Ljava/math/BigInteger;Ljava/math/BigInteger;)V", nullptr, $PUBLIC, $method(static_cast<void(DHParameterSpec::*)($BigInteger*,$BigInteger*)>(&DHParameterSpec::init$))},
	{"<init>", "(Ljava/math/BigInteger;Ljava/math/BigInteger;I)V", nullptr, $PUBLIC, $method(static_cast<void(DHParameterSpec::*)($BigInteger*,$BigInteger*,int32_t)>(&DHParameterSpec::init$))},
	{"getG", "()Ljava/math/BigInteger;", nullptr, $PUBLIC},
	{"getL", "()I", nullptr, $PUBLIC},
	{"getP", "()Ljava/math/BigInteger;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DHParameterSpec_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.crypto.spec.DHParameterSpec",
	"java.lang.Object",
	"java.security.spec.AlgorithmParameterSpec",
	_DHParameterSpec_FieldInfo_,
	_DHParameterSpec_MethodInfo_
};

$Object* allocate$DHParameterSpec($Class* clazz) {
	return $of($alloc(DHParameterSpec));
}

void DHParameterSpec::init$($BigInteger* p, $BigInteger* g) {
	$set(this, p, p);
	$set(this, g, g);
	this->l = 0;
}

void DHParameterSpec::init$($BigInteger* p, $BigInteger* g, int32_t l) {
	$set(this, p, p);
	$set(this, g, g);
	this->l = l;
}

$BigInteger* DHParameterSpec::getP() {
	return this->p;
}

$BigInteger* DHParameterSpec::getG() {
	return this->g;
}

int32_t DHParameterSpec::getL() {
	return this->l;
}

DHParameterSpec::DHParameterSpec() {
}

$Class* DHParameterSpec::load$($String* name, bool initialize) {
	$loadClass(DHParameterSpec, name, initialize, &_DHParameterSpec_ClassInfo_, allocate$DHParameterSpec);
	return class$;
}

$Class* DHParameterSpec::class$ = nullptr;

		} // spec
	} // crypto
} // javax