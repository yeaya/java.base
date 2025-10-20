#include <sun/security/ssl/ExtendedMasterSecretExtension$CHExtendedMasterSecretProducer.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
using $Map = ::java::util::Map;
using $ClientHandshakeContext = ::sun::security::ssl::ClientHandshakeContext;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $ExtendedMasterSecretExtension = ::sun::security::ssl::ExtendedMasterSecretExtension;
using $ExtendedMasterSecretExtension$ExtendedMasterSecretSpec = ::sun::security::ssl::ExtendedMasterSecretExtension$ExtendedMasterSecretSpec;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $HandshakeProducer = ::sun::security::ssl::HandshakeProducer;
using $ProtocolVersion = ::sun::security::ssl::ProtocolVersion;
using $SSLConfiguration = ::sun::security::ssl::SSLConfiguration;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $SSLSessionImpl = ::sun::security::ssl::SSLSessionImpl;
using $TransportContext = ::sun::security::ssl::TransportContext;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _ExtendedMasterSecretExtension$CHExtendedMasterSecretProducer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(ExtendedMasterSecretExtension$CHExtendedMasterSecretProducer::*)()>(&ExtendedMasterSecretExtension$CHExtendedMasterSecretProducer::init$))},
	{"produce", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)[B", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _ExtendedMasterSecretExtension$CHExtendedMasterSecretProducer_InnerClassesInfo_[] = {
	{"sun.security.ssl.ExtendedMasterSecretExtension$CHExtendedMasterSecretProducer", "sun.security.ssl.ExtendedMasterSecretExtension", "CHExtendedMasterSecretProducer", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _ExtendedMasterSecretExtension$CHExtendedMasterSecretProducer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.ExtendedMasterSecretExtension$CHExtendedMasterSecretProducer",
	"java.lang.Object",
	"sun.security.ssl.HandshakeProducer",
	nullptr,
	_ExtendedMasterSecretExtension$CHExtendedMasterSecretProducer_MethodInfo_,
	nullptr,
	nullptr,
	_ExtendedMasterSecretExtension$CHExtendedMasterSecretProducer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.ExtendedMasterSecretExtension"
};

$Object* allocate$ExtendedMasterSecretExtension$CHExtendedMasterSecretProducer($Class* clazz) {
	return $of($alloc(ExtendedMasterSecretExtension$CHExtendedMasterSecretProducer));
}

void ExtendedMasterSecretExtension$CHExtendedMasterSecretProducer::init$() {
}

$bytes* ExtendedMasterSecretExtension$CHExtendedMasterSecretProducer::produce($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$useLocalCurrentObjectStackCache();
	$var($ClientHandshakeContext, chc, $cast($ClientHandshakeContext, context));
	$init($SSLExtension);
	$init($SSLConfiguration);
	bool var$0 = !$nc($nc(chc)->sslConfig)->isAvailable($SSLExtension::CH_EXTENDED_MASTER_SECRET) || !$SSLConfiguration::useExtendedMasterSecret;
	if (var$0 || !$nc($nc($nc(chc)->conContext)->protocolVersion)->useTLS10PlusSpec()) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::fine("Ignore unavailable extended_master_secret extension"_s, $$new($ObjectArray, 0));
		}
		return nullptr;
	}
	if ($nc(chc)->handshakeSession == nullptr || $nc($nc(chc)->handshakeSession)->useExtendedMasterSecret) {
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
	$loadClass(ExtendedMasterSecretExtension$CHExtendedMasterSecretProducer, name, initialize, &_ExtendedMasterSecretExtension$CHExtendedMasterSecretProducer_ClassInfo_, allocate$ExtendedMasterSecretExtension$CHExtendedMasterSecretProducer);
	return class$;
}

$Class* ExtendedMasterSecretExtension$CHExtendedMasterSecretProducer::class$ = nullptr;

		} // ssl
	} // security
} // sun