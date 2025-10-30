#include <javax/crypto/spec/DHPrivateKeySpec.h>

#include <java/math/BigInteger.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigInteger = ::java::math::BigInteger;
using $KeySpec = ::java::security::spec::KeySpec;

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
	{"<init>", "(Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;)V", nullptr, $PUBLIC, $method(static_cast<void(DHPrivateKeySpec::*)($BigInteger*,$BigInteger*,$BigInteger*)>(&DHPrivateKeySpec::init$))},
	{"getG", "()Ljava/math/BigInteger;", nullptr, $PUBLIC},
	{"getP", "()Ljava/math/BigInteger;", nullptr, $PUBLIC},
	{"getX", "()Ljava/math/BigInteger;", nullptr, $PUBLIC},
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