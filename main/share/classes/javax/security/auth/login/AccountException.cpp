#include <javax/security/auth/login/AccountException.h>
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

void AccountException::init$() {
	$LoginException::init$();
}

void AccountException::init$($String* msg) {
	$LoginException::init$(msg);
}

AccountException::AccountException() {
}

AccountException::AccountException(const AccountException& e) : $LoginException(e) {
}

void AccountException::throw$() {
	throw *this;
}

$Class* AccountException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AccountException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AccountException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(AccountException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.security.auth.login.AccountException",
		"javax.security.auth.login.LoginException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(AccountException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AccountException);
	});
	return class$;
}

$Class* AccountException::class$ = nullptr;

			} // login
		} // auth
	} // security
} // javax