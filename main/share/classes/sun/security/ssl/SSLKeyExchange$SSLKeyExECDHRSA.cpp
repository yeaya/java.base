#include <sun/security/ssl/SSLKeyExchange$SSLKeyExECDHRSA.h>

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

$FieldInfo _SSLKeyExchange$SSLKeyExECDHRSA_FieldInfo_[] = {
	{"KE", "Lsun/security/ssl/SSLKeyExchange;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SSLKeyExchange$SSLKeyExECDHRSA, KE)},
	{}
};

$MethodInfo _SSLKeyExchange$SSLKeyExECDHRSA_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(SSLKeyExchange$SSLKeyExECDHRSA::*)()>(&SSLKeyExchange$SSLKeyExECDHRSA::init$))},
	{}
};

$InnerClassInfo _SSLKeyExchange$SSLKeyExECDHRSA_InnerClassesInfo_[] = {
	{"sun.security.ssl.SSLKeyExchange$SSLKeyExECDHRSA", "sun.security.ssl.SSLKeyExchange", "SSLKeyExECDHRSA", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _SSLKeyExchange$SSLKeyExECDHRSA_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.ssl.SSLKeyExchange$SSLKeyExECDHRSA",
	"java.lang.Object",
	nullptr,
	_SSLKeyExchange$SSLKeyExECDHRSA_FieldInfo_,
	_SSLKeyExchange$SSLKeyExECDHRSA_MethodInfo_,
	nullptr,
	nullptr,
	_SSLKeyExchange$SSLKeyExECDHRSA_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.SSLKeyExchange"
};

$Object* allocate$SSLKeyExchange$SSLKeyExECDHRSA($Class* clazz) {
	return $of($alloc(SSLKeyExchange$SSLKeyExECDHRSA));
}

$SSLKeyExchange* SSLKeyExchange$SSLKeyExECDHRSA::KE = nullptr;

void SSLKeyExchange$SSLKeyExECDHRSA::init$() {
}

void clinit$SSLKeyExchange$SSLKeyExECDHRSA($Class* class$) {
	$init($X509Authentication);
	$init($SSLKeyExchange$T12KeyAgreement);
	$assignStatic(SSLKeyExchange$SSLKeyExECDHRSA::KE, $new($SSLKeyExchange, $($List::of($of($X509Authentication::EC))), $SSLKeyExchange$T12KeyAgreement::ECDH));
}

SSLKeyExchange$SSLKeyExECDHRSA::SSLKeyExchange$SSLKeyExECDHRSA() {
}

$Class* SSLKeyExchange$SSLKeyExECDHRSA::load$($String* name, bool initialize) {
	$loadClass(SSLKeyExchange$SSLKeyExECDHRSA, name, initialize, &_SSLKeyExchange$SSLKeyExECDHRSA_ClassInfo_, clinit$SSLKeyExchange$SSLKeyExECDHRSA, allocate$SSLKeyExchange$SSLKeyExECDHRSA);
	return class$;
}

$Class* SSLKeyExchange$SSLKeyExECDHRSA::class$ = nullptr;

		} // ssl
	} // security
} // sun