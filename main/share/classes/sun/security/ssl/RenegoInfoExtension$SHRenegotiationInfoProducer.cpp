#include <sun/security/ssl/RenegoInfoExtension$SHRenegotiationInfoProducer.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/Map.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/Record.h>
#include <sun/security/ssl/RenegoInfoExtension$RenegotiationInfoSpec.h>
#include <sun/security/ssl/RenegoInfoExtension.h>
#include <sun/security/ssl/SSLExtension.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/ServerHandshakeContext.h>
#include <sun/security/ssl/TransportContext.h>
#include <jcpp.h>

#undef NOMINAL
#undef CH_RENEGOTIATION_INFO
#undef SH_RENEGOTIATION_INFO

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Map = ::java::util::Map;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $HandshakeProducer = ::sun::security::ssl::HandshakeProducer;
using $Record = ::sun::security::ssl::Record;
using $RenegoInfoExtension = ::sun::security::ssl::RenegoInfoExtension;
using $RenegoInfoExtension$RenegotiationInfoSpec = ::sun::security::ssl::RenegoInfoExtension$RenegotiationInfoSpec;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;
using $TransportContext = ::sun::security::ssl::TransportContext;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _RenegoInfoExtension$SHRenegotiationInfoProducer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(RenegoInfoExtension$SHRenegotiationInfoProducer::*)()>(&RenegoInfoExtension$SHRenegotiationInfoProducer::init$))},
	{"produce", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)[B", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _RenegoInfoExtension$SHRenegotiationInfoProducer_InnerClassesInfo_[] = {
	{"sun.security.ssl.RenegoInfoExtension$SHRenegotiationInfoProducer", "sun.security.ssl.RenegoInfoExtension", "SHRenegotiationInfoProducer", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _RenegoInfoExtension$SHRenegotiationInfoProducer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.RenegoInfoExtension$SHRenegotiationInfoProducer",
	"java.lang.Object",
	"sun.security.ssl.HandshakeProducer",
	nullptr,
	_RenegoInfoExtension$SHRenegotiationInfoProducer_MethodInfo_,
	nullptr,
	nullptr,
	_RenegoInfoExtension$SHRenegotiationInfoProducer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.RenegoInfoExtension"
};

$Object* allocate$RenegoInfoExtension$SHRenegotiationInfoProducer($Class* clazz) {
	return $of($alloc(RenegoInfoExtension$SHRenegotiationInfoProducer));
}

void RenegoInfoExtension$SHRenegotiationInfoProducer::init$() {
}

$bytes* RenegoInfoExtension$SHRenegotiationInfoProducer::produce($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$var($ServerHandshakeContext, shc, $cast($ServerHandshakeContext, context));
	$init($SSLExtension);
	$var($RenegoInfoExtension$RenegotiationInfoSpec, requestedSpec, $cast($RenegoInfoExtension$RenegotiationInfoSpec, $nc($nc(shc)->handshakeExtensions)->get($SSLExtension::CH_RENEGOTIATION_INFO)));
	if (requestedSpec == nullptr && !$nc(shc->conContext)->secureRenegotiation) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::finest("Ignore unavailable renegotiation_info extension"_s, $$new($ObjectArray, 0));
		}
		return nullptr;
	}
	if (!$nc(shc->conContext)->secureRenegotiation) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::finest("No secure renegotiation has been negotiated"_s, $$new($ObjectArray, 0));
		}
		return nullptr;
	}
	if (!$nc(shc->conContext)->isNegotiated) {
		$var($bytes, extData, $new($bytes, {(int8_t)0}));
		$init($RenegoInfoExtension$RenegotiationInfoSpec);
		$nc(shc->handshakeExtensions)->put($SSLExtension::SH_RENEGOTIATION_INFO, $RenegoInfoExtension$RenegotiationInfoSpec::NOMINAL);
		return extData;
	} else {
		int32_t infoLen = $nc($nc(shc->conContext)->clientVerifyData)->length + $nc($nc(shc->conContext)->serverVerifyData)->length;
		$var($bytes, extData, $new($bytes, infoLen + 1));
		$var($ByteBuffer, m, $ByteBuffer::wrap(extData));
		$Record::putInt8(m, infoLen);
		$nc(m)->put($nc(shc->conContext)->clientVerifyData);
		m->put($nc(shc->conContext)->serverVerifyData);
		$init($RenegoInfoExtension$RenegotiationInfoSpec);
		$nc(shc->handshakeExtensions)->put($SSLExtension::SH_RENEGOTIATION_INFO, $RenegoInfoExtension$RenegotiationInfoSpec::NOMINAL);
		return extData;
	}
}

RenegoInfoExtension$SHRenegotiationInfoProducer::RenegoInfoExtension$SHRenegotiationInfoProducer() {
}

$Class* RenegoInfoExtension$SHRenegotiationInfoProducer::load$($String* name, bool initialize) {
	$loadClass(RenegoInfoExtension$SHRenegotiationInfoProducer, name, initialize, &_RenegoInfoExtension$SHRenegotiationInfoProducer_ClassInfo_, allocate$RenegoInfoExtension$SHRenegotiationInfoProducer);
	return class$;
}

$Class* RenegoInfoExtension$SHRenegotiationInfoProducer::class$ = nullptr;

		} // ssl
	} // security
} // sun