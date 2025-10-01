#include <javax/security/auth/login/AccountException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$FieldInfo _AccountException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AccountException, serialVersionUID)},
	{}
};

$MethodInfo _AccountException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AccountException::*)()>(&AccountException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(AccountException::*)($String*)>(&AccountException::init$))},
	{}
};

$ClassInfo _AccountException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.security.auth.login.AccountException",
	"javax.security.auth.login.LoginException",
	nullptr,
	_AccountException_FieldInfo_,
	_AccountException_MethodInfo_
};

$Object* allocate$AccountException($Class* clazz) {
	return $of($alloc(AccountException));
}

void AccountException::init$() {
	$LoginException::init$();
}

void AccountException::init$($String* msg) {
	$LoginException::init$(msg);
}

AccountException::AccountException() {
}

AccountException::AccountException(const AccountException& e) {
}

AccountException AccountException::wrapper$() {
	$pendingException(this);
	return *this;
}

void AccountException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* AccountException::load$($String* name, bool initialize) {
	$loadClass(AccountException, name, initialize, &_AccountException_ClassInfo_, allocate$AccountException);
	return class$;
}

$Class* AccountException::class$ = nullptr;

			} // login
		} // auth
	} // security
} // javax