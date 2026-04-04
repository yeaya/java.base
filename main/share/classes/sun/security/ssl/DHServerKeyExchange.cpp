#include <sun/security/ssl/DHServerKeyExchange.h>
#include <sun/security/ssl/DHServerKeyExchange$DHServerKeyExchangeConsumer.h>
#include <sun/security/ssl/DHServerKeyExchange$DHServerKeyExchangeProducer.h>
#include <sun/security/ssl/HandshakeProducer.h>
#include <sun/security/ssl/SSLConsumer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DHServerKeyExchange$DHServerKeyExchangeConsumer = ::sun::security::ssl::DHServerKeyExchange$DHServerKeyExchangeConsumer;
using $DHServerKeyExchange$DHServerKeyExchangeProducer = ::sun::security::ssl::DHServerKeyExchange$DHServerKeyExchangeProducer;
using $HandshakeProducer = ::sun::security::ssl::HandshakeProducer;
using $SSLConsumer = ::sun::security::ssl::SSLConsumer;

namespace sun {
	namespace security {
		namespace ssl {

$SSLConsumer* DHServerKeyExchange::dhHandshakeConsumer = nullptr;
$HandshakeProducer* DHServerKeyExchange::dhHandshakeProducer = nullptr;

void DHServerKeyExchange::init$() {
}

void DHServerKeyExchange::clinit$($Class* clazz) {
	$assignStatic(DHServerKeyExchange::dhHandshakeConsumer, $new($DHServerKeyExchange$DHServerKeyExchangeConsumer));
	$assignStatic(DHServerKeyExchange::dhHandshakeProducer, $new($DHServerKeyExchange$DHServerKeyExchangeProducer));
}

DHServerKeyExchange::DHServerKeyExchange() {
}

$Class* DHServerKeyExchange::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"dhHandshakeConsumer", "Lsun/security/ssl/SSLConsumer;", nullptr, $STATIC | $FINAL, $staticField(DHServerKeyExchange, dhHandshakeConsumer)},
		{"dhHandshakeProducer", "Lsun/security/ssl/HandshakeProducer;", nullptr, $STATIC | $FINAL, $staticField(DHServerKeyExchange, dhHandshakeProducer)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(DHServerKeyExchange, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.DHServerKeyExchange$DHServerKeyExchangeConsumer", "sun.security.ssl.DHServerKeyExchange", "DHServerKeyExchangeConsumer", $STATIC | $FINAL},
		{"sun.security.ssl.DHServerKeyExchange$DHServerKeyExchangeProducer", "sun.security.ssl.DHServerKeyExchange", "DHServerKeyExchangeProducer", $STATIC | $FINAL},
		{"sun.security.ssl.DHServerKeyExchange$DHServerKeyExchangeMessage", "sun.security.ssl.DHServerKeyExchange", "DHServerKeyExchangeMessage", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.DHServerKeyExchange",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.security.ssl.DHServerKeyExchange$DHServerKeyExchangeConsumer,sun.security.ssl.DHServerKeyExchange$DHServerKeyExchangeProducer,sun.security.ssl.DHServerKeyExchange$DHServerKeyExchangeMessage"
	};
	$loadClass(DHServerKeyExchange, name, initialize, &classInfo$$, DHServerKeyExchange::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(DHServerKeyExchange);
	});
	return class$;
}

$Class* DHServerKeyExchange::class$ = nullptr;

		} // ssl
	} // security
} // sun