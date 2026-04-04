#include <java/security/interfaces/DSAPublicKey.h>
#include <java/math/BigInteger.h>
#include <java/security/interfaces/DSAKey.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigInteger = ::java::math::BigInteger;
using $DSAKey = ::java::security::interfaces::DSAKey;

namespace java {
	namespace security {
		namespace interfaces {

int32_t DSAPublicKey::hashCode() {
	 return this->$DSAKey::hashCode();
}

bool DSAPublicKey::equals(Object$* obj) {
	 return this->$DSAKey::equals(obj);
}

$Object* DSAPublicKey::clone() {
	 return this->$DSAKey::clone();
}

$String* DSAPublicKey::toString() {
	 return this->$DSAKey::toString();
}

void DSAPublicKey::finalize() {
	this->$DSAKey::finalize();
}

$Class* DSAPublicKey::load$($String* name, bool initialize) {
	$CompoundAttribute serialVersionUIDfieldAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $constField(DSAPublicKey, serialVersionUID), serialVersionUIDfieldAnnotations$$},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"getY", "()Ljava/math/BigInteger;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DSAPublicKey, getY, $BigInteger*)},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.security.interfaces.DSAPublicKey",
		nullptr,
		"java.security.interfaces.DSAKey,java.security.PublicKey",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DSAPublicKey, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(DSAPublicKey));
	});
	return class$;
}

$Class* DSAPublicKey::class$ = nullptr;

		} // interfaces
	} // security
} // java