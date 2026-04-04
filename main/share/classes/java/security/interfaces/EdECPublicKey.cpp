#include <java/security/interfaces/EdECPublicKey.h>
#include <java/security/interfaces/EdECKey.h>
#include <java/security/spec/EdECPoint.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EdECKey = ::java::security::interfaces::EdECKey;
using $EdECPoint = ::java::security::spec::EdECPoint;

namespace java {
	namespace security {
		namespace interfaces {

int32_t EdECPublicKey::hashCode() {
	 return this->$EdECKey::hashCode();
}

bool EdECPublicKey::equals(Object$* obj) {
	 return this->$EdECKey::equals(obj);
}

$Object* EdECPublicKey::clone() {
	 return this->$EdECKey::clone();
}

$String* EdECPublicKey::toString() {
	 return this->$EdECKey::toString();
}

void EdECPublicKey::finalize() {
	this->$EdECKey::finalize();
}

$Class* EdECPublicKey::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"getPoint", "()Ljava/security/spec/EdECPoint;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(EdECPublicKey, getPoint, $EdECPoint*)},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.security.interfaces.EdECPublicKey",
		nullptr,
		"java.security.interfaces.EdECKey,java.security.PublicKey",
		nullptr,
		methodInfos$$
	};
	$loadClass(EdECPublicKey, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(EdECPublicKey));
	});
	return class$;
}

$Class* EdECPublicKey::class$ = nullptr;

		} // interfaces
	} // security
} // java