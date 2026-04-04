#include <javax/security/auth/login/Configuration$3.h>
#include <javax/security/auth/login/Configuration.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Configuration = ::javax::security::auth::login::Configuration;

namespace javax {
	namespace security {
		namespace auth {
			namespace login {

void Configuration$3::init$($Configuration* val$untrustedImpl) {
	$set(this, val$untrustedImpl, val$untrustedImpl);
}

$Object* Configuration$3::run() {
	$Configuration::setConfiguration(this->val$untrustedImpl);
	return nullptr;
}

Configuration$3::Configuration$3() {
}

$Class* Configuration$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$untrustedImpl", "Ljavax/security/auth/login/Configuration;", nullptr, $FINAL | $SYNTHETIC, $field(Configuration$3, val$untrustedImpl)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/security/auth/login/Configuration;)V", nullptr, 0, $method(Configuration$3, init$, void, $Configuration*)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(Configuration$3, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.security.auth.login.Configuration",
		"getConfiguration",
		"()Ljavax/security/auth/login/Configuration;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.security.auth.login.Configuration$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.security.auth.login.Configuration$3",
		"java.lang.Object",
		"java.security.PrivilegedExceptionAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljava/lang/Object;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.security.auth.login.Configuration"
	};
	$loadClass(Configuration$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Configuration$3);
	});
	return class$;
}

$Class* Configuration$3::class$ = nullptr;

			} // login
		} // auth
	} // security
} // javax