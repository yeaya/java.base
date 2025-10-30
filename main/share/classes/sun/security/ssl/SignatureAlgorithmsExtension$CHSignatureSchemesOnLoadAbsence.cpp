#include <sun/security/ssl/SignatureAlgorithmsExtension$CHSignatureSchemesOnLoadAbsence.h>

#include <javax/net/ssl/SSLException.h>
#include <sun/security/ssl/Alert.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/ServerHandshakeContext.h>
#include <sun/security/ssl/SignatureAlgorithmsExtension.h>
#include <sun/security/ssl/TransportContext.h>
#include <jcpp.h>

#undef MISSING_EXTENSION

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $SSLException = ::javax::net::ssl::SSLException;
using $Alert = ::sun::security::ssl::Alert;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $HandshakeAbsence = ::sun::security::ssl::HandshakeAbsence;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $ProtocolVersion = ::sun::security::ssl::ProtocolVersion;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;
using $SignatureAlgorithmsExtension = ::sun::security::ssl::SignatureAlgorithmsExtension;
using $TransportContext = ::sun::security::ssl::TransportContext;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _SignatureAlgorithmsExtension$CHSignatureSchemesOnLoadAbsence_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(SignatureAlgorithmsExtension$CHSignatureSchemesOnLoadAbsence::*)()>(&SignatureAlgorithmsExtension$CHSignatureSchemesOnLoadAbsence::init$))},
	{"absent", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _SignatureAlgorithmsExtension$CHSignatureSchemesOnLoadAbsence_InnerClassesInfo_[] = {
	{"sun.security.ssl.SignatureAlgorithmsExtension$CHSignatureSchemesOnLoadAbsence", "sun.security.ssl.SignatureAlgorithmsExtension", "CHSignatureSchemesOnLoadAbsence", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _SignatureAlgorithmsExtension$CHSignatureSchemesOnLoadAbsence_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.SignatureAlgorithmsExtension$CHSignatureSchemesOnLoadAbsence",
	"java.lang.Object",
	"sun.security.ssl.HandshakeAbsence",
	nullptr,
	_SignatureAlgorithmsExtension$CHSignatureSchemesOnLoadAbsence_MethodInfo_,
	nullptr,
	nullptr,
	_SignatureAlgorithmsExtension$CHSignatureSchemesOnLoadAbsence_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.SignatureAlgorithmsExtension"
};

$Object* allocate$SignatureAlgorithmsExtension$CHSignatureSchemesOnLoadAbsence($Class* clazz) {
	return $of($alloc(SignatureAlgorithmsExtension$CHSignatureSchemesOnLoadAbsence));
}

void SignatureAlgorithmsExtension$CHSignatureSchemesOnLoadAbsence::init$() {
}

void SignatureAlgorithmsExtension$CHSignatureSchemesOnLoadAbsence::absent($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$useLocalCurrentObjectStackCache();
	$var($ServerHandshakeContext, shc, $cast($ServerHandshakeContext, context));
	if ($nc($nc(shc)->negotiatedProtocol)->useTLS13PlusSpec()) {
		$init($Alert);
		$throw($($nc(shc->conContext)->fatal($Alert::MISSING_EXTENSION, "No mandatory signature_algorithms extension in the received ClientHello handshake message"_s)));
	}
}

SignatureAlgorithmsExtension$CHSignatureSchemesOnLoadAbsence::SignatureAlgorithmsExtension$CHSignatureSchemesOnLoadAbsence() {
}

$Class* SignatureAlgorithmsExtension$CHSignatureSchemesOnLoadAbsence::load$($String* name, bool initialize) {
	$loadClass(SignatureAlgorithmsExtension$CHSignatureSchemesOnLoadAbsence, name, initialize, &_SignatureAlgorithmsExtension$CHSignatureSchemesOnLoadAbsence_ClassInfo_, allocate$SignatureAlgorithmsExtension$CHSignatureSchemesOnLoadAbsence);
	return class$;
}

$Class* SignatureAlgorithmsExtension$CHSignatureSchemesOnLoadAbsence::class$ = nullptr;

		} // ssl
	} // security
} // sun