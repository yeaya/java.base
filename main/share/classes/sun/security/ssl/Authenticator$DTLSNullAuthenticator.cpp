#include <sun/security/ssl/Authenticator$DTLSNullAuthenticator.h>

#include <sun/security/ssl/Authenticator$DTLSAuthenticator.h>
#include <sun/security/ssl/Authenticator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Authenticator$DTLSAuthenticator = ::sun::security::ssl::Authenticator$DTLSAuthenticator;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _Authenticator$DTLSNullAuthenticator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(Authenticator$DTLSNullAuthenticator::*)()>(&Authenticator$DTLSNullAuthenticator::init$))},
	{}
};

$InnerClassInfo _Authenticator$DTLSNullAuthenticator_InnerClassesInfo_[] = {
	{"sun.security.ssl.Authenticator$DTLSNullAuthenticator", "sun.security.ssl.Authenticator", "DTLSNullAuthenticator", $PRIVATE | $STATIC},
	{"sun.security.ssl.Authenticator$DTLSAuthenticator", "sun.security.ssl.Authenticator", "DTLSAuthenticator", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Authenticator$DTLSNullAuthenticator_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.ssl.Authenticator$DTLSNullAuthenticator",
	"sun.security.ssl.Authenticator$DTLSAuthenticator",
	nullptr,
	nullptr,
	_Authenticator$DTLSNullAuthenticator_MethodInfo_,
	nullptr,
	nullptr,
	_Authenticator$DTLSNullAuthenticator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.Authenticator"
};

$Object* allocate$Authenticator$DTLSNullAuthenticator($Class* clazz) {
	return $of($alloc(Authenticator$DTLSNullAuthenticator));
}

void Authenticator$DTLSNullAuthenticator::init$() {
	$Authenticator$DTLSAuthenticator::init$($$new($bytes, 8));
}

Authenticator$DTLSNullAuthenticator::Authenticator$DTLSNullAuthenticator() {
}

$Class* Authenticator$DTLSNullAuthenticator::load$($String* name, bool initialize) {
	$loadClass(Authenticator$DTLSNullAuthenticator, name, initialize, &_Authenticator$DTLSNullAuthenticator_ClassInfo_, allocate$Authenticator$DTLSNullAuthenticator);
	return class$;
}

$Class* Authenticator$DTLSNullAuthenticator::class$ = nullptr;

		} // ssl
	} // security
} // sun