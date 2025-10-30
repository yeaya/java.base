#include <sun/security/ssl/AlpnExtension$SHAlpnAbsence.h>

#include <sun/security/ssl/AlpnExtension.h>
#include <sun/security/ssl/ClientHandshakeContext.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/TransportContext.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AlpnExtension = ::sun::security::ssl::AlpnExtension;
using $ClientHandshakeContext = ::sun::security::ssl::ClientHandshakeContext;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $HandshakeAbsence = ::sun::security::ssl::HandshakeAbsence;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $TransportContext = ::sun::security::ssl::TransportContext;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _AlpnExtension$SHAlpnAbsence_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(AlpnExtension$SHAlpnAbsence::*)()>(&AlpnExtension$SHAlpnAbsence::init$))},
	{"absent", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _AlpnExtension$SHAlpnAbsence_InnerClassesInfo_[] = {
	{"sun.security.ssl.AlpnExtension$SHAlpnAbsence", "sun.security.ssl.AlpnExtension", "SHAlpnAbsence", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _AlpnExtension$SHAlpnAbsence_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.AlpnExtension$SHAlpnAbsence",
	"java.lang.Object",
	"sun.security.ssl.HandshakeAbsence",
	nullptr,
	_AlpnExtension$SHAlpnAbsence_MethodInfo_,
	nullptr,
	nullptr,
	_AlpnExtension$SHAlpnAbsence_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.AlpnExtension"
};

$Object* allocate$AlpnExtension$SHAlpnAbsence($Class* clazz) {
	return $of($alloc(AlpnExtension$SHAlpnAbsence));
}

void AlpnExtension$SHAlpnAbsence::init$() {
}

void AlpnExtension$SHAlpnAbsence::absent($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$var($ClientHandshakeContext, chc, $cast($ClientHandshakeContext, context));
	$set($nc(chc), applicationProtocol, ""_s);
	$set($nc(chc->conContext), applicationProtocol, ""_s);
}

AlpnExtension$SHAlpnAbsence::AlpnExtension$SHAlpnAbsence() {
}

$Class* AlpnExtension$SHAlpnAbsence::load$($String* name, bool initialize) {
	$loadClass(AlpnExtension$SHAlpnAbsence, name, initialize, &_AlpnExtension$SHAlpnAbsence_ClassInfo_, allocate$AlpnExtension$SHAlpnAbsence);
	return class$;
}

$Class* AlpnExtension$SHAlpnAbsence::class$ = nullptr;

		} // ssl
	} // security
} // sun