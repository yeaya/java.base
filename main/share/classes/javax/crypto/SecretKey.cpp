#include <javax/crypto/SecretKey.h>
#include <java/security/Key.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Key = ::java::security::Key;

namespace javax {
	namespace crypto {

int32_t SecretKey::hashCode() {
	 return this->$Key::hashCode();
}

bool SecretKey::equals(Object$* obj) {
	 return this->$Key::equals(obj);
}

$Object* SecretKey::clone() {
	 return this->$Key::clone();
}

$String* SecretKey::toString() {
	 return this->$Key::toString();
}

void SecretKey::finalize() {
	this->$Key::finalize();
}

$Class* SecretKey::load$($String* name, bool initialize) {
	$CompoundAttribute serialVersionUIDfieldAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $constField(SecretKey, serialVersionUID), serialVersionUIDfieldAnnotations$$},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.crypto.SecretKey",
		nullptr,
		"java.security.Key,javax.security.auth.Destroyable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SecretKey, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(SecretKey));
	});
	return class$;
}

$Class* SecretKey::class$ = nullptr;

	} // crypto
} // javax