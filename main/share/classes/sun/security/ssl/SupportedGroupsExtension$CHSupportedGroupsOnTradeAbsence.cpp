#include <sun/security/ssl/SupportedGroupsExtension$CHSupportedGroupsOnTradeAbsence.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
using $NullPointerException = ::java::lang::NullPointerException;
using $Map = ::java::util::Map;
using $SSLException = ::javax::net::ssl::SSLException;
using $Alert = ::sun::security::ssl::Alert;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $HandshakeAbsence = ::sun::security::ssl::HandshakeAbsence;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $ProtocolVersion = ::sun::security::ssl::ProtocolVersion;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;
using $SupportedGroupsExtension = ::sun::security::ssl::SupportedGroupsExtension;
using $TransportContext = ::sun::security::ssl::TransportContext;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _SupportedGroupsExtension$CHSupportedGroupsOnTradeAbsence_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(SupportedGroupsExtension$CHSupportedGroupsOnTradeAbsence::*)()>(&SupportedGroupsExtension$CHSupportedGroupsOnTradeAbsence::init$))},
	{"absent", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _SupportedGroupsExtension$CHSupportedGroupsOnTradeAbsence_InnerClassesInfo_[] = {
	{"sun.security.ssl.SupportedGroupsExtension$CHSupportedGroupsOnTradeAbsence", "sun.security.ssl.SupportedGroupsExtension", "CHSupportedGroupsOnTradeAbsence", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _SupportedGroupsExtension$CHSupportedGroupsOnTradeAbsence_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.SupportedGroupsExtension$CHSupportedGroupsOnTradeAbsence",
	"java.lang.Object",
	"sun.security.ssl.HandshakeAbsence",
	nullptr,
	_SupportedGroupsExtension$CHSupportedGroupsOnTradeAbsence_MethodInfo_,
	nullptr,
	nullptr,
	_SupportedGroupsExtension$CHSupportedGroupsOnTradeAbsence_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.SupportedGroupsExtension"
};

$Object* allocate$SupportedGroupsExtension$CHSupportedGroupsOnTradeAbsence($Class* clazz) {
	return $of($alloc(SupportedGroupsExtension$CHSupportedGroupsOnTradeAbsence));
}

void SupportedGroupsExtension$CHSupportedGroupsOnTradeAbsence::init$() {
}

void SupportedGroupsExtension$CHSupportedGroupsOnTradeAbsence::absent($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$useLocalCurrentObjectStackCache();
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
	$loadClass(SupportedGroupsExtension$CHSupportedGroupsOnTradeAbsence, name, initialize, &_SupportedGroupsExtension$CHSupportedGroupsOnTradeAbsence_ClassInfo_, allocate$SupportedGroupsExtension$CHSupportedGroupsOnTradeAbsence);
	return class$;
}

$Class* SupportedGroupsExtension$CHSupportedGroupsOnTradeAbsence::class$ = nullptr;

		} // ssl
	} // security
} // sun