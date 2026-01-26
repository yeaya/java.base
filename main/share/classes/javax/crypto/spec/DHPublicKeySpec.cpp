#include <javax/crypto/spec/DHPublicKeySpec.h>

#include <java/math/BigInteger.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigInteger = ::java::math::BigInteger;

namespace javax {
	namespace crypto {
		namespace spec {

$FieldInfo _DHPublicKeySpec_FieldInfo_[] = {
	{"y", "Ljava/math/BigInteger;", nullptr, $PRIVATE, $field(DHPublicKeySpec, y)},
	{"p", "Ljava/math/BigInteger;", nullptr, $PRIVATE, $field(DHPublicKeySpec, p)},
	{"g", "Ljava/math/BigInteger;", nullptr, $PRIVATE, $field(DHPublicKeySpec, g)},
	{}
};

$MethodInfo _DHPublicKeySpec_MethodInfo_[] = {
	{"<init>", "(Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;)V", nullptr, $PUBLIC, $method(DHPublicKeySpec, init$, void, $BigInteger*, $BigInteger*, $BigInteger*)},
	{"getG", "()Ljava/math/BigInteger;", nullptr, $PUBLIC, $virtualMethod(DHPublicKeySpec, getG, $BigInteger*)},
	{"getP", "()Ljava/math/BigInteger;", nullptr, $PUBLIC, $virtualMethod(DHPublicKeySpec, getP, $BigInteger*)},
	{"getY", "()Ljava/math/BigInteger;", nullptr, $PUBLIC, $virtualMethod(DHPublicKeySpec, getY, $BigInteger*)},
	{}
};

$ClassInfo _DHPublicKeySpec_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.crypto.spec.DHPublicKeySpec",
	"java.lang.Object",
	"java.security.spec.KeySpec",
	_DHPublicKeySpec_FieldInfo_,
	_DHPublicKeySpec_MethodInfo_
};

$Object* allocate$DHPublicKeySpec($Class* clazz) {
	return $of($alloc(DHPublicKeySpec));
}

void DHPublicKeySpec::init$($BigInteger* y, $BigInteger* p, $BigInteger* g) {
	$set(this, y, y);
	$set(this, p, p);
	$set(this, g, g);
}

$BigInteger* DHPublicKeySpec::getY() {
	return this->y;
}

$BigInteger* DHPublicKeySpec::getP() {
	return this->p;
}

$BigInteger* DHPublicKeySpec::getG() {
	return this->g;
}

DHPublicKeySpec::DHPublicKeySpec() {
}

$Class* DHPublicKeySpec::load$($String* name, bool initialize) {
	$loadClass(DHPublicKeySpec, name, initialize, &_DHPublicKeySpec_ClassInfo_, allocate$DHPublicKeySpec);
	return class$;
}

$Class* DHPublicKeySpec::class$ = nullptr;

		} // spec
	} // crypto
} // javax