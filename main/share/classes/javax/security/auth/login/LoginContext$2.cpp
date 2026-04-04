#include <javax/security/auth/login/LoginContext$2.h>
#include <java/lang/ClassLoader.h>
#include <javax/security/auth/login/LoginContext.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LoginContext = ::javax::security::auth::login::LoginContext;

namespace javax {
	namespace security {
		namespace auth {
			namespace login {

void LoginContext$2::init$($LoginContext* this$0) {
	$set(this, this$0, this$0);
}

$Object* LoginContext$2::run() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($ClassLoader, loader, $($Thread::currentThread())->getContextClassLoader());
	if (loader == nullptr) {
		$assign(loader, $ClassLoader::getSystemClassLoader());
	}
	return loader;
}

LoginContext$2::LoginContext$2() {
}

$Class* LoginContext$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/security/auth/login/LoginContext;", nullptr, $FINAL | $SYNTHETIC, $field(LoginContext$2, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/security/auth/login/LoginContext;)V", nullptr, 0, $method(LoginContext$2, init$, void, $LoginContext*)},
		{"run", "()Ljava/lang/ClassLoader;", nullptr, $PUBLIC, $virtualMethod(LoginContext$2, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.security.auth.login.LoginContext",
		"init",
		"(Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.security.auth.login.LoginContext$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.security.auth.login.LoginContext$2",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/ClassLoader;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.security.auth.login.LoginContext"
	};
	$loadClass(LoginContext$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LoginContext$2);
	});
	return class$;
}

$Class* LoginContext$2::class$ = nullptr;

			} // login
		} // auth
	} // security
} // javax