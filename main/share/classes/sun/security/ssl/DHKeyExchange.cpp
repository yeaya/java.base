#include <sun/security/ssl/DHKeyExchange.h>

#include <sun/security/ssl/DHKeyExchange$DHEKAGenerator.h>
#include <sun/security/ssl/DHKeyExchange$DHEPossessionGenerator.h>
#include <sun/security/ssl/SSLKeyAgreementGenerator.h>
#include <sun/security/ssl/SSLPossessionGenerator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DHKeyExchange$DHEKAGenerator = ::sun::security::ssl::DHKeyExchange$DHEKAGenerator;
using $DHKeyExchange$DHEPossessionGenerator = ::sun::security::ssl::DHKeyExchange$DHEPossessionGenerator;
using $SSLKeyAgreementGenerator = ::sun::security::ssl::SSLKeyAgreementGenerator;
using $SSLPossessionGenerator = ::sun::security::ssl::SSLPossessionGenerator;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _DHKeyExchange_FieldInfo_[] = {
	{"poGenerator", "Lsun/security/ssl/SSLPossessionGenerator;", nullptr, $STATIC | $FINAL, $staticField(DHKeyExchange, poGenerator)},
	{"poExportableGenerator", "Lsun/security/ssl/SSLPossessionGenerator;", nullptr, $STATIC | $FINAL, $staticField(DHKeyExchange, poExportableGenerator)},
	{"kaGenerator", "Lsun/security/ssl/SSLKeyAgreementGenerator;", nullptr, $STATIC | $FINAL, $staticField(DHKeyExchange, kaGenerator)},
	{}
};

$MethodInfo _DHKeyExchange_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(DHKeyExchange, init$, void)},
	{}
};

$InnerClassInfo _DHKeyExchange_InnerClassesInfo_[] = {
	{"sun.security.ssl.DHKeyExchange$DHEKAGenerator", "sun.security.ssl.DHKeyExchange", "DHEKAGenerator", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.DHKeyExchange$DHEPossessionGenerator", "sun.security.ssl.DHKeyExchange", "DHEPossessionGenerator", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.DHKeyExchange$DHEPossession", "sun.security.ssl.DHKeyExchange", "DHEPossession", $STATIC | $FINAL},
	{"sun.security.ssl.DHKeyExchange$DHECredentials", "sun.security.ssl.DHKeyExchange", "DHECredentials", $STATIC | $FINAL},
	{}
};

$ClassInfo _DHKeyExchange_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.DHKeyExchange",
	"java.lang.Object",
	nullptr,
	_DHKeyExchange_FieldInfo_,
	_DHKeyExchange_MethodInfo_,
	nullptr,
	nullptr,
	_DHKeyExchange_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.security.ssl.DHKeyExchange$DHEKAGenerator,sun.security.ssl.DHKeyExchange$DHEPossessionGenerator,sun.security.ssl.DHKeyExchange$DHEPossession,sun.security.ssl.DHKeyExchange$DHECredentials"
};

$Object* allocate$DHKeyExchange($Class* clazz) {
	return $of($alloc(DHKeyExchange));
}

$SSLPossessionGenerator* DHKeyExchange::poGenerator = nullptr;
$SSLPossessionGenerator* DHKeyExchange::poExportableGenerator = nullptr;
$SSLKeyAgreementGenerator* DHKeyExchange::kaGenerator = nullptr;

void DHKeyExchange::init$() {
}

void clinit$DHKeyExchange($Class* class$) {
	$assignStatic(DHKeyExchange::poGenerator, $new($DHKeyExchange$DHEPossessionGenerator, false));
	$assignStatic(DHKeyExchange::poExportableGenerator, $new($DHKeyExchange$DHEPossessionGenerator, true));
	$assignStatic(DHKeyExchange::kaGenerator, $new($DHKeyExchange$DHEKAGenerator));
}

DHKeyExchange::DHKeyExchange() {
}

$Class* DHKeyExchange::load$($String* name, bool initialize) {
	$loadClass(DHKeyExchange, name, initialize, &_DHKeyExchange_ClassInfo_, clinit$DHKeyExchange, allocate$DHKeyExchange);
	return class$;
}

$Class* DHKeyExchange::class$ = nullptr;

		} // ssl
	} // security
} // sun