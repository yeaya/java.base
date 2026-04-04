#include <sun/security/ssl/ExtendedMasterSecretExtension$SHExtendedMasterSecretConsumer.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/Map.h>
#include <javax/net/ssl/SSLException.h>
#include <sun/security/ssl/Alert.h>
#include <sun/security/ssl/ClientHandshakeContext.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/ExtendedMasterSecretExtension$ExtendedMasterSecretSpec.h>
#include <sun/security/ssl/ExtendedMasterSecretExtension.h>
#include <sun/security/ssl/SSLExtension.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLSessionImpl.h>
#include <sun/security/ssl/TransportContext.h>
#include <jcpp.h>

#undef CH_EXTENDED_MASTER_SECRET
#undef NOMINAL
#undef SH_EXTENDED_MASTER_SECRET
#undef UNSUPPORTED_EXTENSION

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Alert = ::sun::security::ssl::Alert;
using $ClientHandshakeContext = ::sun::security::ssl::ClientHandshakeContext;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $ExtendedMasterSecretExtension$ExtendedMasterSecretSpec = ::sun::security::ssl::ExtendedMasterSecretExtension$ExtendedMasterSecretSpec;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;

namespace sun {
	namespace security {
		namespace ssl {

void ExtendedMasterSecretExtension$SHExtendedMasterSecretConsumer::init$() {
}

void ExtendedMasterSecretExtension$SHExtendedMasterSecretConsumer::consume($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message, $ByteBuffer* buffer) {
	$useLocalObjectStack();
	$var($ClientHandshakeContext, chc, $cast($ClientHandshakeContext, context));
	$init($SSLExtension);
	$var($ExtendedMasterSecretExtension$ExtendedMasterSecretSpec, requstedSpec, $cast($ExtendedMasterSecretExtension$ExtendedMasterSecretSpec, $nc($nc(chc)->handshakeExtensions)->get($SSLExtension::CH_EXTENDED_MASTER_SECRET)));
	if (requstedSpec == nullptr) {
		$init($Alert);
		$throw($($nc(chc->conContext)->fatal($Alert::UNSUPPORTED_EXTENSION, "Server sent the extended_master_secret extension improperly"_s)));
	}
	$var($ExtendedMasterSecretExtension$ExtendedMasterSecretSpec, spec, $new($ExtendedMasterSecretExtension$ExtendedMasterSecretSpec, chc, buffer));
	if (chc->isResumption && chc->resumingSession != nullptr && !chc->resumingSession->useExtendedMasterSecret) {
		$init($Alert);
		$throw($($nc(chc->conContext)->fatal($Alert::UNSUPPORTED_EXTENSION, "Server sent an unexpected extended_master_secret extension on session resumption"_s)));
	}
	chc->handshakeExtensions->put($SSLExtension::SH_EXTENDED_MASTER_SECRET, $ExtendedMasterSecretExtension$ExtendedMasterSecretSpec::NOMINAL);
}

ExtendedMasterSecretExtension$SHExtendedMasterSecretConsumer::ExtendedMasterSecretExtension$SHExtendedMasterSecretConsumer() {
}

$Class* ExtendedMasterSecretExtension$SHExtendedMasterSecretConsumer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(ExtendedMasterSecretExtension$SHExtendedMasterSecretConsumer, init$, void)},
		{"consume", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC, $virtualMethod(ExtendedMasterSecretExtension$SHExtendedMasterSecretConsumer, consume, void, $ConnectionContext*, $SSLHandshake$HandshakeMessage*, $ByteBuffer*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.ExtendedMasterSecretExtension$SHExtendedMasterSecretConsumer", "sun.security.ssl.ExtendedMasterSecretExtension", "SHExtendedMasterSecretConsumer", $PRIVATE | $STATIC | $FINAL},
		{"sun.security.ssl.SSLExtension$ExtensionConsumer", "sun.security.ssl.SSLExtension", "ExtensionConsumer", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.ExtendedMasterSecretExtension$SHExtendedMasterSecretConsumer",
		"java.lang.Object",
		"sun.security.ssl.SSLExtension$ExtensionConsumer",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.ssl.ExtendedMasterSecretExtension"
	};
	$loadClass(ExtendedMasterSecretExtension$SHExtendedMasterSecretConsumer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExtendedMasterSecretExtension$SHExtendedMasterSecretConsumer);
	});
	return class$;
}

$Class* ExtendedMasterSecretExtension$SHExtendedMasterSecretConsumer::class$ = nullptr;

		} // ssl
	} // security
} // sun