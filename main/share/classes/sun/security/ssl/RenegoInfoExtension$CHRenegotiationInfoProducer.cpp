#include <sun/security/ssl/RenegoInfoExtension$CHRenegotiationInfoProducer.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <javax/net/ssl/SSLException.h>
#include <sun/security/ssl/Alert.h>
#include <sun/security/ssl/CipherSuite.h>
#include <sun/security/ssl/ClientHandshakeContext.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/Record.h>
#include <sun/security/ssl/RenegoInfoExtension$RenegotiationInfoSpec.h>
#include <sun/security/ssl/RenegoInfoExtension.h>
#include <sun/security/ssl/SSLConfiguration.h>
#include <sun/security/ssl/SSLExtension.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/TransportContext.h>
#include <jcpp.h>

#undef CH_RENEGOTIATION_INFO
#undef HANDSHAKE_FAILURE
#undef NOMINAL
#undef TLS_EMPTY_RENEGOTIATION_INFO_SCSV

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Alert = ::sun::security::ssl::Alert;
using $CipherSuite = ::sun::security::ssl::CipherSuite;
using $ClientHandshakeContext = ::sun::security::ssl::ClientHandshakeContext;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $Record = ::sun::security::ssl::Record;
using $RenegoInfoExtension$RenegotiationInfoSpec = ::sun::security::ssl::RenegoInfoExtension$RenegotiationInfoSpec;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLLogger = ::sun::security::ssl::SSLLogger;

namespace sun {
	namespace security {
		namespace ssl {

void RenegoInfoExtension$CHRenegotiationInfoProducer::init$() {
}

$bytes* RenegoInfoExtension$CHRenegotiationInfoProducer::produce($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$useLocalObjectStack();
	$var($ClientHandshakeContext, chc, $cast($ClientHandshakeContext, context));
	$init($SSLExtension);
	if (!$nc($nc(chc)->sslConfig)->isAvailable($SSLExtension::CH_RENEGOTIATION_INFO)) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::fine("Ignore unavailable renegotiation_info extension"_s, $$new($ObjectArray, 0));
		}
		return nullptr;
	}
	if (!$nc(chc->conContext)->isNegotiated) {
		$init($CipherSuite);
		if ($nc(chc->activeCipherSuites)->contains($CipherSuite::TLS_EMPTY_RENEGOTIATION_INFO_SCSV)) {
			return nullptr;
		}
		$var($bytes, extData, $new($bytes, {0}));
		$init($RenegoInfoExtension$RenegotiationInfoSpec);
		$nc(chc->handshakeExtensions)->put($SSLExtension::CH_RENEGOTIATION_INFO, $RenegoInfoExtension$RenegotiationInfoSpec::NOMINAL);
		return extData;
	} else if (chc->conContext->secureRenegotiation) {
		$var($bytes, extData, $new($bytes, $nc(chc->conContext->clientVerifyData)->length + 1));
		$var($ByteBuffer, m, $ByteBuffer::wrap(extData));
		$Record::putBytes8(m, chc->conContext->clientVerifyData);
		$init($RenegoInfoExtension$RenegotiationInfoSpec);
		$nc(chc->handshakeExtensions)->put($SSLExtension::CH_RENEGOTIATION_INFO, $RenegoInfoExtension$RenegotiationInfoSpec::NOMINAL);
		return extData;
	} else {
		$init($HandshakeContext);
		if ($HandshakeContext::allowUnsafeRenegotiation) {
			$init($SSLLogger);
			if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
				$SSLLogger::warning("Using insecure renegotiation"_s, $$new($ObjectArray, 0));
			}
			return nullptr;
		} else {
			$init($Alert);
			$throw($(chc->conContext->fatal($Alert::HANDSHAKE_FAILURE, "insecure renegotiation is not allowed"_s)));
		}
	}
}

RenegoInfoExtension$CHRenegotiationInfoProducer::RenegoInfoExtension$CHRenegotiationInfoProducer() {
}

$Class* RenegoInfoExtension$CHRenegotiationInfoProducer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(RenegoInfoExtension$CHRenegotiationInfoProducer, init$, void)},
		{"produce", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)[B", nullptr, $PUBLIC, $virtualMethod(RenegoInfoExtension$CHRenegotiationInfoProducer, produce, $bytes*, $ConnectionContext*, $SSLHandshake$HandshakeMessage*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.RenegoInfoExtension$CHRenegotiationInfoProducer", "sun.security.ssl.RenegoInfoExtension", "CHRenegotiationInfoProducer", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.RenegoInfoExtension$CHRenegotiationInfoProducer",
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
		"sun.security.ssl.RenegoInfoExtension"
	};
	$loadClass(RenegoInfoExtension$CHRenegotiationInfoProducer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RenegoInfoExtension$CHRenegotiationInfoProducer);
	});
	return class$;
}

$Class* RenegoInfoExtension$CHRenegotiationInfoProducer::class$ = nullptr;

		} // ssl
	} // security
} // sun