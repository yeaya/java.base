#include <sun/security/ssl/RSAServerKeyExchange.h>
#include <sun/security/ssl/HandshakeProducer.h>
#include <sun/security/ssl/RSAServerKeyExchange$RSAServerKeyExchangeConsumer.h>
#include <sun/security/ssl/RSAServerKeyExchange$RSAServerKeyExchangeProducer.h>
#include <sun/security/ssl/SSLConsumer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HandshakeProducer = ::sun::security::ssl::HandshakeProducer;
using $RSAServerKeyExchange$RSAServerKeyExchangeConsumer = ::sun::security::ssl::RSAServerKeyExchange$RSAServerKeyExchangeConsumer;
using $RSAServerKeyExchange$RSAServerKeyExchangeProducer = ::sun::security::ssl::RSAServerKeyExchange$RSAServerKeyExchangeProducer;
using $SSLConsumer = ::sun::security::ssl::SSLConsumer;

namespace sun {
	namespace security {
		namespace ssl {

$SSLConsumer* RSAServerKeyExchange::rsaHandshakeConsumer = nullptr;
$HandshakeProducer* RSAServerKeyExchange::rsaHandshakeProducer = nullptr;

void RSAServerKeyExchange::init$() {
}

void RSAServerKeyExchange::clinit$($Class* clazz) {
	$assignStatic(RSAServerKeyExchange::rsaHandshakeConsumer, $new($RSAServerKeyExchange$RSAServerKeyExchangeConsumer));
	$assignStatic(RSAServerKeyExchange::rsaHandshakeProducer, $new($RSAServerKeyExchange$RSAServerKeyExchangeProducer));
}

RSAServerKeyExchange::RSAServerKeyExchange() {
}

$Class* RSAServerKeyExchange::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"rsaHandshakeConsumer", "Lsun/security/ssl/SSLConsumer;", nullptr, $STATIC | $FINAL, $staticField(RSAServerKeyExchange, rsaHandshakeConsumer)},
		{"rsaHandshakeProducer", "Lsun/security/ssl/HandshakeProducer;", nullptr, $STATIC | $FINAL, $staticField(RSAServerKeyExchange, rsaHandshakeProducer)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(RSAServerKeyExchange, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.RSAServerKeyExchange$RSAServerKeyExchangeConsumer", "sun.security.ssl.RSAServerKeyExchange", "RSAServerKeyExchangeConsumer", $PRIVATE | $STATIC | $FINAL},
		{"sun.security.ssl.RSAServerKeyExchange$RSAServerKeyExchangeProducer", "sun.security.ssl.RSAServerKeyExchange", "RSAServerKeyExchangeProducer", $PRIVATE | $STATIC | $FINAL},
		{"sun.security.ssl.RSAServerKeyExchange$RSAServerKeyExchangeMessage", "sun.security.ssl.RSAServerKeyExchange", "RSAServerKeyExchangeMessage", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.RSAServerKeyExchange",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.security.ssl.RSAServerKeyExchange$RSAServerKeyExchangeConsumer,sun.security.ssl.RSAServerKeyExchange$RSAServerKeyExchangeProducer,sun.security.ssl.RSAServerKeyExchange$RSAServerKeyExchangeMessage"
	};
	$loadClass(RSAServerKeyExchange, name, initialize, &classInfo$$, RSAServerKeyExchange::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(RSAServerKeyExchange);
	});
	return class$;
}

$Class* RSAServerKeyExchange::class$ = nullptr;

		} // ssl
	} // security
} // sun