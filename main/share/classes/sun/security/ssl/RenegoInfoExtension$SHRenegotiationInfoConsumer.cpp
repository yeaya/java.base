#include <sun/security/ssl/RenegoInfoExtension$SHRenegotiationInfoConsumer.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/Arrays.h>
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
#include <sun/security/ssl/TransportContext.h>
#include <jcpp.h>

#undef HANDSHAKE_FAILURE
#undef TLS_EMPTY_RENEGOTIATION_INFO_SCSV
#undef INTERNAL_ERROR
#undef NOMINAL
#undef CH_RENEGOTIATION_INFO
#undef SH_RENEGOTIATION_INFO

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Arrays = ::java::util::Arrays;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $SSLException = ::javax::net::ssl::SSLException;
using $Alert = ::sun::security::ssl::Alert;
using $CipherSuite = ::sun::security::ssl::CipherSuite;
using $ClientHandshakeContext = ::sun::security::ssl::ClientHandshakeContext;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $RenegoInfoExtension = ::sun::security::ssl::RenegoInfoExtension;
using $RenegoInfoExtension$RenegotiationInfoSpec = ::sun::security::ssl::RenegoInfoExtension$RenegotiationInfoSpec;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLExtension$ExtensionConsumer = ::sun::security::ssl::SSLExtension$ExtensionConsumer;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $TransportContext = ::sun::security::ssl::TransportContext;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _RenegoInfoExtension$SHRenegotiationInfoConsumer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(RenegoInfoExtension$SHRenegotiationInfoConsumer::*)()>(&RenegoInfoExtension$SHRenegotiationInfoConsumer::init$))},
	{"consume", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _RenegoInfoExtension$SHRenegotiationInfoConsumer_InnerClassesInfo_[] = {
	{"sun.security.ssl.RenegoInfoExtension$SHRenegotiationInfoConsumer", "sun.security.ssl.RenegoInfoExtension", "SHRenegotiationInfoConsumer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.SSLExtension$ExtensionConsumer", "sun.security.ssl.SSLExtension", "ExtensionConsumer", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _RenegoInfoExtension$SHRenegotiationInfoConsumer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.RenegoInfoExtension$SHRenegotiationInfoConsumer",
	"java.lang.Object",
	"sun.security.ssl.SSLExtension$ExtensionConsumer",
	nullptr,
	_RenegoInfoExtension$SHRenegotiationInfoConsumer_MethodInfo_,
	nullptr,
	nullptr,
	_RenegoInfoExtension$SHRenegotiationInfoConsumer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.RenegoInfoExtension"
};

$Object* allocate$RenegoInfoExtension$SHRenegotiationInfoConsumer($Class* clazz) {
	return $of($alloc(RenegoInfoExtension$SHRenegotiationInfoConsumer));
}

void RenegoInfoExtension$SHRenegotiationInfoConsumer::init$() {
}

void RenegoInfoExtension$SHRenegotiationInfoConsumer::consume($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message, $ByteBuffer* buffer) {
	$var($ClientHandshakeContext, chc, $cast($ClientHandshakeContext, context));
	$init($SSLExtension);
	$var($RenegoInfoExtension$RenegotiationInfoSpec, requestedSpec, $cast($RenegoInfoExtension$RenegotiationInfoSpec, $nc($nc(chc)->handshakeExtensions)->get($SSLExtension::CH_RENEGOTIATION_INFO)));
	$init($CipherSuite);
	if (requestedSpec == nullptr && !$nc(chc->activeCipherSuites)->contains($CipherSuite::TLS_EMPTY_RENEGOTIATION_INFO_SCSV)) {
		$init($Alert);
		$throw($($nc(chc->conContext)->fatal($Alert::INTERNAL_ERROR, "Missing renegotiation_info and SCSV detected in ClientHello"_s)));
	}
	$var($RenegoInfoExtension$RenegotiationInfoSpec, spec, $new($RenegoInfoExtension$RenegotiationInfoSpec, chc, buffer));
	if (!$nc(chc->conContext)->isNegotiated) {
		if ($nc(spec->renegotiatedConnection)->length != 0) {
			$init($Alert);
			$throw($($nc(chc->conContext)->fatal($Alert::HANDSHAKE_FAILURE, "Invalid renegotiation_info in ServerHello: not empty renegotiated_connection"_s)));
		}
		$nc(chc->conContext)->secureRenegotiation = true;
	} else {
		int32_t infoLen = $nc($nc(chc->conContext)->clientVerifyData)->length + $nc($nc(chc->conContext)->serverVerifyData)->length;
		if ($nc(spec->renegotiatedConnection)->length != infoLen) {
			$init($Alert);
			$throw($($nc(chc->conContext)->fatal($Alert::HANDSHAKE_FAILURE, $$str({"Invalid renegotiation_info in ServerHello: invalid renegotiated_connection length ("_s, $$str($nc(spec->renegotiatedConnection)->length), ")"_s}))));
		}
		$var($bytes, cvd, $nc(chc->conContext)->clientVerifyData);
		if (!$Arrays::equals(spec->renegotiatedConnection, 0, $nc(cvd)->length, cvd, 0, cvd->length)) {
			$init($Alert);
			$throw($($nc(chc->conContext)->fatal($Alert::HANDSHAKE_FAILURE, "Invalid renegotiation_info in ServerHello: unmatched client_verify_data value"_s)));
		}
		$var($bytes, svd, $nc(chc->conContext)->serverVerifyData);
		if (!$Arrays::equals(spec->renegotiatedConnection, $nc(cvd)->length, infoLen, svd, 0, $nc(svd)->length)) {
			$init($Alert);
			$throw($($nc(chc->conContext)->fatal($Alert::HANDSHAKE_FAILURE, "Invalid renegotiation_info in ServerHello: unmatched server_verify_data value"_s)));
		}
	}
	$init($RenegoInfoExtension$RenegotiationInfoSpec);
	$nc(chc->handshakeExtensions)->put($SSLExtension::SH_RENEGOTIATION_INFO, $RenegoInfoExtension$RenegotiationInfoSpec::NOMINAL);
}

RenegoInfoExtension$SHRenegotiationInfoConsumer::RenegoInfoExtension$SHRenegotiationInfoConsumer() {
}

$Class* RenegoInfoExtension$SHRenegotiationInfoConsumer::load$($String* name, bool initialize) {
	$loadClass(RenegoInfoExtension$SHRenegotiationInfoConsumer, name, initialize, &_RenegoInfoExtension$SHRenegotiationInfoConsumer_ClassInfo_, allocate$RenegoInfoExtension$SHRenegotiationInfoConsumer);
	return class$;
}

$Class* RenegoInfoExtension$SHRenegotiationInfoConsumer::class$ = nullptr;

		} // ssl
	} // security
} // sun