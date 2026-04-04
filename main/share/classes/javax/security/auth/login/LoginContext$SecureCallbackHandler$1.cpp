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
using $LoginContext$SecureCallbackHandler = ::javax::security::auth::login::LoginContext$SecureCallbackHandler;

namespace javax {
	namespace security {
		namespace auth {
			namespace login {

void LoginContext$SecureCallbackHandler$1::init$($LoginContext$SecureCallbackHandler* this$0, $CallbackArray* val$callbacks) {
	$set(this, this$0, this$0);
	$set(this, val$callbacks, val$callbacks);
}

$Object* LoginContext$SecureCallbackHandler$1::run() {
	$nc(this->this$0->ch)->handle(this->val$callbacks);
	return nullptr;
}

LoginContext$SecureCallbackHandler$1::LoginContext$SecureCallbackHandler$1() {
}

$Class* LoginContext$SecureCallbackHandler$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/security/auth/login/LoginContext$SecureCallbackHandler;", nullptr, $FINAL | $SYNTHETIC, $field(LoginContext$SecureCallbackHandler$1, this$0)},
		{"val$callbacks", "[Ljavax/security/auth/callback/Callback;", nullptr, $FINAL | $SYNTHETIC, $field(LoginContext$SecureCallbackHandler$1, val$callbacks)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/security/auth/login/LoginContext$SecureCallbackHandler;[Ljavax/security/auth/callback/Callback;)V", "()V", 0, $method(LoginContext$SecureCallbackHandler$1, init$, void, $LoginContext$SecureCallbackHandler*, $CallbackArray*)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(LoginContext$SecureCallbackHandler$1, run, $Object*), "java.io.IOException,javax.security.auth.callback.UnsupportedCallbackException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.security.auth.login.LoginContext$SecureCallbackHandler",
		"handle",
		"([Ljavax/security/auth/callback/Callback;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.security.auth.login.LoginContext$SecureCallbackHandler", "javax.security.auth.login.LoginContext", "SecureCallbackHandler", $PRIVATE | $STATIC},
		{"javax.security.auth.login.LoginContext$SecureCallbackHandler$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.security.auth.login.LoginContext$SecureCallbackHandler$1",
		"java.lang.Object",
		"java.security.PrivilegedExceptionAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljava/lang/Void;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.security.auth.login.LoginContext"
	};
	$loadClass(LoginContext$SecureCallbackHandler$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LoginContext$SecureCallbackHandler$1);
	});
	return class$;
}

$Class* LoginContext$SecureCallbackHandler$1::class$ = nullptr;

			} // login
		} // auth
	} // security
} // javax