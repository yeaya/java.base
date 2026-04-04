#include <sun/security/ssl/RenegoInfoExtension$SHRenegotiationInfoAbsence.h>
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

#undef CH_RENEGOTIATION_INFO
#undef HANDSHAKE_FAILURE
#undef INTERNAL_ERROR
#undef TLS_EMPTY_RENEGOTIATION_INFO_SCSV

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Alert = ::sun::security::ssl::Alert;
using $CipherSuite = ::sun::security::ssl::CipherSuite;
using $ClientHandshakeContext = ::sun::security::ssl::ClientHandshakeContext;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $RenegoInfoExtension$RenegotiationInfoSpec = ::sun::security::ssl::RenegoInfoExtension$RenegotiationInfoSpec;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLLogger = ::sun::security::ssl::SSLLogger;

namespace sun {
	namespace security {
		namespace ssl {

void RenegoInfoExtension$SHRenegotiationInfoAbsence::init$() {
}

void RenegoInfoExtension$SHRenegotiationInfoAbsence::absent($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$useLocalObjectStack();
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
			$throw($(chc->conContext->fatal($Alert::HANDSHAKE_FAILURE, "Failed to negotiate the use of secure renegotiation"_s)));
		}
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::warning("Warning: No renegotiation indication in ServerHello, allow legacy ServerHello"_s, $$new($ObjectArray, 0));
		}
		chc->conContext->secureRenegotiation = false;
	} else if (chc->conContext->secureRenegotiation) {
		$init($Alert);
		$throw($(chc->conContext->fatal($Alert::HANDSHAKE_FAILURE, "Inconsistent secure renegotiation indication"_s)));
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
			$throw($(chc->conContext->fatal($Alert::HANDSHAKE_FAILURE, "Unsafe renegotiation is not allowed"_s)));
		}
	}
}

RenegoInfoExtension$SHRenegotiationInfoAbsence::RenegoInfoExtension$SHRenegotiationInfoAbsence() {
}

$Class* RenegoInfoExtension$SHRenegotiationInfoAbsence::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(RenegoInfoExtension$SHRenegotiationInfoAbsence, init$, void)},
		{"absent", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)V", nullptr, $PUBLIC, $virtualMethod(RenegoInfoExtension$SHRenegotiationInfoAbsence, absent, void, $ConnectionContext*, $SSLHandshake$HandshakeMessage*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.RenegoInfoExtension$SHRenegotiationInfoAbsence", "sun.security.ssl.RenegoInfoExtension", "SHRenegotiationInfoAbsence", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.RenegoInfoExtension$SHRenegotiationInfoAbsence",
		"java.lang.Object",
		"sun.security.ssl.HandshakeAbsence",
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
	$loadClass(RenegoInfoExtension$SHRenegotiationInfoAbsence, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RenegoInfoExtension$SHRenegotiationInfoAbsence);
	});
	return class$;
}

$Class* RenegoInfoExtension$SHRenegotiationInfoAbsence::class$ = nullptr;

		} // ssl
	} // security
} // sun