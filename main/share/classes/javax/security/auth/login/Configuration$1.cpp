#include <javax/security/auth/login/Configuration$1.h>
#include <java/security/Security.h>
#include <javax/security/auth/login/Configuration.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Security = ::java::security::Security;

namespace javax {
	namespace security {
		namespace auth {
			namespace login {

void Configuration$1::init$() {
}

$Object* Configuration$1::run() {
	return $of($Security::getProperty("login.configuration.provider"_s));
}

Configuration$1::Configuration$1() {
}

$Class* Configuration$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Configuration$1, init$, void)},
		{"run", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Configuration$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.security.auth.login.Configuration",
		"getConfiguration",
		"()Ljavax/security/auth/login/Configuration;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.security.auth.login.Configuration$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.security.auth.login.Configuration$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/String;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.security.auth.login.Configuration"
	};
	$loadClass(Configuration$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Configuration$1);
	});
	return class$;
}

$Class* Configuration$1::class$ = nullptr;

			} // login
		} // auth
	} // security
} // javax