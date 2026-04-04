#include <sun/security/ssl/ClientKeyExchange$ClientKeyExchangeConsumer.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/HashMap.h>
#include <java/util/LinkedHashMap.h>
#include <java/util/Map$Entry.h>
#include <javax/net/ssl/SSLException.h>
#include <sun/security/ssl/Alert.h>
#include <sun/security/ssl/CipherSuite$KeyExchange.h>
#include <sun/security/ssl/CipherSuite.h>
#include <sun/security/ssl/ClientKeyExchange.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/SSLConsumer.h>
#include <sun/security/ssl/SSLHandshake.h>
#include <sun/security/ssl/SSLKeyExchange.h>
#include <sun/security/ssl/ServerHandshakeContext.h>
#include <sun/security/ssl/TransportContext.h>
#include <jcpp.h>

#undef CERTIFICATE
#undef CLIENT_KEY_EXCHANGE
#undef UNEXPECTED_MESSAGE

using $Map$EntryArray = $Array<::java::util::Map$Entry>;
using $Byte = ::java::lang::Byte;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Map$Entry = ::java::util::Map$Entry;
using $Alert = ::sun::security::ssl::Alert;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $SSLConsumer = ::sun::security::ssl::SSLConsumer;
using $SSLHandshake = ::sun::security::ssl::SSLHandshake;
using $SSLKeyExchange = ::sun::security::ssl::SSLKeyExchange;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;

namespace sun {
	namespace security {
		namespace ssl {

void ClientKeyExchange$ClientKeyExchangeConsumer::init$() {
}

void ClientKeyExchange$ClientKeyExchangeConsumer::consume($ConnectionContext* context, $ByteBuffer* message) {
	$useLocalObjectStack();
	$var($ServerHandshakeContext, shc, $cast($ServerHandshakeContext, context));
	$init($SSLHandshake);
	$nc($nc(shc)->handshakeConsumers)->remove($($Byte::valueOf($SSLHandshake::CLIENT_KEY_EXCHANGE->id)));
	if (shc->handshakeConsumers->containsKey($($Byte::valueOf($SSLHandshake::CERTIFICATE->id)))) {
		$init($Alert);
		$throw($($nc(shc->conContext)->fatal($Alert::UNEXPECTED_MESSAGE, "Unexpected ClientKeyExchange handshake message."_s)));
	}
	$var($SSLKeyExchange, ke, $SSLKeyExchange::valueOf($nc(shc->negotiatedCipherSuite)->keyExchange, shc->negotiatedProtocol));
	if (ke != nullptr) {
		$var($Map$EntryArray, arr$, ke->getHandshakeConsumers(shc));
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($Map$Entry, hc, arr$->get(i$));
			if ($$sure($Byte, $nc(hc)->getKey())->byteValue() == $SSLHandshake::CLIENT_KEY_EXCHANGE->id) {
				$$sure($SSLConsumer, hc->getValue())->consume(context, message);
				return;
			}
		}
	}
	$init($Alert);
	$throw($($nc(shc->conContext)->fatal($Alert::UNEXPECTED_MESSAGE, "Unexpected ClientKeyExchange handshake message."_s)));
}

ClientKeyExchange$ClientKeyExchangeConsumer::ClientKeyExchange$ClientKeyExchangeConsumer() {
}

$Class* ClientKeyExchange$ClientKeyExchangeConsumer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(ClientKeyExchange$ClientKeyExchangeConsumer, init$, void)},
		{"consume", "(Lsun/security/ssl/ConnectionContext;Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC, $virtualMethod(ClientKeyExchange$ClientKeyExchangeConsumer, consume, void, $ConnectionContext*, $ByteBuffer*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.ClientKeyExchange$ClientKeyExchangeConsumer", "sun.security.ssl.ClientKeyExchange", "ClientKeyExchangeConsumer", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.ClientKeyExchange$ClientKeyExchangeConsumer",
		"java.lang.Object",
		"sun.security.ssl.SSLConsumer",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.ssl.ClientKeyExchange"
	};
	$loadClass(ClientKeyExchange$ClientKeyExchangeConsumer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ClientKeyExchange$ClientKeyExchangeConsumer);
	});
	return class$;
}

$Class* ClientKeyExchange$ClientKeyExchangeConsumer::class$ = nullptr;

		} // ssl
	} // security
} // sun