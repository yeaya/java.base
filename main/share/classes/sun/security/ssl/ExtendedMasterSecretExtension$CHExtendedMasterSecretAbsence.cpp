#include <sun/security/ssl/ExtendedMasterSecretExtension$CHExtendedMasterSecretAbsence.h>

#include <javax/net/ssl/SSLException.h>
#include <sun/security/ssl/Alert.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/ExtendedMasterSecretExtension.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/SSLConfiguration.h>
#include <sun/security/ssl/SSLExtension.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/SSLSessionImpl.h>
#include <sun/security/ssl/ServerHandshakeContext.h>
#include <sun/security/ssl/TransportContext.h>
#include <jcpp.h>

#undef CH_EXTENDED_MASTER_SECRET
#undef HANDSHAKE_FAILURE

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Alert = ::sun::security::ssl::Alert;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $ProtocolVersion = ::sun::security::ssl::ProtocolVersion;
using $SSLConfiguration = ::sun::security::ssl::SSLConfiguration;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;
using $TransportContext = ::sun::security::ssl::TransportContext;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _ExtendedMasterSecretExtension$CHExtendedMasterSecretAbsence_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(ExtendedMasterSecretExtension$CHExtendedMasterSecretAbsence, init$, void)},
	{"absent", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)V", nullptr, $PUBLIC, $virtualMethod(ExtendedMasterSecretExtension$CHExtendedMasterSecretAbsence, absent, void, $ConnectionContext*, $SSLHandshake$HandshakeMessage*), "java.io.IOException"},
	{}
};

$InnerClassInfo _ExtendedMasterSecretExtension$CHExtendedMasterSecretAbsence_InnerClassesInfo_[] = {
	{"sun.security.ssl.ExtendedMasterSecretExtension$CHExtendedMasterSecretAbsence", "sun.security.ssl.ExtendedMasterSecretExtension", "CHExtendedMasterSecretAbsence", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _ExtendedMasterSecretExtension$CHExtendedMasterSecretAbsence_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.ExtendedMasterSecretExtension$CHExtendedMasterSecretAbsence",
	"java.lang.Object",
	"sun.security.ssl.HandshakeAbsence",
	nullptr,
	_ExtendedMasterSecretExtension$CHExtendedMasterSecretAbsence_MethodInfo_,
	nullptr,
	nullptr,
	_ExtendedMasterSecretExtension$CHExtendedMasterSecretAbsence_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.ExtendedMasterSecretExtension"
};

$Object* allocate$ExtendedMasterSecretExtension$CHExtendedMasterSecretAbsence($Class* clazz) {
	return $of($alloc(ExtendedMasterSecretExtension$CHExtendedMasterSecretAbsence));
}

void ExtendedMasterSecretExtension$CHExtendedMasterSecretAbsence::init$() {
}

void ExtendedMasterSecretExtension$CHExtendedMasterSecretAbsence::absent($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$useLocalCurrentObjectStackCache();
	$var($ServerHandshakeContext, shc, $cast($ServerHandshakeContext, context));
	$init($SSLExtension);
	$init($SSLConfiguration);
	if (!$nc($nc(shc)->sslConfig)->isAvailable($SSLExtension::CH_EXTENDED_MASTER_SECRET) || !$SSLConfiguration::useExtendedMasterSecret) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::fine($$str({"Ignore unavailable extension: "_s, $SSLExtension::CH_EXTENDED_MASTER_SECRET->name$}), $$new($ObjectArray, 0));
		}
		return;
	}
	if ($nc($nc(shc)->negotiatedProtocol)->useTLS10PlusSpec() && !$SSLConfiguration::allowLegacyMasterSecret) {
		$init($Alert);
		$throw($($nc(shc->conContext)->fatal($Alert::HANDSHAKE_FAILURE, "Extended Master Secret extension is required"_s)));
	}
	if ($nc(shc)->isResumption && shc->resumingSession != nullptr) {
		if ($nc(shc->resumingSession)->useExtendedMasterSecret) {
			$init($Alert);
			$throw($($nc(shc->conContext)->fatal($Alert::HANDSHAKE_FAILURE, "Missing Extended Master Secret extension on session resumption"_s)));
		} else {
			if (!$SSLConfiguration::allowLegacyResumption) {
				$init($Alert);
				$throw($($nc(shc->conContext)->fatal($Alert::HANDSHAKE_FAILURE, "Missing Extended Master Secret extension on session resumption"_s)));
			} else {
				shc->isResumption = false;
				$set(shc, resumingSession, nullptr);
				$init($SSLLogger);
				if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
					$SSLLogger::fine("abort session resumption, missing Extended Master Secret extension"_s, $$new($ObjectArray, 0));
				}
			}
		}
	}
}

ExtendedMasterSecretExtension$CHExtendedMasterSecretAbsence::ExtendedMasterSecretExtension$CHExtendedMasterSecretAbsence() {
}

$Class* ExtendedMasterSecretExtension$CHExtendedMasterSecretAbsence::load$($String* name, bool initialize) {
	$loadClass(ExtendedMasterSecretExtension$CHExtendedMasterSecretAbsence, name, initialize, &_ExtendedMasterSecretExtension$CHExtendedMasterSecretAbsence_ClassInfo_, allocate$ExtendedMasterSecretExtension$CHExtendedMasterSecretAbsence);
	return class$;
}

$Class* ExtendedMasterSecretExtension$CHExtendedMasterSecretAbsence::class$ = nullptr;

		} // ssl
	} // security
} // sun