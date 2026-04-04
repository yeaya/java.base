#include <javax/security/auth/login/AccountNotFoundException.h>
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

void AccountNotFoundException::init$() {
	$AccountException::init$();
}

void AccountNotFoundException::init$($String* msg) {
	$AccountException::init$(msg);
}

AccountNotFoundException::AccountNotFoundException() {
}

AccountNotFoundException::AccountNotFoundException(const AccountNotFoundException& e) : $AccountException(e) {
}

void AccountNotFoundException::throw$() {
	throw *this;
}

$Class* AccountNotFoundException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AccountNotFoundException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AccountNotFoundException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(AccountNotFoundException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.security.auth.login.AccountNotFoundException",
		"javax.security.auth.login.AccountException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(AccountNotFoundException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AccountNotFoundException);
	});
	return class$;
}

$Class* AccountNotFoundException::class$ = nullptr;

			} // login
		} // auth
	} // security
} // javax