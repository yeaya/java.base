#include <sun/security/ssl/CertificateMessage$T12CertificateProducer.h>

#include <java/security/PrivateKey.h>
#include <java/security/cert/X509Certificate.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <javax/net/ssl/SSLException.h>
#include <sun/security/ssl/Alert.h>
#include <sun/security/ssl/CertificateMessage$T12CertificateMessage.h>
#include <sun/security/ssl/CertificateMessage.h>
#include <sun/security/ssl/ClientHandshakeContext.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/HandshakeOutStream.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/SSLConfiguration.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/SSLPossession.h>
#include <sun/security/ssl/SSLSessionImpl.h>
#include <sun/security/ssl/ServerHandshakeContext.h>
#include <sun/security/ssl/TransportContext.h>
#include <sun/security/ssl/X509Authentication$X509Possession.h>
#include <jcpp.h>

#undef INTERNAL_ERROR
#undef NO_CERTIFICATE

using $X509CertificateArray = $Array<::java::security::cert::X509Certificate>;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivateKey = ::java::security::PrivateKey;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Alert = ::sun::security::ssl::Alert;
using $CertificateMessage$T12CertificateMessage = ::sun::security::ssl::CertificateMessage$T12CertificateMessage;
using $ClientHandshakeContext = ::sun::security::ssl::ClientHandshakeContext;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $HandshakeOutStream = ::sun::security::ssl::HandshakeOutStream;
using $ProtocolVersion = ::sun::security::ssl::ProtocolVersion;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $SSLPossession = ::sun::security::ssl::SSLPossession;
using $SSLSessionImpl = ::sun::security::ssl::SSLSessionImpl;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;
using $TransportContext = ::sun::security::ssl::TransportContext;
using $X509Authentication$X509Possession = ::sun::security::ssl::X509Authentication$X509Possession;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _CertificateMessage$T12CertificateProducer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(CertificateMessage$T12CertificateProducer, init$, void)},
	{"onProduceCertificate", "(Lsun/security/ssl/ServerHandshakeContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)[B", nullptr, $PRIVATE, $method(CertificateMessage$T12CertificateProducer, onProduceCertificate, $bytes*, $ServerHandshakeContext*, $SSLHandshake$HandshakeMessage*), "java.io.IOException"},
	{"onProduceCertificate", "(Lsun/security/ssl/ClientHandshakeContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)[B", nullptr, $PRIVATE, $method(CertificateMessage$T12CertificateProducer, onProduceCertificate, $bytes*, $ClientHandshakeContext*, $SSLHandshake$HandshakeMessage*), "java.io.IOException"},
	{"produce", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)[B", nullptr, $PUBLIC, $virtualMethod(CertificateMessage$T12CertificateProducer, produce, $bytes*, $ConnectionContext*, $SSLHandshake$HandshakeMessage*), "java.io.IOException"},
	{}
};

$InnerClassInfo _CertificateMessage$T12CertificateProducer_InnerClassesInfo_[] = {
	{"sun.security.ssl.CertificateMessage$T12CertificateProducer", "sun.security.ssl.CertificateMessage", "T12CertificateProducer", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _CertificateMessage$T12CertificateProducer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.CertificateMessage$T12CertificateProducer",
	"java.lang.Object",
	"sun.security.ssl.HandshakeProducer",
	nullptr,
	_CertificateMessage$T12CertificateProducer_MethodInfo_,
	nullptr,
	nullptr,
	_CertificateMessage$T12CertificateProducer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.CertificateMessage"
};

$Object* allocate$CertificateMessage$T12CertificateProducer($Class* clazz) {
	return $of($alloc(CertificateMessage$T12CertificateProducer));
}

void CertificateMessage$T12CertificateProducer::init$() {
}

$bytes* CertificateMessage$T12CertificateProducer::produce($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$var($HandshakeContext, hc, $cast($HandshakeContext, context));
	if ($nc($nc(hc)->sslConfig)->isClientMode) {
		return onProduceCertificate($cast($ClientHandshakeContext, context), message);
	} else {
		return onProduceCertificate($cast($ServerHandshakeContext, context), message);
	}
}

$bytes* CertificateMessage$T12CertificateProducer::onProduceCertificate($ServerHandshakeContext* shc, $SSLHandshake$HandshakeMessage* message) {
	$useLocalCurrentObjectStackCache();
	$var($X509Authentication$X509Possession, x509Possession, nullptr);
	{
		$var($Iterator, i$, $nc($nc(shc)->handshakePossessions)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SSLPossession, possession, $cast($SSLPossession, i$->next()));
			{
				if ($instanceOf($X509Authentication$X509Possession, possession)) {
					$assign(x509Possession, $cast($X509Authentication$X509Possession, possession));
					break;
				}
			}
		}
	}
	if (x509Possession == nullptr) {
		$init($Alert);
		$throw($($nc(shc->conContext)->fatal($Alert::INTERNAL_ERROR, "No expected X.509 certificate for server authentication"_s)));
	}
	$nc(shc->handshakeSession)->setLocalPrivateKey($nc(x509Possession)->popPrivateKey);
	$nc(shc->handshakeSession)->setLocalCertificates($nc(x509Possession)->popCerts);
	$var($CertificateMessage$T12CertificateMessage, cm, $new($CertificateMessage$T12CertificateMessage, static_cast<$HandshakeContext*>(shc), $nc(x509Possession)->popCerts));
	$init($SSLLogger);
	if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
		$SSLLogger::fine("Produced server Certificate handshake message"_s, $$new($ObjectArray, {$of(cm)}));
	}
	cm->write(shc->handshakeOutput);
	$nc(shc->handshakeOutput)->flush();
	return nullptr;
}

$bytes* CertificateMessage$T12CertificateProducer::onProduceCertificate($ClientHandshakeContext* chc, $SSLHandshake$HandshakeMessage* message) {
	$useLocalCurrentObjectStackCache();
	$var($X509Authentication$X509Possession, x509Possession, nullptr);
	{
		$var($Iterator, i$, $nc($nc(chc)->handshakePossessions)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SSLPossession, possession, $cast($SSLPossession, i$->next()));
			{
				if ($instanceOf($X509Authentication$X509Possession, possession)) {
					$assign(x509Possession, $cast($X509Authentication$X509Possession, possession));
					break;
				}
			}
		}
	}
	if (x509Possession == nullptr) {
		if ($nc(chc->negotiatedProtocol)->useTLS10PlusSpec()) {
			$init($SSLLogger);
			if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
				$SSLLogger::fine("No X.509 certificate for client authentication, use empty Certificate message instead"_s, $$new($ObjectArray, 0));
			}
			$assign(x509Possession, $new($X509Authentication$X509Possession, nullptr, $$new($X509CertificateArray, 0)));
		} else {
			$init($SSLLogger);
			if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
				$SSLLogger::fine("No X.509 certificate for client authentication, send a no_certificate alert"_s, $$new($ObjectArray, 0));
			}
			$init($Alert);
			$nc(chc->conContext)->warning($Alert::NO_CERTIFICATE);
			return nullptr;
		}
	}
	$nc(chc->handshakeSession)->setLocalPrivateKey($nc(x509Possession)->popPrivateKey);
	if ($nc(x509Possession)->popCerts != nullptr && $nc(x509Possession->popCerts)->length != 0) {
		$nc(chc->handshakeSession)->setLocalCertificates(x509Possession->popCerts);
	} else {
		$nc(chc->handshakeSession)->setLocalCertificates(nullptr);
	}
	$var($CertificateMessage$T12CertificateMessage, cm, $new($CertificateMessage$T12CertificateMessage, static_cast<$HandshakeContext*>(chc), $nc(x509Possession)->popCerts));
	$init($SSLLogger);
	if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
		$SSLLogger::fine("Produced client Certificate handshake message"_s, $$new($ObjectArray, {$of(cm)}));
	}
	cm->write(chc->handshakeOutput);
	$nc(chc->handshakeOutput)->flush();
	return nullptr;
}

CertificateMessage$T12CertificateProducer::CertificateMessage$T12CertificateProducer() {
}

$Class* CertificateMessage$T12CertificateProducer::load$($String* name, bool initialize) {
	$loadClass(CertificateMessage$T12CertificateProducer, name, initialize, &_CertificateMessage$T12CertificateProducer_ClassInfo_, allocate$CertificateMessage$T12CertificateProducer);
	return class$;
}

$Class* CertificateMessage$T12CertificateProducer::class$ = nullptr;

		} // ssl
	} // security
} // sun