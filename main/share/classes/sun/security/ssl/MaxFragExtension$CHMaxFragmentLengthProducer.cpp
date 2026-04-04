#include <sun/security/ssl/MaxFragExtension$CHMaxFragmentLengthProducer.h>
#include <java/util/Map.h>
#include <sun/security/ssl/ClientHandshakeContext.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/DTLSRecord.h>
#include <sun/security/ssl/MaxFragExtension$MaxFragLenEnum.h>
#include <sun/security/ssl/MaxFragExtension$MaxFragLenSpec.h>
#include <sun/security/ssl/MaxFragExtension.h>
#include <sun/security/ssl/SSLConfiguration.h>
#include <sun/security/ssl/SSLContextImpl.h>
#include <sun/security/ssl/SSLExtension.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/SSLRecord.h>
#include <sun/security/ssl/SSLSessionImpl.h>
#include <jcpp.h>

#undef CH_MAX_FRAGMENT_LENGTH

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ClientHandshakeContext = ::sun::security::ssl::ClientHandshakeContext;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $DTLSRecord = ::sun::security::ssl::DTLSRecord;
using $MaxFragExtension$MaxFragLenEnum = ::sun::security::ssl::MaxFragExtension$MaxFragLenEnum;
using $MaxFragExtension$MaxFragLenSpec = ::sun::security::ssl::MaxFragExtension$MaxFragLenSpec;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $SSLRecord = ::sun::security::ssl::SSLRecord;

namespace sun {
	namespace security {
		namespace ssl {

void MaxFragExtension$CHMaxFragmentLengthProducer::init$() {
}

$bytes* MaxFragExtension$CHMaxFragmentLengthProducer::produce($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$useLocalObjectStack();
	$var($ClientHandshakeContext, chc, $cast($ClientHandshakeContext, context));
	$init($SSLExtension);
	if (!$nc($nc(chc)->sslConfig)->isAvailable($SSLExtension::CH_MAX_FRAGMENT_LENGTH)) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::fine("Ignore unavailable max_fragment_length extension"_s, $$new($ObjectArray, 0));
		}
		return nullptr;
	}
	int32_t requestedMFLength = 0;
	if (chc->isResumption && (chc->resumingSession != nullptr)) {
		requestedMFLength = chc->resumingSession->getNegotiatedMaxFragSize();
	} else if (chc->sslConfig->maximumPacketSize != 0) {
		requestedMFLength = chc->sslConfig->maximumPacketSize;
		if ($nc(chc->sslContext)->isDTLS()) {
			requestedMFLength -= $DTLSRecord::maxPlaintextPlusSize;
		} else {
			requestedMFLength -= $SSLRecord::maxPlaintextPlusSize;
		}
	} else {
		requestedMFLength = -1;
	}
	$MaxFragExtension$MaxFragLenEnum* mfl = $MaxFragExtension$MaxFragLenEnum::valueOf(requestedMFLength);
	if (mfl != nullptr) {
		$nc(chc->handshakeExtensions)->put($SSLExtension::CH_MAX_FRAGMENT_LENGTH, $$new($MaxFragExtension$MaxFragLenSpec, mfl->id));
		return $new($bytes, {mfl->id});
	} else {
		chc->maxFragmentLength = -1;
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::fine($$str({"No available max_fragment_length extension can be used for fragment size of "_s, $$str(requestedMFLength), "bytes"_s}), $$new($ObjectArray, 0));
		}
	}
	return nullptr;
}

MaxFragExtension$CHMaxFragmentLengthProducer::MaxFragExtension$CHMaxFragmentLengthProducer() {
}

$Class* MaxFragExtension$CHMaxFragmentLengthProducer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(MaxFragExtension$CHMaxFragmentLengthProducer, init$, void)},
		{"produce", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)[B", nullptr, $PUBLIC, $virtualMethod(MaxFragExtension$CHMaxFragmentLengthProducer, produce, $bytes*, $ConnectionContext*, $SSLHandshake$HandshakeMessage*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.MaxFragExtension$CHMaxFragmentLengthProducer", "sun.security.ssl.MaxFragExtension", "CHMaxFragmentLengthProducer", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.MaxFragExtension$CHMaxFragmentLengthProducer",
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
	$loadClass(MaxFragExtension$CHMaxFragmentLengthProducer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MaxFragExtension$CHMaxFragmentLengthProducer);
	});
	return class$;
}

$Class* MaxFragExtension$CHMaxFragmentLengthProducer::class$ = nullptr;

		} // ssl
	} // security
} // sun