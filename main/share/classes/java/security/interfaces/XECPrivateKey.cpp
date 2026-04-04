#include <java/security/interfaces/XECPrivateKey.h>
#include <java/security/interfaces/XECKey.h>
#include <java/util/Optional.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XECKey = ::java::security::interfaces::XECKey;
using $Optional = ::java::util::Optional;

namespace java {
	namespace security {
		namespace interfaces {

int32_t XECPrivateKey::hashCode() {
	 return this->$XECKey::hashCode();
}

bool XECPrivateKey::equals(Object$* obj) {
	 return this->$XECKey::equals(obj);
}

$Object* XECPrivateKey::clone() {
	 return this->$XECKey::clone();
}

$String* XECPrivateKey::toString() {
	 return this->$XECKey::toString();
}

void XECPrivateKey::finalize() {
	this->$XECKey::finalize();
}

$Class* XECPrivateKey::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"getScalar", "()Ljava/util/Optional;", "()Ljava/util/Optional<[B>;", $PUBLIC | $ABSTRACT, $virtualMethod(XECPrivateKey, getScalar, $Optional*)},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.security.interfaces.XECPrivateKey",
		nullptr,
		"java.security.interfaces.XECKey,java.security.PrivateKey",
		nullptr,
		methodInfos$$
	};
	$loadClass(XECPrivateKey, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(XECPrivateKey));
	});
	return class$;
}

$Class* XECPrivateKey::class$ = nullptr;

		} // interfaces
	} // security
} // java