#include <javax/security/auth/login/LoginContext$4.h>
#include <javax/security/auth/login/LoginContext.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LoginContext = ::javax::security::auth::login::LoginContext;

namespace javax {
	namespace security {
		namespace auth {
			namespace login {

void LoginContext$4::init$($LoginContext* this$0, $String* val$methodName) {
	$set(this, this$0, this$0);
	$set(this, val$methodName, val$methodName);
}

$Object* LoginContext$4::run() {
	this->this$0->invoke(this->val$methodName);
	return nullptr;
}

LoginContext$4::LoginContext$4() {
}

$Class* LoginContext$4::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/security/auth/login/LoginContext;", nullptr, $FINAL | $SYNTHETIC, $field(LoginContext$4, this$0)},
		{"val$methodName", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(LoginContext$4, val$methodName)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/security/auth/login/LoginContext;Ljava/lang/String;)V", "()V", 0, $method(LoginContext$4, init$, void, $LoginContext*, $String*)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(LoginContext$4, run, $Object*), "javax.security.auth.login.LoginException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.security.auth.login.LoginContext",
		"invokePriv",
		"(Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.security.auth.login.LoginContext$4", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.security.auth.login.LoginContext$4",
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
	$loadClass(LoginContext$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LoginContext$4);
	});
	return class$;
}

$Class* LoginContext$4::class$ = nullptr;

			} // login
		} // auth
	} // security
} // javax