#include <java/security/interfaces/RSAPrivateKey.h>
#include <java/math/BigInteger.h>
#include <java/security/PrivateKey.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigInteger = ::java::math::BigInteger;
using $PrivateKey = ::java::security::PrivateKey;

namespace java {
	namespace security {
		namespace interfaces {

int32_t RSAPrivateKey::hashCode() {
	 return this->$PrivateKey::hashCode();
}

bool RSAPrivateKey::equals(Object$* obj) {
	 return this->$PrivateKey::equals(obj);
}

$Object* RSAPrivateKey::clone() {
	 return this->$PrivateKey::clone();
}

$String* RSAPrivateKey::toString() {
	 return this->$PrivateKey::toString();
}

void RSAPrivateKey::finalize() {
	this->$PrivateKey::finalize();
}

$Class* RSAPrivateKey::load$($String* name, bool initialize) {
	$CompoundAttribute serialVersionUIDfieldAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $constField(RSAPrivateKey, serialVersionUID), serialVersionUIDfieldAnnotations$$},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"getPrivateExponent", "()Ljava/math/BigInteger;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RSAPrivateKey, getPrivateExponent, $BigInteger*)},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.security.interfaces.RSAPrivateKey",
		nullptr,
		"java.security.PrivateKey,java.security.interfaces.RSAKey",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(RSAPrivateKey, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(RSAPrivateKey));
	});
	return class$;
}

$Class* RSAPrivateKey::class$ = nullptr;

		} // interfaces
	} // security
} // java