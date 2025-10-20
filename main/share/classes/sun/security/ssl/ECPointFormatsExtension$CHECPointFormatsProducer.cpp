#include <sun/security/ssl/ECPointFormatsExtension$CHECPointFormatsProducer.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <sun/security/ssl/ClientHandshakeContext.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/ECPointFormatsExtension$ECPointFormatsSpec.h>
#include <sun/security/ssl/ECPointFormatsExtension.h>
#include <sun/security/ssl/NamedGroup$NamedGroupSpec.h>
#include <sun/security/ssl/SSLConfiguration.h>
#include <sun/security/ssl/SSLExtension.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLLogger.h>
#include <jcpp.h>

#undef CH_EC_POINT_FORMATS
#undef DEFAULT
#undef NAMED_GROUP_ECDHE

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $ClientHandshakeContext = ::sun::security::ssl::ClientHandshakeContext;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $ECPointFormatsExtension = ::sun::security::ssl::ECPointFormatsExtension;
using $ECPointFormatsExtension$ECPointFormatsSpec = ::sun::security::ssl::ECPointFormatsExtension$ECPointFormatsSpec;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $HandshakeProducer = ::sun::security::ssl::HandshakeProducer;
using $NamedGroup$NamedGroupSpec = ::sun::security::ssl::NamedGroup$NamedGroupSpec;
using $SSLConfiguration = ::sun::security::ssl::SSLConfiguration;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLLogger = ::sun::security::ssl::SSLLogger;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _ECPointFormatsExtension$CHECPointFormatsProducer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(ECPointFormatsExtension$CHECPointFormatsProducer::*)()>(&ECPointFormatsExtension$CHECPointFormatsProducer::init$))},
	{"produce", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)[B", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _ECPointFormatsExtension$CHECPointFormatsProducer_InnerClassesInfo_[] = {
	{"sun.security.ssl.ECPointFormatsExtension$CHECPointFormatsProducer", "sun.security.ssl.ECPointFormatsExtension", "CHECPointFormatsProducer", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _ECPointFormatsExtension$CHECPointFormatsProducer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.ECPointFormatsExtension$CHECPointFormatsProducer",
	"java.lang.Object",
	"sun.security.ssl.HandshakeProducer",
	nullptr,
	_ECPointFormatsExtension$CHECPointFormatsProducer_MethodInfo_,
	nullptr,
	nullptr,
	_ECPointFormatsExtension$CHECPointFormatsProducer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.ECPointFormatsExtension"
};

$Object* allocate$ECPointFormatsExtension$CHECPointFormatsProducer($Class* clazz) {
	return $of($alloc(ECPointFormatsExtension$CHECPointFormatsProducer));
}

void ECPointFormatsExtension$CHECPointFormatsProducer::init$() {
}

$bytes* ECPointFormatsExtension$CHECPointFormatsProducer::produce($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$useLocalCurrentObjectStackCache();
	$var($ClientHandshakeContext, chc, $cast($ClientHandshakeContext, context));
	$init($SSLExtension);
	if (!$nc($nc(chc)->sslConfig)->isAvailable($SSLExtension::CH_EC_POINT_FORMATS)) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::fine("Ignore unavailable ec_point_formats extension"_s, $$new($ObjectArray, 0));
		}
		return nullptr;
	}
	$init($NamedGroup$NamedGroupSpec);
	if ($NamedGroup$NamedGroupSpec::NAMED_GROUP_ECDHE->isSupported($nc(chc)->activeCipherSuites)) {
		$var($bytes, extData, $new($bytes, {
			(int8_t)1,
			(int8_t)0
		}));
		$init($ECPointFormatsExtension$ECPointFormatsSpec);
		$nc($nc(chc)->handshakeExtensions)->put($SSLExtension::CH_EC_POINT_FORMATS, $ECPointFormatsExtension$ECPointFormatsSpec::DEFAULT);
		return extData;
	}
	$init($SSLLogger);
	if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
		$SSLLogger::fine("Need no ec_point_formats extension"_s, $$new($ObjectArray, 0));
	}
	return nullptr;
}

ECPointFormatsExtension$CHECPointFormatsProducer::ECPointFormatsExtension$CHECPointFormatsProducer() {
}

$Class* ECPointFormatsExtension$CHECPointFormatsProducer::load$($String* name, bool initialize) {
	$loadClass(ECPointFormatsExtension$CHECPointFormatsProducer, name, initialize, &_ECPointFormatsExtension$CHECPointFormatsProducer_ClassInfo_, allocate$ECPointFormatsExtension$CHECPointFormatsProducer);
	return class$;
}

$Class* ECPointFormatsExtension$CHECPointFormatsProducer::class$ = nullptr;

		} // ssl
	} // security
} // sun