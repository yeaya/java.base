#include <sun/security/ssl/ServerHello$T13HelloRetryRequestProducer.h>

#include <java/util/HashMap.h>
#include <java/util/LinkedHashMap.h>
#include <java/util/Map.h>
#include <javax/net/ssl/SSLException.h>
#include <sun/security/ssl/Alert.h>
#include <sun/security/ssl/CipherSuite.h>
#include <sun/security/ssl/ClientHello$ClientHelloMessage.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/HandshakeHash.h>
#include <sun/security/ssl/HandshakeOutStream.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/RandomCookie.h>
#include <sun/security/ssl/SSLConfiguration.h>
#include <sun/security/ssl/SSLExtension.h>
#include <sun/security/ssl/SSLExtensions.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLHandshake.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/ServerHandshakeContext.h>
#include <sun/security/ssl/ServerHello$ServerHelloMessage.h>
#include <sun/security/ssl/ServerHello$T13ServerHelloProducer.h>
#include <sun/security/ssl/ServerHello.h>
#include <sun/security/ssl/SessionId.h>
#include <sun/security/ssl/TransportContext.h>
#include <jcpp.h>

#undef CLIENT_HELLO
#undef HANDSHAKE_FAILURE
#undef HELLO_RETRY_REQUEST
#undef TLS12

using $SSLExtensionArray = $Array<::sun::security::ssl::SSLExtension>;
using $Byte = ::java::lang::Byte;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LinkedHashMap = ::java::util::LinkedHashMap;
using $Map = ::java::util::Map;
using $Alert = ::sun::security::ssl::Alert;
using $CipherSuite = ::sun::security::ssl::CipherSuite;
using $ClientHello$ClientHelloMessage = ::sun::security::ssl::ClientHello$ClientHelloMessage;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $HandshakeHash = ::sun::security::ssl::HandshakeHash;
using $HandshakeOutStream = ::sun::security::ssl::HandshakeOutStream;
using $ProtocolVersion = ::sun::security::ssl::ProtocolVersion;
using $RandomCookie = ::sun::security::ssl::RandomCookie;
using $SSLConfiguration = ::sun::security::ssl::SSLConfiguration;
using $SSLExtensions = ::sun::security::ssl::SSLExtensions;
using $SSLHandshake = ::sun::security::ssl::SSLHandshake;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;
using $ServerHello$ServerHelloMessage = ::sun::security::ssl::ServerHello$ServerHelloMessage;
using $ServerHello$T13ServerHelloProducer = ::sun::security::ssl::ServerHello$T13ServerHelloProducer;
using $TransportContext = ::sun::security::ssl::TransportContext;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _ServerHello$T13HelloRetryRequestProducer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(ServerHello$T13HelloRetryRequestProducer::*)()>(&ServerHello$T13HelloRetryRequestProducer::init$))},
	{"produce", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)[B", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _ServerHello$T13HelloRetryRequestProducer_InnerClassesInfo_[] = {
	{"sun.security.ssl.ServerHello$T13HelloRetryRequestProducer", "sun.security.ssl.ServerHello", "T13HelloRetryRequestProducer", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _ServerHello$T13HelloRetryRequestProducer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.ServerHello$T13HelloRetryRequestProducer",
	"java.lang.Object",
	"sun.security.ssl.HandshakeProducer",
	nullptr,
	_ServerHello$T13HelloRetryRequestProducer_MethodInfo_,
	nullptr,
	nullptr,
	_ServerHello$T13HelloRetryRequestProducer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.ServerHello"
};

$Object* allocate$ServerHello$T13HelloRetryRequestProducer($Class* clazz) {
	return $of($alloc(ServerHello$T13HelloRetryRequestProducer));
}

void ServerHello$T13HelloRetryRequestProducer::init$() {
}

$bytes* ServerHello$T13HelloRetryRequestProducer::produce($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$useLocalCurrentObjectStackCache();
	$var($ServerHandshakeContext, shc, $cast($ServerHandshakeContext, context));
	$var($ClientHello$ClientHelloMessage, clientHello, $cast($ClientHello$ClientHelloMessage, message));
	$CipherSuite* cipherSuite = $ServerHello$T13ServerHelloProducer::chooseCipherSuite(shc, clientHello);
	if (cipherSuite == nullptr) {
		$init($Alert);
		$throw($($nc($nc(shc)->conContext)->fatal($Alert::HANDSHAKE_FAILURE, "no cipher suites in common for hello retry request"_s)));
	}
	$init($ProtocolVersion);
	$init($RandomCookie);
	$var($ServerHello$ServerHelloMessage, hhrm, $new($ServerHello$ServerHelloMessage, shc, $ProtocolVersion::TLS12, $nc(clientHello)->sessionId, cipherSuite, $RandomCookie::hrrRandom, clientHello));
	$set($nc(shc), negotiatedCipherSuite, cipherSuite);
	$nc(shc->handshakeHash)->determine(shc->negotiatedProtocol, shc->negotiatedCipherSuite);
	$init($SSLHandshake);
	$var($SSLExtensionArray, serverHelloExtensions, $nc(shc->sslConfig)->getEnabledExtensions($SSLHandshake::HELLO_RETRY_REQUEST, shc->negotiatedProtocol));
	$nc(hhrm->extensions)->produce(shc, serverHelloExtensions);
	$init($SSLLogger);
	if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
		$SSLLogger::fine("Produced HelloRetryRequest handshake message"_s, $$new($ObjectArray, {$of(hhrm)}));
	}
	hhrm->write(shc->handshakeOutput);
	$nc(shc->handshakeOutput)->flush();
	$nc(shc->handshakeHash)->finish();
	$nc(shc->handshakeExtensions)->clear();
	$nc(shc->handshakeConsumers)->put($($Byte::valueOf($SSLHandshake::CLIENT_HELLO->id)), $SSLHandshake::CLIENT_HELLO);
	return nullptr;
}

ServerHello$T13HelloRetryRequestProducer::ServerHello$T13HelloRetryRequestProducer() {
}

$Class* ServerHello$T13HelloRetryRequestProducer::load$($String* name, bool initialize) {
	$loadClass(ServerHello$T13HelloRetryRequestProducer, name, initialize, &_ServerHello$T13HelloRetryRequestProducer_ClassInfo_, allocate$ServerHello$T13HelloRetryRequestProducer);
	return class$;
}

$Class* ServerHello$T13HelloRetryRequestProducer::class$ = nullptr;

		} // ssl
	} // security
} // sun