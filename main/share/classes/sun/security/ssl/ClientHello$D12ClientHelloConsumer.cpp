#include <sun/security/ssl/ClientHello$D12ClientHelloConsumer.h>

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
#include <sun/security/ssl/HelloCookieManager.h>
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
#undef DTLS10
#undef FINISHED
#undef HANDSHAKE_FAILURE
#undef HELLO_VERIFY_REQUEST
#undef SERVER_HELLO
#undef SERVER_HELLO_DONE
#undef SERVER_KEY_EXCHANGE

using $SSLExtensionArray = $Array<::sun::security::ssl::SSLExtension>;
using $SSLHandshakeArray = $Array<::sun::security::ssl::SSLHandshake>;
using $Byte = ::java::lang::Byte;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HashMap = ::java::util::HashMap;
using $List = ::java::util::List;
using $SSLPeerUnverifiedException = ::javax::net::ssl::SSLPeerUnverifiedException;
using $Alert = ::sun::security::ssl::Alert;
using $CipherSuite = ::sun::security::ssl::CipherSuite;
using $ClientAuthType = ::sun::security::ssl::ClientAuthType;
using $ClientHello$ClientHelloMessage = ::sun::security::ssl::ClientHello$ClientHelloMessage;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $HandshakeProducer = ::sun::security::ssl::HandshakeProducer;
using $HelloCookieManager = ::sun::security::ssl::HelloCookieManager;
using $OutputRecord = ::sun::security::ssl::OutputRecord;
using $ProtocolVersion = ::sun::security::ssl::ProtocolVersion;
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

$MethodInfo _ClientHello$D12ClientHelloConsumer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(ClientHello$D12ClientHelloConsumer, init$, void)},
	{"consume", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)V", nullptr, $PUBLIC, $virtualMethod(ClientHello$D12ClientHelloConsumer, consume, void, $ConnectionContext*, $SSLHandshake$HandshakeMessage*), "java.io.IOException"},
	{}
};

$InnerClassInfo _ClientHello$D12ClientHelloConsumer_InnerClassesInfo_[] = {
	{"sun.security.ssl.ClientHello$D12ClientHelloConsumer", "sun.security.ssl.ClientHello", "D12ClientHelloConsumer", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _ClientHello$D12ClientHelloConsumer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.ClientHello$D12ClientHelloConsumer",
	"java.lang.Object",
	"sun.security.ssl.HandshakeConsumer",
	nullptr,
	_ClientHello$D12ClientHelloConsumer_MethodInfo_,
	nullptr,
	nullptr,
	_ClientHello$D12ClientHelloConsumer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.ClientHello"
};

$Object* allocate$ClientHello$D12ClientHelloConsumer($Class* clazz) {
	return $of($alloc(ClientHello$D12ClientHelloConsumer));
}

void ClientHello$D12ClientHelloConsumer::init$() {
}

void ClientHello$D12ClientHelloConsumer::consume($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
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
	if ($nc($nc(clientHello)->sessionId)->length() != 0) {
		$var($SSLSessionContextImpl, cache, $cast($SSLSessionContextImpl, $nc($nc(shc)->sslContext)->engineGetServerSessionContext()));
		$init($SSLExtension);
		$var($SSLExtensionArray, ext, $new($SSLExtensionArray, {$SSLExtension::CH_SESSION_TICKET}));
		$nc(clientHello->extensions)->consumeOnLoad(shc, ext);
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
			} catch ($SSLPeerUnverifiedException& e) {
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
		shc->isResumption = resumingSession;
		$set(shc, resumingSession, resumingSession ? previous : ($SSLSessionImpl*)nullptr);
	}
	$init($ProtocolVersion);
	$var($HelloCookieManager, hcm, $nc($nc(shc)->sslContext)->getHelloCookieManager($ProtocolVersion::DTLS10));
	if (!shc->isResumption && !$nc(hcm)->isCookieValid(shc, clientHello, $nc(clientHello)->cookie)) {
		$init($SSLHandshake);
		$nc(shc->handshakeProducers)->put($($Byte::valueOf($SSLHandshake::HELLO_VERIFY_REQUEST->id)), $SSLHandshake::HELLO_VERIFY_REQUEST);
		$SSLHandshake::HELLO_VERIFY_REQUEST->produce(context, clientHello);
		return;
	}
	$set(shc, clientHelloRandom, $nc(clientHello)->clientRandom);
	$init($SSLHandshake);
	$var($SSLExtensionArray, extTypes, $nc(shc->sslConfig)->getEnabledExtensions($SSLHandshake::CLIENT_HELLO));
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

ClientHello$D12ClientHelloConsumer::ClientHello$D12ClientHelloConsumer() {
}

$Class* ClientHello$D12ClientHelloConsumer::load$($String* name, bool initialize) {
	$loadClass(ClientHello$D12ClientHelloConsumer, name, initialize, &_ClientHello$D12ClientHelloConsumer_ClassInfo_, allocate$ClientHello$D12ClientHelloConsumer);
	return class$;
}

$Class* ClientHello$D12ClientHelloConsumer::class$ = nullptr;

		} // ssl
	} // security
} // sun