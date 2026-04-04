#include <sun/security/ssl/RenegoInfoExtension$CHRenegotiationInfoAbsence.h>
#include <javax/net/ssl/SSLException.h>
#include <sun/security/ssl/Alert.h>
#include <sun/security/ssl/CipherSuite.h>
#include <sun/security/ssl/ClientHello$ClientHelloMessage.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/RenegoInfoExtension.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/ServerHandshakeContext.h>
#include <sun/security/ssl/TransportContext.h>
#include <jcpp.h>

#undef HANDSHAKE_FAILURE
#undef TLS_EMPTY_RENEGOTIATION_INFO_SCSV

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Alert = ::sun::security::ssl::Alert;
using $CipherSuite = ::sun::security::ssl::CipherSuite;
using $ClientHello$ClientHelloMessage = ::sun::security::ssl::ClientHello$ClientHelloMessage;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;

namespace sun {
	namespace security {
		namespace ssl {

void RenegoInfoExtension$CHRenegotiationInfoAbsence::init$() {
}

void RenegoInfoExtension$CHRenegotiationInfoAbsence::absent($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$useLocalObjectStack();
	$var($ServerHandshakeContext, shc, $cast($ServerHandshakeContext, context));
	$var($ClientHello$ClientHelloMessage, clientHello, $cast($ClientHello$ClientHelloMessage, message));
	if (!$nc($nc(shc)->conContext)->isNegotiated) {
		{
			$var($ints, arr$, $nc(clientHello)->cipherSuiteIds);
			for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
				int32_t id = arr$->get(i$);
				$init($CipherSuite);
				if (id == $CipherSuite::TLS_EMPTY_RENEGOTIATION_INFO_SCSV->id) {
					$init($SSLLogger);
					if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
						$SSLLogger::finest("Safe renegotiation, using the SCSV signaling"_s, $$new($ObjectArray, 0));
					}
					shc->conContext->secureRenegotiation = true;
					return;
				}
			}
		}
		$init($HandshakeContext);
		if (!$HandshakeContext::allowLegacyHelloMessages) {
			$init($Alert);
			$throw($(shc->conContext->fatal($Alert::HANDSHAKE_FAILURE, "Failed to negotiate the use of secure renegotiation"_s)));
		}
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::warning("Warning: No renegotiation indication in ClientHello, allow legacy ClientHello"_s, $$new($ObjectArray, 0));
		}
		shc->conContext->secureRenegotiation = false;
	} else if (shc->conContext->secureRenegotiation) {
		$init($Alert);
		$throw($(shc->conContext->fatal($Alert::HANDSHAKE_FAILURE, "Inconsistent secure renegotiation indication"_s)));
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
			$throw($(shc->conContext->fatal($Alert::HANDSHAKE_FAILURE, "Unsafe renegotiation is not allowed"_s)));
		}
	}
}

RenegoInfoExtension$CHRenegotiationInfoAbsence::RenegoInfoExtension$CHRenegotiationInfoAbsence() {
}

$Class* RenegoInfoExtension$CHRenegotiationInfoAbsence::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(RenegoInfoExtension$CHRenegotiationInfoAbsence, init$, void)},
		{"absent", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)V", nullptr, $PUBLIC, $virtualMethod(RenegoInfoExtension$CHRenegotiationInfoAbsence, absent, void, $ConnectionContext*, $SSLHandshake$HandshakeMessage*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.RenegoInfoExtension$CHRenegotiationInfoAbsence", "sun.security.ssl.RenegoInfoExtension", "CHRenegotiationInfoAbsence", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.RenegoInfoExtension$CHRenegotiationInfoAbsence",
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
	$loadClass(RenegoInfoExtension$CHRenegotiationInfoAbsence, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RenegoInfoExtension$CHRenegotiationInfoAbsence);
	});
	return class$;
}

$Class* RenegoInfoExtension$CHRenegotiationInfoAbsence::class$ = nullptr;

		} // ssl
	} // security
} // sun