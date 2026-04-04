#include <java/security/KeyStore$CallbackHandlerProtection.h>
#include <java/security/KeyStore.h>
#include <javax/security/auth/callback/CallbackHandler.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $CallbackHandler = ::javax::security::auth::callback::CallbackHandler;

namespace java {
	namespace security {

void KeyStore$CallbackHandlerProtection::init$($CallbackHandler* handler) {
	if (handler == nullptr) {
		$throwNew($NullPointerException, "handler must not be null"_s);
	}
	$set(this, handler, handler);
}

$CallbackHandler* KeyStore$CallbackHandlerProtection::getCallbackHandler() {
	return this->handler;
}

KeyStore$CallbackHandlerProtection::KeyStore$CallbackHandlerProtection() {
}

$Class* KeyStore$CallbackHandlerProtection::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"handler", "Ljavax/security/auth/callback/CallbackHandler;", nullptr, $PRIVATE | $FINAL, $field(KeyStore$CallbackHandlerProtection, handler)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/security/auth/callback/CallbackHandler;)V", nullptr, $PUBLIC, $method(KeyStore$CallbackHandlerProtection, init$, void, $CallbackHandler*)},
		{"getCallbackHandler", "()Ljavax/security/auth/callback/CallbackHandler;", nullptr, $PUBLIC, $virtualMethod(KeyStore$CallbackHandlerProtection, getCallbackHandler, $CallbackHandler*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.security.KeyStore$CallbackHandlerProtection", "java.security.KeyStore", "CallbackHandlerProtection", $PUBLIC | $STATIC},
		{"java.security.KeyStore$ProtectionParameter", "java.security.KeyStore", "ProtectionParameter", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.security.KeyStore$CallbackHandlerProtection",
		"java.lang.Object",
		"java.security.KeyStore$ProtectionParameter",
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
	$loadClass(KeyStore$CallbackHandlerProtection, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(KeyStore$CallbackHandlerProtection);
	});
	return class$;
}

$Class* KeyStore$CallbackHandlerProtection::class$ = nullptr;

	} // security
} // java