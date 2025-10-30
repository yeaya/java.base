#include <sun/security/ssl/SSLKeyExchange$SSLKeyExECDHEECDSA.h>

#include <java/util/List.h>
#include <sun/security/ssl/SSLKeyAgreement.h>
#include <sun/security/ssl/SSLKeyExchange$T12KeyAgreement.h>
#include <sun/security/ssl/SSLKeyExchange.h>
#include <sun/security/ssl/X509Authentication.h>
#include <jcpp.h>

#undef EC
#undef ECDHE
#undef EDDSA
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

$FieldInfo _SSLKeyExchange$SSLKeyExECDHEECDSA_FieldInfo_[] = {
	{"KE", "Lsun/security/ssl/SSLKeyExchange;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SSLKeyExchange$SSLKeyExECDHEECDSA, KE)},
	{}
};

$MethodInfo _SSLKeyExchange$SSLKeyExECDHEECDSA_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(SSLKeyExchange$SSLKeyExECDHEECDSA::*)()>(&SSLKeyExchange$SSLKeyExECDHEECDSA::init$))},
	{}
};

$InnerClassInfo _SSLKeyExchange$SSLKeyExECDHEECDSA_InnerClassesInfo_[] = {
	{"sun.security.ssl.SSLKeyExchange$SSLKeyExECDHEECDSA", "sun.security.ssl.SSLKeyExchange", "SSLKeyExECDHEECDSA", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _SSLKeyExchange$SSLKeyExECDHEECDSA_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.ssl.SSLKeyExchange$SSLKeyExECDHEECDSA",
	"java.lang.Object",
	nullptr,
	_SSLKeyExchange$SSLKeyExECDHEECDSA_FieldInfo_,
	_SSLKeyExchange$SSLKeyExECDHEECDSA_MethodInfo_,
	nullptr,
	nullptr,
	_SSLKeyExchange$SSLKeyExECDHEECDSA_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.SSLKeyExchange"
};

$Object* allocate$SSLKeyExchange$SSLKeyExECDHEECDSA($Class* clazz) {
	return $of($alloc(SSLKeyExchange$SSLKeyExECDHEECDSA));
}

$SSLKeyExchange* SSLKeyExchange$SSLKeyExECDHEECDSA::KE = nullptr;

void SSLKeyExchange$SSLKeyExECDHEECDSA::init$() {
}

void clinit$SSLKeyExchange$SSLKeyExECDHEECDSA($Class* class$) {
	$init($X509Authentication);
	$init($SSLKeyExchange$T12KeyAgreement);
	$assignStatic(SSLKeyExchange$SSLKeyExECDHEECDSA::KE, $new($SSLKeyExchange, $($List::of($X509Authentication::EC, $X509Authentication::EDDSA)), $SSLKeyExchange$T12KeyAgreement::ECDHE));
}

SSLKeyExchange$SSLKeyExECDHEECDSA::SSLKeyExchange$SSLKeyExECDHEECDSA() {
}

$Class* SSLKeyExchange$SSLKeyExECDHEECDSA::load$($String* name, bool initialize) {
	$loadClass(SSLKeyExchange$SSLKeyExECDHEECDSA, name, initialize, &_SSLKeyExchange$SSLKeyExECDHEECDSA_ClassInfo_, clinit$SSLKeyExchange$SSLKeyExECDHEECDSA, allocate$SSLKeyExchange$SSLKeyExECDHEECDSA);
	return class$;
}

$Class* SSLKeyExchange$SSLKeyExECDHEECDSA::class$ = nullptr;

		} // ssl
	} // security
} // sun