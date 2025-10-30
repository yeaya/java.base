#include <sun/security/ssl/SSLKeyExchange$SSLKeyExECDHERSA.h>

#include <java/util/List.h>
#include <sun/security/ssl/SSLKeyAgreement.h>
#include <sun/security/ssl/SSLKeyExchange$T12KeyAgreement.h>
#include <sun/security/ssl/SSLKeyExchange.h>
#include <sun/security/ssl/X509Authentication.h>
#include <jcpp.h>

#undef ECDHE
#undef KE
#undef RSA

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

$FieldInfo _SSLKeyExchange$SSLKeyExECDHERSA_FieldInfo_[] = {
	{"KE", "Lsun/security/ssl/SSLKeyExchange;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SSLKeyExchange$SSLKeyExECDHERSA, KE)},
	{}
};

$MethodInfo _SSLKeyExchange$SSLKeyExECDHERSA_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(SSLKeyExchange$SSLKeyExECDHERSA::*)()>(&SSLKeyExchange$SSLKeyExECDHERSA::init$))},
	{}
};

$InnerClassInfo _SSLKeyExchange$SSLKeyExECDHERSA_InnerClassesInfo_[] = {
	{"sun.security.ssl.SSLKeyExchange$SSLKeyExECDHERSA", "sun.security.ssl.SSLKeyExchange", "SSLKeyExECDHERSA", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _SSLKeyExchange$SSLKeyExECDHERSA_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.ssl.SSLKeyExchange$SSLKeyExECDHERSA",
	"java.lang.Object",
	nullptr,
	_SSLKeyExchange$SSLKeyExECDHERSA_FieldInfo_,
	_SSLKeyExchange$SSLKeyExECDHERSA_MethodInfo_,
	nullptr,
	nullptr,
	_SSLKeyExchange$SSLKeyExECDHERSA_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.SSLKeyExchange"
};

$Object* allocate$SSLKeyExchange$SSLKeyExECDHERSA($Class* clazz) {
	return $of($alloc(SSLKeyExchange$SSLKeyExECDHERSA));
}

$SSLKeyExchange* SSLKeyExchange$SSLKeyExECDHERSA::KE = nullptr;

void SSLKeyExchange$SSLKeyExECDHERSA::init$() {
}

void clinit$SSLKeyExchange$SSLKeyExECDHERSA($Class* class$) {
	$init($X509Authentication);
	$init($SSLKeyExchange$T12KeyAgreement);
	$assignStatic(SSLKeyExchange$SSLKeyExECDHERSA::KE, $new($SSLKeyExchange, $($List::of($of($X509Authentication::RSA))), $SSLKeyExchange$T12KeyAgreement::ECDHE));
}

SSLKeyExchange$SSLKeyExECDHERSA::SSLKeyExchange$SSLKeyExECDHERSA() {
}

$Class* SSLKeyExchange$SSLKeyExECDHERSA::load$($String* name, bool initialize) {
	$loadClass(SSLKeyExchange$SSLKeyExECDHERSA, name, initialize, &_SSLKeyExchange$SSLKeyExECDHERSA_ClassInfo_, clinit$SSLKeyExchange$SSLKeyExECDHERSA, allocate$SSLKeyExchange$SSLKeyExECDHERSA);
	return class$;
}

$Class* SSLKeyExchange$SSLKeyExECDHERSA::class$ = nullptr;

		} // ssl
	} // security
} // sun