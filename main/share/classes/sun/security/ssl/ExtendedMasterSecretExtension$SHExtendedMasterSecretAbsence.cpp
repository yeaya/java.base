#include <sun/security/ssl/ExtendedMasterSecretExtension$SHExtendedMasterSecretAbsence.h>
#include <javax/net/ssl/SSLException.h>
#include <sun/security/ssl/Alert.h>
#include <sun/security/ssl/ClientHandshakeContext.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/ExtendedMasterSecretExtension.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/SSLConfiguration.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLSessionImpl.h>
#include <sun/security/ssl/TransportContext.h>
#include <jcpp.h>

#undef HANDSHAKE_FAILURE

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Alert = ::sun::security::ssl::Alert;
using $ClientHandshakeContext = ::sun::security::ssl::ClientHandshakeContext;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $SSLConfiguration = ::sun::security::ssl::SSLConfiguration;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;

namespace sun {
	namespace security {
		namespace ssl {

void ExtendedMasterSecretExtension$SHExtendedMasterSecretAbsence::init$() {
}

void ExtendedMasterSecretExtension$SHExtendedMasterSecretAbsence::absent($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$useLocalObjectStack();
	$var($ClientHandshakeContext, chc, $cast($ClientHandshakeContext, context));
	$init($SSLConfiguration);
	if ($SSLConfiguration::useExtendedMasterSecret && !$SSLConfiguration::allowLegacyMasterSecret) {
		$init($Alert);
		$throw($($nc($nc(chc)->conContext)->fatal($Alert::HANDSHAKE_FAILURE, "Extended Master Secret extension is required"_s)));
	}
	if ($nc(chc)->isResumption && chc->resumingSession != nullptr) {
		if (chc->resumingSession->useExtendedMasterSecret) {
			$init($Alert);
			$throw($($nc(chc->conContext)->fatal($Alert::HANDSHAKE_FAILURE, "Missing Extended Master Secret extension on session resumption"_s)));
		} else if ($SSLConfiguration::useExtendedMasterSecret && !$SSLConfiguration::allowLegacyResumption && $nc(chc->negotiatedProtocol)->useTLS10PlusSpec()) {
			$init($Alert);
			$throw($($nc(chc->conContext)->fatal($Alert::HANDSHAKE_FAILURE, "Extended Master Secret extension is required"_s)));
		}
	}
}

ExtendedMasterSecretExtension$SHExtendedMasterSecretAbsence::ExtendedMasterSecretExtension$SHExtendedMasterSecretAbsence() {
}

$Class* ExtendedMasterSecretExtension$SHExtendedMasterSecretAbsence::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(ExtendedMasterSecretExtension$SHExtendedMasterSecretAbsence, init$, void)},
		{"absent", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)V", nullptr, $PUBLIC, $virtualMethod(ExtendedMasterSecretExtension$SHExtendedMasterSecretAbsence, absent, void, $ConnectionContext*, $SSLHandshake$HandshakeMessage*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.ExtendedMasterSecretExtension$SHExtendedMasterSecretAbsence", "sun.security.ssl.ExtendedMasterSecretExtension", "SHExtendedMasterSecretAbsence", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.ExtendedMasterSecretExtension$SHExtendedMasterSecretAbsence",
		"java.lang.Object",
		"sun.security.ssl.HandshakeAbsence",
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
	$loadClass(ExtendedMasterSecretExtension$SHExtendedMasterSecretAbsence, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExtendedMasterSecretExtension$SHExtendedMasterSecretAbsence);
	});
	return class$;
}

$Class* ExtendedMasterSecretExtension$SHExtendedMasterSecretAbsence::class$ = nullptr;

		} // ssl
	} // security
} // sun