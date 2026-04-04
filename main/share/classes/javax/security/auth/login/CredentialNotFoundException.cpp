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
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CredentialNotFoundException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CredentialNotFoundException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(CredentialNotFoundException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.security.auth.login.CredentialNotFoundException",
		"javax.security.auth.login.CredentialException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(CredentialNotFoundException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CredentialNotFoundException);
	});
	return class$;
}

$Class* CredentialNotFoundException::class$ = nullptr;

			} // login
		} // auth
	} // security
} // javax