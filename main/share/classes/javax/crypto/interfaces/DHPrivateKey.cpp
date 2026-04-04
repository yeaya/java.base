#include <javax/crypto/interfaces/DHPrivateKey.h>
#include <java/math/BigInteger.h>
#include <javax/crypto/interfaces/DHKey.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigInteger = ::java::math::BigInteger;
using $DHKey = ::javax::crypto::interfaces::DHKey;

namespace javax {
	namespace crypto {
		namespace interfaces {

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
	$CompoundAttribute serialVersionUIDfieldAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $constField(DHPrivateKey, serialVersionUID), serialVersionUIDfieldAnnotations$$},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"getX", "()Ljava/math/BigInteger;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DHPrivateKey, getX, $BigInteger*)},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.crypto.interfaces.DHPrivateKey",
		nullptr,
		"javax.crypto.interfaces.DHKey,java.security.PrivateKey",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DHPrivateKey, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(DHPrivateKey));
	});
	return class$;
}

$Class* DHPrivateKey::class$ = nullptr;

		} // interfaces
	} // crypto
} // javax