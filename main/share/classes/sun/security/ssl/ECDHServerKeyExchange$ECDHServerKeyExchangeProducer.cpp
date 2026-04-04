#include <sun/security/ssl/ECDHServerKeyExchange$ECDHServerKeyExchangeProducer.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/ECDHServerKeyExchange$ECDHServerKeyExchangeMessage.h>
#include <sun/security/ssl/ECDHServerKeyExchange.h>
#include <sun/security/ssl/HandshakeOutStream.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/ServerHandshakeContext.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $ECDHServerKeyExchange$ECDHServerKeyExchangeMessage = ::sun::security::ssl::ECDHServerKeyExchange$ECDHServerKeyExchangeMessage;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;

namespace sun {
	namespace security {
		namespace ssl {

void ECDHServerKeyExchange$ECDHServerKeyExchangeProducer::init$() {
}

$bytes* ECDHServerKeyExchange$ECDHServerKeyExchangeProducer::produce($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$useLocalObjectStack();
	$var($ServerHandshakeContext, shc, $cast($ServerHandshakeContext, context));
	$var($ECDHServerKeyExchange$ECDHServerKeyExchangeMessage, skem, $new($ECDHServerKeyExchange$ECDHServerKeyExchangeMessage, shc));
	$init($SSLLogger);
	if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
		$SSLLogger::fine("Produced ECDH ServerKeyExchange handshake message"_s, $$new($ObjectArray, {skem}));
	}
	skem->write($nc(shc)->handshakeOutput);
	$nc(shc->handshakeOutput)->flush();
	return nullptr;
}

ECDHServerKeyExchange$ECDHServerKeyExchangeProducer::ECDHServerKeyExchange$ECDHServerKeyExchangeProducer() {
}

$Class* ECDHServerKeyExchange$ECDHServerKeyExchangeProducer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(ECDHServerKeyExchange$ECDHServerKeyExchangeProducer, init$, void)},
		{"produce", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)[B", nullptr, $PUBLIC, $virtualMethod(ECDHServerKeyExchange$ECDHServerKeyExchangeProducer, produce, $bytes*, $ConnectionContext*, $SSLHandshake$HandshakeMessage*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.ECDHServerKeyExchange$ECDHServerKeyExchangeProducer", "sun.security.ssl.ECDHServerKeyExchange", "ECDHServerKeyExchangeProducer", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.ECDHServerKeyExchange$ECDHServerKeyExchangeProducer",
		"java.lang.Object",
		"sun.security.ssl.HandshakeProducer",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.ssl.ECDHServerKeyExchange"
	};
	$loadClass(ECDHServerKeyExchange$ECDHServerKeyExchangeProducer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ECDHServerKeyExchange$ECDHServerKeyExchangeProducer);
	});
	return class$;
}

$Class* ECDHServerKeyExchange$ECDHServerKeyExchangeProducer::class$ = nullptr;

		} // ssl
	} // security
} // sun