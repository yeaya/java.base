#include <sun/security/ssl/Authenticator$SSLNullAuthenticator.h>

#include <sun/security/ssl/Authenticator$SSLAuthenticator.h>
#include <sun/security/ssl/Authenticator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Authenticator$SSLAuthenticator = ::sun::security::ssl::Authenticator$SSLAuthenticator;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _Authenticator$SSLNullAuthenticator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(Authenticator$SSLNullAuthenticator, init$, void)},
	{}
};

$InnerClassInfo _Authenticator$SSLNullAuthenticator_InnerClassesInfo_[] = {
	{"sun.security.ssl.Authenticator$SSLNullAuthenticator", "sun.security.ssl.Authenticator", "SSLNullAuthenticator", $PRIVATE | $STATIC},
	{"sun.security.ssl.Authenticator$SSLAuthenticator", "sun.security.ssl.Authenticator", "SSLAuthenticator", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Authenticator$SSLNullAuthenticator_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.ssl.Authenticator$SSLNullAuthenticator",
	"sun.security.ssl.Authenticator$SSLAuthenticator",
	nullptr,
	nullptr,
	_Authenticator$SSLNullAuthenticator_MethodInfo_,
	nullptr,
	nullptr,
	_Authenticator$SSLNullAuthenticator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.Authenticator"
};

$Object* allocate$Authenticator$SSLNullAuthenticator($Class* clazz) {
	return $of($alloc(Authenticator$SSLNullAuthenticator));
}

void Authenticator$SSLNullAuthenticator::init$() {
	$Authenticator$SSLAuthenticator::init$($$new($bytes, 8));
}

Authenticator$SSLNullAuthenticator::Authenticator$SSLNullAuthenticator() {
}

$Class* Authenticator$SSLNullAuthenticator::load$($String* name, bool initialize) {
	$loadClass(Authenticator$SSLNullAuthenticator, name, initialize, &_Authenticator$SSLNullAuthenticator_ClassInfo_, allocate$Authenticator$SSLNullAuthenticator);
	return class$;
}

$Class* Authenticator$SSLNullAuthenticator::class$ = nullptr;

		} // ssl
	} // security
} // sun