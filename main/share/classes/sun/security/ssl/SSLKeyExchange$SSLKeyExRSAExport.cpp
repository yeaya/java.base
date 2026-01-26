#include <sun/security/ssl/SSLKeyExchange$SSLKeyExRSAExport.h>

#include <java/util/List.h>
#include <sun/security/ssl/SSLKeyAgreement.h>
#include <sun/security/ssl/SSLKeyExchange$T12KeyAgreement.h>
#include <sun/security/ssl/SSLKeyExchange.h>
#include <sun/security/ssl/X509Authentication.h>
#include <jcpp.h>

#undef KE
#undef RSA
#undef RSA_EXPORT

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

$FieldInfo _SSLKeyExchange$SSLKeyExRSAExport_FieldInfo_[] = {
	{"KE", "Lsun/security/ssl/SSLKeyExchange;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SSLKeyExchange$SSLKeyExRSAExport, KE)},
	{}
};

$MethodInfo _SSLKeyExchange$SSLKeyExRSAExport_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(SSLKeyExchange$SSLKeyExRSAExport, init$, void)},
	{}
};

$InnerClassInfo _SSLKeyExchange$SSLKeyExRSAExport_InnerClassesInfo_[] = {
	{"sun.security.ssl.SSLKeyExchange$SSLKeyExRSAExport", "sun.security.ssl.SSLKeyExchange", "SSLKeyExRSAExport", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _SSLKeyExchange$SSLKeyExRSAExport_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.ssl.SSLKeyExchange$SSLKeyExRSAExport",
	"java.lang.Object",
	nullptr,
	_SSLKeyExchange$SSLKeyExRSAExport_FieldInfo_,
	_SSLKeyExchange$SSLKeyExRSAExport_MethodInfo_,
	nullptr,
	nullptr,
	_SSLKeyExchange$SSLKeyExRSAExport_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.SSLKeyExchange"
};

$Object* allocate$SSLKeyExchange$SSLKeyExRSAExport($Class* clazz) {
	return $of($alloc(SSLKeyExchange$SSLKeyExRSAExport));
}

$SSLKeyExchange* SSLKeyExchange$SSLKeyExRSAExport::KE = nullptr;

void SSLKeyExchange$SSLKeyExRSAExport::init$() {
}

void clinit$SSLKeyExchange$SSLKeyExRSAExport($Class* class$) {
	$init($X509Authentication);
	$init($SSLKeyExchange$T12KeyAgreement);
	$assignStatic(SSLKeyExchange$SSLKeyExRSAExport::KE, $new($SSLKeyExchange, $($List::of($of($X509Authentication::RSA))), $SSLKeyExchange$T12KeyAgreement::RSA_EXPORT));
}

SSLKeyExchange$SSLKeyExRSAExport::SSLKeyExchange$SSLKeyExRSAExport() {
}

$Class* SSLKeyExchange$SSLKeyExRSAExport::load$($String* name, bool initialize) {
	$loadClass(SSLKeyExchange$SSLKeyExRSAExport, name, initialize, &_SSLKeyExchange$SSLKeyExRSAExport_ClassInfo_, clinit$SSLKeyExchange$SSLKeyExRSAExport, allocate$SSLKeyExchange$SSLKeyExRSAExport);
	return class$;
}

$Class* SSLKeyExchange$SSLKeyExRSAExport::class$ = nullptr;

		} // ssl
	} // security
} // sun