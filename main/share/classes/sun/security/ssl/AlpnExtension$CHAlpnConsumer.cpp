#include <sun/security/ssl/AlpnExtension$CHAlpnConsumer.h>

#include <java/nio/ByteBuffer.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/function/BiFunction.h>
#include <javax/net/ssl/SSLEngine.h>
#include <javax/net/ssl/SSLException.h>
#include <sun/security/ssl/Alert.h>
#include <sun/security/ssl/AlpnExtension$AlpnSpec.h>
#include <sun/security/ssl/AlpnExtension.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/SSLConfiguration.h>
#include <sun/security/ssl/SSLExtension.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/SSLTransport.h>
#include <sun/security/ssl/ServerHandshakeContext.h>
#include <sun/security/ssl/TransportContext.h>
#include <jcpp.h>

#undef CH_ALPN
#undef NO_APPLICATION_PROTOCOL

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $SSLEngine = ::javax::net::ssl::SSLEngine;
using $Alert = ::sun::security::ssl::Alert;
using $AlpnExtension$AlpnSpec = ::sun::security::ssl::AlpnExtension$AlpnSpec;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $SSLConfiguration = ::sun::security::ssl::SSLConfiguration;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;
using $TransportContext = ::sun::security::ssl::TransportContext;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _AlpnExtension$CHAlpnConsumer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(AlpnExtension$CHAlpnConsumer::*)()>(&AlpnExtension$CHAlpnConsumer::init$))},
	{"consume", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _AlpnExtension$CHAlpnConsumer_InnerClassesInfo_[] = {
	{"sun.security.ssl.AlpnExtension$CHAlpnConsumer", "sun.security.ssl.AlpnExtension", "CHAlpnConsumer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.SSLExtension$ExtensionConsumer", "sun.security.ssl.SSLExtension", "ExtensionConsumer", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _AlpnExtension$CHAlpnConsumer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.AlpnExtension$CHAlpnConsumer",
	"java.lang.Object",
	"sun.security.ssl.SSLExtension$ExtensionConsumer",
	nullptr,
	_AlpnExtension$CHAlpnConsumer_MethodInfo_,
	nullptr,
	nullptr,
	_AlpnExtension$CHAlpnConsumer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.AlpnExtension"
};

$Object* allocate$AlpnExtension$CHAlpnConsumer($Class* clazz) {
	return $of($alloc(AlpnExtension$CHAlpnConsumer));
}

void AlpnExtension$CHAlpnConsumer::init$() {
}

void AlpnExtension$CHAlpnConsumer::consume($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message, $ByteBuffer* buffer) {
	$useLocalCurrentObjectStackCache();
	$var($ServerHandshakeContext, shc, $cast($ServerHandshakeContext, context));
	$init($SSLExtension);
	if (!$nc($nc(shc)->sslConfig)->isAvailable($SSLExtension::CH_ALPN)) {
		$set(shc, applicationProtocol, ""_s);
		$set($nc(shc->conContext), applicationProtocol, ""_s);
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::info($$str({"Ignore server unavailable extension: "_s, $SSLExtension::CH_ALPN->name$}), $$new($ObjectArray, 0));
		}
		return;
	}
	bool noAPSelector = false;
	if ($instanceOf($SSLEngine, $nc($nc(shc)->conContext)->transport)) {
		noAPSelector = ($nc(shc->sslConfig)->engineAPSelector == nullptr);
	} else {
		noAPSelector = ($nc(shc->sslConfig)->socketAPSelector == nullptr);
	}
	bool noAlpnProtocols = $nc($nc(shc)->sslConfig)->applicationProtocols == nullptr || $nc($nc($nc(shc)->sslConfig)->applicationProtocols)->length == 0;
	if (noAPSelector && noAlpnProtocols) {
		$set(shc, applicationProtocol, ""_s);
		$set($nc(shc->conContext), applicationProtocol, ""_s);
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::fine($$str({"Ignore server unenabled extension: "_s, $SSLExtension::CH_ALPN->name$}), $$new($ObjectArray, 0));
		}
		return;
	}
	$var($AlpnExtension$AlpnSpec, spec, $new($AlpnExtension$AlpnSpec, shc, buffer));
	if (noAPSelector) {
		$var($List, protocolNames, spec->applicationProtocols);
		bool matched = false;
		{
			$var($StringArray, arr$, $nc(shc->sslConfig)->applicationProtocols);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($String, ap, arr$->get(i$));
				{
					if ($nc(protocolNames)->contains(ap)) {
						$set(shc, applicationProtocol, ap);
						$set($nc(shc->conContext), applicationProtocol, ap);
						matched = true;
						break;
					}
				}
			}
		}
		if (!matched) {
			$init($Alert);
			$throw($($nc(shc->conContext)->fatal($Alert::NO_APPLICATION_PROTOCOL, "No matching application layer protocol values"_s)));
		}
	}
	$nc(shc->handshakeExtensions)->put($SSLExtension::CH_ALPN, spec);
}

AlpnExtension$CHAlpnConsumer::AlpnExtension$CHAlpnConsumer() {
}

$Class* AlpnExtension$CHAlpnConsumer::load$($String* name, bool initialize) {
	$loadClass(AlpnExtension$CHAlpnConsumer, name, initialize, &_AlpnExtension$CHAlpnConsumer_ClassInfo_, allocate$AlpnExtension$CHAlpnConsumer);
	return class$;
}

$Class* AlpnExtension$CHAlpnConsumer::class$ = nullptr;

		} // ssl
	} // security
} // sun