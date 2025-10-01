#include <javax/security/auth/login/AccountNotFoundException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$FieldInfo _AccountNotFoundException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AccountNotFoundException, serialVersionUID)},
	{}
};

$MethodInfo _AccountNotFoundException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AccountNotFoundException::*)()>(&AccountNotFoundException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(AccountNotFoundException::*)($String*)>(&AccountNotFoundException::init$))},
	{}
};

$ClassInfo _AccountNotFoundException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.security.auth.login.AccountNotFoundException",
	"javax.security.auth.login.AccountException",
	nullptr,
	_AccountNotFoundException_FieldInfo_,
	_AccountNotFoundException_MethodInfo_
};

$Object* allocate$AccountNotFoundException($Class* clazz) {
	return $of($alloc(AccountNotFoundException));
}

void AccountNotFoundException::init$() {
	$AccountException::init$();
}

void AccountNotFoundException::init$($String* msg) {
	$AccountException::init$(msg);
}

AccountNotFoundException::AccountNotFoundException() {
}

AccountNotFoundException::AccountNotFoundException(const AccountNotFoundException& e) {
}

AccountNotFoundException AccountNotFoundException::wrapper$() {
	$pendingException(this);
	return *this;
}

void AccountNotFoundException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* AccountNotFoundException::load$($String* name, bool initialize) {
	$loadClass(AccountNotFoundException, name, initialize, &_AccountNotFoundException_ClassInfo_, allocate$AccountNotFoundException);
	return class$;
}

$Class* AccountNotFoundException::class$ = nullptr;

			} // login
		} // auth
	} // security
} // javax