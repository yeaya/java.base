#include <java/security/KeyStore$SimpleLoadStoreParameter.h>
#include <java/security/KeyStore$ProtectionParameter.h>
#include <java/security/KeyStore.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $KeyStore$ProtectionParameter = ::java::security::KeyStore$ProtectionParameter;

namespace java {
	namespace security {

void KeyStore$SimpleLoadStoreParameter::init$($KeyStore$ProtectionParameter* protection) {
	$set(this, protection, protection);
}

$KeyStore$ProtectionParameter* KeyStore$SimpleLoadStoreParameter::getProtectionParameter() {
	return this->protection;
}

KeyStore$SimpleLoadStoreParameter::KeyStore$SimpleLoadStoreParameter() {
}

$Class* KeyStore$SimpleLoadStoreParameter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"protection", "Ljava/security/KeyStore$ProtectionParameter;", nullptr, $PRIVATE | $FINAL, $field(KeyStore$SimpleLoadStoreParameter, protection)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/security/KeyStore$ProtectionParameter;)V", nullptr, 0, $method(KeyStore$SimpleLoadStoreParameter, init$, void, $KeyStore$ProtectionParameter*)},
		{"getProtectionParameter", "()Ljava/security/KeyStore$ProtectionParameter;", nullptr, $PUBLIC, $virtualMethod(KeyStore$SimpleLoadStoreParameter, getProtectionParameter, $KeyStore$ProtectionParameter*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.security.KeyStore$SimpleLoadStoreParameter", "java.security.KeyStore", "SimpleLoadStoreParameter", $STATIC},
		{"java.security.KeyStore$LoadStoreParameter", "java.security.KeyStore", "LoadStoreParameter", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.security.KeyStore$SimpleLoadStoreParameter",
		"java.lang.Object",
		"java.security.KeyStore$LoadStoreParameter",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.security.KeyStore"
	};
	$loadClass(KeyStore$SimpleLoadStoreParameter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(KeyStore$SimpleLoadStoreParameter);
	});
	return class$;
}

$Class* KeyStore$SimpleLoadStoreParameter::class$ = nullptr;

	} // security
} // java