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

$FieldInfo _LoginContext$1_FieldInfo_[] = {
	{"this$0", "Ljavax/security/auth/login/LoginContext;", nullptr, $FINAL | $SYNTHETIC, $field(LoginContext$1, this$0)},
	{}
};

$MethodInfo _LoginContext$1_MethodInfo_[] = {
	{"<init>", "(Ljavax/security/auth/login/LoginContext;)V", nullptr, 0, $method(static_cast<void(LoginContext$1::*)($LoginContext*)>(&LoginContext$1::init$))},
	{"run", "()Ljavax/security/auth/login/Configuration;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _LoginContext$1_EnclosingMethodInfo_ = {
	"javax.security.auth.login.LoginContext",
	"init",
	"(Ljava/lang/String;)V"
};

$InnerClassInfo _LoginContext$1_InnerClassesInfo_[] = {
	{"javax.security.auth.login.LoginContext$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _LoginContext$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.security.auth.login.LoginContext$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_LoginContext$1_FieldInfo_,
	_LoginContext$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljavax/security/auth/login/Configuration;>;",
	&_LoginContext$1_EnclosingMethodInfo_,
	_LoginContext$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.security.auth.login.LoginContext"
};

$Object* allocate$LoginContext$1($Class* clazz) {
	return $of($alloc(LoginContext$1));
}

void LoginContext$1::init$($LoginContext* this$0) {
	$set(this, this$0, this$0);
}

$Object* LoginContext$1::run() {
	return $of($Configuration::getConfiguration());
}

LoginContext$1::LoginContext$1() {
}

$Class* LoginContext$1::load$($String* name, bool initialize) {
	$loadClass(LoginContext$1, name, initialize, &_LoginContext$1_ClassInfo_, allocate$LoginContext$1);
	return class$;
}

$Class* LoginContext$1::class$ = nullptr;

			} // login
		} // auth
	} // security
} // javax