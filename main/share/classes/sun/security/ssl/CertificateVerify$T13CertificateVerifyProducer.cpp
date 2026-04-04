#include <sun/security/ssl/CertificateVerify$T13CertificateVerifyProducer.h>
#include <java/security/PrivateKey.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <sun/security/ssl/CertificateVerify$T13CertificateVerifyMessage.h>
#include <sun/security/ssl/CertificateVerify.h>
#include <sun/security/ssl/ClientHandshakeContext.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/HandshakeOutStream.h>
#include <sun/security/ssl/SSLConfiguration.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/SSLPossession.h>
#include <sun/security/ssl/ServerHandshakeContext.h>
#include <sun/security/ssl/X509Authentication$X509Possession.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $CertificateVerify$T13CertificateVerifyMessage = ::sun::security::ssl::CertificateVerify$T13CertificateVerifyMessage;
using $ClientHandshakeContext = ::sun::security::ssl::ClientHandshakeContext;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $SSLPossession = ::sun::security::ssl::SSLPossession;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;
using $X509Authentication$X509Possession = ::sun::security::ssl::X509Authentication$X509Possession;

namespace sun {
	namespace security {
		namespace ssl {

void CertificateVerify$T13CertificateVerifyProducer::init$() {
}

$bytes* CertificateVerify$T13CertificateVerifyProducer::produce($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$useLocalObjectStack();
	$var($HandshakeContext, hc, $cast($HandshakeContext, context));
	$var($X509Authentication$X509Possession, x509Possession, nullptr);
	{
		$var($Iterator, i$, $nc($nc(hc)->handshakePossessions)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SSLPossession, possession, $cast($SSLPossession, i$->next()));
			if ($instanceOf($X509Authentication$X509Possession, possession)) {
				$assign(x509Possession, $cast($X509Authentication$X509Possession, possession));
				break;
			}
		}
	}
	if (x509Possession == nullptr || x509Possession->popPrivateKey == nullptr) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::fine("No X.509 credentials negotiated for CertificateVerify"_s, $$new($ObjectArray, 0));
		}
		return nullptr;
	}
	if ($nc(hc->sslConfig)->isClientMode) {
		return onProduceCertificateVerify($cast($ClientHandshakeContext, context), x509Possession);
	} else {
		return onProduceCertificateVerify($cast($ServerHandshakeContext, context), x509Possession);
	}
}

$bytes* CertificateVerify$T13CertificateVerifyProducer::onProduceCertificateVerify($ServerHandshakeContext* shc, $X509Authentication$X509Possession* x509Possession) {
	$useLocalObjectStack();
	$var($CertificateVerify$T13CertificateVerifyMessage, cvm, $new($CertificateVerify$T13CertificateVerifyMessage, shc, x509Possession));
	$init($SSLLogger);
	if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
		$SSLLogger::fine("Produced server CertificateVerify handshake message"_s, $$new($ObjectArray, {cvm}));
	}
	cvm->write($nc(shc)->handshakeOutput);
	$nc(shc->handshakeOutput)->flush();
	return nullptr;
}

$bytes* CertificateVerify$T13CertificateVerifyProducer::onProduceCertificateVerify($ClientHandshakeContext* chc, $X509Authentication$X509Possession* x509Possession) {
	$useLocalObjectStack();
	$var($CertificateVerify$T13CertificateVerifyMessage, cvm, $new($CertificateVerify$T13CertificateVerifyMessage, chc, x509Possession));
	$init($SSLLogger);
	if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
		$SSLLogger::fine("Produced client CertificateVerify handshake message"_s, $$new($ObjectArray, {cvm}));
	}
	cvm->write($nc(chc)->handshakeOutput);
	$nc(chc->handshakeOutput)->flush();
	return nullptr;
}

CertificateVerify$T13CertificateVerifyProducer::CertificateVerify$T13CertificateVerifyProducer() {
}

$Class* CertificateVerify$T13CertificateVerifyProducer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(CertificateVerify$T13CertificateVerifyProducer, init$, void)},
		{"onProduceCertificateVerify", "(Lsun/security/ssl/ServerHandshakeContext;Lsun/security/ssl/X509Authentication$X509Possession;)[B", nullptr, $PRIVATE, $method(CertificateVerify$T13CertificateVerifyProducer, onProduceCertificateVerify, $bytes*, $ServerHandshakeContext*, $X509Authentication$X509Possession*), "java.io.IOException"},
		{"onProduceCertificateVerify", "(Lsun/security/ssl/ClientHandshakeContext;Lsun/security/ssl/X509Authentication$X509Possession;)[B", nullptr, $PRIVATE, $method(CertificateVerify$T13CertificateVerifyProducer, onProduceCertificateVerify, $bytes*, $ClientHandshakeContext*, $X509Authentication$X509Possession*), "java.io.IOException"},
		{"produce", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)[B", nullptr, $PUBLIC, $virtualMethod(CertificateVerify$T13CertificateVerifyProducer, produce, $bytes*, $ConnectionContext*, $SSLHandshake$HandshakeMessage*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.CertificateVerify$T13CertificateVerifyProducer", "sun.security.ssl.CertificateVerify", "T13CertificateVerifyProducer", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.CertificateVerify$T13CertificateVerifyProducer",
		"java.lang.Object",
		"sun.security.ssl.HandshakeProducer",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.ssl.CertificateVerify"
	};
	$loadClass(CertificateVerify$T13CertificateVerifyProducer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CertificateVerify$T13CertificateVerifyProducer);
	});
	return class$;
}

$Class* CertificateVerify$T13CertificateVerifyProducer::class$ = nullptr;

		} // ssl
	} // security
} // sun