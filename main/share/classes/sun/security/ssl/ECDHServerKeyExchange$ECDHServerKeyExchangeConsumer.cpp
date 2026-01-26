#include <sun/security/ssl/ECDHServerKeyExchange$ECDHServerKeyExchangeConsumer.h>

#include <java/nio/ByteBuffer.h>
#include <java/util/List.h>
#include <sun/security/ssl/ClientHandshakeContext.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/ECDHServerKeyExchange$ECDHServerKeyExchangeMessage.h>
#include <sun/security/ssl/ECDHServerKeyExchange.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/SSLCredentials.h>
#include <sun/security/ssl/SSLLogger.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $List = ::java::util::List;
using $ClientHandshakeContext = ::sun::security::ssl::ClientHandshakeContext;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $ECDHServerKeyExchange$ECDHServerKeyExchangeMessage = ::sun::security::ssl::ECDHServerKeyExchange$ECDHServerKeyExchangeMessage;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $SSLLogger = ::sun::security::ssl::SSLLogger;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _ECDHServerKeyExchange$ECDHServerKeyExchangeConsumer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(ECDHServerKeyExchange$ECDHServerKeyExchangeConsumer, init$, void)},
	{"consume", "(Lsun/security/ssl/ConnectionContext;Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC, $virtualMethod(ECDHServerKeyExchange$ECDHServerKeyExchangeConsumer, consume, void, $ConnectionContext*, $ByteBuffer*), "java.io.IOException"},
	{}
};

$InnerClassInfo _ECDHServerKeyExchange$ECDHServerKeyExchangeConsumer_InnerClassesInfo_[] = {
	{"sun.security.ssl.ECDHServerKeyExchange$ECDHServerKeyExchangeConsumer", "sun.security.ssl.ECDHServerKeyExchange", "ECDHServerKeyExchangeConsumer", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _ECDHServerKeyExchange$ECDHServerKeyExchangeConsumer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.ECDHServerKeyExchange$ECDHServerKeyExchangeConsumer",
	"java.lang.Object",
	"sun.security.ssl.SSLConsumer",
	nullptr,
	_ECDHServerKeyExchange$ECDHServerKeyExchangeConsumer_MethodInfo_,
	nullptr,
	nullptr,
	_ECDHServerKeyExchange$ECDHServerKeyExchangeConsumer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.ECDHServerKeyExchange"
};

$Object* allocate$ECDHServerKeyExchange$ECDHServerKeyExchangeConsumer($Class* clazz) {
	return $of($alloc(ECDHServerKeyExchange$ECDHServerKeyExchangeConsumer));
}

void ECDHServerKeyExchange$ECDHServerKeyExchangeConsumer::init$() {
}

void ECDHServerKeyExchange$ECDHServerKeyExchangeConsumer::consume($ConnectionContext* context, $ByteBuffer* message) {
	$useLocalCurrentObjectStackCache();
	$var($ClientHandshakeContext, chc, $cast($ClientHandshakeContext, context));
	$var($ECDHServerKeyExchange$ECDHServerKeyExchangeMessage, skem, $new($ECDHServerKeyExchange$ECDHServerKeyExchangeMessage, chc, message));
	$init($SSLLogger);
	if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
		$SSLLogger::fine("Consuming ECDH ServerKeyExchange handshake message"_s, $$new($ObjectArray, {$of(skem)}));
	}
	$nc($nc(chc)->handshakeCredentials)->add(skem->sslCredentials);
}

ECDHServerKeyExchange$ECDHServerKeyExchangeConsumer::ECDHServerKeyExchange$ECDHServerKeyExchangeConsumer() {
}

$Class* ECDHServerKeyExchange$ECDHServerKeyExchangeConsumer::load$($String* name, bool initialize) {
	$loadClass(ECDHServerKeyExchange$ECDHServerKeyExchangeConsumer, name, initialize, &_ECDHServerKeyExchange$ECDHServerKeyExchangeConsumer_ClassInfo_, allocate$ECDHServerKeyExchange$ECDHServerKeyExchangeConsumer);
	return class$;
}

$Class* ECDHServerKeyExchange$ECDHServerKeyExchangeConsumer::class$ = nullptr;

		} // ssl
	} // security
} // sun