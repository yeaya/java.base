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
using $PrivilegedExceptionAction = ::java::security::PrivilegedExceptionAction;
using $Security = ::java::security::Security;
using $CallbackHandler = ::javax::security::auth::callback::CallbackHandler;
using $LoginContext = ::javax::security::auth::login::LoginContext;

namespace javax {
	namespace security {
		namespace auth {
			namespace login {

$FieldInfo _LoginContext$3_FieldInfo_[] = {
	{"this$0", "Ljavax/security/auth/login/LoginContext;", nullptr, $FINAL | $SYNTHETIC, $field(LoginContext$3, this$0)},
	{"val$finalLoader", "Ljava/lang/ClassLoader;", nullptr, $FINAL | $SYNTHETIC, $field(LoginContext$3, val$finalLoader)},
	{}
};

$MethodInfo _LoginContext$3_MethodInfo_[] = {
	{"<init>", "(Ljavax/security/auth/login/LoginContext;Ljava/lang/ClassLoader;)V", "()V", 0, $method(static_cast<void(LoginContext$3::*)($LoginContext*,$ClassLoader*)>(&LoginContext$3::init$))},
	{"run", "()Ljavax/security/auth/callback/CallbackHandler;", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{}
};

$EnclosingMethodInfo _LoginContext$3_EnclosingMethodInfo_ = {
	"javax.security.auth.login.LoginContext",
	"loadDefaultCallbackHandler",
	"()V"
};

$InnerClassInfo _LoginContext$3_InnerClassesInfo_[] = {
	{"javax.security.auth.login.LoginContext$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _LoginContext$3_ClassInfo_ = {
	$ACC_SUPER,
	"javax.security.auth.login.LoginContext$3",
	"java.lang.Object",
	"java.security.PrivilegedExceptionAction",
	_LoginContext$3_FieldInfo_,
	_LoginContext$3_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljavax/security/auth/callback/CallbackHandler;>;",
	&_LoginContext$3_EnclosingMethodInfo_,
	_LoginContext$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.security.auth.login.LoginContext"
};

$Object* allocate$LoginContext$3($Class* clazz) {
	return $of($alloc(LoginContext$3));
}

void LoginContext$3::init$($LoginContext* this$0, $ClassLoader* val$finalLoader) {
	$set(this, this$0, this$0);
	$set(this, val$finalLoader, val$finalLoader);
}

$Object* LoginContext$3::run() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($String, defaultHandler, $Security::getProperty("auth.login.defaultCallbackHandler"_s));
	if (defaultHandler == nullptr || $nc(defaultHandler)->isEmpty()) {
		return $of(nullptr);
	}
	$load($CallbackHandler);
	$Class* c = $Class::forName(defaultHandler, true, this->val$finalLoader)->asSubclass($CallbackHandler::class$);
	$var($CallbackHandler, result, $cast($CallbackHandler, $nc(c)->newInstance()));
	return $of(result);
}

LoginContext$3::LoginContext$3() {
}

$Class* LoginContext$3::load$($String* name, bool initialize) {
	$loadClass(LoginContext$3, name, initialize, &_LoginContext$3_ClassInfo_, allocate$LoginContext$3);
	return class$;
}

$Class* LoginContext$3::class$ = nullptr;

			} // login
		} // auth
	} // security
} // javax