#include <javax/security/auth/login/AccountLockedException.h>
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

void AccountLockedException::init$() {
	$AccountException::init$();
}

void AccountLockedException::init$($String* msg) {
	$AccountException::init$(msg);
}

AccountLockedException::AccountLockedException() {
}

AccountLockedException::AccountLockedException(const AccountLockedException& e) : $AccountException(e) {
}

void AccountLockedException::throw$() {
	throw *this;
}

$Class* AccountLockedException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AccountLockedException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AccountLockedException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(AccountLockedException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.security.auth.login.AccountLockedException",
		"javax.security.auth.login.AccountException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(AccountLockedException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AccountLockedException);
	});
	return class$;
}

$Class* AccountLockedException::class$ = nullptr;

			} // login
		} // auth
	} // security
} // javax