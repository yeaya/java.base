#include <javax/security/auth/login/LoginContext$3.h>
#include <java/lang/ClassLoader.h>
#include <java/security/Security.h>
#include <javax/security/auth/callback/CallbackHandler.h>
#include <javax/security/auth/login/LoginContext.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Security = ::java::security::Security;
using $CallbackHandler = ::javax::security::auth::callback::CallbackHandler;
using $LoginContext = ::javax::security::auth::login::LoginContext;

namespace javax {
	namespace security {
		namespace auth {
			namespace login {

void LoginContext$3::init$($LoginContext* this$0, $ClassLoader* val$finalLoader) {
	$set(this, this$0, this$0);
	$set(this, val$finalLoader, val$finalLoader);
}

$Object* LoginContext$3::run() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($String, defaultHandler, $Security::getProperty("auth.login.defaultCallbackHandler"_s));
	if (defaultHandler == nullptr || defaultHandler->isEmpty()) {
		return nullptr;
	}
	$load($CallbackHandler);
	$Class* c = $Class::forName(defaultHandler, true, this->val$finalLoader)->asSubclass($CallbackHandler::class$);
	$var($CallbackHandler, result, $cast($CallbackHandler, $nc(c)->newInstance()));
	return result;
}

LoginContext$3::LoginContext$3() {
}

$Class* LoginContext$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/security/auth/login/LoginContext;", nullptr, $FINAL | $SYNTHETIC, $field(LoginContext$3, this$0)},
		{"val$finalLoader", "Ljava/lang/ClassLoader;", nullptr, $FINAL | $SYNTHETIC, $field(LoginContext$3, val$finalLoader)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/security/auth/login/LoginContext;Ljava/lang/ClassLoader;)V", "()V", 0, $method(LoginContext$3, init$, void, $LoginContext*, $ClassLoader*)},
		{"run", "()Ljavax/security/auth/callback/CallbackHandler;", nullptr, $PUBLIC, $virtualMethod(LoginContext$3, run, $Object*), "java.lang.Exception"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.security.auth.login.LoginContext",
		"loadDefaultCallbackHandler",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.security.auth.login.LoginContext$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.security.auth.login.LoginContext$3",
		"java.lang.Object",
		"java.security.PrivilegedExceptionAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljavax/security/auth/callback/CallbackHandler;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.security.auth.login.LoginContext"
	};
	$loadClass(LoginContext$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LoginContext$3);
	});
	return class$;
}

$Class* LoginContext$3::class$ = nullptr;

			} // login
		} // auth
	} // security
} // javax