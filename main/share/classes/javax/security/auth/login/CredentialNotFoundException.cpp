#include <javax/security/auth/login/CredentialNotFoundException.h>

#include <javax/security/auth/login/CredentialException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CredentialException = ::javax::security::auth::login::CredentialException;

namespace javax {
	namespace security {
		namespace auth {
			namespace login {

$FieldInfo _CredentialNotFoundException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CredentialNotFoundException, serialVersionUID)},
	{}
};

$MethodInfo _CredentialNotFoundException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CredentialNotFoundException::*)()>(&CredentialNotFoundException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(CredentialNotFoundException::*)($String*)>(&CredentialNotFoundException::init$))},
	{}
};

$ClassInfo _CredentialNotFoundException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.security.auth.login.CredentialNotFoundException",
	"javax.security.auth.login.CredentialException",
	nullptr,
	_CredentialNotFoundException_FieldInfo_,
	_CredentialNotFoundException_MethodInfo_
};

$Object* allocate$CredentialNotFoundException($Class* clazz) {
	return $of($alloc(CredentialNotFoundException));
}

void CredentialNotFoundException::init$() {
	$CredentialException::init$();
}

void CredentialNotFoundException::init$($String* msg) {
	$CredentialException::init$(msg);
}

CredentialNotFoundException::CredentialNotFoundException() {
}

CredentialNotFoundException::CredentialNotFoundException(const CredentialNotFoundException& e) : $CredentialException(e) {
}

void CredentialNotFoundException::throw$() {
	throw *this;
}

$Class* CredentialNotFoundException::load$($String* name, bool initialize) {
	$loadClass(CredentialNotFoundException, name, initialize, &_CredentialNotFoundException_ClassInfo_, allocate$CredentialNotFoundException);
	return class$;
}

$Class* CredentialNotFoundException::class$ = nullptr;

			} // login
		} // auth
	} // security
} // javax