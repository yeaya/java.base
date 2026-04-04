#include <java/security/interfaces/RSAPublicKey.h>
#include <java/math/BigInteger.h>
#include <java/security/PublicKey.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigInteger = ::java::math::BigInteger;
using $PublicKey = ::java::security::PublicKey;

namespace java {
	namespace security {
		namespace interfaces {

int32_t RSAPublicKey::hashCode() {
	 return this->$PublicKey::hashCode();
}

bool RSAPublicKey::equals(Object$* obj) {
	 return this->$PublicKey::equals(obj);
}

$Object* RSAPublicKey::clone() {
	 return this->$PublicKey::clone();
}

$String* RSAPublicKey::toString() {
	 return this->$PublicKey::toString();
}

void RSAPublicKey::finalize() {
	this->$PublicKey::finalize();
}

$Class* RSAPublicKey::load$($String* name, bool initialize) {
	$CompoundAttribute serialVersionUIDfieldAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $constField(RSAPublicKey, serialVersionUID), serialVersionUIDfieldAnnotations$$},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"getPublicExponent", "()Ljava/math/BigInteger;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RSAPublicKey, getPublicExponent, $BigInteger*)},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.security.interfaces.RSAPublicKey",
		nullptr,
		"java.security.PublicKey,java.security.interfaces.RSAKey",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(RSAPublicKey, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(RSAPublicKey));
	});
	return class$;
}

$Class* RSAPublicKey::class$ = nullptr;

		} // interfaces
	} // security
} // java