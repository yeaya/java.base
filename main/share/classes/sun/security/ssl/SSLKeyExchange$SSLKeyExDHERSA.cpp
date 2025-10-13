#include <sun/security/ssl/SSLKeyExchange$SSLKeyExDHERSA.h>

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

#undef DHE
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

$FieldInfo _SSLKeyExchange$SSLKeyExDHERSA_FieldInfo_[] = {
	{"KE", "Lsun/security/ssl/SSLKeyExchange;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SSLKeyExchange$SSLKeyExDHERSA, KE)},
	{}
};

$MethodInfo _SSLKeyExchange$SSLKeyExDHERSA_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(SSLKeyExchange$SSLKeyExDHERSA::*)()>(&SSLKeyExchange$SSLKeyExDHERSA::init$))},
	{}
};

$InnerClassInfo _SSLKeyExchange$SSLKeyExDHERSA_InnerClassesInfo_[] = {
	{"sun.security.ssl.SSLKeyExchange$SSLKeyExDHERSA", "sun.security.ssl.SSLKeyExchange", "SSLKeyExDHERSA", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _SSLKeyExchange$SSLKeyExDHERSA_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.ssl.SSLKeyExchange$SSLKeyExDHERSA",
	"java.lang.Object",
	nullptr,
	_SSLKeyExchange$SSLKeyExDHERSA_FieldInfo_,
	_SSLKeyExchange$SSLKeyExDHERSA_MethodInfo_,
	nullptr,
	nullptr,
	_SSLKeyExchange$SSLKeyExDHERSA_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.SSLKeyExchange"
};

$Object* allocate$SSLKeyExchange$SSLKeyExDHERSA($Class* clazz) {
	return $of($alloc(SSLKeyExchange$SSLKeyExDHERSA));
}

$SSLKeyExchange* SSLKeyExchange$SSLKeyExDHERSA::KE = nullptr;

void SSLKeyExchange$SSLKeyExDHERSA::init$() {
}

void clinit$SSLKeyExchange$SSLKeyExDHERSA($Class* class$) {
	$init($X509Authentication);
	$init($SSLKeyExchange$T12KeyAgreement);
	$assignStatic(SSLKeyExchange$SSLKeyExDHERSA::KE, $new($SSLKeyExchange, $($List::of($of($X509Authentication::RSA))), $SSLKeyExchange$T12KeyAgreement::DHE));
}

SSLKeyExchange$SSLKeyExDHERSA::SSLKeyExchange$SSLKeyExDHERSA() {
}

$Class* SSLKeyExchange$SSLKeyExDHERSA::load$($String* name, bool initialize) {
	$loadClass(SSLKeyExchange$SSLKeyExDHERSA, name, initialize, &_SSLKeyExchange$SSLKeyExDHERSA_ClassInfo_, clinit$SSLKeyExchange$SSLKeyExDHERSA, allocate$SSLKeyExchange$SSLKeyExDHERSA);
	return class$;
}

$Class* SSLKeyExchange$SSLKeyExDHERSA::class$ = nullptr;

		} // ssl
	} // security
} // sun