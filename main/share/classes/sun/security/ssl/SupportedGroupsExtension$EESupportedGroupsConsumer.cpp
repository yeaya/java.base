#include <sun/security/ssl/SupportedGroupsExtension$EESupportedGroupsConsumer.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <sun/security/ssl/ClientHandshakeContext.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/NamedGroup.h>
#include <sun/security/ssl/SSLConfiguration.h>
#include <sun/security/ssl/SSLExtension.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/SupportedGroupsExtension$SupportedGroupsSpec.h>
#include <sun/security/ssl/SupportedGroupsExtension.h>
#include <sun/security/ssl/TransportContext.h>
#include <jcpp.h>

#undef EE_SUPPORTED_GROUPS

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;
using $ClientHandshakeContext = ::sun::security::ssl::ClientHandshakeContext;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $NamedGroup = ::sun::security::ssl::NamedGroup;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $SupportedGroupsExtension$SupportedGroupsSpec = ::sun::security::ssl::SupportedGroupsExtension$SupportedGroupsSpec;

namespace sun {
	namespace security {
		namespace ssl {

void SupportedGroupsExtension$EESupportedGroupsConsumer::init$() {
}

void SupportedGroupsExtension$EESupportedGroupsConsumer::consume($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message, $ByteBuffer* buffer) {
	$useLocalObjectStack();
	$var($ClientHandshakeContext, chc, $cast($ClientHandshakeContext, context));
	$init($SSLExtension);
	if (!$nc($nc(chc)->sslConfig)->isAvailable($SSLExtension::EE_SUPPORTED_GROUPS)) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::fine("Ignore unavailable supported_groups extension"_s, $$new($ObjectArray, 0));
		}
		return;
	}
	$var($SupportedGroupsExtension$SupportedGroupsSpec, spec, $new($SupportedGroupsExtension$SupportedGroupsSpec, chc, buffer));
	$var($List, knownNamedGroups, $new($ArrayList, $nc(spec->namedGroupsIds)->length));
	{
		$var($ints, arr$, spec->namedGroupsIds);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			int32_t id = arr$->get(i$);
			{
				$NamedGroup* ng = $NamedGroup::valueOf(id);
				if (ng != nullptr) {
					knownNamedGroups->add(ng);
				}
			}
		}
	}
	$set($nc(chc->conContext), serverRequestedNamedGroups, knownNamedGroups);
	$nc(chc->handshakeExtensions)->put($SSLExtension::EE_SUPPORTED_GROUPS, spec);
}

SupportedGroupsExtension$EESupportedGroupsConsumer::SupportedGroupsExtension$EESupportedGroupsConsumer() {
}

$Class* SupportedGroupsExtension$EESupportedGroupsConsumer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(SupportedGroupsExtension$EESupportedGroupsConsumer, init$, void)},
		{"consume", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC, $virtualMethod(SupportedGroupsExtension$EESupportedGroupsConsumer, consume, void, $ConnectionContext*, $SSLHandshake$HandshakeMessage*, $ByteBuffer*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.SupportedGroupsExtension$EESupportedGroupsConsumer", "sun.security.ssl.SupportedGroupsExtension", "EESupportedGroupsConsumer", $PRIVATE | $STATIC | $FINAL},
		{"sun.security.ssl.SSLExtension$ExtensionConsumer", "sun.security.ssl.SSLExtension", "ExtensionConsumer", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.SupportedGroupsExtension$EESupportedGroupsConsumer",
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
		"sun.security.ssl.SupportedGroupsExtension"
	};
	$loadClass(SupportedGroupsExtension$EESupportedGroupsConsumer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SupportedGroupsExtension$EESupportedGroupsConsumer);
	});
	return class$;
}

$Class* SupportedGroupsExtension$EESupportedGroupsConsumer::class$ = nullptr;

		} // ssl
	} // security
} // sun