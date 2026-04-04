#include <sun/security/ssl/ClientHello$ClientHelloConsumer.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/Arrays.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedHashMap.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <javax/net/ssl/SSLException.h>
#include <sun/security/ssl/Alert.h>
#include <sun/security/ssl/ClientHello$ClientHelloMessage.h>
#include <sun/security/ssl/ClientHello.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/HandshakeConsumer.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/SSLConfiguration.h>
#include <sun/security/ssl/SSLContextImpl.h>
#include <sun/security/ssl/SSLExtension.h>
#include <sun/security/ssl/SSLExtensions.h>
#include <sun/security/ssl/SSLHandshake.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/ServerHandshakeContext.h>
#include <sun/security/ssl/SupportedVersionsExtension$CHSupportedVersionsSpec.h>
#include <sun/security/ssl/TransportContext.h>
#include <jcpp.h>

#undef CH_SUPPORTED_VERSIONS
#undef CLIENT_HELLO
#undef DTLS12
#undef NONE
#undef PROTOCOL_VERSION
#undef TLS12
#undef UNEXPECTED_MESSAGE

using $SSLExtensionArray = $Array<::sun::security::ssl::SSLExtension>;
using $Byte = ::java::lang::Byte;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Arrays = ::java::util::Arrays;
using $Iterator = ::java::util::Iterator;
using $Alert = ::sun::security::ssl::Alert;
using $ClientHello = ::sun::security::ssl::ClientHello;
using $ClientHello$ClientHelloMessage = ::sun::security::ssl::ClientHello$ClientHelloMessage;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $ProtocolVersion = ::sun::security::ssl::ProtocolVersion;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLHandshake = ::sun::security::ssl::SSLHandshake;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;
using $SupportedVersionsExtension$CHSupportedVersionsSpec = ::sun::security::ssl::SupportedVersionsExtension$CHSupportedVersionsSpec;

namespace sun {
	namespace security {
		namespace ssl {

void ClientHello$ClientHelloConsumer::init$() {
}

void ClientHello$ClientHelloConsumer::consume($ConnectionContext* context, $ByteBuffer* message) {
	$useLocalObjectStack();
	$var($ServerHandshakeContext, shc, $cast($ServerHandshakeContext, context));
	$init($SSLHandshake);
	$nc($nc(shc)->handshakeConsumers)->remove($($Byte::valueOf($SSLHandshake::CLIENT_HELLO->id)));
	if (!shc->handshakeConsumers->isEmpty()) {
		$init($Alert);
		$throw($($nc(shc->conContext)->fatal($Alert::UNEXPECTED_MESSAGE, "No more handshake message allowed in a ClientHello flight"_s)));
	}
	$var($SSLExtensionArray, enabledExtensions, $nc(shc->sslConfig)->getEnabledExtensions($SSLHandshake::CLIENT_HELLO));
	$var($ClientHello$ClientHelloMessage, chm, $new($ClientHello$ClientHelloMessage, shc, message, enabledExtensions));
	$init($SSLLogger);
	if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
		$SSLLogger::fine("Consuming ClientHello handshake message"_s, $$new($ObjectArray, {chm}));
	}
	shc->clientHelloVersion = chm->clientVersion;
	onClientHello(shc, chm);
}

void ClientHello$ClientHelloConsumer::onClientHello($ServerHandshakeContext* context, $ClientHello$ClientHelloMessage* clientHello) {
	$useLocalObjectStack();
	$init($SSLExtension);
	$var($SSLExtensionArray, extTypes, $new($SSLExtensionArray, {$SSLExtension::CH_SUPPORTED_VERSIONS}));
	$nc($nc(clientHello)->extensions)->consumeOnLoad(context, extTypes);
	$ProtocolVersion* negotiatedProtocol = nullptr;
	$var($SupportedVersionsExtension$CHSupportedVersionsSpec, svs, $cast($SupportedVersionsExtension$CHSupportedVersionsSpec, $nc($nc(context)->handshakeExtensions)->get($SSLExtension::CH_SUPPORTED_VERSIONS)));
	if (svs != nullptr) {
		negotiatedProtocol = negotiateProtocol(context, svs->requestedProtocols);
	} else {
		negotiatedProtocol = negotiateProtocol(context, clientHello->clientVersion);
	}
	$set(context, negotiatedProtocol, negotiatedProtocol);
	$init($SSLLogger);
	if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
		$SSLLogger::fine($$str({"Negotiated protocol version: "_s, $nc(negotiatedProtocol)->name$}), $$new($ObjectArray, 0));
	}
	if ($nc(negotiatedProtocol)->isDTLS) {
		if (negotiatedProtocol->useTLS13PlusSpec()) {
			$init($ClientHello);
			$nc($ClientHello::d13HandshakeConsumer)->consume(context, clientHello);
		} else {
			$init($ClientHello);
			$nc($ClientHello::d12HandshakeConsumer)->consume(context, clientHello);
		}
	} else if (negotiatedProtocol->useTLS13PlusSpec()) {
		$init($ClientHello);
		$nc($ClientHello::t13HandshakeConsumer)->consume(context, clientHello);
	} else {
		$init($ClientHello);
		$nc($ClientHello::t12HandshakeConsumer)->consume(context, clientHello);
	}
}

$ProtocolVersion* ClientHello$ClientHelloConsumer::negotiateProtocol($ServerHandshakeContext* context, int32_t clientHelloVersion) {
	$useLocalObjectStack();
	int32_t chv = clientHelloVersion;
	if ($nc($nc(context)->sslContext)->isDTLS()) {
		$init($ProtocolVersion);
		if (chv < $ProtocolVersion::DTLS12->id) {
			chv = $ProtocolVersion::DTLS12->id;
		}
	} else {
		$init($ProtocolVersion);
		if (chv > $ProtocolVersion::TLS12->id) {
			chv = $ProtocolVersion::TLS12->id;
		}
	}
	$ProtocolVersion* pv = $ProtocolVersion::selectedFrom(context->activeProtocols, chv);
	if (pv == nullptr || pv == $ProtocolVersion::NONE || pv == $ProtocolVersion::SSL20Hello) {
		$init($Alert);
		$throw($($nc(context->conContext)->fatal($Alert::PROTOCOL_VERSION, $$str({"Client requested protocol "_s, $($ProtocolVersion::nameOf(clientHelloVersion)), " is not enabled or supported in server context"_s}))));
	}
	return pv;
}

$ProtocolVersion* ClientHello$ClientHelloConsumer::negotiateProtocol($ServerHandshakeContext* context, $ints* clientSupportedVersions) {
	$useLocalObjectStack();
	{
		$var($Iterator, i$, $nc($nc(context)->activeProtocols)->iterator());
		for (; $nc(i$)->hasNext();) {
			$ProtocolVersion* spv = $cast($ProtocolVersion, i$->next());
			{
				$init($ProtocolVersion);
				if (spv == $ProtocolVersion::SSL20Hello) {
					continue;
				}
				{
					$var($ints, arr$, clientSupportedVersions);
					for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
						int32_t cpv = arr$->get(i$);
						{
							if (cpv == $ProtocolVersion::SSL20Hello->id) {
								continue;
							}
							if ($nc(spv)->id == cpv) {
								return spv;
							}
						}
					}
				}
			}
		}
	}
	$init($Alert);
	$throw($($nc(context->conContext)->fatal($Alert::PROTOCOL_VERSION, $$str({"The client supported protocol versions "_s, $($Arrays::toString($($ProtocolVersion::toStringArray(clientSupportedVersions)))), " are not accepted by server preferences "_s, context->activeProtocols}))));
}

ClientHello$ClientHelloConsumer::ClientHello$ClientHelloConsumer() {
}

$Class* ClientHello$ClientHelloConsumer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(ClientHello$ClientHelloConsumer, init$, void)},
		{"consume", "(Lsun/security/ssl/ConnectionContext;Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC, $virtualMethod(ClientHello$ClientHelloConsumer, consume, void, $ConnectionContext*, $ByteBuffer*), "java.io.IOException"},
		{"negotiateProtocol", "(Lsun/security/ssl/ServerHandshakeContext;I)Lsun/security/ssl/ProtocolVersion;", nullptr, $PRIVATE, $method(ClientHello$ClientHelloConsumer, negotiateProtocol, $ProtocolVersion*, $ServerHandshakeContext*, int32_t), "javax.net.ssl.SSLException"},
		{"negotiateProtocol", "(Lsun/security/ssl/ServerHandshakeContext;[I)Lsun/security/ssl/ProtocolVersion;", nullptr, $PRIVATE, $method(ClientHello$ClientHelloConsumer, negotiateProtocol, $ProtocolVersion*, $ServerHandshakeContext*, $ints*), "javax.net.ssl.SSLException"},
		{"onClientHello", "(Lsun/security/ssl/ServerHandshakeContext;Lsun/security/ssl/ClientHello$ClientHelloMessage;)V", nullptr, $PRIVATE, $method(ClientHello$ClientHelloConsumer, onClientHello, void, $ServerHandshakeContext*, $ClientHello$ClientHelloMessage*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.ClientHello$ClientHelloConsumer", "sun.security.ssl.ClientHello", "ClientHelloConsumer", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.ClientHello$ClientHelloConsumer",
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
		"sun.security.ssl.ClientHello"
	};
	$loadClass(ClientHello$ClientHelloConsumer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ClientHello$ClientHelloConsumer);
	});
	return class$;
}

$Class* ClientHello$ClientHelloConsumer::class$ = nullptr;

		} // ssl
	} // security
} // sun