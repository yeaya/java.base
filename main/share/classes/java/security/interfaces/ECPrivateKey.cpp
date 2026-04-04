#include <java/security/interfaces/ECPrivateKey.h>
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

int32_t ECPrivateKey::hashCode() {
	 return this->$PrivateKey::hashCode();
}

bool ECPrivateKey::equals(Object$* obj) {
	 return this->$PrivateKey::equals(obj);
}

$Object* ECPrivateKey::clone() {
	 return this->$PrivateKey::clone();
}

$String* ECPrivateKey::toString() {
	 return this->$PrivateKey::toString();
}

void ECPrivateKey::finalize() {
	this->$PrivateKey::finalize();
}

$Class* ECPrivateKey::load$($String* name, bool initialize) {
	$CompoundAttribute serialVersionUIDfieldAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $constField(ECPrivateKey, serialVersionUID), serialVersionUIDfieldAnnotations$$},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"getS", "()Ljava/math/BigInteger;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ECPrivateKey, getS, $BigInteger*)},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.security.interfaces.ECPrivateKey",
		nullptr,
		"java.security.PrivateKey,java.security.interfaces.ECKey",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ECPrivateKey, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(ECPrivateKey));
	});
	return class$;
}

$Class* ECPrivateKey::class$ = nullptr;

		} // interfaces
	} // security
} // java