#include <sun/security/ssl/SSLKeyExchange$SSLKeyExECDHANON.h>

#include <java/util/List.h>
#include <sun/security/ssl/SSLKeyAgreement.h>
#include <sun/security/ssl/SSLKeyExchange$T12KeyAgreement.h>
#include <sun/security/ssl/SSLKeyExchange.h>
#include <jcpp.h>

#undef ECDHE
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

$FieldInfo _SSLKeyExchange$SSLKeyExECDHANON_FieldInfo_[] = {
	{"KE", "Lsun/security/ssl/SSLKeyExchange;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SSLKeyExchange$SSLKeyExECDHANON, KE)},
	{}
};

$MethodInfo _SSLKeyExchange$SSLKeyExECDHANON_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(SSLKeyExchange$SSLKeyExECDHANON::*)()>(&SSLKeyExchange$SSLKeyExECDHANON::init$))},
	{}
};

$InnerClassInfo _SSLKeyExchange$SSLKeyExECDHANON_InnerClassesInfo_[] = {
	{"sun.security.ssl.SSLKeyExchange$SSLKeyExECDHANON", "sun.security.ssl.SSLKeyExchange", "SSLKeyExECDHANON", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _SSLKeyExchange$SSLKeyExECDHANON_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.ssl.SSLKeyExchange$SSLKeyExECDHANON",
	"java.lang.Object",
	nullptr,
	_SSLKeyExchange$SSLKeyExECDHANON_FieldInfo_,
	_SSLKeyExchange$SSLKeyExECDHANON_MethodInfo_,
	nullptr,
	nullptr,
	_SSLKeyExchange$SSLKeyExECDHANON_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.SSLKeyExchange"
};

$Object* allocate$SSLKeyExchange$SSLKeyExECDHANON($Class* clazz) {
	return $of($alloc(SSLKeyExchange$SSLKeyExECDHANON));
}

$SSLKeyExchange* SSLKeyExchange$SSLKeyExECDHANON::KE = nullptr;

void SSLKeyExchange$SSLKeyExECDHANON::init$() {
}

void clinit$SSLKeyExchange$SSLKeyExECDHANON($Class* class$) {
	$init($SSLKeyExchange$T12KeyAgreement);
	$assignStatic(SSLKeyExchange$SSLKeyExECDHANON::KE, $new($SSLKeyExchange, nullptr, $SSLKeyExchange$T12KeyAgreement::ECDHE));
}

SSLKeyExchange$SSLKeyExECDHANON::SSLKeyExchange$SSLKeyExECDHANON() {
}

$Class* SSLKeyExchange$SSLKeyExECDHANON::load$($String* name, bool initialize) {
	$loadClass(SSLKeyExchange$SSLKeyExECDHANON, name, initialize, &_SSLKeyExchange$SSLKeyExECDHANON_ClassInfo_, clinit$SSLKeyExchange$SSLKeyExECDHANON, allocate$SSLKeyExchange$SSLKeyExECDHANON);
	return class$;
}

$Class* SSLKeyExchange$SSLKeyExECDHANON::class$ = nullptr;

		} // ssl
	} // security
} // sun