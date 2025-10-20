#include <sun/security/ssl/ClientHello$T12ClientHelloConsumer.h>

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
#include <java/security/Principal.h>
#include <java/util/HashMap.h>
#include <java/util/List.h>
#include <javax/net/ssl/SSLException.h>
#include <javax/net/ssl/SSLPeerUnverifiedException.h>
#include <javax/net/ssl/SSLSessionContext.h>
#include <sun/security/ssl/Alert.h>
#include <sun/security/ssl/CipherSuite.h>
#include <sun/security/ssl/ClientAuthType.h>
#include <sun/security/ssl/ClientHello$ClientHelloMessage.h>
#include <sun/security/ssl/ClientHello.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/HandshakeProducer.h>
#include <sun/security/ssl/OutputRecord.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/RandomCookie.h>
#include <sun/security/ssl/SSLConfiguration.h>
#include <sun/security/ssl/SSLContextImpl.h>
#include <sun/security/ssl/SSLExtension.h>
#include <sun/security/ssl/SSLExtensions.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLHandshake.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/SSLSessionContextImpl.h>
#include <sun/security/ssl/SSLSessionImpl.h>
#include <sun/security/ssl/ServerHandshakeContext.h>
#include <sun/security/ssl/SessionId.h>
#include <sun/security/ssl/TransportContext.h>
#include <jcpp.h>

#undef CERTIFICATE
#undef CERTIFICATE_REQUEST
#undef CERTIFICATE_STATUS
#undef CH_SESSION_TICKET
#undef CLIENT_AUTH_REQUIRED
#undef CLIENT_HELLO
#undef FINISHED
#undef HANDSHAKE_FAILURE
#undef SERVER_HELLO
#undef SERVER_HELLO_DONE
#undef SERVER_KEY_EXCHANGE

using $SSLExtensionArray = $Array<::sun::security::ssl::SSLExtension>;
using $SSLHandshakeArray = $Array<::sun::security::ssl::SSLHandshake>;
using $Byte = ::java::lang::Byte;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Principal = ::java::security::Principal;
using $HashMap = ::java::util::HashMap;
using $List = ::java::util::List;
using $SSLException = ::javax::net::ssl::SSLException;
using $SSLPeerUnverifiedException = ::javax::net::ssl::SSLPeerUnverifiedException;
using $SSLSessionContext = ::javax::net::ssl::SSLSessionContext;
using $Alert = ::sun::security::ssl::Alert;
using $CipherSuite = ::sun::security::ssl::CipherSuite;
using $ClientAuthType = ::sun::security::ssl::ClientAuthType;
using $ClientHello = ::sun::security::ssl::ClientHello;
using $ClientHello$ClientHelloMessage = ::sun::security::ssl::ClientHello$ClientHelloMessage;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $HandshakeConsumer = ::sun::security::ssl::HandshakeConsumer;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $HandshakeProducer = ::sun::security::ssl::HandshakeProducer;
using $OutputRecord = ::sun::security::ssl::OutputRecord;
using $ProtocolVersion = ::sun::security::ssl::ProtocolVersion;
using $RandomCookie = ::sun::security::ssl::RandomCookie;
using $SSLConfiguration = ::sun::security::ssl::SSLConfiguration;
using $SSLContextImpl = ::sun::security::ssl::SSLContextImpl;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLExtensions = ::sun::security::ssl::SSLExtensions;
using $SSLHandshake = ::sun::security::ssl::SSLHandshake;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $SSLSessionContextImpl = ::sun::security::ssl::SSLSessionContextImpl;
using $SSLSessionImpl = ::sun::security::ssl::SSLSessionImpl;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;
using $SessionId = ::sun::security::ssl::SessionId;
using $TransportContext = ::sun::security::ssl::TransportContext;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _ClientHello$T12ClientHelloConsumer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(ClientHello$T12ClientHelloConsumer::*)()>(&ClientHello$T12ClientHelloConsumer::init$))},
	{"consume", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _ClientHello$T12ClientHelloConsumer_InnerClassesInfo_[] = {
	{"sun.security.ssl.ClientHello$T12ClientHelloConsumer", "sun.security.ssl.ClientHello", "T12ClientHelloConsumer", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _ClientHello$T12ClientHelloConsumer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.ClientHello$T12ClientHelloConsumer",
	"java.lang.Object",
	"sun.security.ssl.HandshakeConsumer",
	nullptr,
	_ClientHello$T12ClientHelloConsumer_MethodInfo_,
	nullptr,
	nullptr,
	_ClientHello$T12ClientHelloConsumer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.ClientHello"
};

$Object* allocate$ClientHello$T12ClientHelloConsumer($Class* clazz) {
	return $of($alloc(ClientHello$T12ClientHelloConsumer));
}

void ClientHello$T12ClientHelloConsumer::init$() {
}

void ClientHello$T12ClientHelloConsumer::consume($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$useLocalCurrentObjectStackCache();
	$var($ServerHandshakeContext, shc, $cast($ServerHandshakeContext, context));
	$var($ClientHello$ClientHelloMessage, clientHello, $cast($ClientHello$ClientHelloMessage, message));
	if ($nc($nc(shc)->conContext)->isNegotiated) {
		$init($HandshakeContext);
		if (!$nc(shc->conContext)->secureRenegotiation && !$HandshakeContext::allowUnsafeRenegotiation) {
			$init($Alert);
			$throw($($nc(shc->conContext)->fatal($Alert::HANDSHAKE_FAILURE, "Unsafe renegotiation is not allowed"_s)));
		}
		$init($ServerHandshakeContext);
		if ($ServerHandshakeContext::rejectClientInitiatedRenego && !shc->kickstartMessageDelivered) {
			$init($Alert);
			$throw($($nc(shc->conContext)->fatal($Alert::HANDSHAKE_FAILURE, "Client initiated renegotiation is not allowed"_s)));
		}
	}
	$init($SSLExtension);
	$var($SSLExtensionArray, ext, $new($SSLExtensionArray, {$SSLExtension::CH_SESSION_TICKET}));
	$nc($nc(clientHello)->extensions)->consumeOnLoad(shc, ext);
	if ($nc(clientHello->sessionId)->length() != 0 || $nc(shc)->statelessResumption) {
		$var($SSLSessionContextImpl, cache, $cast($SSLSessionContextImpl, $nc(shc->sslContext)->engineGetServerSessionContext()));
		$var($SSLSessionImpl, previous, nullptr);
		if (shc->statelessResumption) {
			$assign(previous, shc->resumingSession);
		} else {
			$assign(previous, $nc(cache)->get($($nc(clientHello->sessionId)->getId())));
		}
		bool resumingSession = (previous != nullptr) && previous->isRejoinable();
		if (!resumingSession) {
			$init($SSLLogger);
			if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake,verbose"_s)) {
				$SSLLogger::finest("Can\'t resume, the existing session is not rejoinable"_s, $$new($ObjectArray, 0));
			}
		}
		if (resumingSession) {
			$ProtocolVersion* sessionProtocol = previous->getProtocolVersion();
			if (sessionProtocol != shc->negotiatedProtocol) {
				resumingSession = false;
				$init($SSLLogger);
				if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake,verbose"_s)) {
					$SSLLogger::finest("Can\'t resume, not the same protocol version"_s, $$new($ObjectArray, 0));
				}
			}
		}
		$init($ClientAuthType);
		if (resumingSession && ($nc(shc->sslConfig)->clientAuthType == $ClientAuthType::CLIENT_AUTH_REQUIRED)) {
			try {
				previous->getPeerPrincipal();
			} catch ($SSLPeerUnverifiedException&) {
				$var($SSLPeerUnverifiedException, e, $catch());
				resumingSession = false;
				$init($SSLLogger);
				if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake,verbose"_s)) {
					$SSLLogger::finest("Can\'t resume, client authentication is required"_s, $$new($ObjectArray, 0));
				}
			}
		}
		if (resumingSession) {
			$CipherSuite* suite = previous->getSuite();
			bool var$0 = (!shc->isNegotiable(suite));
			if (var$0 || (!$nc(clientHello->cipherSuites)->contains(suite))) {
				resumingSession = false;
				$init($SSLLogger);
				if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake,verbose"_s)) {
					$SSLLogger::finest("Can\'t resume, the session cipher suite is absent"_s, $$new($ObjectArray, 0));
				}
			}
		}
		$var($String, identityAlg, $nc(shc->sslConfig)->identificationProtocol);
		if (resumingSession && identityAlg != nullptr) {
			$var($String, sessionIdentityAlg, previous->getIdentificationProtocol());
			if (!identityAlg->equalsIgnoreCase(sessionIdentityAlg)) {
				$init($SSLLogger);
				if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake,verbose"_s)) {
					$SSLLogger::finest($$str({"Can\'t resume, endpoint id algorithm does not match, requested: "_s, identityAlg, ", cached: "_s, sessionIdentityAlg}), $$new($ObjectArray, 0));
				}
				resumingSession = false;
			}
		}
		shc->isResumption = resumingSession;
		$set(shc, resumingSession, resumingSession ? previous : ($SSLSessionImpl*)nullptr);
		$init($SSLLogger);
		if (!resumingSession && $SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::fine("Session not resumed."_s, $$new($ObjectArray, 0));
		}
	}
	$set($nc(shc), clientHelloRandom, clientHello->clientRandom);
	$init($SSLHandshake);
	$var($SSLExtensionArray, extTypes, $nc(shc->sslConfig)->getExclusiveExtensions($SSLHandshake::CLIENT_HELLO, $($List::of($of($SSLExtension::CH_SESSION_TICKET)))));
	$nc(clientHello->extensions)->consumeOnLoad(shc, extTypes);
	if (!$nc(shc->conContext)->isNegotiated) {
		$set($nc(shc->conContext), protocolVersion, shc->negotiatedProtocol);
		$nc($nc(shc->conContext)->outputRecord)->setVersion(shc->negotiatedProtocol);
	}
	$nc(shc->handshakeProducers)->put($($Byte::valueOf($SSLHandshake::SERVER_HELLO->id)), $SSLHandshake::SERVER_HELLO);
	$var($SSLHandshakeArray, probableHandshakeMessages, $new($SSLHandshakeArray, {
		$SSLHandshake::SERVER_HELLO,
		$SSLHandshake::CERTIFICATE,
		$SSLHandshake::CERTIFICATE_STATUS,
		$SSLHandshake::SERVER_KEY_EXCHANGE,
		$SSLHandshake::CERTIFICATE_REQUEST,
		$SSLHandshake::SERVER_HELLO_DONE,
		$SSLHandshake::FINISHED
	}));
	{
		$var($SSLHandshakeArray, arr$, probableHandshakeMessages);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$SSLHandshake* hs = arr$->get(i$);
			{
				$var($HandshakeProducer, handshakeProducer, $cast($HandshakeProducer, $nc(shc->handshakeProducers)->remove($($Byte::valueOf($nc(hs)->id)))));
				if (handshakeProducer != nullptr) {
					handshakeProducer->produce(context, clientHello);
				}
			}
		}
	}
}

ClientHello$T12ClientHelloConsumer::ClientHello$T12ClientHelloConsumer() {
}

$Class* ClientHello$T12ClientHelloConsumer::load$($String* name, bool initialize) {
	$loadClass(ClientHello$T12ClientHelloConsumer, name, initialize, &_ClientHello$T12ClientHelloConsumer_ClassInfo_, allocate$ClientHello$T12ClientHelloConsumer);
	return class$;
}

$Class* ClientHello$T12ClientHelloConsumer::class$ = nullptr;

		} // ssl
	} // security
} // sun