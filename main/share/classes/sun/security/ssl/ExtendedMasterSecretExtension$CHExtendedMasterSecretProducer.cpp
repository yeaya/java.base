#include <sun/security/ssl/ExtendedMasterSecretExtension$CHExtendedMasterSecretProducer.h>
#include <java/util/Map.h>
#include <sun/security/ssl/ClientHandshakeContext.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/ExtendedMasterSecretExtension$ExtendedMasterSecretSpec.h>
#include <sun/security/ssl/ExtendedMasterSecretExtension.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/SSLConfiguration.h>
#include <sun/security/ssl/SSLExtension.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/SSLSessionImpl.h>
#include <sun/security/ssl/TransportContext.h>
#include <jcpp.h>

#undef CH_EXTENDED_MASTER_SECRET
#undef NOMINAL

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ClientHandshakeContext = ::sun::security::ssl::ClientHandshakeContext;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $ExtendedMasterSecretExtension$ExtendedMasterSecretSpec = ::sun::security::ssl::ExtendedMasterSecretExtension$ExtendedMasterSecretSpec;
using $SSLConfiguration = ::sun::security::ssl::SSLConfiguration;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLLogger = ::sun::security::ssl::SSLLogger;

namespace sun {
	namespace security {
		namespace ssl {

void ExtendedMasterSecretExtension$CHExtendedMasterSecretProducer::init$() {
}

$bytes* ExtendedMasterSecretExtension$CHExtendedMasterSecretProducer::produce($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$useLocalObjectStack();
	$var($ClientHandshakeContext, chc, $cast($ClientHandshakeContext, context));
	$init($SSLExtension);
	bool var$0 = !$nc($nc(chc)->sslConfig)->isAvailable($SSLExtension::CH_EXTENDED_MASTER_SECRET) || !$SSLConfiguration::useExtendedMasterSecret;
	if (var$0 || !$nc($nc(chc->conContext)->protocolVersion)->useTLS10PlusSpec()) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::fine("Ignore unavailable extended_master_secret extension"_s, $$new($ObjectArray, 0));
		}
		return nullptr;
	}
	if (chc->handshakeSession == nullptr || chc->handshakeSession->useExtendedMasterSecret) {
		$var($bytes, extData, $new($bytes, 0));
		$init($ExtendedMasterSecretExtension$ExtendedMasterSecretSpec);
		$nc(chc->handshakeExtensions)->put($SSLExtension::CH_EXTENDED_MASTER_SECRET, $ExtendedMasterSecretExtension$ExtendedMasterSecretSpec::NOMINAL);
		return extData;
	}
	return nullptr;
}

ExtendedMasterSecretExtension$CHExtendedMasterSecretProducer::ExtendedMasterSecretExtension$CHExtendedMasterSecretProducer() {
}

$Class* ExtendedMasterSecretExtension$CHExtendedMasterSecretProducer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(ExtendedMasterSecretExtension$CHExtendedMasterSecretProducer, init$, void)},
		{"produce", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)[B", nullptr, $PUBLIC, $virtualMethod(ExtendedMasterSecretExtension$CHExtendedMasterSecretProducer, produce, $bytes*, $ConnectionContext*, $SSLHandshake$HandshakeMessage*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.ExtendedMasterSecretExtension$CHExtendedMasterSecretProducer", "sun.security.ssl.ExtendedMasterSecretExtension", "CHExtendedMasterSecretProducer", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.ExtendedMasterSecretExtension$CHExtendedMasterSecretProducer",
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
		"sun.security.ssl.ExtendedMasterSecretExtension"
	};
	$loadClass(ExtendedMasterSecretExtension$CHExtendedMasterSecretProducer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExtendedMasterSecretExtension$CHExtendedMasterSecretProducer);
	});
	return class$;
}

$Class* ExtendedMasterSecretExtension$CHExtendedMasterSecretProducer::class$ = nullptr;

		} // ssl
	} // security
} // sun