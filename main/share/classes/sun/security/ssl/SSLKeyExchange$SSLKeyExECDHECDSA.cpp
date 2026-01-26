#include <sun/security/ssl/SSLKeyExchange$SSLKeyExECDHECDSA.h>

#include <java/util/List.h>
#include <sun/security/ssl/SSLKeyAgreement.h>
#include <sun/security/ssl/SSLKeyExchange$T12KeyAgreement.h>
#include <sun/security/ssl/SSLKeyExchange.h>
#include <sun/security/ssl/X509Authentication.h>
#include <jcpp.h>

#undef EC
#undef ECDH
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

$FieldInfo _SSLKeyExchange$SSLKeyExECDHECDSA_FieldInfo_[] = {
	{"KE", "Lsun/security/ssl/SSLKeyExchange;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SSLKeyExchange$SSLKeyExECDHECDSA, KE)},
	{}
};

$MethodInfo _SSLKeyExchange$SSLKeyExECDHECDSA_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(SSLKeyExchange$SSLKeyExECDHECDSA, init$, void)},
	{}
};

$InnerClassInfo _SSLKeyExchange$SSLKeyExECDHECDSA_InnerClassesInfo_[] = {
	{"sun.security.ssl.SSLKeyExchange$SSLKeyExECDHECDSA", "sun.security.ssl.SSLKeyExchange", "SSLKeyExECDHECDSA", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _SSLKeyExchange$SSLKeyExECDHECDSA_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.ssl.SSLKeyExchange$SSLKeyExECDHECDSA",
	"java.lang.Object",
	nullptr,
	_SSLKeyExchange$SSLKeyExECDHECDSA_FieldInfo_,
	_SSLKeyExchange$SSLKeyExECDHECDSA_MethodInfo_,
	nullptr,
	nullptr,
	_SSLKeyExchange$SSLKeyExECDHECDSA_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.SSLKeyExchange"
};

$Object* allocate$SSLKeyExchange$SSLKeyExECDHECDSA($Class* clazz) {
	return $of($alloc(SSLKeyExchange$SSLKeyExECDHECDSA));
}

$SSLKeyExchange* SSLKeyExchange$SSLKeyExECDHECDSA::KE = nullptr;

void SSLKeyExchange$SSLKeyExECDHECDSA::init$() {
}

void clinit$SSLKeyExchange$SSLKeyExECDHECDSA($Class* class$) {
	$init($X509Authentication);
	$init($SSLKeyExchange$T12KeyAgreement);
	$assignStatic(SSLKeyExchange$SSLKeyExECDHECDSA::KE, $new($SSLKeyExchange, $($List::of($of($X509Authentication::EC))), $SSLKeyExchange$T12KeyAgreement::ECDH));
}

SSLKeyExchange$SSLKeyExECDHECDSA::SSLKeyExchange$SSLKeyExECDHECDSA() {
}

$Class* SSLKeyExchange$SSLKeyExECDHECDSA::load$($String* name, bool initialize) {
	$loadClass(SSLKeyExchange$SSLKeyExECDHECDSA, name, initialize, &_SSLKeyExchange$SSLKeyExECDHECDSA_ClassInfo_, clinit$SSLKeyExchange$SSLKeyExECDHECDSA, allocate$SSLKeyExchange$SSLKeyExECDHECDSA);
	return class$;
}

$Class* SSLKeyExchange$SSLKeyExECDHECDSA::class$ = nullptr;

		} // ssl
	} // security
} // sun