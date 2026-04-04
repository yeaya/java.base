#include <java/security/KeyStore$Builder$1.h>
#include <java/lang/IllegalStateException.h>
#include <java/security/KeyStore$Builder.h>
#include <java/security/KeyStore$ProtectionParameter.h>
#include <java/security/KeyStore.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $KeyStore = ::java::security::KeyStore;
using $KeyStore$Builder = ::java::security::KeyStore$Builder;
using $KeyStore$ProtectionParameter = ::java::security::KeyStore$ProtectionParameter;

namespace java {
	namespace security {

void KeyStore$Builder$1::init$($KeyStore* val$keyStore, $KeyStore$ProtectionParameter* val$protectionParameter) {
	$set(this, val$keyStore, val$keyStore);
	$set(this, val$protectionParameter, val$protectionParameter);
	$KeyStore$Builder::init$();
}

$KeyStore* KeyStore$Builder$1::getKeyStore() {
	this->getCalled = true;
	return this->val$keyStore;
}

$KeyStore$ProtectionParameter* KeyStore$Builder$1::getProtectionParameter($String* alias) {
	if (alias == nullptr) {
		$throwNew($NullPointerException);
	}
	if (this->getCalled == false) {
		$throwNew($IllegalStateException, "getKeyStore() must be called first"_s);
	}
	return this->val$protectionParameter;
}

KeyStore$Builder$1::KeyStore$Builder$1() {
}

$Class* KeyStore$Builder$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$protectionParameter", "Ljava/security/KeyStore$ProtectionParameter;", nullptr, $FINAL | $SYNTHETIC, $field(KeyStore$Builder$1, val$protectionParameter)},
		{"val$keyStore", "Ljava/security/KeyStore;", nullptr, $FINAL | $SYNTHETIC, $field(KeyStore$Builder$1, val$keyStore)},
		{"getCalled", "Z", nullptr, $PRIVATE | $VOLATILE, $field(KeyStore$Builder$1, getCalled)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/security/KeyStore;Ljava/security/KeyStore$ProtectionParameter;)V", nullptr, 0, $method(KeyStore$Builder$1, init$, void, $KeyStore*, $KeyStore$ProtectionParameter*)},
		{"getKeyStore", "()Ljava/security/KeyStore;", nullptr, $PUBLIC, $virtualMethod(KeyStore$Builder$1, getKeyStore, $KeyStore*)},
		{"getProtectionParameter", "(Ljava/lang/String;)Ljava/security/KeyStore$ProtectionParameter;", nullptr, $PUBLIC, $virtualMethod(KeyStore$Builder$1, getProtectionParameter, $KeyStore$ProtectionParameter*, $String*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.security.KeyStore$Builder",
		"newInstance",
		"(Ljava/security/KeyStore;Ljava/security/KeyStore$ProtectionParameter;)Ljava/security/KeyStore$Builder;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.security.KeyStore$Builder", "java.security.KeyStore", "Builder", $PUBLIC | $STATIC | $ABSTRACT},
		{"java.security.KeyStore$Builder$1", nullptr, nullptr, 0},
		{"java.security.KeyStore$ProtectionParameter", "java.security.KeyStore", "ProtectionParameter", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.security.KeyStore$Builder$1",
		"java.security.KeyStore$Builder",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.security.KeyStore"
	};
	$loadClass(KeyStore$Builder$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(KeyStore$Builder$1);
	});
	return class$;
}

$Class* KeyStore$Builder$1::class$ = nullptr;

	} // security
} // java