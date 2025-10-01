#include <javax/security/auth/login/CredentialException.h>

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

$FieldInfo _CredentialException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CredentialException, serialVersionUID)},
	{}
};

$MethodInfo _CredentialException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CredentialException::*)()>(&CredentialException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(CredentialException::*)($String*)>(&CredentialException::init$))},
	{}
};

$ClassInfo _CredentialException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.security.auth.login.CredentialException",
	"javax.security.auth.login.LoginException",
	nullptr,
	_CredentialException_FieldInfo_,
	_CredentialException_MethodInfo_
};

$Object* allocate$CredentialException($Class* clazz) {
	return $of($alloc(CredentialException));
}

void CredentialException::init$() {
	$LoginException::init$();
}

void CredentialException::init$($String* msg) {
	$LoginException::init$(msg);
}

CredentialException::CredentialException() {
}

CredentialException::CredentialException(const CredentialException& e) {
}

CredentialException CredentialException::wrapper$() {
	$pendingException(this);
	return *this;
}

void CredentialException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* CredentialException::load$($String* name, bool initialize) {
	$loadClass(CredentialException, name, initialize, &_CredentialException_ClassInfo_, allocate$CredentialException);
	return class$;
}

$Class* CredentialException::class$ = nullptr;

			} // login
		} // auth
	} // security
} // javax