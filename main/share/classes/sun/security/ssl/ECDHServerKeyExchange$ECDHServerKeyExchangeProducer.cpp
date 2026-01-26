#include <sun/security/ssl/ECDHServerKeyExchange$ECDHServerKeyExchangeProducer.h>

#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/ECDHServerKeyExchange$ECDHServerKeyExchangeMessage.h>
#include <sun/security/ssl/ECDHServerKeyExchange.h>
#include <sun/security/ssl/HandshakeContext.h>
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
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $HandshakeOutStream = ::sun::security::ssl::HandshakeOutStream;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _ECDHServerKeyExchange$ECDHServerKeyExchangeProducer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(ECDHServerKeyExchange$ECDHServerKeyExchangeProducer, init$, void)},
	{"produce", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)[B", nullptr, $PUBLIC, $virtualMethod(ECDHServerKeyExchange$ECDHServerKeyExchangeProducer, produce, $bytes*, $ConnectionContext*, $SSLHandshake$HandshakeMessage*), "java.io.IOException"},
	{}
};

$InnerClassInfo _ECDHServerKeyExchange$ECDHServerKeyExchangeProducer_InnerClassesInfo_[] = {
	{"sun.security.ssl.ECDHServerKeyExchange$ECDHServerKeyExchangeProducer", "sun.security.ssl.ECDHServerKeyExchange", "ECDHServerKeyExchangeProducer", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _ECDHServerKeyExchange$ECDHServerKeyExchangeProducer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.ECDHServerKeyExchange$ECDHServerKeyExchangeProducer",
	"java.lang.Object",
	"sun.security.ssl.HandshakeProducer",
	nullptr,
	_ECDHServerKeyExchange$ECDHServerKeyExchangeProducer_MethodInfo_,
	nullptr,
	nullptr,
	_ECDHServerKeyExchange$ECDHServerKeyExchangeProducer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.ECDHServerKeyExchange"
};

$Object* allocate$ECDHServerKeyExchange$ECDHServerKeyExchangeProducer($Class* clazz) {
	return $of($alloc(ECDHServerKeyExchange$ECDHServerKeyExchangeProducer));
}

void ECDHServerKeyExchange$ECDHServerKeyExchangeProducer::init$() {
}

$bytes* ECDHServerKeyExchange$ECDHServerKeyExchangeProducer::produce($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$useLocalCurrentObjectStackCache();
	$var($ServerHandshakeContext, shc, $cast($ServerHandshakeContext, context));
	$var($ECDHServerKeyExchange$ECDHServerKeyExchangeMessage, skem, $new($ECDHServerKeyExchange$ECDHServerKeyExchangeMessage, shc));
	$init($SSLLogger);
	if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
		$SSLLogger::fine("Produced ECDH ServerKeyExchange handshake message"_s, $$new($ObjectArray, {$of(skem)}));
	}
	skem->write($nc(shc)->handshakeOutput);
	$nc($nc(shc)->handshakeOutput)->flush();
	return nullptr;
}

ECDHServerKeyExchange$ECDHServerKeyExchangeProducer::ECDHServerKeyExchange$ECDHServerKeyExchangeProducer() {
}

$Class* ECDHServerKeyExchange$ECDHServerKeyExchangeProducer::load$($String* name, bool initialize) {
	$loadClass(ECDHServerKeyExchange$ECDHServerKeyExchangeProducer, name, initialize, &_ECDHServerKeyExchange$ECDHServerKeyExchangeProducer_ClassInfo_, allocate$ECDHServerKeyExchange$ECDHServerKeyExchangeProducer);
	return class$;
}

$Class* ECDHServerKeyExchange$ECDHServerKeyExchangeProducer::class$ = nullptr;

		} // ssl
	} // security
} // sun