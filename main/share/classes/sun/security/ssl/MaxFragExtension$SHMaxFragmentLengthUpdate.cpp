#include <sun/security/ssl/MaxFragExtension$SHMaxFragmentLengthUpdate.h>
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

#undef SH_MAX_FRAGMENT_LENGTH

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

void MaxFragExtension$SHMaxFragmentLengthUpdate::init$() {
}

void MaxFragExtension$SHMaxFragmentLengthUpdate::consume($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$useLocalObjectStack();
	$var($ClientHandshakeContext, chc, $cast($ClientHandshakeContext, context));
	$init($SSLExtension);
	$var($MaxFragExtension$MaxFragLenSpec, spec, $cast($MaxFragExtension$MaxFragLenSpec, $nc($nc(chc)->handshakeExtensions)->get($SSLExtension::SH_MAX_FRAGMENT_LENGTH)));
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

MaxFragExtension$SHMaxFragmentLengthUpdate::MaxFragExtension$SHMaxFragmentLengthUpdate() {
}

$Class* MaxFragExtension$SHMaxFragmentLengthUpdate::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(MaxFragExtension$SHMaxFragmentLengthUpdate, init$, void)},
		{"consume", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)V", nullptr, $PUBLIC, $virtualMethod(MaxFragExtension$SHMaxFragmentLengthUpdate, consume, void, $ConnectionContext*, $SSLHandshake$HandshakeMessage*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.MaxFragExtension$SHMaxFragmentLengthUpdate", "sun.security.ssl.MaxFragExtension", "SHMaxFragmentLengthUpdate", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.MaxFragExtension$SHMaxFragmentLengthUpdate",
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
	$loadClass(MaxFragExtension$SHMaxFragmentLengthUpdate, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MaxFragExtension$SHMaxFragmentLengthUpdate);
	});
	return class$;
}

$Class* MaxFragExtension$SHMaxFragmentLengthUpdate::class$ = nullptr;

		} // ssl
	} // security
} // sun