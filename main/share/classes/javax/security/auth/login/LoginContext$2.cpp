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

$FieldInfo _LoginContext$2_FieldInfo_[] = {
	{"this$0", "Ljavax/security/auth/login/LoginContext;", nullptr, $FINAL | $SYNTHETIC, $field(LoginContext$2, this$0)},
	{}
};

$MethodInfo _LoginContext$2_MethodInfo_[] = {
	{"<init>", "(Ljavax/security/auth/login/LoginContext;)V", nullptr, 0, $method(static_cast<void(LoginContext$2::*)($LoginContext*)>(&LoginContext$2::init$))},
	{"run", "()Ljava/lang/ClassLoader;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _LoginContext$2_EnclosingMethodInfo_ = {
	"javax.security.auth.login.LoginContext",
	"init",
	"(Ljava/lang/String;)V"
};

$InnerClassInfo _LoginContext$2_InnerClassesInfo_[] = {
	{"javax.security.auth.login.LoginContext$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _LoginContext$2_ClassInfo_ = {
	$ACC_SUPER,
	"javax.security.auth.login.LoginContext$2",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_LoginContext$2_FieldInfo_,
	_LoginContext$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/ClassLoader;>;",
	&_LoginContext$2_EnclosingMethodInfo_,
	_LoginContext$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.security.auth.login.LoginContext"
};

$Object* allocate$LoginContext$2($Class* clazz) {
	return $of($alloc(LoginContext$2));
}

void LoginContext$2::init$($LoginContext* this$0) {
	$set(this, this$0, this$0);
}

$Object* LoginContext$2::run() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($ClassLoader, loader, $($Thread::currentThread())->getContextClassLoader());
	if (loader == nullptr) {
		$assign(loader, $ClassLoader::getSystemClassLoader());
	}
	return $of(loader);
}

LoginContext$2::LoginContext$2() {
}

$Class* LoginContext$2::load$($String* name, bool initialize) {
	$loadClass(LoginContext$2, name, initialize, &_LoginContext$2_ClassInfo_, allocate$LoginContext$2);
	return class$;
}

$Class* LoginContext$2::class$ = nullptr;

			} // login
		} // auth
	} // security
} // javax