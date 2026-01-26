#include <sun/security/ssl/SupportedVersionsExtension$CHSupportedVersionsProducer.h>

#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <sun/security/ssl/ClientHandshakeContext.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/SSLConfiguration.h>
#include <sun/security/ssl/SSLExtension.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/SupportedVersionsExtension$CHSupportedVersionsSpec.h>
#include <sun/security/ssl/SupportedVersionsExtension.h>
#include <jcpp.h>

#undef CH_SUPPORTED_VERSIONS

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $ClientHandshakeContext = ::sun::security::ssl::ClientHandshakeContext;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $ProtocolVersion = ::sun::security::ssl::ProtocolVersion;
using $SSLConfiguration = ::sun::security::ssl::SSLConfiguration;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $SupportedVersionsExtension$CHSupportedVersionsSpec = ::sun::security::ssl::SupportedVersionsExtension$CHSupportedVersionsSpec;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _SupportedVersionsExtension$CHSupportedVersionsProducer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(SupportedVersionsExtension$CHSupportedVersionsProducer, init$, void)},
	{"produce", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)[B", nullptr, $PUBLIC, $virtualMethod(SupportedVersionsExtension$CHSupportedVersionsProducer, produce, $bytes*, $ConnectionContext*, $SSLHandshake$HandshakeMessage*), "java.io.IOException"},
	{}
};

$InnerClassInfo _SupportedVersionsExtension$CHSupportedVersionsProducer_InnerClassesInfo_[] = {
	{"sun.security.ssl.SupportedVersionsExtension$CHSupportedVersionsProducer", "sun.security.ssl.SupportedVersionsExtension", "CHSupportedVersionsProducer", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _SupportedVersionsExtension$CHSupportedVersionsProducer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.SupportedVersionsExtension$CHSupportedVersionsProducer",
	"java.lang.Object",
	"sun.security.ssl.HandshakeProducer",
	nullptr,
	_SupportedVersionsExtension$CHSupportedVersionsProducer_MethodInfo_,
	nullptr,
	nullptr,
	_SupportedVersionsExtension$CHSupportedVersionsProducer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.SupportedVersionsExtension"
};

$Object* allocate$SupportedVersionsExtension$CHSupportedVersionsProducer($Class* clazz) {
	return $of($alloc(SupportedVersionsExtension$CHSupportedVersionsProducer));
}

void SupportedVersionsExtension$CHSupportedVersionsProducer::init$() {
}

$bytes* SupportedVersionsExtension$CHSupportedVersionsProducer::produce($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$useLocalCurrentObjectStackCache();
	$var($ClientHandshakeContext, chc, $cast($ClientHandshakeContext, context));
	$init($SSLExtension);
	if (!$nc($nc(chc)->sslConfig)->isAvailable($SSLExtension::CH_SUPPORTED_VERSIONS)) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::fine($$str({"Ignore unavailable extension: "_s, $SSLExtension::CH_SUPPORTED_VERSIONS->name$}), $$new($ObjectArray, 0));
		}
		return nullptr;
	}
	$var($ints, protocols, $new($ints, $nc($nc(chc)->activeProtocols)->size()));
	int32_t verLen = protocols->length * 2;
	$var($bytes, extData, $new($bytes, verLen + 1));
	extData->set(0, (int8_t)((int32_t)(verLen & (uint32_t)255)));
	int32_t i = 0;
	int32_t j = 1;
	{
		$var($Iterator, i$, $nc(chc->activeProtocols)->iterator());
		for (; $nc(i$)->hasNext();) {
			$ProtocolVersion* pv = $cast($ProtocolVersion, i$->next());
			{
				protocols->set(i++, $nc(pv)->id);
				extData->set(j++, pv->major);
				extData->set(j++, pv->minor);
			}
		}
	}
	$nc(chc->handshakeExtensions)->put($SSLExtension::CH_SUPPORTED_VERSIONS, $$new($SupportedVersionsExtension$CHSupportedVersionsSpec, protocols));
	return extData;
}

SupportedVersionsExtension$CHSupportedVersionsProducer::SupportedVersionsExtension$CHSupportedVersionsProducer() {
}

$Class* SupportedVersionsExtension$CHSupportedVersionsProducer::load$($String* name, bool initialize) {
	$loadClass(SupportedVersionsExtension$CHSupportedVersionsProducer, name, initialize, &_SupportedVersionsExtension$CHSupportedVersionsProducer_ClassInfo_, allocate$SupportedVersionsExtension$CHSupportedVersionsProducer);
	return class$;
}

$Class* SupportedVersionsExtension$CHSupportedVersionsProducer::class$ = nullptr;

		} // ssl
	} // security
} // sun