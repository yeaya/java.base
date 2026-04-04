#include <sun/security/ssl/ServerKeyExchange$ServerKeyExchangeProducer.h>
#include <java/util/Map$Entry.h>
#include <javax/net/ssl/SSLException.h>
#include <sun/security/ssl/Alert.h>
#include <sun/security/ssl/CipherSuite$KeyExchange.h>
#include <sun/security/ssl/CipherSuite.h>
#include <sun/security/ssl/ConnectionContext.h>
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
using $HandshakeProducer = ::sun::security::ssl::HandshakeProducer;
using $SSLHandshake = ::sun::security::ssl::SSLHandshake;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLKeyExchange = ::sun::security::ssl::SSLKeyExchange;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;

namespace sun {
	namespace security {
		namespace ssl {

void ServerKeyExchange$ServerKeyExchangeProducer::init$() {
}

$bytes* ServerKeyExchange$ServerKeyExchangeProducer::produce($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$useLocalObjectStack();
	$var($ServerHandshakeContext, shc, $cast($ServerHandshakeContext, context));
	$var($SSLKeyExchange, ke, $SSLKeyExchange::valueOf($nc($nc(shc)->negotiatedCipherSuite)->keyExchange, $nc(shc)->negotiatedProtocol));
	if (ke != nullptr) {
		$var($Map$EntryArray, arr$, ke->getHandshakeProducers(shc));
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($Map$Entry, hc, arr$->get(i$));
			$init($SSLHandshake);
			if ($$sure($Byte, $nc(hc)->getKey())->byteValue() == $SSLHandshake::SERVER_KEY_EXCHANGE->id) {
				return $$sure($HandshakeProducer, hc->getValue())->produce(context, message);
			}
		}
	}
	$init($Alert);
	$throw($($nc(shc->conContext)->fatal($Alert::HANDSHAKE_FAILURE, "No ServerKeyExchange handshake message can be produced."_s)));
}

ServerKeyExchange$ServerKeyExchangeProducer::ServerKeyExchange$ServerKeyExchangeProducer() {
}

$Class* ServerKeyExchange$ServerKeyExchangeProducer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(ServerKeyExchange$ServerKeyExchangeProducer, init$, void)},
		{"produce", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)[B", nullptr, $PUBLIC, $virtualMethod(ServerKeyExchange$ServerKeyExchangeProducer, produce, $bytes*, $ConnectionContext*, $SSLHandshake$HandshakeMessage*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.ServerKeyExchange$ServerKeyExchangeProducer", "sun.security.ssl.ServerKeyExchange", "ServerKeyExchangeProducer", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.ServerKeyExchange$ServerKeyExchangeProducer",
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
		"sun.security.ssl.ServerKeyExchange"
	};
	$loadClass(ServerKeyExchange$ServerKeyExchangeProducer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ServerKeyExchange$ServerKeyExchangeProducer);
	});
	return class$;
}

$Class* ServerKeyExchange$ServerKeyExchangeProducer::class$ = nullptr;

		} // ssl
	} // security
} // sun