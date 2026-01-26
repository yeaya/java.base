#include <sun/security/ssl/ServerKeyExchange$ServerKeyExchangeProducer.h>

#include <java/util/Map$Entry.h>
#include <javax/net/ssl/SSLException.h>
#include <sun/security/ssl/Alert.h>
#include <sun/security/ssl/CipherSuite$KeyExchange.h>
#include <sun/security/ssl/CipherSuite.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/HandshakeProducer.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLHandshake.h>
#include <sun/security/ssl/SSLKeyExchange.h>
#include <sun/security/ssl/ServerHandshakeContext.h>
#include <sun/security/ssl/ServerKeyExchange.h>
#include <sun/security/ssl/TransportContext.h>
#include <jcpp.h>

#undef HANDSHAKE_FAILURE
#undef SERVER_KEY_EXCHANGE

using $Map$EntryArray = $Array<::java::util::Map$Entry>;
using $Byte = ::java::lang::Byte;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Map$Entry = ::java::util::Map$Entry;
using $Alert = ::sun::security::ssl::Alert;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $HandshakeProducer = ::sun::security::ssl::HandshakeProducer;
using $SSLHandshake = ::sun::security::ssl::SSLHandshake;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLKeyExchange = ::sun::security::ssl::SSLKeyExchange;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;
using $TransportContext = ::sun::security::ssl::TransportContext;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _ServerKeyExchange$ServerKeyExchangeProducer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(ServerKeyExchange$ServerKeyExchangeProducer, init$, void)},
	{"produce", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)[B", nullptr, $PUBLIC, $virtualMethod(ServerKeyExchange$ServerKeyExchangeProducer, produce, $bytes*, $ConnectionContext*, $SSLHandshake$HandshakeMessage*), "java.io.IOException"},
	{}
};

$InnerClassInfo _ServerKeyExchange$ServerKeyExchangeProducer_InnerClassesInfo_[] = {
	{"sun.security.ssl.ServerKeyExchange$ServerKeyExchangeProducer", "sun.security.ssl.ServerKeyExchange", "ServerKeyExchangeProducer", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _ServerKeyExchange$ServerKeyExchangeProducer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.ServerKeyExchange$ServerKeyExchangeProducer",
	"java.lang.Object",
	"sun.security.ssl.HandshakeProducer",
	nullptr,
	_ServerKeyExchange$ServerKeyExchangeProducer_MethodInfo_,
	nullptr,
	nullptr,
	_ServerKeyExchange$ServerKeyExchangeProducer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.ServerKeyExchange"
};

$Object* allocate$ServerKeyExchange$ServerKeyExchangeProducer($Class* clazz) {
	return $of($alloc(ServerKeyExchange$ServerKeyExchangeProducer));
}

void ServerKeyExchange$ServerKeyExchangeProducer::init$() {
}

$bytes* ServerKeyExchange$ServerKeyExchangeProducer::produce($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$useLocalCurrentObjectStackCache();
	$var($ServerHandshakeContext, shc, $cast($ServerHandshakeContext, context));
	$var($SSLKeyExchange, ke, $SSLKeyExchange::valueOf($nc($nc(shc)->negotiatedCipherSuite)->keyExchange, shc->negotiatedProtocol));
	if (ke != nullptr) {
		{
			$var($Map$EntryArray, arr$, ke->getHandshakeProducers(shc));
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($Map$Entry, hc, arr$->get(i$));
				{
					$init($SSLHandshake);
					if ($nc(($cast($Byte, $($nc(hc)->getKey()))))->byteValue() == $SSLHandshake::SERVER_KEY_EXCHANGE->id) {
						return $nc(($cast($HandshakeProducer, $(hc->getValue()))))->produce(context, message);
					}
				}
			}
		}
	}
	$init($Alert);
	$throw($($nc($nc(shc)->conContext)->fatal($Alert::HANDSHAKE_FAILURE, "No ServerKeyExchange handshake message can be produced."_s)));
}

ServerKeyExchange$ServerKeyExchangeProducer::ServerKeyExchange$ServerKeyExchangeProducer() {
}

$Class* ServerKeyExchange$ServerKeyExchangeProducer::load$($String* name, bool initialize) {
	$loadClass(ServerKeyExchange$ServerKeyExchangeProducer, name, initialize, &_ServerKeyExchange$ServerKeyExchangeProducer_ClassInfo_, allocate$ServerKeyExchange$ServerKeyExchangeProducer);
	return class$;
}

$Class* ServerKeyExchange$ServerKeyExchangeProducer::class$ = nullptr;

		} // ssl
	} // security
} // sun