#include <sun/security/ssl/CertificateRequest$T10CertificateRequestConsumer.h>
#include <java/nio/ByteBuffer.h>
#include <java/security/Principal.h>
#include <java/security/PrivateKey.h>
#include <java/security/cert/X509Certificate.h>
#include <java/util/HashMap.h>
#include <java/util/LinkedHashMap.h>
#include <java/util/List.h>
#include <javax/net/ssl/SSLEngine.h>
#include <javax/net/ssl/SSLSocket.h>
#include <javax/net/ssl/X509ExtendedKeyManager.h>
#include <javax/security/auth/x500/X500Principal.h>
#include <sun/security/ssl/CertificateRequest$T10CertificateRequestMessage.h>
#include <sun/security/ssl/CertificateRequest.h>
#include <sun/security/ssl/CertificateStatus.h>
#include <sun/security/ssl/ClientHandshakeContext.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/HandshakeAbsence.h>
#include <sun/security/ssl/SSLConsumer.h>
#include <sun/security/ssl/SSLContextImpl.h>
#include <sun/security/ssl/SSLEngineImpl.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLHandshake.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/SSLSocketImpl.h>
#include <sun/security/ssl/SSLTransport.h>
#include <sun/security/ssl/TransportContext.h>
#include <sun/security/ssl/X509Authentication$X509Possession.h>
#include <jcpp.h>

#undef CERTIFICATE
#undef CERTIFICATE_REQUEST
#undef CERTIFICATE_STATUS
#undef CERTIFICATE_VERIFY

using $PrincipalArray = $Array<::java::security::Principal>;
using $X509CertificateArray = $Array<::java::security::cert::X509Certificate>;
using $Byte = ::java::lang::Byte;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $PrivateKey = ::java::security::PrivateKey;
using $SSLEngine = ::javax::net::ssl::SSLEngine;
using $SSLSocket = ::javax::net::ssl::SSLSocket;
using $X509ExtendedKeyManager = ::javax::net::ssl::X509ExtendedKeyManager;
using $CertificateRequest$T10CertificateRequestMessage = ::sun::security::ssl::CertificateRequest$T10CertificateRequestMessage;
using $CertificateStatus = ::sun::security::ssl::CertificateStatus;
using $ClientHandshakeContext = ::sun::security::ssl::ClientHandshakeContext;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $SSLConsumer = ::sun::security::ssl::SSLConsumer;
using $SSLEngineImpl = ::sun::security::ssl::SSLEngineImpl;
using $SSLHandshake = ::sun::security::ssl::SSLHandshake;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $SSLSocketImpl = ::sun::security::ssl::SSLSocketImpl;
using $X509Authentication$X509Possession = ::sun::security::ssl::X509Authentication$X509Possession;

namespace sun {
	namespace security {
		namespace ssl {

void CertificateRequest$T10CertificateRequestConsumer::init$() {
}

void CertificateRequest$T10CertificateRequestConsumer::consume($ConnectionContext* context, $ByteBuffer* message) {
	$useLocalObjectStack();
	$var($ClientHandshakeContext, chc, $cast($ClientHandshakeContext, context));
	$init($SSLHandshake);
	$nc($nc(chc)->handshakeConsumers)->remove($($Byte::valueOf($SSLHandshake::CERTIFICATE_REQUEST->id)));
	$var($SSLConsumer, certStatCons, $cast($SSLConsumer, chc->handshakeConsumers->remove($($Byte::valueOf($SSLHandshake::CERTIFICATE_STATUS->id)))));
	if (certStatCons != nullptr) {
		$init($CertificateStatus);
		$nc($CertificateStatus::handshakeAbsence)->absent(context, nullptr);
	}
	$var($CertificateRequest$T10CertificateRequestMessage, crm, $new($CertificateRequest$T10CertificateRequestMessage, chc, message));
	$init($SSLLogger);
	if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
		$SSLLogger::fine("Consuming CertificateRequest handshake message"_s, $$new($ObjectArray, {crm}));
	}
	$nc(chc->handshakeProducers)->put($($Byte::valueOf($SSLHandshake::CERTIFICATE->id)), $SSLHandshake::CERTIFICATE);
	$var($X509ExtendedKeyManager, km, $nc(chc->sslContext)->getX509KeyManager());
	$var($String, clientAlias, nullptr);
	if ($instanceOf($SSLSocketImpl, $nc(chc->conContext)->transport)) {
		$var($StringArray, var$0, crm->getKeyTypes());
		$assign(clientAlias, $nc(km)->chooseClientAlias(var$0, $$cast($PrincipalArray, crm->getAuthorities()), $cast($SSLSocket, chc->conContext->transport)));
	} else if ($instanceOf($SSLEngineImpl, chc->conContext->transport)) {
		$var($StringArray, var$1, crm->getKeyTypes());
		$assign(clientAlias, $nc(km)->chooseEngineClientAlias(var$1, $$cast($PrincipalArray, crm->getAuthorities()), $cast($SSLEngine, chc->conContext->transport)));
	}
	if (clientAlias == nullptr) {
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::warning("No available client authentication"_s, $$new($ObjectArray, 0));
		}
		return;
	}
	$var($PrivateKey, clientPrivateKey, $nc(km)->getPrivateKey(clientAlias));
	if (clientPrivateKey == nullptr) {
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::warning("No available client private key"_s, $$new($ObjectArray, 0));
		}
		return;
	}
	$var($X509CertificateArray, clientCerts, km->getCertificateChain(clientAlias));
	if ((clientCerts == nullptr) || (clientCerts->length == 0)) {
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::warning("No available client certificate"_s, $$new($ObjectArray, 0));
		}
		return;
	}
	$nc(chc->handshakePossessions)->add($$new($X509Authentication$X509Possession, clientPrivateKey, clientCerts));
	chc->handshakeProducers->put($($Byte::valueOf($SSLHandshake::CERTIFICATE_VERIFY->id)), $SSLHandshake::CERTIFICATE_VERIFY);
}

CertificateRequest$T10CertificateRequestConsumer::CertificateRequest$T10CertificateRequestConsumer() {
}

$Class* CertificateRequest$T10CertificateRequestConsumer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(CertificateRequest$T10CertificateRequestConsumer, init$, void)},
		{"consume", "(Lsun/security/ssl/ConnectionContext;Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC, $virtualMethod(CertificateRequest$T10CertificateRequestConsumer, consume, void, $ConnectionContext*, $ByteBuffer*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.CertificateRequest$T10CertificateRequestConsumer", "sun.security.ssl.CertificateRequest", "T10CertificateRequestConsumer", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.CertificateRequest$T10CertificateRequestConsumer",
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
		"sun.security.ssl.CertificateRequest"
	};
	$loadClass(CertificateRequest$T10CertificateRequestConsumer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CertificateRequest$T10CertificateRequestConsumer);
	});
	return class$;
}

$Class* CertificateRequest$T10CertificateRequestConsumer::class$ = nullptr;

		} // ssl
	} // security
} // sun