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
using $ClientHandshakeContext = ::sun::security::ssl::ClientHandshakeContext;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $ProtocolVersion = ::sun::security::ssl::ProtocolVersion;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $SupportedVersionsExtension$CHSupportedVersionsSpec = ::sun::security::ssl::SupportedVersionsExtension$CHSupportedVersionsSpec;

namespace sun {
	namespace security {
		namespace ssl {

void SupportedVersionsExtension$CHSupportedVersionsProducer::init$() {
}

$bytes* SupportedVersionsExtension$CHSupportedVersionsProducer::produce($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$useLocalObjectStack();
	$var($ClientHandshakeContext, chc, $cast($ClientHandshakeContext, context));
	$init($SSLExtension);
	if (!$nc($nc(chc)->sslConfig)->isAvailable($SSLExtension::CH_SUPPORTED_VERSIONS)) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::fine($$str({"Ignore unavailable extension: "_s, $SSLExtension::CH_SUPPORTED_VERSIONS->name$}), $$new($ObjectArray, 0));
		}
		return nullptr;
	}
	$var($ints, protocols, $new($ints, $nc(chc->activeProtocols)->size()));
	int32_t verLen = protocols->length * 2;
	$var($bytes, extData, $new($bytes, verLen + 1));
	extData->set(0, (int8_t)(verLen & 0xff));
	int32_t i = 0;
	int32_t j = 1;
	{
		$var($Iterator, i$, chc->activeProtocols->iterator());
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
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(SupportedVersionsExtension$CHSupportedVersionsProducer, init$, void)},
		{"produce", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)[B", nullptr, $PUBLIC, $virtualMethod(SupportedVersionsExtension$CHSupportedVersionsProducer, produce, $bytes*, $ConnectionContext*, $SSLHandshake$HandshakeMessage*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.SupportedVersionsExtension$CHSupportedVersionsProducer", "sun.security.ssl.SupportedVersionsExtension", "CHSupportedVersionsProducer", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.SupportedVersionsExtension$CHSupportedVersionsProducer",
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
		"sun.security.ssl.SupportedVersionsExtension"
	};
	$loadClass(SupportedVersionsExtension$CHSupportedVersionsProducer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SupportedVersionsExtension$CHSupportedVersionsProducer);
	});
	return class$;
}

$Class* SupportedVersionsExtension$CHSupportedVersionsProducer::class$ = nullptr;

		} // ssl
	} // security
} // sun