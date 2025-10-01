#include <sun/security/ssl/SSLKeyExchange$SSLKeyExDHANON.h>

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

#undef DHE
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

$FieldInfo _SSLKeyExchange$SSLKeyExDHANON_FieldInfo_[] = {
	{"KE", "Lsun/security/ssl/SSLKeyExchange;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SSLKeyExchange$SSLKeyExDHANON, KE)},
	{}
};

$MethodInfo _SSLKeyExchange$SSLKeyExDHANON_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(SSLKeyExchange$SSLKeyExDHANON::*)()>(&SSLKeyExchange$SSLKeyExDHANON::init$))},
	{}
};

$InnerClassInfo _SSLKeyExchange$SSLKeyExDHANON_InnerClassesInfo_[] = {
	{"sun.security.ssl.SSLKeyExchange$SSLKeyExDHANON", "sun.security.ssl.SSLKeyExchange", "SSLKeyExDHANON", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _SSLKeyExchange$SSLKeyExDHANON_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.ssl.SSLKeyExchange$SSLKeyExDHANON",
	"java.lang.Object",
	nullptr,
	_SSLKeyExchange$SSLKeyExDHANON_FieldInfo_,
	_SSLKeyExchange$SSLKeyExDHANON_MethodInfo_,
	nullptr,
	nullptr,
	_SSLKeyExchange$SSLKeyExDHANON_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.SSLKeyExchange"
};

$Object* allocate$SSLKeyExchange$SSLKeyExDHANON($Class* clazz) {
	return $of($alloc(SSLKeyExchange$SSLKeyExDHANON));
}

$SSLKeyExchange* SSLKeyExchange$SSLKeyExDHANON::KE = nullptr;

void SSLKeyExchange$SSLKeyExDHANON::init$() {
}

void clinit$SSLKeyExchange$SSLKeyExDHANON($Class* class$) {
	$init($SSLKeyExchange$T12KeyAgreement);
	$assignStatic(SSLKeyExchange$SSLKeyExDHANON::KE, $new($SSLKeyExchange, nullptr, $SSLKeyExchange$T12KeyAgreement::DHE));
}

SSLKeyExchange$SSLKeyExDHANON::SSLKeyExchange$SSLKeyExDHANON() {
}

$Class* SSLKeyExchange$SSLKeyExDHANON::load$($String* name, bool initialize) {
	$loadClass(SSLKeyExchange$SSLKeyExDHANON, name, initialize, &_SSLKeyExchange$SSLKeyExDHANON_ClassInfo_, clinit$SSLKeyExchange$SSLKeyExDHANON, allocate$SSLKeyExchange$SSLKeyExDHANON);
	return class$;
}

$Class* SSLKeyExchange$SSLKeyExDHANON::class$ = nullptr;

		} // ssl
	} // security
} // sun