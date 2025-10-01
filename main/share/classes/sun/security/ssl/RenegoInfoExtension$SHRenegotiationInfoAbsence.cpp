#include <sun/security/ssl/RenegoInfoExtension$SHRenegotiationInfoAbsence.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <javax/net/ssl/SSLException.h>
#include <sun/security/ssl/Alert.h>
#include <sun/security/ssl/CipherSuite.h>
#include <sun/security/ssl/ClientHandshakeContext.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/RenegoInfoExtension$RenegotiationInfoSpec.h>
#include <sun/security/ssl/RenegoInfoExtension.h>
#include <sun/security/ssl/SSLExtension.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/TransportContext.h>
#include <jcpp.h>

#undef HANDSHAKE_FAILURE
#undef TLS_EMPTY_RENEGOTIATION_INFO_SCSV
#undef INTERNAL_ERROR
#undef CH_RENEGOTIATION_INFO

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $SSLException = ::javax::net::ssl::SSLException;
using $Alert = ::sun::security::ssl::Alert;
using $CipherSuite = ::sun::security::ssl::CipherSuite;
using $ClientHandshakeContext = ::sun::security::ssl::ClientHandshakeContext;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $HandshakeAbsence = ::sun::security::ssl::HandshakeAbsence;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $RenegoInfoExtension = ::sun::security::ssl::RenegoInfoExtension;
using $RenegoInfoExtension$RenegotiationInfoSpec = ::sun::security::ssl::RenegoInfoExtension$RenegotiationInfoSpec;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $TransportContext = ::sun::security::ssl::TransportContext;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _RenegoInfoExtension$SHRenegotiationInfoAbsence_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(RenegoInfoExtension$SHRenegotiationInfoAbsence::*)()>(&RenegoInfoExtension$SHRenegotiationInfoAbsence::init$))},
	{"absent", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _RenegoInfoExtension$SHRenegotiationInfoAbsence_InnerClassesInfo_[] = {
	{"sun.security.ssl.RenegoInfoExtension$SHRenegotiationInfoAbsence", "sun.security.ssl.RenegoInfoExtension", "SHRenegotiationInfoAbsence", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _RenegoInfoExtension$SHRenegotiationInfoAbsence_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.RenegoInfoExtension$SHRenegotiationInfoAbsence",
	"java.lang.Object",
	"sun.security.ssl.HandshakeAbsence",
	nullptr,
	_RenegoInfoExtension$SHRenegotiationInfoAbsence_MethodInfo_,
	nullptr,
	nullptr,
	_RenegoInfoExtension$SHRenegotiationInfoAbsence_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.RenegoInfoExtension"
};

$Object* allocate$RenegoInfoExtension$SHRenegotiationInfoAbsence($Class* clazz) {
	return $of($alloc(RenegoInfoExtension$SHRenegotiationInfoAbsence));
}

void RenegoInfoExtension$SHRenegotiationInfoAbsence::init$() {
}

void RenegoInfoExtension$SHRenegotiationInfoAbsence::absent($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$var($ClientHandshakeContext, chc, $cast($ClientHandshakeContext, context));
	$init($SSLExtension);
	$var($RenegoInfoExtension$RenegotiationInfoSpec, requestedSpec, $cast($RenegoInfoExtension$RenegotiationInfoSpec, $nc($nc(chc)->handshakeExtensions)->get($SSLExtension::CH_RENEGOTIATION_INFO)));
	$init($CipherSuite);
	if (requestedSpec == nullptr && !$nc(chc->activeCipherSuites)->contains($CipherSuite::TLS_EMPTY_RENEGOTIATION_INFO_SCSV)) {
		$init($Alert);
		$throw($($nc(chc->conContext)->fatal($Alert::INTERNAL_ERROR, "Missing renegotiation_info and SCSV detected in ClientHello"_s)));
	}
	if (!$nc(chc->conContext)->isNegotiated) {
		$init($HandshakeContext);
		if (!$HandshakeContext::allowLegacyHelloMessages) {
			$init($Alert);
			$throw($($nc(chc->conContext)->fatal($Alert::HANDSHAKE_FAILURE, "Failed to negotiate the use of secure renegotiation"_s)));
		}
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::warning("Warning: No renegotiation indication in ServerHello, allow legacy ServerHello"_s, $$new($ObjectArray, 0));
		}
		$nc(chc->conContext)->secureRenegotiation = false;
	} else if ($nc($nc(chc)->conContext)->secureRenegotiation) {
		$init($Alert);
		$throw($($nc(chc->conContext)->fatal($Alert::HANDSHAKE_FAILURE, "Inconsistent secure renegotiation indication"_s)));
	} else {
		$init($HandshakeContext);
		if ($HandshakeContext::allowUnsafeRenegotiation) {
			$init($SSLLogger);
			if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
				$SSLLogger::warning("Using insecure renegotiation"_s, $$new($ObjectArray, 0));
			}
		} else {
			$init($SSLLogger);
			if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
				$SSLLogger::fine("Terminate insecure renegotiation"_s, $$new($ObjectArray, 0));
			}
			$init($Alert);
			$throw($($nc(chc->conContext)->fatal($Alert::HANDSHAKE_FAILURE, "Unsafe renegotiation is not allowed"_s)));
		}
	}
}

RenegoInfoExtension$SHRenegotiationInfoAbsence::RenegoInfoExtension$SHRenegotiationInfoAbsence() {
}

$Class* RenegoInfoExtension$SHRenegotiationInfoAbsence::load$($String* name, bool initialize) {
	$loadClass(RenegoInfoExtension$SHRenegotiationInfoAbsence, name, initialize, &_RenegoInfoExtension$SHRenegotiationInfoAbsence_ClassInfo_, allocate$RenegoInfoExtension$SHRenegotiationInfoAbsence);
	return class$;
}

$Class* RenegoInfoExtension$SHRenegotiationInfoAbsence::class$ = nullptr;

		} // ssl
	} // security
} // sun