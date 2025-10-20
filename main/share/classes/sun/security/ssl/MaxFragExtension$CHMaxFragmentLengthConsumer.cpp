#include <sun/security/ssl/MaxFragExtension$CHMaxFragmentLengthConsumer.h>

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
#include <java/util/Map.h>
#include <javax/net/ssl/SSLException.h>
#include <sun/security/ssl/Alert.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/MaxFragExtension$MaxFragLenEnum.h>
#include <sun/security/ssl/MaxFragExtension$MaxFragLenSpec.h>
#include <sun/security/ssl/MaxFragExtension.h>
#include <sun/security/ssl/SSLConfiguration.h>
#include <sun/security/ssl/SSLExtension.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/ServerHandshakeContext.h>
#include <sun/security/ssl/TransportContext.h>
#include <jcpp.h>

#undef CH_MAX_FRAGMENT_LENGTH
#undef ILLEGAL_PARAMETER

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Map = ::java::util::Map;
using $SSLException = ::javax::net::ssl::SSLException;
using $Alert = ::sun::security::ssl::Alert;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $MaxFragExtension = ::sun::security::ssl::MaxFragExtension;
using $MaxFragExtension$MaxFragLenEnum = ::sun::security::ssl::MaxFragExtension$MaxFragLenEnum;
using $MaxFragExtension$MaxFragLenSpec = ::sun::security::ssl::MaxFragExtension$MaxFragLenSpec;
using $SSLConfiguration = ::sun::security::ssl::SSLConfiguration;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLExtension$ExtensionConsumer = ::sun::security::ssl::SSLExtension$ExtensionConsumer;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;
using $TransportContext = ::sun::security::ssl::TransportContext;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _MaxFragExtension$CHMaxFragmentLengthConsumer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(MaxFragExtension$CHMaxFragmentLengthConsumer::*)()>(&MaxFragExtension$CHMaxFragmentLengthConsumer::init$))},
	{"consume", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _MaxFragExtension$CHMaxFragmentLengthConsumer_InnerClassesInfo_[] = {
	{"sun.security.ssl.MaxFragExtension$CHMaxFragmentLengthConsumer", "sun.security.ssl.MaxFragExtension", "CHMaxFragmentLengthConsumer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.SSLExtension$ExtensionConsumer", "sun.security.ssl.SSLExtension", "ExtensionConsumer", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _MaxFragExtension$CHMaxFragmentLengthConsumer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.MaxFragExtension$CHMaxFragmentLengthConsumer",
	"java.lang.Object",
	"sun.security.ssl.SSLExtension$ExtensionConsumer",
	nullptr,
	_MaxFragExtension$CHMaxFragmentLengthConsumer_MethodInfo_,
	nullptr,
	nullptr,
	_MaxFragExtension$CHMaxFragmentLengthConsumer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.MaxFragExtension"
};

$Object* allocate$MaxFragExtension$CHMaxFragmentLengthConsumer($Class* clazz) {
	return $of($alloc(MaxFragExtension$CHMaxFragmentLengthConsumer));
}

void MaxFragExtension$CHMaxFragmentLengthConsumer::init$() {
}

void MaxFragExtension$CHMaxFragmentLengthConsumer::consume($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message, $ByteBuffer* buffer) {
	$useLocalCurrentObjectStackCache();
	$var($ServerHandshakeContext, shc, $cast($ServerHandshakeContext, context));
	$init($SSLExtension);
	if (!$nc($nc(shc)->sslConfig)->isAvailable($SSLExtension::CH_MAX_FRAGMENT_LENGTH)) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::fine("Ignore unavailable max_fragment_length extension"_s, $$new($ObjectArray, 0));
		}
		return;
	}
	$var($MaxFragExtension$MaxFragLenSpec, spec, $new($MaxFragExtension$MaxFragLenSpec, shc, buffer));
	$MaxFragExtension$MaxFragLenEnum* mfle = $MaxFragExtension$MaxFragLenEnum::valueOf(spec->id);
	if (mfle == nullptr) {
		$init($Alert);
		$throw($($nc($nc(shc)->conContext)->fatal($Alert::ILLEGAL_PARAMETER, "the requested maximum fragment length is other than the allowed values"_s)));
	}
	$nc(shc)->maxFragmentLength = $nc(mfle)->fragmentSize;
	$nc(shc->handshakeExtensions)->put($SSLExtension::CH_MAX_FRAGMENT_LENGTH, spec);
}

MaxFragExtension$CHMaxFragmentLengthConsumer::MaxFragExtension$CHMaxFragmentLengthConsumer() {
}

$Class* MaxFragExtension$CHMaxFragmentLengthConsumer::load$($String* name, bool initialize) {
	$loadClass(MaxFragExtension$CHMaxFragmentLengthConsumer, name, initialize, &_MaxFragExtension$CHMaxFragmentLengthConsumer_ClassInfo_, allocate$MaxFragExtension$CHMaxFragmentLengthConsumer);
	return class$;
}

$Class* MaxFragExtension$CHMaxFragmentLengthConsumer::class$ = nullptr;

		} // ssl
	} // security
} // sun