#include <sun/security/ssl/ServerKeyExchange$ServerKeyExchangeConsumer.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/HashMap.h>
#include <java/util/LinkedHashMap.h>
#include <java/util/Map$Entry.h>
#include <javax/net/ssl/SSLException.h>
#include <sun/security/ssl/Alert.h>
#include <sun/security/ssl/CertificateStatus.h>
#include <sun/security/ssl/CipherSuite$KeyExchange.h>
#include <sun/security/ssl/CipherSuite.h>
#include <sun/security/ssl/ClientHandshakeContext.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/HandshakeAbsence.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/SSLConsumer.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLHandshake.h>
#include <sun/security/ssl/SSLKeyExchange.h>
#include <sun/security/ssl/ServerKeyExchange.h>
#include <sun/security/ssl/TransportContext.h>
#include <jcpp.h>

#undef CERTIFICATE_STATUS
#undef SERVER_KEY_EXCHANGE
#undef UNEXPECTED_MESSAGE

using $Map$EntryArray = $Array<::java::util::Map$Entry>;
using $Byte = ::java::lang::Byte;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Map$Entry = ::java::util::Map$Entry;
using $Alert = ::sun::security::ssl::Alert;
using $CertificateStatus = ::sun::security::ssl::CertificateStatus;
using $ClientHandshakeContext = ::sun::security::ssl::ClientHandshakeContext;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $SSLConsumer = ::sun::security::ssl::SSLConsumer;
using $SSLHandshake = ::sun::security::ssl::SSLHandshake;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLKeyExchange = ::sun::security::ssl::SSLKeyExchange;

namespace sun {
	namespace security {
		namespace ssl {

void ServerKeyExchange$ServerKeyExchangeConsumer::init$() {
}

void ServerKeyExchange$ServerKeyExchangeConsumer::consume($ConnectionContext* context, $ByteBuffer* message) {
	$useLocalObjectStack();
	$var($ClientHandshakeContext, chc, $cast($ClientHandshakeContext, context));
	$init($SSLHandshake);
	$nc($nc(chc)->handshakeConsumers)->remove($($Byte::valueOf($SSLHandshake::SERVER_KEY_EXCHANGE->id)));
	$var($SSLConsumer, certStatCons, $cast($SSLConsumer, chc->handshakeConsumers->remove($($Byte::valueOf($SSLHandshake::CERTIFICATE_STATUS->id)))));
	if (certStatCons != nullptr) {
		$init($CertificateStatus);
		$nc($CertificateStatus::handshakeAbsence)->absent(context, nullptr);
	}
	$var($SSLKeyExchange, ke, $SSLKeyExchange::valueOf($nc(chc->negotiatedCipherSuite)->keyExchange, chc->negotiatedProtocol));
	if (ke != nullptr) {
		$var($Map$EntryArray, arr$, ke->getHandshakeConsumers(chc));
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($Map$Entry, hc, arr$->get(i$));
			if ($$sure($Byte, $nc(hc)->getKey())->byteValue() == $SSLHandshake::SERVER_KEY_EXCHANGE->id) {
				$$sure($SSLConsumer, hc->getValue())->consume(context, message);
				return;
			}
		}
	}
	$init($Alert);
	$throw($($nc(chc->conContext)->fatal($Alert::UNEXPECTED_MESSAGE, "Unexpected ServerKeyExchange handshake message."_s)));
}

ServerKeyExchange$ServerKeyExchangeConsumer::ServerKeyExchange$ServerKeyExchangeConsumer() {
}

$Class* ServerKeyExchange$ServerKeyExchangeConsumer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(ServerKeyExchange$ServerKeyExchangeConsumer, init$, void)},
		{"consume", "(Lsun/security/ssl/ConnectionContext;Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC, $virtualMethod(ServerKeyExchange$ServerKeyExchangeConsumer, consume, void, $ConnectionContext*, $ByteBuffer*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.ServerKeyExchange$ServerKeyExchangeConsumer", "sun.security.ssl.ServerKeyExchange", "ServerKeyExchangeConsumer", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.ServerKeyExchange$ServerKeyExchangeConsumer",
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
		"sun.security.ssl.ServerKeyExchange"
	};
	$loadClass(ServerKeyExchange$ServerKeyExchangeConsumer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ServerKeyExchange$ServerKeyExchangeConsumer);
	});
	return class$;
}

$Class* ServerKeyExchange$ServerKeyExchangeConsumer::class$ = nullptr;

		} // ssl
	} // security
} // sun