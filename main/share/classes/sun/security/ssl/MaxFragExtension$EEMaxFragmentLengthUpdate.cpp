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
using $Map = ::java::util::Map;
using $CipherSuite = ::sun::security::ssl::CipherSuite;
using $ClientHandshakeContext = ::sun::security::ssl::ClientHandshakeContext;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $HandshakeConsumer = ::sun::security::ssl::HandshakeConsumer;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
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
using $TransportContext = ::sun::security::ssl::TransportContext;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _MaxFragExtension$EEMaxFragmentLengthUpdate_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(MaxFragExtension$EEMaxFragmentLengthUpdate::*)()>(&MaxFragExtension$EEMaxFragmentLengthUpdate::init$))},
	{"consume", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _MaxFragExtension$EEMaxFragmentLengthUpdate_InnerClassesInfo_[] = {
	{"sun.security.ssl.MaxFragExtension$EEMaxFragmentLengthUpdate", "sun.security.ssl.MaxFragExtension", "EEMaxFragmentLengthUpdate", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _MaxFragExtension$EEMaxFragmentLengthUpdate_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.MaxFragExtension$EEMaxFragmentLengthUpdate",
	"java.lang.Object",
	"sun.security.ssl.HandshakeConsumer",
	nullptr,
	_MaxFragExtension$EEMaxFragmentLengthUpdate_MethodInfo_,
	nullptr,
	nullptr,
	_MaxFragExtension$EEMaxFragmentLengthUpdate_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.MaxFragExtension"
};

$Object* allocate$MaxFragExtension$EEMaxFragmentLengthUpdate($Class* clazz) {
	return $of($alloc(MaxFragExtension$EEMaxFragmentLengthUpdate));
}

void MaxFragExtension$EEMaxFragmentLengthUpdate::init$() {
}

void MaxFragExtension$EEMaxFragmentLengthUpdate::consume($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$useLocalCurrentObjectStackCache();
	$var($ClientHandshakeContext, chc, $cast($ClientHandshakeContext, context));
	$init($SSLExtension);
	$var($MaxFragExtension$MaxFragLenSpec, spec, $cast($MaxFragExtension$MaxFragLenSpec, $nc($nc(chc)->handshakeExtensions)->get($SSLExtension::EE_MAX_FRAGMENT_LENGTH)));
	if (spec == nullptr) {
		return;
	}
	if ((chc->maxFragmentLength > 0) && ($nc(chc->sslConfig)->maximumPacketSize != 0)) {
		int32_t estimatedMaxFragSize = $nc(chc->negotiatedCipherSuite)->calculatePacketSize(chc->maxFragmentLength, chc->negotiatedProtocol, $nc(chc->sslContext)->isDTLS());
		if (estimatedMaxFragSize > $nc(chc->sslConfig)->maximumPacketSize) {
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
		$nc($nc(chc->conContext)->outputRecord)->changeFragmentSize(chc->maxFragmentLength);
	}
}

MaxFragExtension$EEMaxFragmentLengthUpdate::MaxFragExtension$EEMaxFragmentLengthUpdate() {
}

$Class* MaxFragExtension$EEMaxFragmentLengthUpdate::load$($String* name, bool initialize) {
	$loadClass(MaxFragExtension$EEMaxFragmentLengthUpdate, name, initialize, &_MaxFragExtension$EEMaxFragmentLengthUpdate_ClassInfo_, allocate$MaxFragExtension$EEMaxFragmentLengthUpdate);
	return class$;
}

$Class* MaxFragExtension$EEMaxFragmentLengthUpdate::class$ = nullptr;

		} // ssl
	} // security
} // sun