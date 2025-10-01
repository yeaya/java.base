#include <sun/security/ssl/XDHKeyExchange.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/security/ssl/SSLKeyAgreementGenerator.h>
#include <sun/security/ssl/XDHKeyExchange$XDHEKAGenerator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SSLKeyAgreementGenerator = ::sun::security::ssl::SSLKeyAgreementGenerator;
using $XDHKeyExchange$XDHEKAGenerator = ::sun::security::ssl::XDHKeyExchange$XDHEKAGenerator;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _XDHKeyExchange_FieldInfo_[] = {
	{"xdheKAGenerator", "Lsun/security/ssl/SSLKeyAgreementGenerator;", nullptr, $STATIC | $FINAL, $staticField(XDHKeyExchange, xdheKAGenerator)},
	{}
};

$MethodInfo _XDHKeyExchange_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(XDHKeyExchange::*)()>(&XDHKeyExchange::init$))},
	{}
};

$InnerClassInfo _XDHKeyExchange_InnerClassesInfo_[] = {
	{"sun.security.ssl.XDHKeyExchange$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"sun.security.ssl.XDHKeyExchange$XDHEKAGenerator", "sun.security.ssl.XDHKeyExchange", "XDHEKAGenerator", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.XDHKeyExchange$XDHEPossession", "sun.security.ssl.XDHKeyExchange", "XDHEPossession", $STATIC | $FINAL},
	{"sun.security.ssl.XDHKeyExchange$XDHECredentials", "sun.security.ssl.XDHKeyExchange", "XDHECredentials", $STATIC | $FINAL},
	{}
};

$ClassInfo _XDHKeyExchange_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.XDHKeyExchange",
	"java.lang.Object",
	nullptr,
	_XDHKeyExchange_FieldInfo_,
	_XDHKeyExchange_MethodInfo_,
	nullptr,
	nullptr,
	_XDHKeyExchange_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.security.ssl.XDHKeyExchange$1,sun.security.ssl.XDHKeyExchange$XDHEKAGenerator,sun.security.ssl.XDHKeyExchange$XDHEPossession,sun.security.ssl.XDHKeyExchange$XDHECredentials"
};

$Object* allocate$XDHKeyExchange($Class* clazz) {
	return $of($alloc(XDHKeyExchange));
}

$SSLKeyAgreementGenerator* XDHKeyExchange::xdheKAGenerator = nullptr;

void XDHKeyExchange::init$() {
}

void clinit$XDHKeyExchange($Class* class$) {
	$assignStatic(XDHKeyExchange::xdheKAGenerator, $new($XDHKeyExchange$XDHEKAGenerator));
}

XDHKeyExchange::XDHKeyExchange() {
}

$Class* XDHKeyExchange::load$($String* name, bool initialize) {
	$loadClass(XDHKeyExchange, name, initialize, &_XDHKeyExchange_ClassInfo_, clinit$XDHKeyExchange, allocate$XDHKeyExchange);
	return class$;
}

$Class* XDHKeyExchange::class$ = nullptr;

		} // ssl
	} // security
} // sun