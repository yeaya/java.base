#include <sun/security/ssl/MaxFragExtension$EEMaxFragmentLengthProducer.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
using $Map = ::java::util::Map;
using $CipherSuite = ::sun::security::ssl::CipherSuite;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $HandshakeProducer = ::sun::security::ssl::HandshakeProducer;
using $InputRecord = ::sun::security::ssl::InputRecord;
using $MaxFragExtension = ::sun::security::ssl::MaxFragExtension;
using $MaxFragExtension$MaxFragLenSpec = ::sun::security::ssl::MaxFragExtension$MaxFragLenSpec;
using $OutputRecord = ::sun::security::ssl::OutputRecord;
using $ProtocolVersion = ::sun::security::ssl::ProtocolVersion;
using $SSLConfiguration = ::sun::security::ssl::SSLConfiguration;
using $SSLContextImpl = ::sun::security::ssl::SSLContextImpl;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $SSLSessionImpl = ::sun::security::ssl::SSLSessionImpl;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;
using $TransportContext = ::sun::security::ssl::TransportContext;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _MaxFragExtension$EEMaxFragmentLengthProducer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(MaxFragExtension$EEMaxFragmentLengthProducer::*)()>(&MaxFragExtension$EEMaxFragmentLengthProducer::init$))},
	{"produce", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)[B", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _MaxFragExtension$EEMaxFragmentLengthProducer_InnerClassesInfo_[] = {
	{"sun.security.ssl.MaxFragExtension$EEMaxFragmentLengthProducer", "sun.security.ssl.MaxFragExtension", "EEMaxFragmentLengthProducer", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _MaxFragExtension$EEMaxFragmentLengthProducer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.MaxFragExtension$EEMaxFragmentLengthProducer",
	"java.lang.Object",
	"sun.security.ssl.HandshakeProducer",
	nullptr,
	_MaxFragExtension$EEMaxFragmentLengthProducer_MethodInfo_,
	nullptr,
	nullptr,
	_MaxFragExtension$EEMaxFragmentLengthProducer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.MaxFragExtension"
};

$Object* allocate$MaxFragExtension$EEMaxFragmentLengthProducer($Class* clazz) {
	return $of($alloc(MaxFragExtension$EEMaxFragmentLengthProducer));
}

void MaxFragExtension$EEMaxFragmentLengthProducer::init$() {
}

$bytes* MaxFragExtension$EEMaxFragmentLengthProducer::produce($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$useLocalCurrentObjectStackCache();
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
		if (estimatedMaxFragSize > $nc(shc->sslConfig)->maximumPacketSize) {
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
		$nc($nc(shc->conContext)->outputRecord)->changeFragmentSize(shc->maxFragmentLength);
		$nc(shc->handshakeExtensions)->put($SSLExtension::EE_MAX_FRAGMENT_LENGTH, spec);
		return $new($bytes, {$nc(spec)->id});
	}
	return nullptr;
}

MaxFragExtension$EEMaxFragmentLengthProducer::MaxFragExtension$EEMaxFragmentLengthProducer() {
}

$Class* MaxFragExtension$EEMaxFragmentLengthProducer::load$($String* name, bool initialize) {
	$loadClass(MaxFragExtension$EEMaxFragmentLengthProducer, name, initialize, &_MaxFragExtension$EEMaxFragmentLengthProducer_ClassInfo_, allocate$MaxFragExtension$EEMaxFragmentLengthProducer);
	return class$;
}

$Class* MaxFragExtension$EEMaxFragmentLengthProducer::class$ = nullptr;

		} // ssl
	} // security
} // sun