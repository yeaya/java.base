#include <sun/security/ssl/SSLKeyExchange$SSLKeyExDHERSAOrPSS.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/List.h>
#include <sun/security/ssl/SSLKeyAgreement.h>
#include <sun/security/ssl/SSLKeyExchange$T12KeyAgreement.h>
#include <sun/security/ssl/SSLKeyExchange.h>
#include <sun/security/ssl/X509Authentication.h>
#include <jcpp.h>

#undef DHE
#undef RSA_OR_PSS
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

$FieldInfo _SSLKeyExchange$SSLKeyExDHERSAOrPSS_FieldInfo_[] = {
	{"KE", "Lsun/security/ssl/SSLKeyExchange;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SSLKeyExchange$SSLKeyExDHERSAOrPSS, KE)},
	{}
};

$MethodInfo _SSLKeyExchange$SSLKeyExDHERSAOrPSS_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(SSLKeyExchange$SSLKeyExDHERSAOrPSS::*)()>(&SSLKeyExchange$SSLKeyExDHERSAOrPSS::init$))},
	{}
};

$InnerClassInfo _SSLKeyExchange$SSLKeyExDHERSAOrPSS_InnerClassesInfo_[] = {
	{"sun.security.ssl.SSLKeyExchange$SSLKeyExDHERSAOrPSS", "sun.security.ssl.SSLKeyExchange", "SSLKeyExDHERSAOrPSS", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _SSLKeyExchange$SSLKeyExDHERSAOrPSS_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.ssl.SSLKeyExchange$SSLKeyExDHERSAOrPSS",
	"java.lang.Object",
	nullptr,
	_SSLKeyExchange$SSLKeyExDHERSAOrPSS_FieldInfo_,
	_SSLKeyExchange$SSLKeyExDHERSAOrPSS_MethodInfo_,
	nullptr,
	nullptr,
	_SSLKeyExchange$SSLKeyExDHERSAOrPSS_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.SSLKeyExchange"
};

$Object* allocate$SSLKeyExchange$SSLKeyExDHERSAOrPSS($Class* clazz) {
	return $of($alloc(SSLKeyExchange$SSLKeyExDHERSAOrPSS));
}

$SSLKeyExchange* SSLKeyExchange$SSLKeyExDHERSAOrPSS::KE = nullptr;

void SSLKeyExchange$SSLKeyExDHERSAOrPSS::init$() {
}

void clinit$SSLKeyExchange$SSLKeyExDHERSAOrPSS($Class* class$) {
	$init($X509Authentication);
	$init($SSLKeyExchange$T12KeyAgreement);
	$assignStatic(SSLKeyExchange$SSLKeyExDHERSAOrPSS::KE, $new($SSLKeyExchange, $($List::of($of($X509Authentication::RSA_OR_PSS))), $SSLKeyExchange$T12KeyAgreement::DHE));
}

SSLKeyExchange$SSLKeyExDHERSAOrPSS::SSLKeyExchange$SSLKeyExDHERSAOrPSS() {
}

$Class* SSLKeyExchange$SSLKeyExDHERSAOrPSS::load$($String* name, bool initialize) {
	$loadClass(SSLKeyExchange$SSLKeyExDHERSAOrPSS, name, initialize, &_SSLKeyExchange$SSLKeyExDHERSAOrPSS_ClassInfo_, clinit$SSLKeyExchange$SSLKeyExDHERSAOrPSS, allocate$SSLKeyExchange$SSLKeyExDHERSAOrPSS);
	return class$;
}

$Class* SSLKeyExchange$SSLKeyExDHERSAOrPSS::class$ = nullptr;

		} // ssl
	} // security
} // sun