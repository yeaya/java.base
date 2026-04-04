#include <javax/security/auth/login/CredentialException.h>
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

void CredentialException::init$() {
	$LoginException::init$();
}

void CredentialException::init$($String* msg) {
	$LoginException::init$(msg);
}

CredentialException::CredentialException() {
}

CredentialException::CredentialException(const CredentialException& e) : $LoginException(e) {
}

void CredentialException::throw$() {
	throw *this;
}

$Class* CredentialException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CredentialException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CredentialException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(CredentialException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.security.auth.login.CredentialException",
		"javax.security.auth.login.LoginException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(CredentialException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CredentialException);
	});
	return class$;
}

$Class* CredentialException::class$ = nullptr;

			} // login
		} // auth
	} // security
} // javax