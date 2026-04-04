#include <sun/security/ssl/ClientKeyExchange.h>
#include <sun/security/ssl/ClientKeyExchange$ClientKeyExchangeConsumer.h>
#include <sun/security/ssl/ClientKeyExchange$ClientKeyExchangeProducer.h>
#include <sun/security/ssl/HandshakeProducer.h>
#include <sun/security/ssl/SSLConsumer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ClientKeyExchange$ClientKeyExchangeConsumer = ::sun::security::ssl::ClientKeyExchange$ClientKeyExchangeConsumer;
using $ClientKeyExchange$ClientKeyExchangeProducer = ::sun::security::ssl::ClientKeyExchange$ClientKeyExchangeProducer;
using $HandshakeProducer = ::sun::security::ssl::HandshakeProducer;
using $SSLConsumer = ::sun::security::ssl::SSLConsumer;

namespace sun {
	namespace security {
		namespace ssl {

$SSLConsumer* ClientKeyExchange::handshakeConsumer = nullptr;
$HandshakeProducer* ClientKeyExchange::handshakeProducer = nullptr;

void ClientKeyExchange::init$() {
}

void ClientKeyExchange::clinit$($Class* clazz) {
	$assignStatic(ClientKeyExchange::handshakeConsumer, $new($ClientKeyExchange$ClientKeyExchangeConsumer));
	$assignStatic(ClientKeyExchange::handshakeProducer, $new($ClientKeyExchange$ClientKeyExchangeProducer));
}

ClientKeyExchange::ClientKeyExchange() {
}

$Class* ClientKeyExchange::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"handshakeConsumer", "Lsun/security/ssl/SSLConsumer;", nullptr, $STATIC | $FINAL, $staticField(ClientKeyExchange, handshakeConsumer)},
		{"handshakeProducer", "Lsun/security/ssl/HandshakeProducer;", nullptr, $STATIC | $FINAL, $staticField(ClientKeyExchange, handshakeProducer)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ClientKeyExchange, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.ClientKeyExchange$ClientKeyExchangeConsumer", "sun.security.ssl.ClientKeyExchange", "ClientKeyExchangeConsumer", $PRIVATE | $STATIC | $FINAL},
		{"sun.security.ssl.ClientKeyExchange$ClientKeyExchangeProducer", "sun.security.ssl.ClientKeyExchange", "ClientKeyExchangeProducer", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.ClientKeyExchange",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.security.ssl.ClientKeyExchange$ClientKeyExchangeConsumer,sun.security.ssl.ClientKeyExchange$ClientKeyExchangeProducer"
	};
	$loadClass(ClientKeyExchange, name, initialize, &classInfo$$, ClientKeyExchange::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ClientKeyExchange);
	});
	return class$;
}

$Class* ClientKeyExchange::class$ = nullptr;

		} // ssl
	} // security
} // sun