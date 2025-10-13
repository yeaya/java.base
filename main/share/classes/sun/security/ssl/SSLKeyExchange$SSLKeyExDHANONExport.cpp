#include <sun/security/ssl/SSLKeyExchange$SSLKeyExDHANONExport.h>

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
#include <jcpp.h>

#undef DHE_EXPORT
#undef KE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $SSLKeyAgreement = ::sun::security::ssl::SSLKeyAgreement;
using $SSLKeyExchange = ::sun::security::ssl::SSLKeyExchange;
using $SSLKeyExchange$T12KeyAgreement = ::sun::security::ssl::SSLKeyExchange$T12KeyAgreement;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _SSLKeyExchange$SSLKeyExDHANONExport_FieldInfo_[] = {
	{"KE", "Lsun/security/ssl/SSLKeyExchange;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SSLKeyExchange$SSLKeyExDHANONExport, KE)},
	{}
};

$MethodInfo _SSLKeyExchange$SSLKeyExDHANONExport_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(SSLKeyExchange$SSLKeyExDHANONExport::*)()>(&SSLKeyExchange$SSLKeyExDHANONExport::init$))},
	{}
};

$InnerClassInfo _SSLKeyExchange$SSLKeyExDHANONExport_InnerClassesInfo_[] = {
	{"sun.security.ssl.SSLKeyExchange$SSLKeyExDHANONExport", "sun.security.ssl.SSLKeyExchange", "SSLKeyExDHANONExport", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _SSLKeyExchange$SSLKeyExDHANONExport_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.ssl.SSLKeyExchange$SSLKeyExDHANONExport",
	"java.lang.Object",
	nullptr,
	_SSLKeyExchange$SSLKeyExDHANONExport_FieldInfo_,
	_SSLKeyExchange$SSLKeyExDHANONExport_MethodInfo_,
	nullptr,
	nullptr,
	_SSLKeyExchange$SSLKeyExDHANONExport_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.SSLKeyExchange"
};

$Object* allocate$SSLKeyExchange$SSLKeyExDHANONExport($Class* clazz) {
	return $of($alloc(SSLKeyExchange$SSLKeyExDHANONExport));
}

$SSLKeyExchange* SSLKeyExchange$SSLKeyExDHANONExport::KE = nullptr;

void SSLKeyExchange$SSLKeyExDHANONExport::init$() {
}

void clinit$SSLKeyExchange$SSLKeyExDHANONExport($Class* class$) {
	$init($SSLKeyExchange$T12KeyAgreement);
	$assignStatic(SSLKeyExchange$SSLKeyExDHANONExport::KE, $new($SSLKeyExchange, nullptr, $SSLKeyExchange$T12KeyAgreement::DHE_EXPORT));
}

SSLKeyExchange$SSLKeyExDHANONExport::SSLKeyExchange$SSLKeyExDHANONExport() {
}

$Class* SSLKeyExchange$SSLKeyExDHANONExport::load$($String* name, bool initialize) {
	$loadClass(SSLKeyExchange$SSLKeyExDHANONExport, name, initialize, &_SSLKeyExchange$SSLKeyExDHANONExport_ClassInfo_, clinit$SSLKeyExchange$SSLKeyExDHANONExport, allocate$SSLKeyExchange$SSLKeyExDHANONExport);
	return class$;
}

$Class* SSLKeyExchange$SSLKeyExDHANONExport::class$ = nullptr;

		} // ssl
	} // security
} // sun