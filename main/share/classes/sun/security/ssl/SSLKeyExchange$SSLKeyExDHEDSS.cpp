#include <sun/security/ssl/SSLKeyExchange$SSLKeyExDHEDSS.h>

#include <java/util/List.h>
#include <sun/security/ssl/SSLKeyAgreement.h>
#include <sun/security/ssl/SSLKeyExchange$T12KeyAgreement.h>
#include <sun/security/ssl/SSLKeyExchange.h>
#include <sun/security/ssl/X509Authentication.h>
#include <jcpp.h>

#undef DHE
#undef DSA
#undef KE

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

$FieldInfo _SSLKeyExchange$SSLKeyExDHEDSS_FieldInfo_[] = {
	{"KE", "Lsun/security/ssl/SSLKeyExchange;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SSLKeyExchange$SSLKeyExDHEDSS, KE)},
	{}
};

$MethodInfo _SSLKeyExchange$SSLKeyExDHEDSS_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(SSLKeyExchange$SSLKeyExDHEDSS, init$, void)},
	{}
};

$InnerClassInfo _SSLKeyExchange$SSLKeyExDHEDSS_InnerClassesInfo_[] = {
	{"sun.security.ssl.SSLKeyExchange$SSLKeyExDHEDSS", "sun.security.ssl.SSLKeyExchange", "SSLKeyExDHEDSS", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _SSLKeyExchange$SSLKeyExDHEDSS_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.ssl.SSLKeyExchange$SSLKeyExDHEDSS",
	"java.lang.Object",
	nullptr,
	_SSLKeyExchange$SSLKeyExDHEDSS_FieldInfo_,
	_SSLKeyExchange$SSLKeyExDHEDSS_MethodInfo_,
	nullptr,
	nullptr,
	_SSLKeyExchange$SSLKeyExDHEDSS_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.SSLKeyExchange"
};

$Object* allocate$SSLKeyExchange$SSLKeyExDHEDSS($Class* clazz) {
	return $of($alloc(SSLKeyExchange$SSLKeyExDHEDSS));
}

$SSLKeyExchange* SSLKeyExchange$SSLKeyExDHEDSS::KE = nullptr;

void SSLKeyExchange$SSLKeyExDHEDSS::init$() {
}

void clinit$SSLKeyExchange$SSLKeyExDHEDSS($Class* class$) {
	$init($X509Authentication);
	$init($SSLKeyExchange$T12KeyAgreement);
	$assignStatic(SSLKeyExchange$SSLKeyExDHEDSS::KE, $new($SSLKeyExchange, $($List::of($of($X509Authentication::DSA))), $SSLKeyExchange$T12KeyAgreement::DHE));
}

SSLKeyExchange$SSLKeyExDHEDSS::SSLKeyExchange$SSLKeyExDHEDSS() {
}

$Class* SSLKeyExchange$SSLKeyExDHEDSS::load$($String* name, bool initialize) {
	$loadClass(SSLKeyExchange$SSLKeyExDHEDSS, name, initialize, &_SSLKeyExchange$SSLKeyExDHEDSS_ClassInfo_, clinit$SSLKeyExchange$SSLKeyExDHEDSS, allocate$SSLKeyExchange$SSLKeyExDHEDSS);
	return class$;
}

$Class* SSLKeyExchange$SSLKeyExDHEDSS::class$ = nullptr;

		} // ssl
	} // security
} // sun