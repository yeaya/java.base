#include <sun/security/ssl/CertificateAuthoritiesExtension$CHCertificateAuthoritiesProducer.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteBuffer.h>
#include <java/security/cert/X509Certificate.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <javax/net/ssl/X509TrustManager.h>
#include <sun/security/ssl/CertificateAuthoritiesExtension$CertificateAuthoritiesSpec.h>
#include <sun/security/ssl/CertificateAuthoritiesExtension.h>
#include <sun/security/ssl/ClientHandshakeContext.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/Record.h>
#include <sun/security/ssl/SSLConfiguration.h>
#include <sun/security/ssl/SSLContextImpl.h>
#include <sun/security/ssl/SSLExtension.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLLogger.h>
#include <jcpp.h>

#undef CH_CERTIFICATE_AUTHORITIES

using $X509CertificateArray = $Array<::java::security::cert::X509Certificate>;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $X509Certificate = ::java::security::cert::X509Certificate;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $X509TrustManager = ::javax::net::ssl::X509TrustManager;
using $CertificateAuthoritiesExtension = ::sun::security::ssl::CertificateAuthoritiesExtension;
using $CertificateAuthoritiesExtension$CertificateAuthoritiesSpec = ::sun::security::ssl::CertificateAuthoritiesExtension$CertificateAuthoritiesSpec;
using $ClientHandshakeContext = ::sun::security::ssl::ClientHandshakeContext;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $HandshakeProducer = ::sun::security::ssl::HandshakeProducer;
using $Record = ::sun::security::ssl::Record;
using $SSLConfiguration = ::sun::security::ssl::SSLConfiguration;
using $SSLContextImpl = ::sun::security::ssl::SSLContextImpl;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLLogger = ::sun::security::ssl::SSLLogger;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _CertificateAuthoritiesExtension$CHCertificateAuthoritiesProducer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(CertificateAuthoritiesExtension$CHCertificateAuthoritiesProducer::*)()>(&CertificateAuthoritiesExtension$CHCertificateAuthoritiesProducer::init$))},
	{"produce", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)[B", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _CertificateAuthoritiesExtension$CHCertificateAuthoritiesProducer_InnerClassesInfo_[] = {
	{"sun.security.ssl.CertificateAuthoritiesExtension$CHCertificateAuthoritiesProducer", "sun.security.ssl.CertificateAuthoritiesExtension", "CHCertificateAuthoritiesProducer", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _CertificateAuthoritiesExtension$CHCertificateAuthoritiesProducer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.CertificateAuthoritiesExtension$CHCertificateAuthoritiesProducer",
	"java.lang.Object",
	"sun.security.ssl.HandshakeProducer",
	nullptr,
	_CertificateAuthoritiesExtension$CHCertificateAuthoritiesProducer_MethodInfo_,
	nullptr,
	nullptr,
	_CertificateAuthoritiesExtension$CHCertificateAuthoritiesProducer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.CertificateAuthoritiesExtension"
};

$Object* allocate$CertificateAuthoritiesExtension$CHCertificateAuthoritiesProducer($Class* clazz) {
	return $of($alloc(CertificateAuthoritiesExtension$CHCertificateAuthoritiesProducer));
}

void CertificateAuthoritiesExtension$CHCertificateAuthoritiesProducer::init$() {
}

$bytes* CertificateAuthoritiesExtension$CHCertificateAuthoritiesProducer::produce($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$useLocalCurrentObjectStackCache();
	$var($ClientHandshakeContext, chc, $cast($ClientHandshakeContext, context));
	$init($SSLExtension);
	if (!$nc($nc(chc)->sslConfig)->isAvailable($SSLExtension::CH_CERTIFICATE_AUTHORITIES)) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::fine("Ignore unavailable certificate_authorities extension"_s, $$new($ObjectArray, 0));
		}
		return nullptr;
	}
	$var($X509CertificateArray, caCerts, $nc($($nc($nc(chc)->sslContext)->getX509TrustManager()))->getAcceptedIssuers());
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
			$SSLLogger::warning("The number of CAs exceeds the maximum sizeof the certificate_authorities extension"_s, $$new($ObjectArray, 0));
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
	$nc(chc->handshakeExtensions)->put($SSLExtension::CH_CERTIFICATE_AUTHORITIES, spec);
	return extData;
}

CertificateAuthoritiesExtension$CHCertificateAuthoritiesProducer::CertificateAuthoritiesExtension$CHCertificateAuthoritiesProducer() {
}

$Class* CertificateAuthoritiesExtension$CHCertificateAuthoritiesProducer::load$($String* name, bool initialize) {
	$loadClass(CertificateAuthoritiesExtension$CHCertificateAuthoritiesProducer, name, initialize, &_CertificateAuthoritiesExtension$CHCertificateAuthoritiesProducer_ClassInfo_, allocate$CertificateAuthoritiesExtension$CHCertificateAuthoritiesProducer);
	return class$;
}

$Class* CertificateAuthoritiesExtension$CHCertificateAuthoritiesProducer::class$ = nullptr;

		} // ssl
	} // security
} // sun