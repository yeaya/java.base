#include <sun/security/ssl/PreSharedKeyExtension$CHPreSharedKeyOnTradeAbsence.h>

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
#include <sun/security/ssl/PreSharedKeyExtension.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/SSLExtension.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/ServerHandshakeContext.h>
#include <sun/security/ssl/TransportContext.h>
#include <jcpp.h>

#undef CH_SIGNATURE_ALGORITHMS
#undef CH_SUPPORTED_GROUPS
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
using $PreSharedKeyExtension = ::sun::security::ssl::PreSharedKeyExtension;
using $ProtocolVersion = ::sun::security::ssl::ProtocolVersion;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;
using $TransportContext = ::sun::security::ssl::TransportContext;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _PreSharedKeyExtension$CHPreSharedKeyOnTradeAbsence_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(PreSharedKeyExtension$CHPreSharedKeyOnTradeAbsence::*)()>(&PreSharedKeyExtension$CHPreSharedKeyOnTradeAbsence::init$))},
	{"absent", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _PreSharedKeyExtension$CHPreSharedKeyOnTradeAbsence_InnerClassesInfo_[] = {
	{"sun.security.ssl.PreSharedKeyExtension$CHPreSharedKeyOnTradeAbsence", "sun.security.ssl.PreSharedKeyExtension", "CHPreSharedKeyOnTradeAbsence", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _PreSharedKeyExtension$CHPreSharedKeyOnTradeAbsence_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.PreSharedKeyExtension$CHPreSharedKeyOnTradeAbsence",
	"java.lang.Object",
	"sun.security.ssl.HandshakeAbsence",
	nullptr,
	_PreSharedKeyExtension$CHPreSharedKeyOnTradeAbsence_MethodInfo_,
	nullptr,
	nullptr,
	_PreSharedKeyExtension$CHPreSharedKeyOnTradeAbsence_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.PreSharedKeyExtension"
};

$Object* allocate$PreSharedKeyExtension$CHPreSharedKeyOnTradeAbsence($Class* clazz) {
	return $of($alloc(PreSharedKeyExtension$CHPreSharedKeyOnTradeAbsence));
}

void PreSharedKeyExtension$CHPreSharedKeyOnTradeAbsence::init$() {
}

void PreSharedKeyExtension$CHPreSharedKeyOnTradeAbsence::absent($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$var($ServerHandshakeContext, shc, $cast($ServerHandshakeContext, context));
	bool var$0 = $nc($nc(shc)->negotiatedProtocol)->useTLS13PlusSpec();
	if (var$0) {
		$init($SSLExtension);
		bool var$1 = !$nc(shc->handshakeExtensions)->containsKey($SSLExtension::CH_SIGNATURE_ALGORITHMS);
		var$0 = (var$1 || !$nc(shc->handshakeExtensions)->containsKey($SSLExtension::CH_SUPPORTED_GROUPS));
	}
	if (var$0) {
		$init($Alert);
		$throw($($nc($nc(shc)->conContext)->fatal($Alert::MISSING_EXTENSION, "No supported_groups or signature_algorithms extension when pre_shared_key extension is not present"_s)));
	}
}

PreSharedKeyExtension$CHPreSharedKeyOnTradeAbsence::PreSharedKeyExtension$CHPreSharedKeyOnTradeAbsence() {
}

$Class* PreSharedKeyExtension$CHPreSharedKeyOnTradeAbsence::load$($String* name, bool initialize) {
	$loadClass(PreSharedKeyExtension$CHPreSharedKeyOnTradeAbsence, name, initialize, &_PreSharedKeyExtension$CHPreSharedKeyOnTradeAbsence_ClassInfo_, allocate$PreSharedKeyExtension$CHPreSharedKeyOnTradeAbsence);
	return class$;
}

$Class* PreSharedKeyExtension$CHPreSharedKeyOnTradeAbsence::class$ = nullptr;

		} // ssl
	} // security
} // sun