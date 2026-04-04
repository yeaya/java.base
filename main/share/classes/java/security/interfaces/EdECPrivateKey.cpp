#include <java/security/interfaces/EdECPrivateKey.h>
#include <java/security/interfaces/EdECKey.h>
#include <java/util/Optional.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EdECKey = ::java::security::interfaces::EdECKey;
using $Optional = ::java::util::Optional;

namespace java {
	namespace security {
		namespace interfaces {

int32_t EdECPrivateKey::hashCode() {
	 return this->$EdECKey::hashCode();
}

bool EdECPrivateKey::equals(Object$* obj) {
	 return this->$EdECKey::equals(obj);
}

$Object* EdECPrivateKey::clone() {
	 return this->$EdECKey::clone();
}

$String* EdECPrivateKey::toString() {
	 return this->$EdECKey::toString();
}

void EdECPrivateKey::finalize() {
	this->$EdECKey::finalize();
}

$Class* EdECPrivateKey::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"getBytes", "()Ljava/util/Optional;", "()Ljava/util/Optional<[B>;", $PUBLIC | $ABSTRACT, $virtualMethod(EdECPrivateKey, getBytes, $Optional*)},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.security.interfaces.EdECPrivateKey",
		nullptr,
		"java.security.interfaces.EdECKey,java.security.PrivateKey",
		nullptr,
		methodInfos$$
	};
	$loadClass(EdECPrivateKey, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(EdECPrivateKey));
	});
	return class$;
}

$Class* EdECPrivateKey::class$ = nullptr;

		} // interfaces
	} // security
} // java