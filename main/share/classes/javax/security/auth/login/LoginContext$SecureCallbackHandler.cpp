#include <javax/security/auth/login/LoginContext$SecureCallbackHandler.h>

#include <java/io/IOException.h>
#include <java/security/AccessControlContext.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedActionException.h>
#include <java/security/PrivilegedExceptionAction.h>
#include <javax/security/auth/callback/Callback.h>
#include <javax/security/auth/callback/CallbackHandler.h>
#include <javax/security/auth/callback/UnsupportedCallbackException.h>
#include <javax/security/auth/login/LoginContext$SecureCallbackHandler$1.h>
#include <javax/security/auth/login/LoginContext.h>
#include <jcpp.h>

using $CallbackArray = $Array<::javax::security::auth::callback::Callback>;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessControlContext = ::java::security::AccessControlContext;
using $AccessController = ::java::security::AccessController;
using $PrivilegedActionException = ::java::security::PrivilegedActionException;
using $PrivilegedExceptionAction = ::java::security::PrivilegedExceptionAction;
using $CallbackHandler = ::javax::security::auth::callback::CallbackHandler;
using $UnsupportedCallbackException = ::javax::security::auth::callback::UnsupportedCallbackException;
using $LoginContext$SecureCallbackHandler$1 = ::javax::security::auth::login::LoginContext$SecureCallbackHandler$1;

namespace javax {
	namespace security {
		namespace auth {
			namespace login {

$FieldInfo _LoginContext$SecureCallbackHandler_FieldInfo_[] = {
	{"acc", "Ljava/security/AccessControlContext;", nullptr, $PRIVATE | $FINAL, $field(LoginContext$SecureCallbackHandler, acc)},
	{"ch", "Ljavax/security/auth/callback/CallbackHandler;", nullptr, $PRIVATE | $FINAL, $field(LoginContext$SecureCallbackHandler, ch)},
	{}
};

$MethodInfo _LoginContext$SecureCallbackHandler_MethodInfo_[] = {
	{"<init>", "(Ljava/security/AccessControlContext;Ljavax/security/auth/callback/CallbackHandler;)V", nullptr, 0, $method(static_cast<void(LoginContext$SecureCallbackHandler::*)($AccessControlContext*,$CallbackHandler*)>(&LoginContext$SecureCallbackHandler::init$))},
	{"handle", "([Ljavax/security/auth/callback/Callback;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException,javax.security.auth.callback.UnsupportedCallbackException"},
	{}
};

$InnerClassInfo _LoginContext$SecureCallbackHandler_InnerClassesInfo_[] = {
	{"javax.security.auth.login.LoginContext$SecureCallbackHandler", "javax.security.auth.login.LoginContext", "SecureCallbackHandler", $PRIVATE | $STATIC},
	{"javax.security.auth.login.LoginContext$SecureCallbackHandler$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _LoginContext$SecureCallbackHandler_ClassInfo_ = {
	$ACC_SUPER,
	"javax.security.auth.login.LoginContext$SecureCallbackHandler",
	"java.lang.Object",
	"javax.security.auth.callback.CallbackHandler",
	_LoginContext$SecureCallbackHandler_FieldInfo_,
	_LoginContext$SecureCallbackHandler_MethodInfo_,
	nullptr,
	nullptr,
	_LoginContext$SecureCallbackHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.security.auth.login.LoginContext"
};

$Object* allocate$LoginContext$SecureCallbackHandler($Class* clazz) {
	return $of($alloc(LoginContext$SecureCallbackHandler));
}

void LoginContext$SecureCallbackHandler::init$($AccessControlContext* acc, $CallbackHandler* ch) {
	$set(this, acc, acc);
	$set(this, ch, ch);
}

void LoginContext$SecureCallbackHandler::handle($CallbackArray* callbacks) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	try {
		$AccessController::doPrivileged(static_cast<$PrivilegedExceptionAction*>($$new($LoginContext$SecureCallbackHandler$1, this, callbacks)), this->acc);
	} catch ($PrivilegedActionException& pae) {
		if ($instanceOf($IOException, $(pae->getException()))) {
			$throw($cast($IOException, $(pae->getException())));
		} else {
			$throw($cast($UnsupportedCallbackException, $(pae->getException())));
		}
	}
}

LoginContext$SecureCallbackHandler::LoginContext$SecureCallbackHandler() {
}

$Class* LoginContext$SecureCallbackHandler::load$($String* name, bool initialize) {
	$loadClass(LoginContext$SecureCallbackHandler, name, initialize, &_LoginContext$SecureCallbackHandler_ClassInfo_, allocate$LoginContext$SecureCallbackHandler);
	return class$;
}

$Class* LoginContext$SecureCallbackHandler::class$ = nullptr;

			} // login
		} // auth
	} // security
} // javax