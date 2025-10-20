#include <sun/security/ssl/DHServerKeyExchange$DHServerKeyExchangeProducer.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/DHServerKeyExchange$DHServerKeyExchangeMessage.h>
#include <sun/security/ssl/DHServerKeyExchange.h>
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
using $DHServerKeyExchange = ::sun::security::ssl::DHServerKeyExchange;
using $DHServerKeyExchange$DHServerKeyExchangeMessage = ::sun::security::ssl::DHServerKeyExchange$DHServerKeyExchangeMessage;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $HandshakeOutStream = ::sun::security::ssl::HandshakeOutStream;
using $HandshakeProducer = ::sun::security::ssl::HandshakeProducer;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _DHServerKeyExchange$DHServerKeyExchangeProducer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(DHServerKeyExchange$DHServerKeyExchangeProducer::*)()>(&DHServerKeyExchange$DHServerKeyExchangeProducer::init$))},
	{"produce", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)[B", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _DHServerKeyExchange$DHServerKeyExchangeProducer_InnerClassesInfo_[] = {
	{"sun.security.ssl.DHServerKeyExchange$DHServerKeyExchangeProducer", "sun.security.ssl.DHServerKeyExchange", "DHServerKeyExchangeProducer", $STATIC | $FINAL},
	{}
};

$ClassInfo _DHServerKeyExchange$DHServerKeyExchangeProducer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.DHServerKeyExchange$DHServerKeyExchangeProducer",
	"java.lang.Object",
	"sun.security.ssl.HandshakeProducer",
	nullptr,
	_DHServerKeyExchange$DHServerKeyExchangeProducer_MethodInfo_,
	nullptr,
	nullptr,
	_DHServerKeyExchange$DHServerKeyExchangeProducer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.DHServerKeyExchange"
};

$Object* allocate$DHServerKeyExchange$DHServerKeyExchangeProducer($Class* clazz) {
	return $of($alloc(DHServerKeyExchange$DHServerKeyExchangeProducer));
}

void DHServerKeyExchange$DHServerKeyExchangeProducer::init$() {
}

$bytes* DHServerKeyExchange$DHServerKeyExchangeProducer::produce($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$useLocalCurrentObjectStackCache();
	$var($ServerHandshakeContext, shc, $cast($ServerHandshakeContext, context));
	$var($DHServerKeyExchange$DHServerKeyExchangeMessage, skem, $new($DHServerKeyExchange$DHServerKeyExchangeMessage, shc));
	$init($SSLLogger);
	if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
		$SSLLogger::fine("Produced DH ServerKeyExchange handshake message"_s, $$new($ObjectArray, {$of(skem)}));
	}
	skem->write($nc(shc)->handshakeOutput);
	$nc($nc(shc)->handshakeOutput)->flush();
	return nullptr;
}

DHServerKeyExchange$DHServerKeyExchangeProducer::DHServerKeyExchange$DHServerKeyExchangeProducer() {
}

$Class* DHServerKeyExchange$DHServerKeyExchangeProducer::load$($String* name, bool initialize) {
	$loadClass(DHServerKeyExchange$DHServerKeyExchangeProducer, name, initialize, &_DHServerKeyExchange$DHServerKeyExchangeProducer_ClassInfo_, allocate$DHServerKeyExchange$DHServerKeyExchangeProducer);
	return class$;
}

$Class* DHServerKeyExchange$DHServerKeyExchangeProducer::class$ = nullptr;

		} // ssl
	} // security
} // sun