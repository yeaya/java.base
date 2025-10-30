#include <javax/crypto/interfaces/DHPublicKey.h>

#include <java/math/BigInteger.h>
#include <javax/crypto/interfaces/DHKey.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigInteger = ::java::math::BigInteger;
using $PublicKey = ::java::security::PublicKey;
using $DHKey = ::javax::crypto::interfaces::DHKey;

namespace javax {
	namespace crypto {
		namespace interfaces {

$CompoundAttribute _DHPublicKey_FieldAnnotations_serialVersionUID[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _DHPublicKey_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $constField(DHPublicKey, serialVersionUID), _DHPublicKey_FieldAnnotations_serialVersionUID},
	{}
};

$MethodInfo _DHPublicKey_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"getY", "()Ljava/math/BigInteger;", nullptr, $PUBLIC | $ABSTRACT},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DHPublicKey_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.crypto.interfaces.DHPublicKey",
	nullptr,
	"javax.crypto.interfaces.DHKey,java.security.PublicKey",
	_DHPublicKey_FieldInfo_,
	_DHPublicKey_MethodInfo_
};

$Object* allocate$DHPublicKey($Class* clazz) {
	return $of($alloc(DHPublicKey));
}

int32_t DHPublicKey::hashCode() {
	 return this->$DHKey::hashCode();
}

bool DHPublicKey::equals(Object$* obj) {
	 return this->$DHKey::equals(obj);
}

$Object* DHPublicKey::clone() {
	 return this->$DHKey::clone();
}

$String* DHPublicKey::toString() {
	 return this->$DHKey::toString();
}

void DHPublicKey::finalize() {
	this->$DHKey::finalize();
}

$Class* DHPublicKey::load$($String* name, bool initialize) {
	$loadClass(DHPublicKey, name, initialize, &_DHPublicKey_ClassInfo_, allocate$DHPublicKey);
	return class$;
}

$Class* DHPublicKey::class$ = nullptr;

		} // interfaces
	} // crypto
} // javax