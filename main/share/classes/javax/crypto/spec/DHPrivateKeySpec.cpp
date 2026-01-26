#include <javax/crypto/spec/DHPrivateKeySpec.h>

#include <java/math/BigInteger.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigInteger = ::java::math::BigInteger;

namespace javax {
	namespace crypto {
		namespace spec {

$FieldInfo _DHPrivateKeySpec_FieldInfo_[] = {
	{"x", "Ljava/math/BigInteger;", nullptr, $PRIVATE, $field(DHPrivateKeySpec, x)},
	{"p", "Ljava/math/BigInteger;", nullptr, $PRIVATE, $field(DHPrivateKeySpec, p)},
	{"g", "Ljava/math/BigInteger;", nullptr, $PRIVATE, $field(DHPrivateKeySpec, g)},
	{}
};

$MethodInfo _DHPrivateKeySpec_MethodInfo_[] = {
	{"<init>", "(Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;)V", nullptr, $PUBLIC, $method(DHPrivateKeySpec, init$, void, $BigInteger*, $BigInteger*, $BigInteger*)},
	{"getG", "()Ljava/math/BigInteger;", nullptr, $PUBLIC, $virtualMethod(DHPrivateKeySpec, getG, $BigInteger*)},
	{"getP", "()Ljava/math/BigInteger;", nullptr, $PUBLIC, $virtualMethod(DHPrivateKeySpec, getP, $BigInteger*)},
	{"getX", "()Ljava/math/BigInteger;", nullptr, $PUBLIC, $virtualMethod(DHPrivateKeySpec, getX, $BigInteger*)},
	{}
};

$ClassInfo _DHPrivateKeySpec_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.crypto.spec.DHPrivateKeySpec",
	"java.lang.Object",
	"java.security.spec.KeySpec",
	_DHPrivateKeySpec_FieldInfo_,
	_DHPrivateKeySpec_MethodInfo_
};

$Object* allocate$DHPrivateKeySpec($Class* clazz) {
	return $of($alloc(DHPrivateKeySpec));
}

void DHPrivateKeySpec::init$($BigInteger* x, $BigInteger* p, $BigInteger* g) {
	$set(this, x, x);
	$set(this, p, p);
	$set(this, g, g);
}

$BigInteger* DHPrivateKeySpec::getX() {
	return this->x;
}

$BigInteger* DHPrivateKeySpec::getP() {
	return this->p;
}

$BigInteger* DHPrivateKeySpec::getG() {
	return this->g;
}

DHPrivateKeySpec::DHPrivateKeySpec() {
}

$Class* DHPrivateKeySpec::load$($String* name, bool initialize) {
	$loadClass(DHPrivateKeySpec, name, initialize, &_DHPrivateKeySpec_ClassInfo_, allocate$DHPrivateKeySpec);
	return class$;
}

$Class* DHPrivateKeySpec::class$ = nullptr;

		} // spec
	} // crypto
} // javax