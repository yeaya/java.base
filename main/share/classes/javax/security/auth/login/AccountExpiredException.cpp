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

$FieldInfo _AccountExpiredException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AccountExpiredException, serialVersionUID)},
	{}
};

$MethodInfo _AccountExpiredException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(AccountExpiredException, init$, void)},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(AccountExpiredException, init$, void, $String*)},
	{}
};

$ClassInfo _AccountExpiredException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.security.auth.login.AccountExpiredException",
	"javax.security.auth.login.AccountException",
	nullptr,
	_AccountExpiredException_FieldInfo_,
	_AccountExpiredException_MethodInfo_
};

$Object* allocate$AccountExpiredException($Class* clazz) {
	return $of($alloc(AccountExpiredException));
}

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
	$loadClass(AccountExpiredException, name, initialize, &_AccountExpiredException_ClassInfo_, allocate$AccountExpiredException);
	return class$;
}

$Class* AccountExpiredException::class$ = nullptr;

			} // login
		} // auth
	} // security
} // javax