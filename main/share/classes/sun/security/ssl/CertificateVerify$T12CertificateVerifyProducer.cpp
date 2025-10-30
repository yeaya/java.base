#include <sun/security/ssl/CertificateVerify$T12CertificateVerifyProducer.h>

#include <java/security/PrivateKey.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <sun/security/ssl/CertificateVerify$T12CertificateVerifyMessage.h>
#include <sun/security/ssl/CertificateVerify.h>
#include <sun/security/ssl/ClientHandshakeContext.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/HandshakeOutStream.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/SSLPossession.h>
#include <sun/security/ssl/X509Authentication$X509Possession.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivateKey = ::java::security::PrivateKey;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $CertificateVerify = ::sun::security::ssl::CertificateVerify;
using $CertificateVerify$T12CertificateVerifyMessage = ::sun::security::ssl::CertificateVerify$T12CertificateVerifyMessage;
using $ClientHandshakeContext = ::sun::security::ssl::ClientHandshakeContext;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $HandshakeOutStream = ::sun::security::ssl::HandshakeOutStream;
using $HandshakeProducer = ::sun::security::ssl::HandshakeProducer;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $SSLPossession = ::sun::security::ssl::SSLPossession;
using $X509Authentication$X509Possession = ::sun::security::ssl::X509Authentication$X509Possession;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _CertificateVerify$T12CertificateVerifyProducer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(CertificateVerify$T12CertificateVerifyProducer::*)()>(&CertificateVerify$T12CertificateVerifyProducer::init$))},
	{"produce", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)[B", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _CertificateVerify$T12CertificateVerifyProducer_InnerClassesInfo_[] = {
	{"sun.security.ssl.CertificateVerify$T12CertificateVerifyProducer", "sun.security.ssl.CertificateVerify", "T12CertificateVerifyProducer", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _CertificateVerify$T12CertificateVerifyProducer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.CertificateVerify$T12CertificateVerifyProducer",
	"java.lang.Object",
	"sun.security.ssl.HandshakeProducer",
	nullptr,
	_CertificateVerify$T12CertificateVerifyProducer_MethodInfo_,
	nullptr,
	nullptr,
	_CertificateVerify$T12CertificateVerifyProducer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.CertificateVerify"
};

$Object* allocate$CertificateVerify$T12CertificateVerifyProducer($Class* clazz) {
	return $of($alloc(CertificateVerify$T12CertificateVerifyProducer));
}

void CertificateVerify$T12CertificateVerifyProducer::init$() {
}

$bytes* CertificateVerify$T12CertificateVerifyProducer::produce($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$useLocalCurrentObjectStackCache();
	$var($ClientHandshakeContext, chc, $cast($ClientHandshakeContext, context));
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
	if (x509Possession == nullptr || $nc(x509Possession)->popPrivateKey == nullptr) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::fine("No X.509 credentials negotiated for CertificateVerify"_s, $$new($ObjectArray, 0));
		}
		return nullptr;
	}
	$var($CertificateVerify$T12CertificateVerifyMessage, cvm, $new($CertificateVerify$T12CertificateVerifyMessage, static_cast<$HandshakeContext*>(chc), x509Possession));
	$init($SSLLogger);
	if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
		$SSLLogger::fine("Produced CertificateVerify handshake message"_s, $$new($ObjectArray, {$of(cvm)}));
	}
	cvm->write(chc->handshakeOutput);
	$nc(chc->handshakeOutput)->flush();
	return nullptr;
}

CertificateVerify$T12CertificateVerifyProducer::CertificateVerify$T12CertificateVerifyProducer() {
}

$Class* CertificateVerify$T12CertificateVerifyProducer::load$($String* name, bool initialize) {
	$loadClass(CertificateVerify$T12CertificateVerifyProducer, name, initialize, &_CertificateVerify$T12CertificateVerifyProducer_ClassInfo_, allocate$CertificateVerify$T12CertificateVerifyProducer);
	return class$;
}

$Class* CertificateVerify$T12CertificateVerifyProducer::class$ = nullptr;

		} // ssl
	} // security
} // sun