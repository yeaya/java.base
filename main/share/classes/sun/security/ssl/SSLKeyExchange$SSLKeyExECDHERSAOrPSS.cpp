#include <sun/security/ssl/SSLKeyExchange$SSLKeyExECDHERSAOrPSS.h>

#include <java/util/List.h>
#include <sun/security/ssl/SSLKeyAgreement.h>
#include <sun/security/ssl/SSLKeyExchange$T12KeyAgreement.h>
#include <sun/security/ssl/SSLKeyExchange.h>
#include <sun/security/ssl/X509Authentication.h>
#include <jcpp.h>

#undef ECDHE
#undef KE
#undef RSA_OR_PSS

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $SSLKeyAgreement = ::sun::security::ssl::SSLKeyAgreement;
using $SSLKeyExchange = ::sun::security::ssl::SSLKeyExchange;
using $SSLKeyExchange$T12KeyAgreement = ::sun::security::ssl::SSLKeyExchange$T12KeyAgreement;
using $X509Authentication = ::sun::security::ssl::X509Authentication;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _SSLKeyExchange$SSLKeyExECDHERSAOrPSS_FieldInfo_[] = {
	{"KE", "Lsun/security/ssl/SSLKeyExchange;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SSLKeyExchange$SSLKeyExECDHERSAOrPSS, KE)},
	{}
};

$MethodInfo _SSLKeyExchange$SSLKeyExECDHERSAOrPSS_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(SSLKeyExchange$SSLKeyExECDHERSAOrPSS, init$, void)},
	{}
};

$InnerClassInfo _SSLKeyExchange$SSLKeyExECDHERSAOrPSS_InnerClassesInfo_[] = {
	{"sun.security.ssl.SSLKeyExchange$SSLKeyExECDHERSAOrPSS", "sun.security.ssl.SSLKeyExchange", "SSLKeyExECDHERSAOrPSS", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _SSLKeyExchange$SSLKeyExECDHERSAOrPSS_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.ssl.SSLKeyExchange$SSLKeyExECDHERSAOrPSS",
	"java.lang.Object",
	nullptr,
	_SSLKeyExchange$SSLKeyExECDHERSAOrPSS_FieldInfo_,
	_SSLKeyExchange$SSLKeyExECDHERSAOrPSS_MethodInfo_,
	nullptr,
	nullptr,
	_SSLKeyExchange$SSLKeyExECDHERSAOrPSS_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.SSLKeyExchange"
};

$Object* allocate$SSLKeyExchange$SSLKeyExECDHERSAOrPSS($Class* clazz) {
	return $of($alloc(SSLKeyExchange$SSLKeyExECDHERSAOrPSS));
}

$SSLKeyExchange* SSLKeyExchange$SSLKeyExECDHERSAOrPSS::KE = nullptr;

void SSLKeyExchange$SSLKeyExECDHERSAOrPSS::init$() {
}

void clinit$SSLKeyExchange$SSLKeyExECDHERSAOrPSS($Class* class$) {
	$init($X509Authentication);
	$init($SSLKeyExchange$T12KeyAgreement);
	$assignStatic(SSLKeyExchange$SSLKeyExECDHERSAOrPSS::KE, $new($SSLKeyExchange, $($List::of($of($X509Authentication::RSA_OR_PSS))), $SSLKeyExchange$T12KeyAgreement::ECDHE));
}

SSLKeyExchange$SSLKeyExECDHERSAOrPSS::SSLKeyExchange$SSLKeyExECDHERSAOrPSS() {
}

$Class* SSLKeyExchange$SSLKeyExECDHERSAOrPSS::load$($String* name, bool initialize) {
	$loadClass(SSLKeyExchange$SSLKeyExECDHERSAOrPSS, name, initialize, &_SSLKeyExchange$SSLKeyExECDHERSAOrPSS_ClassInfo_, clinit$SSLKeyExchange$SSLKeyExECDHERSAOrPSS, allocate$SSLKeyExchange$SSLKeyExECDHERSAOrPSS);
	return class$;
}

$Class* SSLKeyExchange$SSLKeyExECDHERSAOrPSS::class$ = nullptr;

		} // ssl
	} // security
} // sun