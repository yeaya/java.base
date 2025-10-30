#include <javax/security/auth/login/LoginContext$SecureCallbackHandler$1.h>

#include <javax/security/auth/callback/Callback.h>
#include <javax/security/auth/callback/CallbackHandler.h>
#include <javax/security/auth/login/LoginContext$SecureCallbackHandler.h>
#include <jcpp.h>

using $CallbackArray = $Array<::javax::security::auth::callback::Callback>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedExceptionAction = ::java::security::PrivilegedExceptionAction;
using $Callback = ::javax::security::auth::callback::Callback;
using $CallbackHandler = ::javax::security::auth::callback::CallbackHandler;
using $LoginContext$SecureCallbackHandler = ::javax::security::auth::login::LoginContext$SecureCallbackHandler;

namespace javax {
	namespace security {
		namespace auth {
			namespace login {

$FieldInfo _LoginContext$SecureCallbackHandler$1_FieldInfo_[] = {
	{"this$0", "Ljavax/security/auth/login/LoginContext$SecureCallbackHandler;", nullptr, $FINAL | $SYNTHETIC, $field(LoginContext$SecureCallbackHandler$1, this$0)},
	{"val$callbacks", "[Ljavax/security/auth/callback/Callback;", nullptr, $FINAL | $SYNTHETIC, $field(LoginContext$SecureCallbackHandler$1, val$callbacks)},
	{}
};

$MethodInfo _LoginContext$SecureCallbackHandler$1_MethodInfo_[] = {
	{"<init>", "(Ljavax/security/auth/login/LoginContext$SecureCallbackHandler;[Ljavax/security/auth/callback/Callback;)V", "()V", 0, $method(static_cast<void(LoginContext$SecureCallbackHandler$1::*)($LoginContext$SecureCallbackHandler*,$CallbackArray*)>(&LoginContext$SecureCallbackHandler$1::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, nullptr, "java.io.IOException,javax.security.auth.callback.UnsupportedCallbackException"},
	{}
};

$EnclosingMethodInfo _LoginContext$SecureCallbackHandler$1_EnclosingMethodInfo_ = {
	"javax.security.auth.login.LoginContext$SecureCallbackHandler",
	"handle",
	"([Ljavax/security/auth/callback/Callback;)V"
};

$InnerClassInfo _LoginContext$SecureCallbackHandler$1_InnerClassesInfo_[] = {
	{"javax.security.auth.login.LoginContext$SecureCallbackHandler", "javax.security.auth.login.LoginContext", "SecureCallbackHandler", $PRIVATE | $STATIC},
	{"javax.security.auth.login.LoginContext$SecureCallbackHandler$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _LoginContext$SecureCallbackHandler$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.security.auth.login.LoginContext$SecureCallbackHandler$1",
	"java.lang.Object",
	"java.security.PrivilegedExceptionAction",
	_LoginContext$SecureCallbackHandler$1_FieldInfo_,
	_LoginContext$SecureCallbackHandler$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljava/lang/Void;>;",
	&_LoginContext$SecureCallbackHandler$1_EnclosingMethodInfo_,
	_LoginContext$SecureCallbackHandler$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.security.auth.login.LoginContext"
};

$Object* allocate$LoginContext$SecureCallbackHandler$1($Class* clazz) {
	return $of($alloc(LoginContext$SecureCallbackHandler$1));
}

void LoginContext$SecureCallbackHandler$1::init$($LoginContext$SecureCallbackHandler* this$0, $CallbackArray* val$callbacks) {
	$set(this, this$0, this$0);
	$set(this, val$callbacks, val$callbacks);
}

$Object* LoginContext$SecureCallbackHandler$1::run() {
	$nc(this->this$0->ch)->handle(this->val$callbacks);
	return $of(nullptr);
}

LoginContext$SecureCallbackHandler$1::LoginContext$SecureCallbackHandler$1() {
}

$Class* LoginContext$SecureCallbackHandler$1::load$($String* name, bool initialize) {
	$loadClass(LoginContext$SecureCallbackHandler$1, name, initialize, &_LoginContext$SecureCallbackHandler$1_ClassInfo_, allocate$LoginContext$SecureCallbackHandler$1);
	return class$;
}

$Class* LoginContext$SecureCallbackHandler$1::class$ = nullptr;

			} // login
		} // auth
	} // security
} // javax