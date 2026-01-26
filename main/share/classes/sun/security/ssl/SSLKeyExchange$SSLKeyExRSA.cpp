#include <sun/security/ssl/SSLKeyExchange$SSLKeyExRSA.h>

#include <java/util/List.h>
#include <sun/security/ssl/SSLKeyAgreement.h>
#include <sun/security/ssl/SSLKeyExchange$T12KeyAgreement.h>
#include <sun/security/ssl/SSLKeyExchange.h>
#include <sun/security/ssl/X509Authentication.h>
#include <jcpp.h>

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

$FieldInfo _SSLKeyExchange$SSLKeyExRSA_FieldInfo_[] = {
	{"KE", "Lsun/security/ssl/SSLKeyExchange;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SSLKeyExchange$SSLKeyExRSA, KE)},
	{}
};

$MethodInfo _SSLKeyExchange$SSLKeyExRSA_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(SSLKeyExchange$SSLKeyExRSA, init$, void)},
	{}
};

$InnerClassInfo _SSLKeyExchange$SSLKeyExRSA_InnerClassesInfo_[] = {
	{"sun.security.ssl.SSLKeyExchange$SSLKeyExRSA", "sun.security.ssl.SSLKeyExchange", "SSLKeyExRSA", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _SSLKeyExchange$SSLKeyExRSA_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.ssl.SSLKeyExchange$SSLKeyExRSA",
	"java.lang.Object",
	nullptr,
	_SSLKeyExchange$SSLKeyExRSA_FieldInfo_,
	_SSLKeyExchange$SSLKeyExRSA_MethodInfo_,
	nullptr,
	nullptr,
	_SSLKeyExchange$SSLKeyExRSA_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.SSLKeyExchange"
};

$Object* allocate$SSLKeyExchange$SSLKeyExRSA($Class* clazz) {
	return $of($alloc(SSLKeyExchange$SSLKeyExRSA));
}

$SSLKeyExchange* SSLKeyExchange$SSLKeyExRSA::KE = nullptr;

void SSLKeyExchange$SSLKeyExRSA::init$() {
}

void clinit$SSLKeyExchange$SSLKeyExRSA($Class* class$) {
	$init($X509Authentication);
	$init($SSLKeyExchange$T12KeyAgreement);
	$assignStatic(SSLKeyExchange$SSLKeyExRSA::KE, $new($SSLKeyExchange, $($List::of($of($X509Authentication::RSA))), $SSLKeyExchange$T12KeyAgreement::RSA));
}

SSLKeyExchange$SSLKeyExRSA::SSLKeyExchange$SSLKeyExRSA() {
}

$Class* SSLKeyExchange$SSLKeyExRSA::load$($String* name, bool initialize) {
	$loadClass(SSLKeyExchange$SSLKeyExRSA, name, initialize, &_SSLKeyExchange$SSLKeyExRSA_ClassInfo_, clinit$SSLKeyExchange$SSLKeyExRSA, allocate$SSLKeyExchange$SSLKeyExRSA);
	return class$;
}

$Class* SSLKeyExchange$SSLKeyExRSA::class$ = nullptr;

		} // ssl
	} // security
} // sun