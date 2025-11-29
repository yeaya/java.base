#include <java/security/interfaces/XECPrivateKey.h>

#include <java/security/interfaces/XECKey.h>
#include <java/util/Optional.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XECKey = ::java::security::interfaces::XECKey;

namespace java {
	namespace security {
		namespace interfaces {

$MethodInfo _XECPrivateKey_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"getScalar", "()Ljava/util/Optional;", "()Ljava/util/Optional<[B>;", $PUBLIC | $ABSTRACT},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _XECPrivateKey_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.security.interfaces.XECPrivateKey",
	nullptr,
	"java.security.interfaces.XECKey,java.security.PrivateKey",
	nullptr,
	_XECPrivateKey_MethodInfo_
};

$Object* allocate$XECPrivateKey($Class* clazz) {
	return $of($alloc(XECPrivateKey));
}

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
	$loadClass(XECPrivateKey, name, initialize, &_XECPrivateKey_ClassInfo_, allocate$XECPrivateKey);
	return class$;
}

$Class* XECPrivateKey::class$ = nullptr;

		} // interfaces
	} // security
} // java