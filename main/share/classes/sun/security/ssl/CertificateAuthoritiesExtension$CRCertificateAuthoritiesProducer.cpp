#include <sun/security/ssl/CertificateAuthoritiesExtension$CRCertificateAuthoritiesProducer.h>

#include <java/nio/ByteBuffer.h>
#include <java/security/cert/X509Certificate.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <javax/net/ssl/X509TrustManager.h>
#include <sun/security/ssl/CertificateAuthoritiesExtension$CertificateAuthoritiesSpec.h>
#include <sun/security/ssl/CertificateAuthoritiesExtension.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/Record.h>
#include <sun/security/ssl/SSLConfiguration.h>
#include <sun/security/ssl/SSLContextImpl.h>
#include <sun/security/ssl/SSLExtension.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/ServerHandshakeContext.h>
#include <jcpp.h>

#undef CR_CERTIFICATE_AUTHORITIES

using $X509CertificateArray = $Array<::java::security::cert::X509Certificate>;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $X509TrustManager = ::javax::net::ssl::X509TrustManager;
using $CertificateAuthoritiesExtension$CertificateAuthoritiesSpec = ::sun::security::ssl::CertificateAuthoritiesExtension$CertificateAuthoritiesSpec;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $Record = ::sun::security::ssl::Record;
using $SSLConfiguration = ::sun::security::ssl::SSLConfiguration;
using $SSLContextImpl = ::sun::security::ssl::SSLContextImpl;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _CertificateAuthoritiesExtension$CRCertificateAuthoritiesProducer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(CertificateAuthoritiesExtension$CRCertificateAuthoritiesProducer::*)()>(&CertificateAuthoritiesExtension$CRCertificateAuthoritiesProducer::init$))},
	{"produce", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)[B", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _CertificateAuthoritiesExtension$CRCertificateAuthoritiesProducer_InnerClassesInfo_[] = {
	{"sun.security.ssl.CertificateAuthoritiesExtension$CRCertificateAuthoritiesProducer", "sun.security.ssl.CertificateAuthoritiesExtension", "CRCertificateAuthoritiesProducer", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _CertificateAuthoritiesExtension$CRCertificateAuthoritiesProducer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.CertificateAuthoritiesExtension$CRCertificateAuthoritiesProducer",
	"java.lang.Object",
	"sun.security.ssl.HandshakeProducer",
	nullptr,
	_CertificateAuthoritiesExtension$CRCertificateAuthoritiesProducer_MethodInfo_,
	nullptr,
	nullptr,
	_CertificateAuthoritiesExtension$CRCertificateAuthoritiesProducer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.CertificateAuthoritiesExtension"
};

$Object* allocate$CertificateAuthoritiesExtension$CRCertificateAuthoritiesProducer($Class* clazz) {
	return $of($alloc(CertificateAuthoritiesExtension$CRCertificateAuthoritiesProducer));
}

void CertificateAuthoritiesExtension$CRCertificateAuthoritiesProducer::init$() {
}

$bytes* CertificateAuthoritiesExtension$CRCertificateAuthoritiesProducer::produce($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$useLocalCurrentObjectStackCache();
	$var($ServerHandshakeContext, shc, $cast($ServerHandshakeContext, context));
	$init($SSLExtension);
	if (!$nc($nc(shc)->sslConfig)->isAvailable($SSLExtension::CR_CERTIFICATE_AUTHORITIES)) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::fine("Ignore unavailable certificate_authorities extension"_s, $$new($ObjectArray, 0));
		}
		return nullptr;
	}
	$var($X509CertificateArray, caCerts, $nc($($nc($nc(shc)->sslContext)->getX509TrustManager()))->getAcceptedIssuers());
	if ($nc(caCerts)->length == 0) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::fine("No available certificate authorities"_s, $$new($ObjectArray, 0));
		}
		return nullptr;
	}
	$var($List, encodedCAs, $CertificateAuthoritiesExtension$CertificateAuthoritiesSpec::getEncodedAuthorities(caCerts));
	if ($nc(encodedCAs)->isEmpty()) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::warning("Too many certificate authorities to use the certificate_authorities extension"_s, $$new($ObjectArray, 0));
		}
		return nullptr;
	}
	$var($CertificateAuthoritiesExtension$CertificateAuthoritiesSpec, spec, $new($CertificateAuthoritiesExtension$CertificateAuthoritiesSpec, encodedCAs));
	int32_t vectorLen = 0;
	{
		$var($Iterator, i$, $nc(spec->authorities)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($bytes, encoded, $cast($bytes, i$->next()));
			{
				vectorLen += $nc(encoded)->length + 2;
			}
		}
	}
	$var($bytes, extData, $new($bytes, vectorLen + 2));
	$var($ByteBuffer, m, $ByteBuffer::wrap(extData));
	$Record::putInt16(m, vectorLen);
	{
		$var($Iterator, i$, $nc(spec->authorities)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($bytes, encoded, $cast($bytes, i$->next()));
			{
				$Record::putBytes16(m, encoded);
			}
		}
	}
	$nc(shc->handshakeExtensions)->put($SSLExtension::CR_CERTIFICATE_AUTHORITIES, spec);
	return extData;
}

CertificateAuthoritiesExtension$CRCertificateAuthoritiesProducer::CertificateAuthoritiesExtension$CRCertificateAuthoritiesProducer() {
}

$Class* CertificateAuthoritiesExtension$CRCertificateAuthoritiesProducer::load$($String* name, bool initialize) {
	$loadClass(CertificateAuthoritiesExtension$CRCertificateAuthoritiesProducer, name, initialize, &_CertificateAuthoritiesExtension$CRCertificateAuthoritiesProducer_ClassInfo_, allocate$CertificateAuthoritiesExtension$CRCertificateAuthoritiesProducer);
	return class$;
}

$Class* CertificateAuthoritiesExtension$CRCertificateAuthoritiesProducer::class$ = nullptr;

		} // ssl
	} // security
} // sun