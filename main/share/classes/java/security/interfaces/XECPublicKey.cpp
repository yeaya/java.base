#include <java/security/interfaces/XECPublicKey.h>
#include <java/math/BigInteger.h>
#include <java/security/interfaces/XECKey.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigInteger = ::java::math::BigInteger;
using $XECKey = ::java::security::interfaces::XECKey;

namespace java {
	namespace security {
		namespace interfaces {

int32_t XECPublicKey::hashCode() {
	 return this->$XECKey::hashCode();
}

bool XECPublicKey::equals(Object$* obj) {
	 return this->$XECKey::equals(obj);
}

$Object* XECPublicKey::clone() {
	 return this->$XECKey::clone();
}

$String* XECPublicKey::toString() {
	 return this->$XECKey::toString();
}

void XECPublicKey::finalize() {
	this->$XECKey::finalize();
}

$Class* XECPublicKey::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"getU", "()Ljava/math/BigInteger;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XECPublicKey, getU, $BigInteger*)},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.security.interfaces.XECPublicKey",
		nullptr,
		"java.security.interfaces.XECKey,java.security.PublicKey",
		nullptr,
		methodInfos$$
	};
	$loadClass(XECPublicKey, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(XECPublicKey));
	});
	return class$;
}

$Class* XECPublicKey::class$ = nullptr;

		} // interfaces
	} // security
} // java