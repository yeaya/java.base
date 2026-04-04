#include <sun/security/ssl/MaxFragExtension$EEMaxFragmentLengthProducer.h>
#include <java/util/Map.h>
#include <sun/security/ssl/CipherSuite.h>
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
#include <sun/security/ssl/ServerHandshakeContext.h>
#include <sun/security/ssl/TransportContext.h>
#include <jcpp.h>

#undef CH_MAX_FRAGMENT_LENGTH
#undef EE_MAX_FRAGMENT_LENGTH

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $MaxFragExtension$MaxFragLenSpec = ::sun::security::ssl::MaxFragExtension$MaxFragLenSpec;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;

namespace sun {
	namespace security {
		namespace ssl {

void MaxFragExtension$EEMaxFragmentLengthProducer::init$() {
}

$bytes* MaxFragExtension$EEMaxFragmentLengthProducer::produce($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$useLocalObjectStack();
	$var($ServerHandshakeContext, shc, $cast($ServerHandshakeContext, context));
	$init($SSLExtension);
	$var($MaxFragExtension$MaxFragLenSpec, spec, $cast($MaxFragExtension$MaxFragLenSpec, $nc($nc(shc)->handshakeExtensions)->get($SSLExtension::CH_MAX_FRAGMENT_LENGTH)));
	if (spec == nullptr) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::finest("Ignore unavailable max_fragment_length extension"_s, $$new($ObjectArray, 0));
		}
		return nullptr;
	}
	if ((shc->maxFragmentLength > 0) && ($nc(shc->sslConfig)->maximumPacketSize != 0)) {
		int32_t estimatedMaxFragSize = $nc(shc->negotiatedCipherSuite)->calculatePacketSize(shc->maxFragmentLength, shc->negotiatedProtocol, $nc(shc->sslContext)->isDTLS());
		if (estimatedMaxFragSize > shc->sslConfig->maximumPacketSize) {
			$init($SSLLogger);
			if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
				$SSLLogger::fine("Abort the maximum fragment length negotiation, may overflow the maximum packet size limit."_s, $$new($ObjectArray, 0));
			}
			shc->maxFragmentLength = -1;
		}
	}
	if (shc->maxFragmentLength > 0) {
		$nc(shc->handshakeSession)->setNegotiatedMaxFragSize(shc->maxFragmentLength);
		$nc($nc(shc->conContext)->inputRecord)->changeFragmentSize(shc->maxFragmentLength);
		$nc(shc->conContext->outputRecord)->changeFragmentSize(shc->maxFragmentLength);
		shc->handshakeExtensions->put($SSLExtension::EE_MAX_FRAGMENT_LENGTH, spec);
		return $new($bytes, {$nc(spec)->id});
	}
	return nullptr;
}

MaxFragExtension$EEMaxFragmentLengthProducer::MaxFragExtension$EEMaxFragmentLengthProducer() {
}

$Class* MaxFragExtension$EEMaxFragmentLengthProducer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(MaxFragExtension$EEMaxFragmentLengthProducer, init$, void)},
		{"produce", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)[B", nullptr, $PUBLIC, $virtualMethod(MaxFragExtension$EEMaxFragmentLengthProducer, produce, $bytes*, $ConnectionContext*, $SSLHandshake$HandshakeMessage*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.MaxFragExtension$EEMaxFragmentLengthProducer", "sun.security.ssl.MaxFragExtension", "EEMaxFragmentLengthProducer", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.MaxFragExtension$EEMaxFragmentLengthProducer",
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
		"sun.security.ssl.MaxFragExtension"
	};
	$loadClass(MaxFragExtension$EEMaxFragmentLengthProducer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MaxFragExtension$EEMaxFragmentLengthProducer);
	});
	return class$;
}

$Class* MaxFragExtension$EEMaxFragmentLengthProducer::class$ = nullptr;

		} // ssl
	} // security
} // sun