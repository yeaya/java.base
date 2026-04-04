#include <sun/security/ssl/RSAClientKeyExchange.h>
#include <sun/security/ssl/HandshakeProducer.h>
#include <sun/security/ssl/RSAClientKeyExchange$RSAClientKeyExchangeConsumer.h>
#include <sun/security/ssl/RSAClientKeyExchange$RSAClientKeyExchangeProducer.h>
#include <sun/security/ssl/SSLConsumer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HandshakeProducer = ::sun::security::ssl::HandshakeProducer;
using $RSAClientKeyExchange$RSAClientKeyExchangeConsumer = ::sun::security::ssl::RSAClientKeyExchange$RSAClientKeyExchangeConsumer;
using $RSAClientKeyExchange$RSAClientKeyExchangeProducer = ::sun::security::ssl::RSAClientKeyExchange$RSAClientKeyExchangeProducer;
using $SSLConsumer = ::sun::security::ssl::SSLConsumer;

namespace sun {
	namespace security {
		namespace ssl {

$SSLConsumer* RSAClientKeyExchange::rsaHandshakeConsumer = nullptr;
$HandshakeProducer* RSAClientKeyExchange::rsaHandshakeProducer = nullptr;

void RSAClientKeyExchange::init$() {
}

void RSAClientKeyExchange::clinit$($Class* clazz) {
	$assignStatic(RSAClientKeyExchange::rsaHandshakeConsumer, $new($RSAClientKeyExchange$RSAClientKeyExchangeConsumer));
	$assignStatic(RSAClientKeyExchange::rsaHandshakeProducer, $new($RSAClientKeyExchange$RSAClientKeyExchangeProducer));
}

RSAClientKeyExchange::RSAClientKeyExchange() {
}

$Class* RSAClientKeyExchange::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"rsaHandshakeConsumer", "Lsun/security/ssl/SSLConsumer;", nullptr, $STATIC | $FINAL, $staticField(RSAClientKeyExchange, rsaHandshakeConsumer)},
		{"rsaHandshakeProducer", "Lsun/security/ssl/HandshakeProducer;", nullptr, $STATIC | $FINAL, $staticField(RSAClientKeyExchange, rsaHandshakeProducer)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(RSAClientKeyExchange, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.RSAClientKeyExchange$RSAClientKeyExchangeConsumer", "sun.security.ssl.RSAClientKeyExchange", "RSAClientKeyExchangeConsumer", $PRIVATE | $STATIC | $FINAL},
		{"sun.security.ssl.RSAClientKeyExchange$RSAClientKeyExchangeProducer", "sun.security.ssl.RSAClientKeyExchange", "RSAClientKeyExchangeProducer", $PRIVATE | $STATIC | $FINAL},
		{"sun.security.ssl.RSAClientKeyExchange$RSAClientKeyExchangeMessage", "sun.security.ssl.RSAClientKeyExchange", "RSAClientKeyExchangeMessage", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.RSAClientKeyExchange",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.security.ssl.RSAClientKeyExchange$RSAClientKeyExchangeConsumer,sun.security.ssl.RSAClientKeyExchange$RSAClientKeyExchangeProducer,sun.security.ssl.RSAClientKeyExchange$RSAClientKeyExchangeMessage"
	};
	$loadClass(RSAClientKeyExchange, name, initialize, &classInfo$$, RSAClientKeyExchange::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(RSAClientKeyExchange);
	});
	return class$;
}

$Class* RSAClientKeyExchange::class$ = nullptr;

		} // ssl
	} // security
} // sun