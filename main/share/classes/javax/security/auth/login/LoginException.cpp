#include <javax/security/auth/login/LoginException.h>

#include <java/security/GeneralSecurityException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;

namespace javax {
	namespace security {
		namespace auth {
			namespace login {

$FieldInfo _LoginException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LoginException, serialVersionUID)},
	{}
};

$MethodInfo _LoginException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LoginException::*)()>(&LoginException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(LoginException::*)($String*)>(&LoginException::init$))},
	{}
};

$ClassInfo _LoginException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.security.auth.login.LoginException",
	"java.security.GeneralSecurityException",
	nullptr,
	_LoginException_FieldInfo_,
	_LoginException_MethodInfo_
};

$Object* allocate$LoginException($Class* clazz) {
	return $of($alloc(LoginException));
}

void LoginException::init$() {
	$GeneralSecurityException::init$();
}

void LoginException::init$($String* msg) {
	$GeneralSecurityException::init$(msg);
}

LoginException::LoginException() {
}

LoginException::LoginException(const LoginException& e) : $GeneralSecurityException(e) {
}

void LoginException::throw$() {
	throw *this;
}

$Class* LoginException::load$($String* name, bool initialize) {
	$loadClass(LoginException, name, initialize, &_LoginException_ClassInfo_, allocate$LoginException);
	return class$;
}

$Class* LoginException::class$ = nullptr;

			} // login
		} // auth
	} // security
} // javax