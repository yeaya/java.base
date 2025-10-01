#include <sun/security/ssl/SSLKeyExchange$SSLKeyExDHEDSSExport.h>

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

#undef DSA
#undef KE
#undef DHE_EXPORT

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

$FieldInfo _SSLKeyExchange$SSLKeyExDHEDSSExport_FieldInfo_[] = {
	{"KE", "Lsun/security/ssl/SSLKeyExchange;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SSLKeyExchange$SSLKeyExDHEDSSExport, KE)},
	{}
};

$MethodInfo _SSLKeyExchange$SSLKeyExDHEDSSExport_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(SSLKeyExchange$SSLKeyExDHEDSSExport::*)()>(&SSLKeyExchange$SSLKeyExDHEDSSExport::init$))},
	{}
};

$InnerClassInfo _SSLKeyExchange$SSLKeyExDHEDSSExport_InnerClassesInfo_[] = {
	{"sun.security.ssl.SSLKeyExchange$SSLKeyExDHEDSSExport", "sun.security.ssl.SSLKeyExchange", "SSLKeyExDHEDSSExport", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _SSLKeyExchange$SSLKeyExDHEDSSExport_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.ssl.SSLKeyExchange$SSLKeyExDHEDSSExport",
	"java.lang.Object",
	nullptr,
	_SSLKeyExchange$SSLKeyExDHEDSSExport_FieldInfo_,
	_SSLKeyExchange$SSLKeyExDHEDSSExport_MethodInfo_,
	nullptr,
	nullptr,
	_SSLKeyExchange$SSLKeyExDHEDSSExport_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.SSLKeyExchange"
};

$Object* allocate$SSLKeyExchange$SSLKeyExDHEDSSExport($Class* clazz) {
	return $of($alloc(SSLKeyExchange$SSLKeyExDHEDSSExport));
}

$SSLKeyExchange* SSLKeyExchange$SSLKeyExDHEDSSExport::KE = nullptr;

void SSLKeyExchange$SSLKeyExDHEDSSExport::init$() {
}

void clinit$SSLKeyExchange$SSLKeyExDHEDSSExport($Class* class$) {
	$init($X509Authentication);
	$init($SSLKeyExchange$T12KeyAgreement);
	$assignStatic(SSLKeyExchange$SSLKeyExDHEDSSExport::KE, $new($SSLKeyExchange, $($List::of($of($X509Authentication::DSA))), $SSLKeyExchange$T12KeyAgreement::DHE_EXPORT));
}

SSLKeyExchange$SSLKeyExDHEDSSExport::SSLKeyExchange$SSLKeyExDHEDSSExport() {
}

$Class* SSLKeyExchange$SSLKeyExDHEDSSExport::load$($String* name, bool initialize) {
	$loadClass(SSLKeyExchange$SSLKeyExDHEDSSExport, name, initialize, &_SSLKeyExchange$SSLKeyExDHEDSSExport_ClassInfo_, clinit$SSLKeyExchange$SSLKeyExDHEDSSExport, allocate$SSLKeyExchange$SSLKeyExDHEDSSExport);
	return class$;
}

$Class* SSLKeyExchange$SSLKeyExDHEDSSExport::class$ = nullptr;

		} // ssl
	} // security
} // sun