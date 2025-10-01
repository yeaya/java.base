#include <javax/security/auth/login/AccountLockedException.h>

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

$FieldInfo _AccountLockedException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AccountLockedException, serialVersionUID)},
	{}
};

$MethodInfo _AccountLockedException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AccountLockedException::*)()>(&AccountLockedException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(AccountLockedException::*)($String*)>(&AccountLockedException::init$))},
	{}
};

$ClassInfo _AccountLockedException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.security.auth.login.AccountLockedException",
	"javax.security.auth.login.AccountException",
	nullptr,
	_AccountLockedException_FieldInfo_,
	_AccountLockedException_MethodInfo_
};

$Object* allocate$AccountLockedException($Class* clazz) {
	return $of($alloc(AccountLockedException));
}

void AccountLockedException::init$() {
	$AccountException::init$();
}

void AccountLockedException::init$($String* msg) {
	$AccountException::init$(msg);
}

AccountLockedException::AccountLockedException() {
}

AccountLockedException::AccountLockedException(const AccountLockedException& e) {
}

AccountLockedException AccountLockedException::wrapper$() {
	$pendingException(this);
	return *this;
}

void AccountLockedException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* AccountLockedException::load$($String* name, bool initialize) {
	$loadClass(AccountLockedException, name, initialize, &_AccountLockedException_ClassInfo_, allocate$AccountLockedException);
	return class$;
}

$Class* AccountLockedException::class$ = nullptr;

			} // login
		} // auth
	} // security
} // javax