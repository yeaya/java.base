#include <sun/security/ssl/CookieExtension.h>
#include <sun/security/ssl/CookieExtension$CHCookieConsumer.h>
#include <sun/security/ssl/CookieExtension$CHCookieProducer.h>
#include <sun/security/ssl/CookieExtension$CHCookieUpdate.h>
#include <sun/security/ssl/CookieExtension$CookieStringizer.h>
#include <sun/security/ssl/CookieExtension$HRRCookieConsumer.h>
#include <sun/security/ssl/CookieExtension$HRRCookieProducer.h>
#include <sun/security/ssl/CookieExtension$HRRCookieReproducer.h>
#include <sun/security/ssl/HandshakeConsumer.h>
#include <sun/security/ssl/HandshakeProducer.h>
#include <sun/security/ssl/SSLExtension$ExtensionConsumer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CookieExtension$CHCookieConsumer = ::sun::security::ssl::CookieExtension$CHCookieConsumer;
using $CookieExtension$CHCookieProducer = ::sun::security::ssl::CookieExtension$CHCookieProducer;
using $CookieExtension$CHCookieUpdate = ::sun::security::ssl::CookieExtension$CHCookieUpdate;
using $CookieExtension$CookieStringizer = ::sun::security::ssl::CookieExtension$CookieStringizer;
using $CookieExtension$HRRCookieConsumer = ::sun::security::ssl::CookieExtension$HRRCookieConsumer;
using $CookieExtension$HRRCookieProducer = ::sun::security::ssl::CookieExtension$HRRCookieProducer;
using $CookieExtension$HRRCookieReproducer = ::sun::security::ssl::CookieExtension$HRRCookieReproducer;
using $HandshakeConsumer = ::sun::security::ssl::HandshakeConsumer;
using $HandshakeProducer = ::sun::security::ssl::HandshakeProducer;
using $SSLExtension$ExtensionConsumer = ::sun::security::ssl::SSLExtension$ExtensionConsumer;

namespace sun {
	namespace security {
		namespace ssl {

$HandshakeProducer* CookieExtension::chNetworkProducer = nullptr;
$SSLExtension$ExtensionConsumer* CookieExtension::chOnLoadConsumer = nullptr;
$HandshakeConsumer* CookieExtension::chOnTradeConsumer = nullptr;
$HandshakeProducer* CookieExtension::hrrNetworkProducer = nullptr;
$SSLExtension$ExtensionConsumer* CookieExtension::hrrOnLoadConsumer = nullptr;
$HandshakeProducer* CookieExtension::hrrNetworkReproducer = nullptr;
$CookieExtension$CookieStringizer* CookieExtension::cookieStringizer = nullptr;

void CookieExtension::init$() {
}

void CookieExtension::clinit$($Class* clazz) {
	$assignStatic(CookieExtension::chNetworkProducer, $new($CookieExtension$CHCookieProducer));
	$assignStatic(CookieExtension::chOnLoadConsumer, $new($CookieExtension$CHCookieConsumer));
	$assignStatic(CookieExtension::chOnTradeConsumer, $new($CookieExtension$CHCookieUpdate));
	$assignStatic(CookieExtension::hrrNetworkProducer, $new($CookieExtension$HRRCookieProducer));
	$assignStatic(CookieExtension::hrrOnLoadConsumer, $new($CookieExtension$HRRCookieConsumer));
	$assignStatic(CookieExtension::hrrNetworkReproducer, $new($CookieExtension$HRRCookieReproducer));
	$assignStatic(CookieExtension::cookieStringizer, $new($CookieExtension$CookieStringizer));
}

CookieExtension::CookieExtension() {
}

$Class* CookieExtension::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"chNetworkProducer", "Lsun/security/ssl/HandshakeProducer;", nullptr, $STATIC | $FINAL, $staticField(CookieExtension, chNetworkProducer)},
		{"chOnLoadConsumer", "Lsun/security/ssl/SSLExtension$ExtensionConsumer;", nullptr, $STATIC | $FINAL, $staticField(CookieExtension, chOnLoadConsumer)},
		{"chOnTradeConsumer", "Lsun/security/ssl/HandshakeConsumer;", nullptr, $STATIC | $FINAL, $staticField(CookieExtension, chOnTradeConsumer)},
		{"hrrNetworkProducer", "Lsun/security/ssl/HandshakeProducer;", nullptr, $STATIC | $FINAL, $staticField(CookieExtension, hrrNetworkProducer)},
		{"hrrOnLoadConsumer", "Lsun/security/ssl/SSLExtension$ExtensionConsumer;", nullptr, $STATIC | $FINAL, $staticField(CookieExtension, hrrOnLoadConsumer)},
		{"hrrNetworkReproducer", "Lsun/security/ssl/HandshakeProducer;", nullptr, $STATIC | $FINAL, $staticField(CookieExtension, hrrNetworkReproducer)},
		{"cookieStringizer", "Lsun/security/ssl/CookieExtension$CookieStringizer;", nullptr, $STATIC | $FINAL, $staticField(CookieExtension, cookieStringizer)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CookieExtension, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.CookieExtension$HRRCookieReproducer", "sun.security.ssl.CookieExtension", "HRRCookieReproducer", $PRIVATE | $STATIC | $FINAL},
		{"sun.security.ssl.CookieExtension$HRRCookieConsumer", "sun.security.ssl.CookieExtension", "HRRCookieConsumer", $PRIVATE | $STATIC | $FINAL},
		{"sun.security.ssl.CookieExtension$HRRCookieProducer", "sun.security.ssl.CookieExtension", "HRRCookieProducer", $PRIVATE | $STATIC | $FINAL},
		{"sun.security.ssl.CookieExtension$CHCookieUpdate", "sun.security.ssl.CookieExtension", "CHCookieUpdate", $PRIVATE | $STATIC | $FINAL},
		{"sun.security.ssl.CookieExtension$CHCookieConsumer", "sun.security.ssl.CookieExtension", "CHCookieConsumer", $PRIVATE | $STATIC | $FINAL},
		{"sun.security.ssl.CookieExtension$CHCookieProducer", "sun.security.ssl.CookieExtension", "CHCookieProducer", $PRIVATE | $STATIC | $FINAL},
		{"sun.security.ssl.CookieExtension$CookieStringizer", "sun.security.ssl.CookieExtension", "CookieStringizer", $PRIVATE | $STATIC | $FINAL},
		{"sun.security.ssl.CookieExtension$CookieSpec", "sun.security.ssl.CookieExtension", "CookieSpec", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.security.ssl.CookieExtension",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.security.ssl.CookieExtension$HRRCookieReproducer,sun.security.ssl.CookieExtension$HRRCookieConsumer,sun.security.ssl.CookieExtension$HRRCookieProducer,sun.security.ssl.CookieExtension$CHCookieUpdate,sun.security.ssl.CookieExtension$CHCookieConsumer,sun.security.ssl.CookieExtension$CHCookieProducer,sun.security.ssl.CookieExtension$CookieStringizer,sun.security.ssl.CookieExtension$CookieSpec"
	};
	$loadClass(CookieExtension, name, initialize, &classInfo$$, CookieExtension::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(CookieExtension);
	});
	return class$;
}

$Class* CookieExtension::class$ = nullptr;

		} // ssl
	} // security
} // sun