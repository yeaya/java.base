#include <java/security/PrivateKey.h>
#include <java/security/Key.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Key = ::java::security::Key;

namespace java {
	namespace security {

int32_t PrivateKey::hashCode() {
	 return this->$Key::hashCode();
}

bool PrivateKey::equals(Object$* obj) {
	 return this->$Key::equals(obj);
}

$Object* PrivateKey::clone() {
	 return this->$Key::clone();
}

$String* PrivateKey::toString() {
	 return this->$Key::toString();
}

void PrivateKey::finalize() {
	this->$Key::finalize();
}

$Class* PrivateKey::load$($String* name, bool initialize) {
	$CompoundAttribute serialVersionUIDfieldAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $constField(PrivateKey, serialVersionUID), serialVersionUIDfieldAnnotations$$},
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
		"java.security.PrivateKey",
		nullptr,
		"java.security.Key,javax.security.auth.Destroyable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(PrivateKey, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(PrivateKey));
	});
	return class$;
}

$Class* PrivateKey::class$ = nullptr;

	} // security
} // java