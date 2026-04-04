#include <javax/security/auth/login/FailedLoginException.h>
#include <javax/security/auth/login/LoginException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LoginException = ::javax::security::auth::login::LoginException;

namespace javax {
	namespace security {
		namespace auth {
			namespace login {

void FailedLoginException::init$() {
	$LoginException::init$();
}

void FailedLoginException::init$($String* msg) {
	$LoginException::init$(msg);
}

FailedLoginException::FailedLoginException() {
}

FailedLoginException::FailedLoginException(const FailedLoginException& e) : $LoginException(e) {
}

void FailedLoginException::throw$() {
	throw *this;
}

$Class* FailedLoginException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FailedLoginException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FailedLoginException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(FailedLoginException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.security.auth.login.FailedLoginException",
		"javax.security.auth.login.LoginException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(FailedLoginException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FailedLoginException);
	});
	return class$;
}

$Class* FailedLoginException::class$ = nullptr;

			} // login
		} // auth
	} // security
} // javax