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
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LoginException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(LoginException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(LoginException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.security.auth.login.LoginException",
		"java.security.GeneralSecurityException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(LoginException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LoginException);
	});
	return class$;
}

$Class* LoginException::class$ = nullptr;

			} // login
		} // auth
	} // security
} // javax