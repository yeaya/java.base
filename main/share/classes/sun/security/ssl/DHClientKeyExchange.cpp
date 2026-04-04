#include <sun/security/ssl/DHClientKeyExchange.h>
#include <sun/security/ssl/DHClientKeyExchange$DHClientKeyExchangeConsumer.h>
#include <sun/security/ssl/DHClientKeyExchange$DHClientKeyExchangeProducer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DHClientKeyExchange$DHClientKeyExchangeConsumer = ::sun::security::ssl::DHClientKeyExchange$DHClientKeyExchangeConsumer;
using $DHClientKeyExchange$DHClientKeyExchangeProducer = ::sun::security::ssl::DHClientKeyExchange$DHClientKeyExchangeProducer;

namespace sun {
	namespace security {
		namespace ssl {

$DHClientKeyExchange$DHClientKeyExchangeConsumer* DHClientKeyExchange::dhHandshakeConsumer = nullptr;
$DHClientKeyExchange$DHClientKeyExchangeProducer* DHClientKeyExchange::dhHandshakeProducer = nullptr;

void DHClientKeyExchange::init$() {
}

void DHClientKeyExchange::clinit$($Class* clazz) {
	$assignStatic(DHClientKeyExchange::dhHandshakeConsumer, $new($DHClientKeyExchange$DHClientKeyExchangeConsumer));
	$assignStatic(DHClientKeyExchange::dhHandshakeProducer, $new($DHClientKeyExchange$DHClientKeyExchangeProducer));
}

DHClientKeyExchange::DHClientKeyExchange() {
}

$Class* DHClientKeyExchange::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"dhHandshakeConsumer", "Lsun/security/ssl/DHClientKeyExchange$DHClientKeyExchangeConsumer;", nullptr, $STATIC | $FINAL, $staticField(DHClientKeyExchange, dhHandshakeConsumer)},
		{"dhHandshakeProducer", "Lsun/security/ssl/DHClientKeyExchange$DHClientKeyExchangeProducer;", nullptr, $STATIC | $FINAL, $staticField(DHClientKeyExchange, dhHandshakeProducer)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(DHClientKeyExchange, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.DHClientKeyExchange$DHClientKeyExchangeConsumer", "sun.security.ssl.DHClientKeyExchange", "DHClientKeyExchangeConsumer", $PRIVATE | $STATIC | $FINAL},
		{"sun.security.ssl.DHClientKeyExchange$DHClientKeyExchangeProducer", "sun.security.ssl.DHClientKeyExchange", "DHClientKeyExchangeProducer", $PRIVATE | $STATIC | $FINAL},
		{"sun.security.ssl.DHClientKeyExchange$DHClientKeyExchangeMessage", "sun.security.ssl.DHClientKeyExchange", "DHClientKeyExchangeMessage", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.DHClientKeyExchange",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.security.ssl.DHClientKeyExchange$DHClientKeyExchangeConsumer,sun.security.ssl.DHClientKeyExchange$DHClientKeyExchangeProducer,sun.security.ssl.DHClientKeyExchange$DHClientKeyExchangeMessage"
	};
	$loadClass(DHClientKeyExchange, name, initialize, &classInfo$$, DHClientKeyExchange::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(DHClientKeyExchange);
	});
	return class$;
}

$Class* DHClientKeyExchange::class$ = nullptr;

		} // ssl
	} // security
} // sun