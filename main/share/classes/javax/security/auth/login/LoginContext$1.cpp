#include <javax/security/auth/login/LoginContext$1.h>
#include <javax/security/auth/login/Configuration.h>
#include <javax/security/auth/login/LoginContext.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Configuration = ::javax::security::auth::login::Configuration;
using $LoginContext = ::javax::security::auth::login::LoginContext;

namespace javax {
	namespace security {
		namespace auth {
			namespace login {

void LoginContext$1::init$($LoginContext* this$0) {
	$set(this, this$0, this$0);
}

$Object* LoginContext$1::run() {
	return $Configuration::getConfiguration();
}

LoginContext$1::LoginContext$1() {
}

$Class* LoginContext$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/security/auth/login/LoginContext;", nullptr, $FINAL | $SYNTHETIC, $field(LoginContext$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/security/auth/login/LoginContext;)V", nullptr, 0, $method(LoginContext$1, init$, void, $LoginContext*)},
		{"run", "()Ljavax/security/auth/login/Configuration;", nullptr, $PUBLIC, $virtualMethod(LoginContext$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.security.auth.login.LoginContext",
		"init",
		"(Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.security.auth.login.LoginContext$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.security.auth.login.LoginContext$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljavax/security/auth/login/Configuration;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.security.auth.login.LoginContext"
	};
	$loadClass(LoginContext$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LoginContext$1);
	});
	return class$;
}

$Class* LoginContext$1::class$ = nullptr;

			} // login
		} // auth
	} // security
} // javax