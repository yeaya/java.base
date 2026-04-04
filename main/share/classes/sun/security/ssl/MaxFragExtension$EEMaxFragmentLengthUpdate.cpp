#include <sun/security/ssl/MaxFragExtension$EEMaxFragmentLengthUpdate.h>
#include <java/util/Map.h>
#include <sun/security/ssl/CipherSuite.h>
#include <sun/security/ssl/ClientHandshakeContext.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/InputRecord.h>
#include <sun/security/ssl/MaxFragExtension$MaxFragLenSpec.h>
#include <sun/security/ssl/MaxFragExtension.h>
#include <sun/security/ssl/OutputRecord.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/SSLConfiguration.h>
#include <sun/security/ssl/SSLContextImpl.h>
#include <sun/security/ssl/SSLExtension.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/SSLSessionImpl.h>
#include <sun/security/ssl/TransportContext.h>
#include <jcpp.h>

#undef EE_MAX_FRAGMENT_LENGTH

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ClientHandshakeContext = ::sun::security::ssl::ClientHandshakeContext;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $MaxFragExtension$MaxFragLenSpec = ::sun::security::ssl::MaxFragExtension$MaxFragLenSpec;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLLogger = ::sun::security::ssl::SSLLogger;

namespace sun {
	namespace security {
		namespace ssl {

void MaxFragExtension$EEMaxFragmentLengthUpdate::init$() {
}

void MaxFragExtension$EEMaxFragmentLengthUpdate::consume($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$useLocalObjectStack();
	$var($ClientHandshakeContext, chc, $cast($ClientHandshakeContext, context));
	$init($SSLExtension);
	$var($MaxFragExtension$MaxFragLenSpec, spec, $cast($MaxFragExtension$MaxFragLenSpec, $nc($nc(chc)->handshakeExtensions)->get($SSLExtension::EE_MAX_FRAGMENT_LENGTH)));
	if (spec == nullptr) {
		return;
	}
	if ((chc->maxFragmentLength > 0) && ($nc(chc->sslConfig)->maximumPacketSize != 0)) {
		int32_t estimatedMaxFragSize = $nc(chc->negotiatedCipherSuite)->calculatePacketSize(chc->maxFragmentLength, chc->negotiatedProtocol, $nc(chc->sslContext)->isDTLS());
		if (estimatedMaxFragSize > chc->sslConfig->maximumPacketSize) {
			$init($SSLLogger);
			if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
				$SSLLogger::fine("Abort the maximum fragment length negotiation, may overflow the maximum packet size limit."_s, $$new($ObjectArray, 0));
			}
			chc->maxFragmentLength = -1;
		}
	}
	if (chc->maxFragmentLength > 0) {
		$nc(chc->handshakeSession)->setNegotiatedMaxFragSize(chc->maxFragmentLength);
		$nc($nc(chc->conContext)->inputRecord)->changeFragmentSize(chc->maxFragmentLength);
		$nc(chc->conContext->outputRecord)->changeFragmentSize(chc->maxFragmentLength);
	}
}

MaxFragExtension$EEMaxFragmentLengthUpdate::MaxFragExtension$EEMaxFragmentLengthUpdate() {
}

$Class* MaxFragExtension$EEMaxFragmentLengthUpdate::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(MaxFragExtension$EEMaxFragmentLengthUpdate, init$, void)},
		{"consume", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)V", nullptr, $PUBLIC, $virtualMethod(MaxFragExtension$EEMaxFragmentLengthUpdate, consume, void, $ConnectionContext*, $SSLHandshake$HandshakeMessage*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.MaxFragExtension$EEMaxFragmentLengthUpdate", "sun.security.ssl.MaxFragExtension", "EEMaxFragmentLengthUpdate", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.MaxFragExtension$EEMaxFragmentLengthUpdate",
		"java.lang.Object",
		"sun.security.ssl.HandshakeConsumer",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.ssl.MaxFragExtension"
	};
	$loadClass(MaxFragExtension$EEMaxFragmentLengthUpdate, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MaxFragExtension$EEMaxFragmentLengthUpdate);
	});
	return class$;
}

$Class* MaxFragExtension$EEMaxFragmentLengthUpdate::class$ = nullptr;

		} // ssl
	} // security
} // sun