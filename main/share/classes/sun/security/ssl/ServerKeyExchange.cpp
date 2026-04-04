#include <sun/security/ssl/ServerKeyExchange.h>
#include <sun/security/ssl/HandshakeProducer.h>
#include <sun/security/ssl/SSLConsumer.h>
#include <sun/security/ssl/ServerKeyExchange$ServerKeyExchangeConsumer.h>
#include <sun/security/ssl/ServerKeyExchange$ServerKeyExchangeProducer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HandshakeProducer = ::sun::security::ssl::HandshakeProducer;
using $SSLConsumer = ::sun::security::ssl::SSLConsumer;
using $ServerKeyExchange$ServerKeyExchangeConsumer = ::sun::security::ssl::ServerKeyExchange$ServerKeyExchangeConsumer;
using $ServerKeyExchange$ServerKeyExchangeProducer = ::sun::security::ssl::ServerKeyExchange$ServerKeyExchangeProducer;

namespace sun {
	namespace security {
		namespace ssl {

$SSLConsumer* ServerKeyExchange::handshakeConsumer = nullptr;
$HandshakeProducer* ServerKeyExchange::handshakeProducer = nullptr;

void ServerKeyExchange::init$() {
}

void ServerKeyExchange::clinit$($Class* clazz) {
	$assignStatic(ServerKeyExchange::handshakeConsumer, $new($ServerKeyExchange$ServerKeyExchangeConsumer));
	$assignStatic(ServerKeyExchange::handshakeProducer, $new($ServerKeyExchange$ServerKeyExchangeProducer));
}

ServerKeyExchange::ServerKeyExchange() {
}

$Class* ServerKeyExchange::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"handshakeConsumer", "Lsun/security/ssl/SSLConsumer;", nullptr, $STATIC | $FINAL, $staticField(ServerKeyExchange, handshakeConsumer)},
		{"handshakeProducer", "Lsun/security/ssl/HandshakeProducer;", nullptr, $STATIC | $FINAL, $staticField(ServerKeyExchange, handshakeProducer)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ServerKeyExchange, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.ServerKeyExchange$ServerKeyExchangeConsumer", "sun.security.ssl.ServerKeyExchange", "ServerKeyExchangeConsumer", $PRIVATE | $STATIC | $FINAL},
		{"sun.security.ssl.ServerKeyExchange$ServerKeyExchangeProducer", "sun.security.ssl.ServerKeyExchange", "ServerKeyExchangeProducer", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.ServerKeyExchange",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.security.ssl.ServerKeyExchange$ServerKeyExchangeConsumer,sun.security.ssl.ServerKeyExchange$ServerKeyExchangeProducer"
	};
	$loadClass(ServerKeyExchange, name, initialize, &classInfo$$, ServerKeyExchange::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ServerKeyExchange);
	});
	return class$;
}

$Class* ServerKeyExchange::class$ = nullptr;

		} // ssl
	} // security
} // sun