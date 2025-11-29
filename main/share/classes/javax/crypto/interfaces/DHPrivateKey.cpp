#include <javax/crypto/interfaces/DHPrivateKey.h>

#include <java/math/BigInteger.h>
#include <javax/crypto/interfaces/DHKey.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DHKey = ::javax::crypto::interfaces::DHKey;

namespace javax {
	namespace crypto {
		namespace interfaces {

$CompoundAttribute _DHPrivateKey_FieldAnnotations_serialVersionUID[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _DHPrivateKey_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $constField(DHPrivateKey, serialVersionUID), _DHPrivateKey_FieldAnnotations_serialVersionUID},
	{}
};

$MethodInfo _DHPrivateKey_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"getX", "()Ljava/math/BigInteger;", nullptr, $PUBLIC | $ABSTRACT},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DHPrivateKey_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.crypto.interfaces.DHPrivateKey",
	nullptr,
	"javax.crypto.interfaces.DHKey,java.security.PrivateKey",
	_DHPrivateKey_FieldInfo_,
	_DHPrivateKey_MethodInfo_
};

$Object* allocate$DHPrivateKey($Class* clazz) {
	return $of($alloc(DHPrivateKey));
}

int32_t DHPrivateKey::hashCode() {
	 return this->$DHKey::hashCode();
}

bool DHPrivateKey::equals(Object$* obj) {
	 return this->$DHKey::equals(obj);
}

$Object* DHPrivateKey::clone() {
	 return this->$DHKey::clone();
}

$String* DHPrivateKey::toString() {
	 return this->$DHKey::toString();
}

void DHPrivateKey::finalize() {
	this->$DHKey::finalize();
}

$Class* DHPrivateKey::load$($String* name, bool initialize) {
	$loadClass(DHPrivateKey, name, initialize, &_DHPrivateKey_ClassInfo_, allocate$DHPrivateKey);
	return class$;
}

$Class* DHPrivateKey::class$ = nullptr;

		} // interfaces
	} // crypto
} // javax