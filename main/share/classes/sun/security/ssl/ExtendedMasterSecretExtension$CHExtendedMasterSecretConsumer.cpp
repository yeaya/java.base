#include <sun/security/ssl/ExtendedMasterSecretExtension$CHExtendedMasterSecretConsumer.h>

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
#include <sun/security/ssl/ExtendedMasterSecretExtension$ExtendedMasterSecretSpec.h>
#include <sun/security/ssl/ExtendedMasterSecretExtension.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/SSLConfiguration.h>
#include <sun/security/ssl/SSLExtension.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/SSLSessionImpl.h>
#include <sun/security/ssl/ServerHandshakeContext.h>
#include <jcpp.h>

#undef CH_EXTENDED_MASTER_SECRET
#undef NOMINAL

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Map = ::java::util::Map;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $ExtendedMasterSecretExtension = ::sun::security::ssl::ExtendedMasterSecretExtension;
using $ExtendedMasterSecretExtension$ExtendedMasterSecretSpec = ::sun::security::ssl::ExtendedMasterSecretExtension$ExtendedMasterSecretSpec;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $ProtocolVersion = ::sun::security::ssl::ProtocolVersion;
using $SSLConfiguration = ::sun::security::ssl::SSLConfiguration;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLExtension$ExtensionConsumer = ::sun::security::ssl::SSLExtension$ExtensionConsumer;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $SSLSessionImpl = ::sun::security::ssl::SSLSessionImpl;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _ExtendedMasterSecretExtension$CHExtendedMasterSecretConsumer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(ExtendedMasterSecretExtension$CHExtendedMasterSecretConsumer::*)()>(&ExtendedMasterSecretExtension$CHExtendedMasterSecretConsumer::init$))},
	{"consume", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _ExtendedMasterSecretExtension$CHExtendedMasterSecretConsumer_InnerClassesInfo_[] = {
	{"sun.security.ssl.ExtendedMasterSecretExtension$CHExtendedMasterSecretConsumer", "sun.security.ssl.ExtendedMasterSecretExtension", "CHExtendedMasterSecretConsumer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.SSLExtension$ExtensionConsumer", "sun.security.ssl.SSLExtension", "ExtensionConsumer", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ExtendedMasterSecretExtension$CHExtendedMasterSecretConsumer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.ExtendedMasterSecretExtension$CHExtendedMasterSecretConsumer",
	"java.lang.Object",
	"sun.security.ssl.SSLExtension$ExtensionConsumer",
	nullptr,
	_ExtendedMasterSecretExtension$CHExtendedMasterSecretConsumer_MethodInfo_,
	nullptr,
	nullptr,
	_ExtendedMasterSecretExtension$CHExtendedMasterSecretConsumer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.ExtendedMasterSecretExtension"
};

$Object* allocate$ExtendedMasterSecretExtension$CHExtendedMasterSecretConsumer($Class* clazz) {
	return $of($alloc(ExtendedMasterSecretExtension$CHExtendedMasterSecretConsumer));
}

void ExtendedMasterSecretExtension$CHExtendedMasterSecretConsumer::init$() {
}

void ExtendedMasterSecretExtension$CHExtendedMasterSecretConsumer::consume($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message, $ByteBuffer* buffer) {
	$var($ServerHandshakeContext, shc, $cast($ServerHandshakeContext, context));
	$init($SSLExtension);
	$init($SSLConfiguration);
	bool var$0 = !$nc($nc(shc)->sslConfig)->isAvailable($SSLExtension::CH_EXTENDED_MASTER_SECRET) || !$SSLConfiguration::useExtendedMasterSecret;
	if (var$0 || !$nc($nc(shc)->negotiatedProtocol)->useTLS10PlusSpec()) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::fine($$str({"Ignore unavailable extension: "_s, $SSLExtension::CH_EXTENDED_MASTER_SECRET->name$}), $$new($ObjectArray, 0));
		}
		return;
	}
	$var($ExtendedMasterSecretExtension$ExtendedMasterSecretSpec, spec, $new($ExtendedMasterSecretExtension$ExtendedMasterSecretSpec, shc, buffer));
	if ($nc(shc)->isResumption && shc->resumingSession != nullptr && !$nc(shc->resumingSession)->useExtendedMasterSecret) {
		shc->isResumption = false;
		$set(shc, resumingSession, nullptr);
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::fine("abort session resumption which did not use Extended Master Secret extension"_s, $$new($ObjectArray, 0));
		}
	}
	$init($ExtendedMasterSecretExtension$ExtendedMasterSecretSpec);
	$nc($nc(shc)->handshakeExtensions)->put($SSLExtension::CH_EXTENDED_MASTER_SECRET, $ExtendedMasterSecretExtension$ExtendedMasterSecretSpec::NOMINAL);
}

ExtendedMasterSecretExtension$CHExtendedMasterSecretConsumer::ExtendedMasterSecretExtension$CHExtendedMasterSecretConsumer() {
}

$Class* ExtendedMasterSecretExtension$CHExtendedMasterSecretConsumer::load$($String* name, bool initialize) {
	$loadClass(ExtendedMasterSecretExtension$CHExtendedMasterSecretConsumer, name, initialize, &_ExtendedMasterSecretExtension$CHExtendedMasterSecretConsumer_ClassInfo_, allocate$ExtendedMasterSecretExtension$CHExtendedMasterSecretConsumer);
	return class$;
}

$Class* ExtendedMasterSecretExtension$CHExtendedMasterSecretConsumer::class$ = nullptr;

		} // ssl
	} // security
} // sun