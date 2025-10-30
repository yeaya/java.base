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
using $NullPointerException = ::java::lang::NullPointerException;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $SSLException = ::javax::net::ssl::SSLException;
using $Alert = ::sun::security::ssl::Alert;
using $CipherSuite = ::sun::security::ssl::CipherSuite;
using $ClientHandshakeContext = ::sun::security::ssl::ClientHandshakeContext;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $HandshakeProducer = ::sun::security::ssl::HandshakeProducer;
using $Record = ::sun::security::ssl::Record;
using $RenegoInfoExtension = ::sun::security::ssl::RenegoInfoExtension;
using $RenegoInfoExtension$RenegotiationInfoSpec = ::sun::security::ssl::RenegoInfoExtension$RenegotiationInfoSpec;
using $SSLConfiguration = ::sun::security::ssl::SSLConfiguration;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $TransportContext = ::sun::security::ssl::TransportContext;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _RenegoInfoExtension$CHRenegotiationInfoProducer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(RenegoInfoExtension$CHRenegotiationInfoProducer::*)()>(&RenegoInfoExtension$CHRenegotiationInfoProducer::init$))},
	{"produce", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)[B", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _RenegoInfoExtension$CHRenegotiationInfoProducer_InnerClassesInfo_[] = {
	{"sun.security.ssl.RenegoInfoExtension$CHRenegotiationInfoProducer", "sun.security.ssl.RenegoInfoExtension", "CHRenegotiationInfoProducer", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _RenegoInfoExtension$CHRenegotiationInfoProducer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.RenegoInfoExtension$CHRenegotiationInfoProducer",
	"java.lang.Object",
	"sun.security.ssl.HandshakeProducer",
	nullptr,
	_RenegoInfoExtension$CHRenegotiationInfoProducer_MethodInfo_,
	nullptr,
	nullptr,
	_RenegoInfoExtension$CHRenegotiationInfoProducer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.RenegoInfoExtension"
};

$Object* allocate$RenegoInfoExtension$CHRenegotiationInfoProducer($Class* clazz) {
	return $of($alloc(RenegoInfoExtension$CHRenegotiationInfoProducer));
}

void RenegoInfoExtension$CHRenegotiationInfoProducer::init$() {
}

$bytes* RenegoInfoExtension$CHRenegotiationInfoProducer::produce($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$useLocalCurrentObjectStackCache();
	$var($ClientHandshakeContext, chc, $cast($ClientHandshakeContext, context));
	$init($SSLExtension);
	if (!$nc($nc(chc)->sslConfig)->isAvailable($SSLExtension::CH_RENEGOTIATION_INFO)) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::fine("Ignore unavailable renegotiation_info extension"_s, $$new($ObjectArray, 0));
		}
		return nullptr;
	}
	if (!$nc($nc(chc)->conContext)->isNegotiated) {
		$init($CipherSuite);
		if ($nc(chc->activeCipherSuites)->contains($CipherSuite::TLS_EMPTY_RENEGOTIATION_INFO_SCSV)) {
			return nullptr;
		}
		$var($bytes, extData, $new($bytes, {(int8_t)0}));
		$init($RenegoInfoExtension$RenegotiationInfoSpec);
		$nc(chc->handshakeExtensions)->put($SSLExtension::CH_RENEGOTIATION_INFO, $RenegoInfoExtension$RenegotiationInfoSpec::NOMINAL);
		return extData;
	} else if ($nc(chc->conContext)->secureRenegotiation) {
		$var($bytes, extData, $new($bytes, $nc($nc(chc->conContext)->clientVerifyData)->length + 1));
		$var($ByteBuffer, m, $ByteBuffer::wrap(extData));
		$Record::putBytes8(m, $nc(chc->conContext)->clientVerifyData);
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
			$throw($($nc(chc->conContext)->fatal($Alert::HANDSHAKE_FAILURE, "insecure renegotiation is not allowed"_s)));
		}
	}
}

RenegoInfoExtension$CHRenegotiationInfoProducer::RenegoInfoExtension$CHRenegotiationInfoProducer() {
}

$Class* RenegoInfoExtension$CHRenegotiationInfoProducer::load$($String* name, bool initialize) {
	$loadClass(RenegoInfoExtension$CHRenegotiationInfoProducer, name, initialize, &_RenegoInfoExtension$CHRenegotiationInfoProducer_ClassInfo_, allocate$RenegoInfoExtension$CHRenegotiationInfoProducer);
	return class$;
}

$Class* RenegoInfoExtension$CHRenegotiationInfoProducer::class$ = nullptr;

		} // ssl
	} // security
} // sun