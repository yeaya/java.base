#include <javax/security/auth/login/AccountExpiredException.h>
#include <javax/security/auth/login/AccountException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccountException = ::javax::security::auth::login::AccountException;

namespace javax {
	namespace security {
		namespace auth {
			namespace login {

void AccountExpiredException::init$() {
	$AccountException::init$();
}

void AccountExpiredException::init$($String* msg) {
	$AccountException::init$(msg);
}

AccountExpiredException::AccountExpiredException() {
}

AccountExpiredException::AccountExpiredException(const AccountExpiredException& e) : $AccountException(e) {
}

void AccountExpiredException::throw$() {
	throw *this;
}

$Class* AccountExpiredException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AccountExpiredException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AccountExpiredException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(AccountExpiredException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.security.auth.login.AccountExpiredException",
		"javax.security.auth.login.AccountException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(AccountExpiredException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AccountExpiredException);
	});
	return class$;
}

$Class* AccountExpiredException::class$ = nullptr;

			} // login
		} // auth
	} // security
} // javax