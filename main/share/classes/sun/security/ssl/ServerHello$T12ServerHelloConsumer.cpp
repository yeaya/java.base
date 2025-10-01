#include <sun/security/ssl/ServerHello$T12ServerHelloConsumer.h>

#include <java/lang/Array.h>
#include <java/lang/Byte.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/SecureRandom.h>
#include <java/util/HashMap.h>
#include <java/util/LinkedHashMap.h>
#include <java/util/Map.h>
#include <javax/crypto/SecretKey.h>
#include <javax/net/ssl/SSLException.h>
#include <sun/security/ssl/Alert.h>
#include <sun/security/ssl/ChangeCipherSpec.h>
#include <sun/security/ssl/CipherSuite$KeyExchange.h>
#include <sun/security/ssl/CipherSuite.h>
#include <sun/security/ssl/ClientHandshakeContext.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/ContentType.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/HandshakeHash.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/RandomCookie.h>
#include <sun/security/ssl/SSLConfiguration.h>
#include <sun/security/ssl/SSLConsumer.h>
#include <sun/security/ssl/SSLContextImpl.h>
#include <sun/security/ssl/SSLExtension.h>
#include <sun/security/ssl/SSLExtensions.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLHandshake.h>
#include <sun/security/ssl/SSLKeyDerivation.h>
#include <sun/security/ssl/SSLKeyExchange.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/SSLSessionImpl.h>
#include <sun/security/ssl/SSLTrafficKeyDerivation.h>
#include <sun/security/ssl/ServerHello$ServerHelloMessage.h>
#include <sun/security/ssl/ServerHello.h>
#include <sun/security/ssl/SessionId.h>
#include <sun/security/ssl/TransportContext.h>
#include <jcpp.h>

#undef SERVER_HELLO_DONE
#undef PROTOCOL_VERSION
#undef SERVER_HELLO
#undef INTERNAL_ERROR
#undef CHANGE_CIPHER_SPEC
#undef SH_RENEGOTIATION_INFO
#undef NEW_SESSION_TICKET
#undef FINISHED

using $SSLExtensionArray = $Array<::sun::security::ssl::SSLExtension>;
using $SSLHandshakeArray = $Array<::sun::security::ssl::SSLHandshake>;
using $Byte = ::java::lang::Byte;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $SecureRandom = ::java::security::SecureRandom;
using $HashMap = ::java::util::HashMap;
using $LinkedHashMap = ::java::util::LinkedHashMap;
using $Map = ::java::util::Map;
using $SecretKey = ::javax::crypto::SecretKey;
using $SSLException = ::javax::net::ssl::SSLException;
using $Alert = ::sun::security::ssl::Alert;
using $ChangeCipherSpec = ::sun::security::ssl::ChangeCipherSpec;
using $CipherSuite = ::sun::security::ssl::CipherSuite;
using $CipherSuite$KeyExchange = ::sun::security::ssl::CipherSuite$KeyExchange;
using $ClientHandshakeContext = ::sun::security::ssl::ClientHandshakeContext;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $ContentType = ::sun::security::ssl::ContentType;
using $HandshakeConsumer = ::sun::security::ssl::HandshakeConsumer;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $HandshakeHash = ::sun::security::ssl::HandshakeHash;
using $ProtocolVersion = ::sun::security::ssl::ProtocolVersion;
using $RandomCookie = ::sun::security::ssl::RandomCookie;
using $SSLConfiguration = ::sun::security::ssl::SSLConfiguration;
using $SSLConsumer = ::sun::security::ssl::SSLConsumer;
using $SSLContextImpl = ::sun::security::ssl::SSLContextImpl;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLExtensions = ::sun::security::ssl::SSLExtensions;
using $SSLHandshake = ::sun::security::ssl::SSLHandshake;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLKeyDerivation = ::sun::security::ssl::SSLKeyDerivation;
using $SSLKeyExchange = ::sun::security::ssl::SSLKeyExchange;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $SSLSessionImpl = ::sun::security::ssl::SSLSessionImpl;
using $SSLTrafficKeyDerivation = ::sun::security::ssl::SSLTrafficKeyDerivation;
using $ServerHello = ::sun::security::ssl::ServerHello;
using $ServerHello$ServerHelloMessage = ::sun::security::ssl::ServerHello$ServerHelloMessage;
using $SessionId = ::sun::security::ssl::SessionId;
using $TransportContext = ::sun::security::ssl::TransportContext;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _ServerHello$T12ServerHelloConsumer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(ServerHello$T12ServerHelloConsumer::*)()>(&ServerHello$T12ServerHelloConsumer::init$))},
	{"consume", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _ServerHello$T12ServerHelloConsumer_InnerClassesInfo_[] = {
	{"sun.security.ssl.ServerHello$T12ServerHelloConsumer", "sun.security.ssl.ServerHello", "T12ServerHelloConsumer", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _ServerHello$T12ServerHelloConsumer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.ServerHello$T12ServerHelloConsumer",
	"java.lang.Object",
	"sun.security.ssl.HandshakeConsumer",
	nullptr,
	_ServerHello$T12ServerHelloConsumer_MethodInfo_,
	nullptr,
	nullptr,
	_ServerHello$T12ServerHelloConsumer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.ServerHello"
};

$Object* allocate$ServerHello$T12ServerHelloConsumer($Class* clazz) {
	return $of($alloc(ServerHello$T12ServerHelloConsumer));
}

void ServerHello$T12ServerHelloConsumer::init$() {
}

void ServerHello$T12ServerHelloConsumer::consume($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$var($ClientHandshakeContext, chc, $cast($ClientHandshakeContext, context));
	$var($ServerHello$ServerHelloMessage, serverHello, $cast($ServerHello$ServerHelloMessage, message));
	if (!$nc(chc)->isNegotiable($nc(serverHello)->serverVersion)) {
		$init($Alert);
		$throw($($nc(chc->conContext)->fatal($Alert::PROTOCOL_VERSION, $$str({"Server chose "_s, $nc(serverHello)->serverVersion, ", but that protocol version is not enabled or not supported by the client."_s}))));
	}
	$set($nc(chc), negotiatedCipherSuite, $nc(serverHello)->cipherSuite);
	$nc(chc->handshakeHash)->determine(chc->negotiatedProtocol, chc->negotiatedCipherSuite);
	$set(chc, serverHelloRandom, serverHello->serverRandom);
	if ($nc(chc->negotiatedCipherSuite)->keyExchange == nullptr) {
		$init($Alert);
		$throw($($nc(chc->conContext)->fatal($Alert::PROTOCOL_VERSION, $$str({"TLS 1.2 or prior version does not support the server cipher suite: "_s, $nc(chc->negotiatedCipherSuite)->name$}))));
	}
	$init($SSLExtension);
	$var($SSLExtensionArray, extTypes, $new($SSLExtensionArray, {$SSLExtension::SH_RENEGOTIATION_INFO}));
	$nc(serverHello->extensions)->consumeOnLoad(chc, extTypes);
	if (chc->resumingSession != nullptr) {
		if ($nc(serverHello->sessionId)->equals($($nc(chc->resumingSession)->getSessionId()))) {
			$CipherSuite* sessionSuite = $nc(chc->resumingSession)->getSuite();
			if (chc->negotiatedCipherSuite != sessionSuite) {
				$init($Alert);
				$throw($($nc(chc->conContext)->fatal($Alert::PROTOCOL_VERSION, "Server returned wrong cipher suite for session"_s)));
			}
			$ProtocolVersion* sessionVersion = $nc(chc->resumingSession)->getProtocolVersion();
			if (chc->negotiatedProtocol != sessionVersion) {
				$init($Alert);
				$throw($($nc(chc->conContext)->fatal($Alert::PROTOCOL_VERSION, "Server resumed with wrong protocol version"_s)));
			}
			chc->isResumption = true;
			$nc(chc->resumingSession)->setAsSessionResumption(true);
			$set(chc, handshakeSession, chc->resumingSession);
		} else {
			if (chc->resumingSession != nullptr) {
				$nc(chc->resumingSession)->invalidate();
				$set(chc, resumingSession, nullptr);
			}
			chc->isResumption = false;
			if (!$nc(chc->sslConfig)->enableSessionCreation) {
				$init($Alert);
				$throw($($nc(chc->conContext)->fatal($Alert::PROTOCOL_VERSION, "New session creation is disabled"_s)));
			}
		}
	}
	$init($SSLHandshake);
	$assign(extTypes, $nc(chc->sslConfig)->getEnabledExtensions($SSLHandshake::SERVER_HELLO));
	$nc(serverHello->extensions)->consumeOnLoad(chc, extTypes);
	if (!chc->isResumption) {
		if (chc->resumingSession != nullptr) {
			$nc(chc->resumingSession)->invalidate();
			$set(chc, resumingSession, nullptr);
		}
		if (!$nc(chc->sslConfig)->enableSessionCreation) {
			$init($Alert);
			$throw($($nc(chc->conContext)->fatal($Alert::PROTOCOL_VERSION, "New session creation is disabled"_s)));
		}
		if ($nc(serverHello->sessionId)->length() == 0 && chc->statelessResumption) {
			$var($SessionId, newId, $new($SessionId, true, $($nc(chc->sslContext)->getSecureRandom())));
			$set(chc, handshakeSession, $new($SSLSessionImpl, chc, chc->negotiatedCipherSuite, newId));
			$init($SSLLogger);
			if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
				$SSLLogger::fine($$str({"Locally assigned Session Id: "_s, $(newId->toString())}), $$new($ObjectArray, 0));
			}
		} else {
			$set(chc, handshakeSession, $new($SSLSessionImpl, chc, chc->negotiatedCipherSuite, serverHello->sessionId));
		}
		$nc(chc->handshakeSession)->setMaximumPacketSize($nc(chc->sslConfig)->maximumPacketSize);
	}
	$nc(serverHello->extensions)->consumeOnTrade(chc, extTypes);
	if (chc->isResumption) {
		$SSLTrafficKeyDerivation* kdg = $SSLTrafficKeyDerivation::valueOf(chc->negotiatedProtocol);
		if (kdg == nullptr) {
			$init($Alert);
			$throw($($nc(chc->conContext)->fatal($Alert::INTERNAL_ERROR, $$str({"Not supported key derivation: "_s, chc->negotiatedProtocol}))));
		} else {
			$set(chc, handshakeKeyDerivation, $nc(kdg)->createKeyDerivation(chc, $($nc(chc->resumingSession)->getMasterSecret())));
		}
		if (chc->statelessResumption) {
			$nc(chc->handshakeConsumers)->putIfAbsent($($Byte::valueOf($SSLHandshake::NEW_SESSION_TICKET->id)), $SSLHandshake::NEW_SESSION_TICKET);
		}
		$init($ContentType);
		$init($ChangeCipherSpec);
		$nc($nc(chc->conContext)->consumers)->putIfAbsent($($Byte::valueOf($ContentType::CHANGE_CIPHER_SPEC->id)), $ChangeCipherSpec::t10Consumer);
		$nc(chc->handshakeConsumers)->put($($Byte::valueOf($SSLHandshake::FINISHED->id)), $SSLHandshake::FINISHED);
	} else {
		$var($SSLKeyExchange, ke, $SSLKeyExchange::valueOf($nc(chc->negotiatedCipherSuite)->keyExchange, chc->negotiatedProtocol));
		$set(chc, handshakeKeyExchange, ke);
		if (ke != nullptr) {
			{
				$var($SSLHandshakeArray, arr$, ke->getRelatedHandshakers(chc));
				int32_t len$ = $nc(arr$)->length;
				int32_t i$ = 0;
				for (; i$ < len$; ++i$) {
					$SSLHandshake* handshake = arr$->get(i$);
					{
						$nc(chc->handshakeConsumers)->put($($Byte::valueOf($nc(handshake)->id)), handshake);
					}
				}
			}
		}
		$nc(chc->handshakeConsumers)->put($($Byte::valueOf($SSLHandshake::SERVER_HELLO_DONE->id)), $SSLHandshake::SERVER_HELLO_DONE);
	}
}

ServerHello$T12ServerHelloConsumer::ServerHello$T12ServerHelloConsumer() {
}

$Class* ServerHello$T12ServerHelloConsumer::load$($String* name, bool initialize) {
	$loadClass(ServerHello$T12ServerHelloConsumer, name, initialize, &_ServerHello$T12ServerHelloConsumer_ClassInfo_, allocate$ServerHello$T12ServerHelloConsumer);
	return class$;
}

$Class* ServerHello$T12ServerHelloConsumer::class$ = nullptr;

		} // ssl
	} // security
} // sun