#include <sun/security/ssl/AlpnExtension$SHAlpnProducer.h>

#include <java/nio/ByteBuffer.h>
#include <java/nio/charset/Charset.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/function/BiFunction.h>
#include <javax/net/ssl/SSLEngine.h>
#include <javax/net/ssl/SSLException.h>
#include <javax/net/ssl/SSLSocket.h>
#include <sun/security/ssl/Alert.h>
#include <sun/security/ssl/AlpnExtension$AlpnSpec.h>
#include <sun/security/ssl/AlpnExtension.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/Record.h>
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
#undef SH_ALPN

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $BiFunction = ::java::util::function::BiFunction;
using $SSLEngine = ::javax::net::ssl::SSLEngine;
using $SSLSocket = ::javax::net::ssl::SSLSocket;
using $Alert = ::sun::security::ssl::Alert;
using $AlpnExtension = ::sun::security::ssl::AlpnExtension;
using $AlpnExtension$AlpnSpec = ::sun::security::ssl::AlpnExtension$AlpnSpec;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $Record = ::sun::security::ssl::Record;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;
using $TransportContext = ::sun::security::ssl::TransportContext;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _AlpnExtension$SHAlpnProducer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(AlpnExtension$SHAlpnProducer, init$, void)},
	{"produce", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)[B", nullptr, $PUBLIC, $virtualMethod(AlpnExtension$SHAlpnProducer, produce, $bytes*, $ConnectionContext*, $SSLHandshake$HandshakeMessage*), "java.io.IOException"},
	{}
};

$InnerClassInfo _AlpnExtension$SHAlpnProducer_InnerClassesInfo_[] = {
	{"sun.security.ssl.AlpnExtension$SHAlpnProducer", "sun.security.ssl.AlpnExtension", "SHAlpnProducer", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _AlpnExtension$SHAlpnProducer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.AlpnExtension$SHAlpnProducer",
	"java.lang.Object",
	"sun.security.ssl.HandshakeProducer",
	nullptr,
	_AlpnExtension$SHAlpnProducer_MethodInfo_,
	nullptr,
	nullptr,
	_AlpnExtension$SHAlpnProducer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.AlpnExtension"
};

$Object* allocate$AlpnExtension$SHAlpnProducer($Class* clazz) {
	return $of($alloc(AlpnExtension$SHAlpnProducer));
}

void AlpnExtension$SHAlpnProducer::init$() {
}

$bytes* AlpnExtension$SHAlpnProducer::produce($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$useLocalCurrentObjectStackCache();
	$var($ServerHandshakeContext, shc, $cast($ServerHandshakeContext, context));
	$init($SSLExtension);
	$var($AlpnExtension$AlpnSpec, requestedAlps, $cast($AlpnExtension$AlpnSpec, $nc($nc(shc)->handshakeExtensions)->get($SSLExtension::CH_ALPN)));
	if (requestedAlps == nullptr) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::fine($$str({"Ignore unavailable extension: "_s, $SSLExtension::SH_ALPN->name$}), $$new($ObjectArray, 0));
		}
		$set(shc, applicationProtocol, ""_s);
		$set($nc(shc->conContext), applicationProtocol, ""_s);
		return nullptr;
	}
	$var($List, alps, $nc(requestedAlps)->applicationProtocols);
	if ($instanceOf($SSLEngine, $nc(shc->conContext)->transport)) {
		if ($nc(shc->sslConfig)->engineAPSelector != nullptr) {
			$var($SSLEngine, engine, $cast($SSLEngine, $nc(shc->conContext)->transport));
			$set(shc, applicationProtocol, $cast($String, $nc($nc(shc->sslConfig)->engineAPSelector)->apply(engine, alps)));
			bool var$0 = (shc->applicationProtocol == nullptr);
			if (!var$0) {
				bool var$1 = !$nc(shc->applicationProtocol)->isEmpty();
				var$0 = (var$1 && !$nc(alps)->contains(shc->applicationProtocol));
			}
			if (var$0) {
				$init($Alert);
				$throw($($nc(shc->conContext)->fatal($Alert::NO_APPLICATION_PROTOCOL, "No matching application layer protocol values"_s)));
			}
		}
	} else if ($nc(shc->sslConfig)->socketAPSelector != nullptr) {
		$var($SSLSocket, socket, $cast($SSLSocket, $nc(shc->conContext)->transport));
		$set(shc, applicationProtocol, $cast($String, $nc($nc(shc->sslConfig)->socketAPSelector)->apply(socket, alps)));
		bool var$2 = (shc->applicationProtocol == nullptr);
		if (!var$2) {
			bool var$3 = !$nc(shc->applicationProtocol)->isEmpty();
			var$2 = (var$3 && !$nc(alps)->contains(shc->applicationProtocol));
		}
		if (var$2) {
			$init($Alert);
			$throw($($nc(shc->conContext)->fatal($Alert::NO_APPLICATION_PROTOCOL, "No matching application layer protocol values"_s)));
		}
	}
	if ((shc->applicationProtocol == nullptr) || ($nc(shc->applicationProtocol)->isEmpty())) {
		$set(shc, applicationProtocol, ""_s);
		$set($nc(shc->conContext), applicationProtocol, ""_s);
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::warning("Ignore, no negotiated application layer protocol"_s, $$new($ObjectArray, 0));
		}
		return nullptr;
	}
	$init($AlpnExtension);
	$var($bytes, bytes, $nc(shc->applicationProtocol)->getBytes($AlpnExtension::alpnCharset));
	int32_t listLen = bytes->length + 1;
	$var($bytes, extData, $new($bytes, listLen + 2));
	$var($ByteBuffer, m, $ByteBuffer::wrap(extData));
	$Record::putInt16(m, listLen);
	$Record::putBytes8(m, bytes);
	$set($nc(shc->conContext), applicationProtocol, shc->applicationProtocol);
	$nc(shc->handshakeExtensions)->remove($SSLExtension::CH_ALPN);
	return extData;
}

AlpnExtension$SHAlpnProducer::AlpnExtension$SHAlpnProducer() {
}

$Class* AlpnExtension$SHAlpnProducer::load$($String* name, bool initialize) {
	$loadClass(AlpnExtension$SHAlpnProducer, name, initialize, &_AlpnExtension$SHAlpnProducer_ClassInfo_, allocate$AlpnExtension$SHAlpnProducer);
	return class$;
}

$Class* AlpnExtension$SHAlpnProducer::class$ = nullptr;

		} // ssl
	} // security
} // sun