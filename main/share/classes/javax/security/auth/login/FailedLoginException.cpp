#include <javax/security/auth/login/FailedLoginException.h>

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

$FieldInfo _FailedLoginException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FailedLoginException, serialVersionUID)},
	{}
};

$MethodInfo _FailedLoginException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FailedLoginException::*)()>(&FailedLoginException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(FailedLoginException::*)($String*)>(&FailedLoginException::init$))},
	{}
};

$ClassInfo _FailedLoginException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.security.auth.login.FailedLoginException",
	"javax.security.auth.login.LoginException",
	nullptr,
	_FailedLoginException_FieldInfo_,
	_FailedLoginException_MethodInfo_
};

$Object* allocate$FailedLoginException($Class* clazz) {
	return $of($alloc(FailedLoginException));
}

void FailedLoginException::init$() {
	$LoginException::init$();
}

void FailedLoginException::init$($String* msg) {
	$LoginException::init$(msg);
}

FailedLoginException::FailedLoginException() {
}

FailedLoginException::FailedLoginException(const FailedLoginException& e) {
}

FailedLoginException FailedLoginException::wrapper$() {
	$pendingException(this);
	return *this;
}

void FailedLoginException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* FailedLoginException::load$($String* name, bool initialize) {
	$loadClass(FailedLoginException, name, initialize, &_FailedLoginException_ClassInfo_, allocate$FailedLoginException);
	return class$;
}

$Class* FailedLoginException::class$ = nullptr;

			} // login
		} // auth
	} // security
} // javax