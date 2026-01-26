#include <javax/security/auth/login/CredentialExpiredException.h>

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

$FieldInfo _CredentialExpiredException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CredentialExpiredException, serialVersionUID)},
	{}
};

$MethodInfo _CredentialExpiredException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CredentialExpiredException, init$, void)},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(CredentialExpiredException, init$, void, $String*)},
	{}
};

$ClassInfo _CredentialExpiredException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.security.auth.login.CredentialExpiredException",
	"javax.security.auth.login.CredentialException",
	nullptr,
	_CredentialExpiredException_FieldInfo_,
	_CredentialExpiredException_MethodInfo_
};

$Object* allocate$CredentialExpiredException($Class* clazz) {
	return $of($alloc(CredentialExpiredException));
}

void CredentialExpiredException::init$() {
	$CredentialException::init$();
}

void CredentialExpiredException::init$($String* msg) {
	$CredentialException::init$(msg);
}

CredentialExpiredException::CredentialExpiredException() {
}

CredentialExpiredException::CredentialExpiredException(const CredentialExpiredException& e) : $CredentialException(e) {
}

void CredentialExpiredException::throw$() {
	throw *this;
}

$Class* CredentialExpiredException::load$($String* name, bool initialize) {
	$loadClass(CredentialExpiredException, name, initialize, &_CredentialExpiredException_ClassInfo_, allocate$CredentialExpiredException);
	return class$;
}

$Class* CredentialExpiredException::class$ = nullptr;

			} // login
		} // auth
	} // security
} // javax