#include <java/security/interfaces/EdECPublicKey.h>

#include <java/security/interfaces/EdECKey.h>
#include <java/security/spec/EdECPoint.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PublicKey = ::java::security::PublicKey;
using $EdECKey = ::java::security::interfaces::EdECKey;
using $EdECPoint = ::java::security::spec::EdECPoint;

namespace java {
	namespace security {
		namespace interfaces {

$MethodInfo _EdECPublicKey_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"getPoint", "()Ljava/security/spec/EdECPoint;", nullptr, $PUBLIC | $ABSTRACT},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _EdECPublicKey_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.security.interfaces.EdECPublicKey",
	nullptr,
	"java.security.interfaces.EdECKey,java.security.PublicKey",
	nullptr,
	_EdECPublicKey_MethodInfo_
};

$Object* allocate$EdECPublicKey($Class* clazz) {
	return $of($alloc(EdECPublicKey));
}

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
	$loadClass(EdECPublicKey, name, initialize, &_EdECPublicKey_ClassInfo_, allocate$EdECPublicKey);
	return class$;
}

$Class* EdECPublicKey::class$ = nullptr;

		} // interfaces
	} // security
} // java