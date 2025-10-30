#include <sun/security/ssl/AlpnExtension$CHAlpnAbsence.h>

#include <sun/security/ssl/AlpnExtension.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/ServerHandshakeContext.h>
#include <sun/security/ssl/TransportContext.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AlpnExtension = ::sun::security::ssl::AlpnExtension;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $HandshakeAbsence = ::sun::security::ssl::HandshakeAbsence;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;
using $TransportContext = ::sun::security::ssl::TransportContext;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _AlpnExtension$CHAlpnAbsence_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(AlpnExtension$CHAlpnAbsence::*)()>(&AlpnExtension$CHAlpnAbsence::init$))},
	{"absent", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _AlpnExtension$CHAlpnAbsence_InnerClassesInfo_[] = {
	{"sun.security.ssl.AlpnExtension$CHAlpnAbsence", "sun.security.ssl.AlpnExtension", "CHAlpnAbsence", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _AlpnExtension$CHAlpnAbsence_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.AlpnExtension$CHAlpnAbsence",
	"java.lang.Object",
	"sun.security.ssl.HandshakeAbsence",
	nullptr,
	_AlpnExtension$CHAlpnAbsence_MethodInfo_,
	nullptr,
	nullptr,
	_AlpnExtension$CHAlpnAbsence_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.AlpnExtension"
};

$Object* allocate$AlpnExtension$CHAlpnAbsence($Class* clazz) {
	return $of($alloc(AlpnExtension$CHAlpnAbsence));
}

void AlpnExtension$CHAlpnAbsence::init$() {
}

void AlpnExtension$CHAlpnAbsence::absent($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$var($ServerHandshakeContext, shc, $cast($ServerHandshakeContext, context));
	$set($nc(shc), applicationProtocol, ""_s);
	$set($nc(shc->conContext), applicationProtocol, ""_s);
}

AlpnExtension$CHAlpnAbsence::AlpnExtension$CHAlpnAbsence() {
}

$Class* AlpnExtension$CHAlpnAbsence::load$($String* name, bool initialize) {
	$loadClass(AlpnExtension$CHAlpnAbsence, name, initialize, &_AlpnExtension$CHAlpnAbsence_ClassInfo_, allocate$AlpnExtension$CHAlpnAbsence);
	return class$;
}

$Class* AlpnExtension$CHAlpnAbsence::class$ = nullptr;

		} // ssl
	} // security
} // sun