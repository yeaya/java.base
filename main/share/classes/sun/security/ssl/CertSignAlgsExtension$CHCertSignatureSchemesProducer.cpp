#include <sun/security/ssl/CertSignAlgsExtension$CHCertSignatureSchemesProducer.h>

#include <java/nio/ByteBuffer.h>
#include <java/security/AlgorithmConstraints.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <sun/security/ssl/CertSignAlgsExtension.h>
#include <sun/security/ssl/ClientHandshakeContext.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/Record.h>
#include <sun/security/ssl/SSLConfiguration.h>
#include <sun/security/ssl/SSLExtension.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/SignatureAlgorithmsExtension$SignatureSchemesSpec.h>
#include <sun/security/ssl/SignatureScheme.h>
#include <jcpp.h>

#undef CH_SIGNATURE_ALGORITHMS_CERT

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $ClientHandshakeContext = ::sun::security::ssl::ClientHandshakeContext;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $Record = ::sun::security::ssl::Record;
using $SSLConfiguration = ::sun::security::ssl::SSLConfiguration;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $SignatureAlgorithmsExtension$SignatureSchemesSpec = ::sun::security::ssl::SignatureAlgorithmsExtension$SignatureSchemesSpec;
using $SignatureScheme = ::sun::security::ssl::SignatureScheme;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _CertSignAlgsExtension$CHCertSignatureSchemesProducer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(CertSignAlgsExtension$CHCertSignatureSchemesProducer, init$, void)},
	{"produce", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)[B", nullptr, $PUBLIC, $virtualMethod(CertSignAlgsExtension$CHCertSignatureSchemesProducer, produce, $bytes*, $ConnectionContext*, $SSLHandshake$HandshakeMessage*), "java.io.IOException"},
	{}
};

$InnerClassInfo _CertSignAlgsExtension$CHCertSignatureSchemesProducer_InnerClassesInfo_[] = {
	{"sun.security.ssl.CertSignAlgsExtension$CHCertSignatureSchemesProducer", "sun.security.ssl.CertSignAlgsExtension", "CHCertSignatureSchemesProducer", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _CertSignAlgsExtension$CHCertSignatureSchemesProducer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.CertSignAlgsExtension$CHCertSignatureSchemesProducer",
	"java.lang.Object",
	"sun.security.ssl.HandshakeProducer",
	nullptr,
	_CertSignAlgsExtension$CHCertSignatureSchemesProducer_MethodInfo_,
	nullptr,
	nullptr,
	_CertSignAlgsExtension$CHCertSignatureSchemesProducer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.CertSignAlgsExtension"
};

$Object* allocate$CertSignAlgsExtension$CHCertSignatureSchemesProducer($Class* clazz) {
	return $of($alloc(CertSignAlgsExtension$CHCertSignatureSchemesProducer));
}

void CertSignAlgsExtension$CHCertSignatureSchemesProducer::init$() {
}

$bytes* CertSignAlgsExtension$CHCertSignatureSchemesProducer::produce($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$useLocalCurrentObjectStackCache();
	$var($ClientHandshakeContext, chc, $cast($ClientHandshakeContext, context));
	$init($SSLExtension);
	if (!$nc($nc(chc)->sslConfig)->isAvailable($SSLExtension::CH_SIGNATURE_ALGORITHMS_CERT)) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::fine("Ignore unavailable signature_algorithms_cert extension"_s, $$new($ObjectArray, 0));
		}
		return nullptr;
	}
	if ($nc(chc)->localSupportedSignAlgs == nullptr) {
		$set(chc, localSupportedSignAlgs, $SignatureScheme::getSupportedAlgorithms(chc->sslConfig, chc->algorithmConstraints, chc->activeProtocols));
	}
	int32_t var$0 = $SignatureScheme::sizeInRecord();
	int32_t vectorLen = var$0 * $nc($nc(chc)->localSupportedSignAlgs)->size();
	$var($bytes, extData, $new($bytes, vectorLen + 2));
	$var($ByteBuffer, m, $ByteBuffer::wrap(extData));
	$Record::putInt16(m, vectorLen);
	{
		$var($Iterator, i$, $nc(chc->localSupportedSignAlgs)->iterator());
		for (; $nc(i$)->hasNext();) {
			$SignatureScheme* ss = $cast($SignatureScheme, i$->next());
			{
				$Record::putInt16(m, $nc(ss)->id);
			}
		}
	}
	$nc(chc->handshakeExtensions)->put($SSLExtension::CH_SIGNATURE_ALGORITHMS_CERT, $$new($SignatureAlgorithmsExtension$SignatureSchemesSpec, chc->localSupportedSignAlgs));
	return extData;
}

CertSignAlgsExtension$CHCertSignatureSchemesProducer::CertSignAlgsExtension$CHCertSignatureSchemesProducer() {
}

$Class* CertSignAlgsExtension$CHCertSignatureSchemesProducer::load$($String* name, bool initialize) {
	$loadClass(CertSignAlgsExtension$CHCertSignatureSchemesProducer, name, initialize, &_CertSignAlgsExtension$CHCertSignatureSchemesProducer_ClassInfo_, allocate$CertSignAlgsExtension$CHCertSignatureSchemesProducer);
	return class$;
}

$Class* CertSignAlgsExtension$CHCertSignatureSchemesProducer::class$ = nullptr;

		} // ssl
	} // security
} // sun