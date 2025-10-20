#include <sun/security/ssl/CertificateRequest$T12CertificateRequestProducer.h>

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
#include <java/security/AlgorithmConstraints.h>
#include <java/security/cert/X509Certificate.h>
#include <java/util/HashMap.h>
#include <java/util/LinkedHashMap.h>
#include <java/util/List.h>
#include <javax/net/ssl/SSLException.h>
#include <javax/net/ssl/X509TrustManager.h>
#include <sun/security/ssl/Alert.h>
#include <sun/security/ssl/CertificateRequest$T12CertificateRequestMessage.h>
#include <sun/security/ssl/CertificateRequest.h>
#include <sun/security/ssl/CipherSuite$KeyExchange.h>
#include <sun/security/ssl/CipherSuite.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/HandshakeOutStream.h>
#include <sun/security/ssl/SSLConfiguration.h>
#include <sun/security/ssl/SSLContextImpl.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLHandshake.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/ServerHandshakeContext.h>
#include <sun/security/ssl/SignatureScheme.h>
#include <sun/security/ssl/TransportContext.h>
#include <jcpp.h>

#undef CERTIFICATE
#undef CERTIFICATE_VERIFY
#undef HANDSHAKE_FAILURE

using $X509CertificateArray = $Array<::java::security::cert::X509Certificate>;
using $Byte = ::java::lang::Byte;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $AlgorithmConstraints = ::java::security::AlgorithmConstraints;
using $X509Certificate = ::java::security::cert::X509Certificate;
using $HashMap = ::java::util::HashMap;
using $LinkedHashMap = ::java::util::LinkedHashMap;
using $List = ::java::util::List;
using $SSLException = ::javax::net::ssl::SSLException;
using $X509TrustManager = ::javax::net::ssl::X509TrustManager;
using $Alert = ::sun::security::ssl::Alert;
using $CertificateRequest = ::sun::security::ssl::CertificateRequest;
using $CertificateRequest$T12CertificateRequestMessage = ::sun::security::ssl::CertificateRequest$T12CertificateRequestMessage;
using $CipherSuite = ::sun::security::ssl::CipherSuite;
using $CipherSuite$KeyExchange = ::sun::security::ssl::CipherSuite$KeyExchange;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $HandshakeOutStream = ::sun::security::ssl::HandshakeOutStream;
using $HandshakeProducer = ::sun::security::ssl::HandshakeProducer;
using $SSLConfiguration = ::sun::security::ssl::SSLConfiguration;
using $SSLContextImpl = ::sun::security::ssl::SSLContextImpl;
using $SSLHandshake = ::sun::security::ssl::SSLHandshake;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;
using $SignatureScheme = ::sun::security::ssl::SignatureScheme;
using $TransportContext = ::sun::security::ssl::TransportContext;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _CertificateRequest$T12CertificateRequestProducer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(CertificateRequest$T12CertificateRequestProducer::*)()>(&CertificateRequest$T12CertificateRequestProducer::init$))},
	{"produce", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)[B", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _CertificateRequest$T12CertificateRequestProducer_InnerClassesInfo_[] = {
	{"sun.security.ssl.CertificateRequest$T12CertificateRequestProducer", "sun.security.ssl.CertificateRequest", "T12CertificateRequestProducer", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _CertificateRequest$T12CertificateRequestProducer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.CertificateRequest$T12CertificateRequestProducer",
	"java.lang.Object",
	"sun.security.ssl.HandshakeProducer",
	nullptr,
	_CertificateRequest$T12CertificateRequestProducer_MethodInfo_,
	nullptr,
	nullptr,
	_CertificateRequest$T12CertificateRequestProducer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.CertificateRequest"
};

$Object* allocate$CertificateRequest$T12CertificateRequestProducer($Class* clazz) {
	return $of($alloc(CertificateRequest$T12CertificateRequestProducer));
}

void CertificateRequest$T12CertificateRequestProducer::init$() {
}

$bytes* CertificateRequest$T12CertificateRequestProducer::produce($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$useLocalCurrentObjectStackCache();
	$var($ServerHandshakeContext, shc, $cast($ServerHandshakeContext, context));
	if ($nc(shc)->localSupportedSignAlgs == nullptr) {
		$set(shc, localSupportedSignAlgs, $SignatureScheme::getSupportedAlgorithms(shc->sslConfig, shc->algorithmConstraints, shc->activeProtocols));
	}
	if ($nc(shc)->localSupportedSignAlgs == nullptr || $nc($nc(shc)->localSupportedSignAlgs)->isEmpty()) {
		$init($Alert);
		$throw($($nc(shc->conContext)->fatal($Alert::HANDSHAKE_FAILURE, "No supported signature algorithm"_s)));
	}
	$var($X509CertificateArray, caCerts, $nc($($nc($nc(shc)->sslContext)->getX509TrustManager()))->getAcceptedIssuers());
	$var($CertificateRequest$T12CertificateRequestMessage, crm, $new($CertificateRequest$T12CertificateRequestMessage, shc, caCerts, $nc(shc->negotiatedCipherSuite)->keyExchange, shc->localSupportedSignAlgs));
	$init($SSLLogger);
	if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
		$SSLLogger::fine("Produced CertificateRequest handshake message"_s, $$new($ObjectArray, {$of(crm)}));
	}
	crm->write(shc->handshakeOutput);
	$nc(shc->handshakeOutput)->flush();
	$init($SSLHandshake);
	$nc(shc->handshakeConsumers)->put($($Byte::valueOf($SSLHandshake::CERTIFICATE->id)), $SSLHandshake::CERTIFICATE);
	$nc(shc->handshakeConsumers)->put($($Byte::valueOf($SSLHandshake::CERTIFICATE_VERIFY->id)), $SSLHandshake::CERTIFICATE_VERIFY);
	return nullptr;
}

CertificateRequest$T12CertificateRequestProducer::CertificateRequest$T12CertificateRequestProducer() {
}

$Class* CertificateRequest$T12CertificateRequestProducer::load$($String* name, bool initialize) {
	$loadClass(CertificateRequest$T12CertificateRequestProducer, name, initialize, &_CertificateRequest$T12CertificateRequestProducer_ClassInfo_, allocate$CertificateRequest$T12CertificateRequestProducer);
	return class$;
}

$Class* CertificateRequest$T12CertificateRequestProducer::class$ = nullptr;

		} // ssl
	} // security
} // sun