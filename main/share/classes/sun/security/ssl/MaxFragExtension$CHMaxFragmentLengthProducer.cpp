#include <sun/security/ssl/MaxFragExtension$CHMaxFragmentLengthProducer.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
using $Map = ::java::util::Map;
using $ClientHandshakeContext = ::sun::security::ssl::ClientHandshakeContext;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $DTLSRecord = ::sun::security::ssl::DTLSRecord;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $HandshakeProducer = ::sun::security::ssl::HandshakeProducer;
using $MaxFragExtension = ::sun::security::ssl::MaxFragExtension;
using $MaxFragExtension$MaxFragLenEnum = ::sun::security::ssl::MaxFragExtension$MaxFragLenEnum;
using $MaxFragExtension$MaxFragLenSpec = ::sun::security::ssl::MaxFragExtension$MaxFragLenSpec;
using $SSLConfiguration = ::sun::security::ssl::SSLConfiguration;
using $SSLContextImpl = ::sun::security::ssl::SSLContextImpl;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $SSLRecord = ::sun::security::ssl::SSLRecord;
using $SSLSessionImpl = ::sun::security::ssl::SSLSessionImpl;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _MaxFragExtension$CHMaxFragmentLengthProducer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(MaxFragExtension$CHMaxFragmentLengthProducer::*)()>(&MaxFragExtension$CHMaxFragmentLengthProducer::init$))},
	{"produce", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)[B", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _MaxFragExtension$CHMaxFragmentLengthProducer_InnerClassesInfo_[] = {
	{"sun.security.ssl.MaxFragExtension$CHMaxFragmentLengthProducer", "sun.security.ssl.MaxFragExtension", "CHMaxFragmentLengthProducer", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _MaxFragExtension$CHMaxFragmentLengthProducer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.MaxFragExtension$CHMaxFragmentLengthProducer",
	"java.lang.Object",
	"sun.security.ssl.HandshakeProducer",
	nullptr,
	_MaxFragExtension$CHMaxFragmentLengthProducer_MethodInfo_,
	nullptr,
	nullptr,
	_MaxFragExtension$CHMaxFragmentLengthProducer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.MaxFragExtension"
};

$Object* allocate$MaxFragExtension$CHMaxFragmentLengthProducer($Class* clazz) {
	return $of($alloc(MaxFragExtension$CHMaxFragmentLengthProducer));
}

void MaxFragExtension$CHMaxFragmentLengthProducer::init$() {
}

$bytes* MaxFragExtension$CHMaxFragmentLengthProducer::produce($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
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
	if ($nc(chc)->isResumption && (chc->resumingSession != nullptr)) {
		requestedMFLength = $nc(chc->resumingSession)->getNegotiatedMaxFragSize();
	} else if ($nc(chc->sslConfig)->maximumPacketSize != 0) {
		requestedMFLength = $nc(chc->sslConfig)->maximumPacketSize;
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
	$loadClass(MaxFragExtension$CHMaxFragmentLengthProducer, name, initialize, &_MaxFragExtension$CHMaxFragmentLengthProducer_ClassInfo_, allocate$MaxFragExtension$CHMaxFragmentLengthProducer);
	return class$;
}

$Class* MaxFragExtension$CHMaxFragmentLengthProducer::class$ = nullptr;

		} // ssl
	} // security
} // sun