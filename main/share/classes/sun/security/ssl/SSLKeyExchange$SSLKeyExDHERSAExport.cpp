#include <sun/security/ssl/SSLKeyExchange$SSLKeyExDHERSAExport.h>

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

#undef DHE_EXPORT
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

$FieldInfo _SSLKeyExchange$SSLKeyExDHERSAExport_FieldInfo_[] = {
	{"KE", "Lsun/security/ssl/SSLKeyExchange;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SSLKeyExchange$SSLKeyExDHERSAExport, KE)},
	{}
};

$MethodInfo _SSLKeyExchange$SSLKeyExDHERSAExport_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(SSLKeyExchange$SSLKeyExDHERSAExport::*)()>(&SSLKeyExchange$SSLKeyExDHERSAExport::init$))},
	{}
};

$InnerClassInfo _SSLKeyExchange$SSLKeyExDHERSAExport_InnerClassesInfo_[] = {
	{"sun.security.ssl.SSLKeyExchange$SSLKeyExDHERSAExport", "sun.security.ssl.SSLKeyExchange", "SSLKeyExDHERSAExport", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _SSLKeyExchange$SSLKeyExDHERSAExport_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.ssl.SSLKeyExchange$SSLKeyExDHERSAExport",
	"java.lang.Object",
	nullptr,
	_SSLKeyExchange$SSLKeyExDHERSAExport_FieldInfo_,
	_SSLKeyExchange$SSLKeyExDHERSAExport_MethodInfo_,
	nullptr,
	nullptr,
	_SSLKeyExchange$SSLKeyExDHERSAExport_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.SSLKeyExchange"
};

$Object* allocate$SSLKeyExchange$SSLKeyExDHERSAExport($Class* clazz) {
	return $of($alloc(SSLKeyExchange$SSLKeyExDHERSAExport));
}

$SSLKeyExchange* SSLKeyExchange$SSLKeyExDHERSAExport::KE = nullptr;

void SSLKeyExchange$SSLKeyExDHERSAExport::init$() {
}

void clinit$SSLKeyExchange$SSLKeyExDHERSAExport($Class* class$) {
	$init($X509Authentication);
	$init($SSLKeyExchange$T12KeyAgreement);
	$assignStatic(SSLKeyExchange$SSLKeyExDHERSAExport::KE, $new($SSLKeyExchange, $($List::of($of($X509Authentication::RSA))), $SSLKeyExchange$T12KeyAgreement::DHE_EXPORT));
}

SSLKeyExchange$SSLKeyExDHERSAExport::SSLKeyExchange$SSLKeyExDHERSAExport() {
}

$Class* SSLKeyExchange$SSLKeyExDHERSAExport::load$($String* name, bool initialize) {
	$loadClass(SSLKeyExchange$SSLKeyExDHERSAExport, name, initialize, &_SSLKeyExchange$SSLKeyExDHERSAExport_ClassInfo_, clinit$SSLKeyExchange$SSLKeyExDHERSAExport, allocate$SSLKeyExchange$SSLKeyExDHERSAExport);
	return class$;
}

$Class* SSLKeyExchange$SSLKeyExDHERSAExport::class$ = nullptr;

		} // ssl
	} // security
} // sun