#include <sun/security/ssl/CertSignAlgsExtension$CRCertSignatureSchemesProducer.h>
#include <java/nio/ByteBuffer.h>
#include <java/security/AlgorithmConstraints.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <sun/security/ssl/CertSignAlgsExtension.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/Record.h>
#include <sun/security/ssl/SSLConfiguration.h>
#include <sun/security/ssl/SSLExtension.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/ServerHandshakeContext.h>
#include <sun/security/ssl/SignatureAlgorithmsExtension$SignatureSchemesSpec.h>
#include <sun/security/ssl/SignatureScheme.h>
#include <jcpp.h>

#undef CH_SIGNATURE_ALGORITHMS_CERT
#undef CR_SIGNATURE_ALGORITHMS_CERT

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $Record = ::sun::security::ssl::Record;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;
using $SignatureAlgorithmsExtension$SignatureSchemesSpec = ::sun::security::ssl::SignatureAlgorithmsExtension$SignatureSchemesSpec;
using $SignatureScheme = ::sun::security::ssl::SignatureScheme;

namespace sun {
	namespace security {
		namespace ssl {

void CertSignAlgsExtension$CRCertSignatureSchemesProducer::init$() {
}

$bytes* CertSignAlgsExtension$CRCertSignatureSchemesProducer::produce($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$useLocalObjectStack();
	$var($ServerHandshakeContext, shc, $cast($ServerHandshakeContext, context));
	$init($SSLExtension);
	if (!$nc($nc(shc)->sslConfig)->isAvailable($SSLExtension::CH_SIGNATURE_ALGORITHMS_CERT)) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::fine("Ignore unavailable signature_algorithms_cert extension"_s, $$new($ObjectArray, 0));
		}
		return nullptr;
	}
	$var($List, sigAlgs, $SignatureScheme::getSupportedAlgorithms(shc->sslConfig, shc->algorithmConstraints, $($List::of(shc->negotiatedProtocol))));
	int32_t var$0 = $SignatureScheme::sizeInRecord();
	int32_t vectorLen = var$0 * $nc(sigAlgs)->size();
	$var($bytes, extData, $new($bytes, vectorLen + 2));
	$var($ByteBuffer, m, $ByteBuffer::wrap(extData));
	$Record::putInt16(m, vectorLen);
	{
		$var($Iterator, i$, sigAlgs->iterator());
		for (; $nc(i$)->hasNext();) {
			$SignatureScheme* ss = $cast($SignatureScheme, i$->next());
			{
				$Record::putInt16(m, $nc(ss)->id);
			}
		}
	}
	$nc(shc->handshakeExtensions)->put($SSLExtension::CR_SIGNATURE_ALGORITHMS_CERT, $$new($SignatureAlgorithmsExtension$SignatureSchemesSpec, shc->localSupportedSignAlgs));
	return extData;
}

CertSignAlgsExtension$CRCertSignatureSchemesProducer::CertSignAlgsExtension$CRCertSignatureSchemesProducer() {
}

$Class* CertSignAlgsExtension$CRCertSignatureSchemesProducer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(CertSignAlgsExtension$CRCertSignatureSchemesProducer, init$, void)},
		{"produce", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)[B", nullptr, $PUBLIC, $virtualMethod(CertSignAlgsExtension$CRCertSignatureSchemesProducer, produce, $bytes*, $ConnectionContext*, $SSLHandshake$HandshakeMessage*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.CertSignAlgsExtension$CRCertSignatureSchemesProducer", "sun.security.ssl.CertSignAlgsExtension", "CRCertSignatureSchemesProducer", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.CertSignAlgsExtension$CRCertSignatureSchemesProducer",
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
		"sun.security.ssl.CertSignAlgsExtension"
	};
	$loadClass(CertSignAlgsExtension$CRCertSignatureSchemesProducer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CertSignAlgsExtension$CRCertSignatureSchemesProducer);
	});
	return class$;
}

$Class* CertSignAlgsExtension$CRCertSignatureSchemesProducer::class$ = nullptr;

		} // ssl
	} // security
} // sun