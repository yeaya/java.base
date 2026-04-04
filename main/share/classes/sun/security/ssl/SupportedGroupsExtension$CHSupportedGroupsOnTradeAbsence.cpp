#include <sun/security/ssl/SupportedGroupsExtension$CHSupportedGroupsOnTradeAbsence.h>
#include <java/util/Map.h>
#include <javax/net/ssl/SSLException.h>
#include <sun/security/ssl/Alert.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/SSLExtension.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/ServerHandshakeContext.h>
#include <sun/security/ssl/SupportedGroupsExtension.h>
#include <sun/security/ssl/TransportContext.h>
#include <jcpp.h>

#undef CH_KEY_SHARE
#undef MISSING_EXTENSION

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Alert = ::sun::security::ssl::Alert;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;

namespace sun {
	namespace security {
		namespace ssl {

void SupportedGroupsExtension$CHSupportedGroupsOnTradeAbsence::init$() {
}

void SupportedGroupsExtension$CHSupportedGroupsOnTradeAbsence::absent($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$useLocalObjectStack();
	$var($ServerHandshakeContext, shc, $cast($ServerHandshakeContext, context));
	bool var$0 = $nc($nc(shc)->negotiatedProtocol)->useTLS13PlusSpec();
	$init($SSLExtension);
	if (var$0 && $nc(shc->handshakeExtensions)->containsKey($SSLExtension::CH_KEY_SHARE)) {
		$init($Alert);
		$throw($($nc(shc->conContext)->fatal($Alert::MISSING_EXTENSION, "No supported_groups extension to work with the key_share extension"_s)));
	}
}

SupportedGroupsExtension$CHSupportedGroupsOnTradeAbsence::SupportedGroupsExtension$CHSupportedGroupsOnTradeAbsence() {
}

$Class* SupportedGroupsExtension$CHSupportedGroupsOnTradeAbsence::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(SupportedGroupsExtension$CHSupportedGroupsOnTradeAbsence, init$, void)},
		{"absent", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)V", nullptr, $PUBLIC, $virtualMethod(SupportedGroupsExtension$CHSupportedGroupsOnTradeAbsence, absent, void, $ConnectionContext*, $SSLHandshake$HandshakeMessage*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.SupportedGroupsExtension$CHSupportedGroupsOnTradeAbsence", "sun.security.ssl.SupportedGroupsExtension", "CHSupportedGroupsOnTradeAbsence", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.SupportedGroupsExtension$CHSupportedGroupsOnTradeAbsence",
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
		"sun.security.ssl.SupportedGroupsExtension"
	};
	$loadClass(SupportedGroupsExtension$CHSupportedGroupsOnTradeAbsence, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SupportedGroupsExtension$CHSupportedGroupsOnTradeAbsence);
	});
	return class$;
}

$Class* SupportedGroupsExtension$CHSupportedGroupsOnTradeAbsence::class$ = nullptr;

		} // ssl
	} // security
} // sun