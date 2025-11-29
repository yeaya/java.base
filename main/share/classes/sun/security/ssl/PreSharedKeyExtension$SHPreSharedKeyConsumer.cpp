#include <sun/security/ssl/PreSharedKeyExtension$SHPreSharedKeyConsumer.h>

#include <java/nio/ByteBuffer.h>
#include <java/util/Map.h>
#include <javax/net/ssl/SSLException.h>
#include <sun/security/ssl/Alert.h>
#include <sun/security/ssl/ClientHandshakeContext.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/PreSharedKeyExtension$SHPreSharedKeySpec.h>
#include <sun/security/ssl/PreSharedKeyExtension.h>
#include <sun/security/ssl/SSLExtension.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/SSLSessionImpl.h>
#include <sun/security/ssl/TransportContext.h>
#include <jcpp.h>

#undef CH_PRE_SHARED_KEY
#undef ILLEGAL_PARAMETER
#undef UNEXPECTED_MESSAGE

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Map = ::java::util::Map;
using $Alert = ::sun::security::ssl::Alert;
using $ClientHandshakeContext = ::sun::security::ssl::ClientHandshakeContext;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $PreSharedKeyExtension$SHPreSharedKeySpec = ::sun::security::ssl::PreSharedKeyExtension$SHPreSharedKeySpec;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $TransportContext = ::sun::security::ssl::TransportContext;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _PreSharedKeyExtension$SHPreSharedKeyConsumer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(PreSharedKeyExtension$SHPreSharedKeyConsumer::*)()>(&PreSharedKeyExtension$SHPreSharedKeyConsumer::init$))},
	{"consume", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _PreSharedKeyExtension$SHPreSharedKeyConsumer_InnerClassesInfo_[] = {
	{"sun.security.ssl.PreSharedKeyExtension$SHPreSharedKeyConsumer", "sun.security.ssl.PreSharedKeyExtension", "SHPreSharedKeyConsumer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.SSLExtension$ExtensionConsumer", "sun.security.ssl.SSLExtension", "ExtensionConsumer", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _PreSharedKeyExtension$SHPreSharedKeyConsumer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.PreSharedKeyExtension$SHPreSharedKeyConsumer",
	"java.lang.Object",
	"sun.security.ssl.SSLExtension$ExtensionConsumer",
	nullptr,
	_PreSharedKeyExtension$SHPreSharedKeyConsumer_MethodInfo_,
	nullptr,
	nullptr,
	_PreSharedKeyExtension$SHPreSharedKeyConsumer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.PreSharedKeyExtension"
};

$Object* allocate$PreSharedKeyExtension$SHPreSharedKeyConsumer($Class* clazz) {
	return $of($alloc(PreSharedKeyExtension$SHPreSharedKeyConsumer));
}

void PreSharedKeyExtension$SHPreSharedKeyConsumer::init$() {
}

void PreSharedKeyExtension$SHPreSharedKeyConsumer::consume($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message, $ByteBuffer* buffer) {
	$useLocalCurrentObjectStackCache();
	$var($ClientHandshakeContext, chc, $cast($ClientHandshakeContext, context));
	$init($SSLExtension);
	if (!$nc($nc(chc)->handshakeExtensions)->containsKey($SSLExtension::CH_PRE_SHARED_KEY)) {
		$init($Alert);
		$throw($($nc(chc->conContext)->fatal($Alert::UNEXPECTED_MESSAGE, "Server sent unexpected pre_shared_key extension"_s)));
	}
	$var($PreSharedKeyExtension$SHPreSharedKeySpec, shPsk, $new($PreSharedKeyExtension$SHPreSharedKeySpec, chc, buffer));
	$init($SSLLogger);
	if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
		$SSLLogger::fine("Received pre_shared_key extension: "_s, $$new($ObjectArray, {$of(shPsk)}));
	}
	if (shPsk->selectedIdentity != 0) {
		$init($Alert);
		$throw($($nc($nc(chc)->conContext)->fatal($Alert::ILLEGAL_PARAMETER, "Selected identity index is not in correct range."_s)));
	}
	if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
		$SSLLogger::fine("Resuming session: "_s, $$new($ObjectArray, {$of($nc(chc)->resumingSession)}));
	}
}

PreSharedKeyExtension$SHPreSharedKeyConsumer::PreSharedKeyExtension$SHPreSharedKeyConsumer() {
}

$Class* PreSharedKeyExtension$SHPreSharedKeyConsumer::load$($String* name, bool initialize) {
	$loadClass(PreSharedKeyExtension$SHPreSharedKeyConsumer, name, initialize, &_PreSharedKeyExtension$SHPreSharedKeyConsumer_ClassInfo_, allocate$PreSharedKeyExtension$SHPreSharedKeyConsumer);
	return class$;
}

$Class* PreSharedKeyExtension$SHPreSharedKeyConsumer::class$ = nullptr;

		} // ssl
	} // security
} // sun