#include <sun/security/rsa/RSACore$BlindingRandomPair.h>

#include <java/math/BigInteger.h>
#include <sun/security/rsa/RSACore.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigInteger = ::java::math::BigInteger;
using $RSACore = ::sun::security::rsa::RSACore;

namespace sun {
	namespace security {
		namespace rsa {

$FieldInfo _RSACore$BlindingRandomPair_FieldInfo_[] = {
	{"u", "Ljava/math/BigInteger;", nullptr, $FINAL, $field(RSACore$BlindingRandomPair, u)},
	{"v", "Ljava/math/BigInteger;", nullptr, $FINAL, $field(RSACore$BlindingRandomPair, v)},
	{}
};

$MethodInfo _RSACore$BlindingRandomPair_MethodInfo_[] = {
	{"<init>", "(Ljava/math/BigInteger;Ljava/math/BigInteger;)V", nullptr, 0, $method(static_cast<void(RSACore$BlindingRandomPair::*)($BigInteger*,$BigInteger*)>(&RSACore$BlindingRandomPair::init$))},
	{}
};

$InnerClassInfo _RSACore$BlindingRandomPair_InnerClassesInfo_[] = {
	{"sun.security.rsa.RSACore$BlindingRandomPair", "sun.security.rsa.RSACore", "BlindingRandomPair", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _RSACore$BlindingRandomPair_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.rsa.RSACore$BlindingRandomPair",
	"java.lang.Object",
	nullptr,
	_RSACore$BlindingRandomPair_FieldInfo_,
	_RSACore$BlindingRandomPair_MethodInfo_,
	nullptr,
	nullptr,
	_RSACore$BlindingRandomPair_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.rsa.RSACore"
};

$Object* allocate$RSACore$BlindingRandomPair($Class* clazz) {
	return $of($alloc(RSACore$BlindingRandomPair));
}

void RSACore$BlindingRandomPair::init$($BigInteger* u, $BigInteger* v) {
	$set(this, u, u);
	$set(this, v, v);
}

RSACore$BlindingRandomPair::RSACore$BlindingRandomPair() {
}

$Class* RSACore$BlindingRandomPair::load$($String* name, bool initialize) {
	$loadClass(RSACore$BlindingRandomPair, name, initialize, &_RSACore$BlindingRandomPair_ClassInfo_, allocate$RSACore$BlindingRandomPair);
	return class$;
}

$Class* RSACore$BlindingRandomPair::class$ = nullptr;

		} // rsa
	} // security
} // sun