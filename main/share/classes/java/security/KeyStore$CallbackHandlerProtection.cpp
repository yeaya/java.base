#include <java/security/KeyStore$CallbackHandlerProtection.h>

#include <java/security/KeyStore.h>
#include <javax/security/auth/callback/CallbackHandler.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $KeyStore = ::java::security::KeyStore;
using $KeyStore$ProtectionParameter = ::java::security::KeyStore$ProtectionParameter;
using $CallbackHandler = ::javax::security::auth::callback::CallbackHandler;

namespace java {
	namespace security {

$FieldInfo _KeyStore$CallbackHandlerProtection_FieldInfo_[] = {
	{"handler", "Ljavax/security/auth/callback/CallbackHandler;", nullptr, $PRIVATE | $FINAL, $field(KeyStore$CallbackHandlerProtection, handler)},
	{}
};

$MethodInfo _KeyStore$CallbackHandlerProtection_MethodInfo_[] = {
	{"<init>", "(Ljavax/security/auth/callback/CallbackHandler;)V", nullptr, $PUBLIC, $method(static_cast<void(KeyStore$CallbackHandlerProtection::*)($CallbackHandler*)>(&KeyStore$CallbackHandlerProtection::init$))},
	{"getCallbackHandler", "()Ljavax/security/auth/callback/CallbackHandler;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _KeyStore$CallbackHandlerProtection_InnerClassesInfo_[] = {
	{"java.security.KeyStore$CallbackHandlerProtection", "java.security.KeyStore", "CallbackHandlerProtection", $PUBLIC | $STATIC},
	{"java.security.KeyStore$ProtectionParameter", "java.security.KeyStore", "ProtectionParameter", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _KeyStore$CallbackHandlerProtection_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.security.KeyStore$CallbackHandlerProtection",
	"java.lang.Object",
	"java.security.KeyStore$ProtectionParameter",
	_KeyStore$CallbackHandlerProtection_FieldInfo_,
	_KeyStore$CallbackHandlerProtection_MethodInfo_,
	nullptr,
	nullptr,
	_KeyStore$CallbackHandlerProtection_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.security.KeyStore"
};

$Object* allocate$KeyStore$CallbackHandlerProtection($Class* clazz) {
	return $of($alloc(KeyStore$CallbackHandlerProtection));
}

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
	$loadClass(KeyStore$CallbackHandlerProtection, name, initialize, &_KeyStore$CallbackHandlerProtection_ClassInfo_, allocate$KeyStore$CallbackHandlerProtection);
	return class$;
}

$Class* KeyStore$CallbackHandlerProtection::class$ = nullptr;

	} // security
} // java