#include <sun/security/ssl/ServerHello$T13HelloRetryRequestReproducer.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/security/ssl/CipherSuite.h>
#include <sun/security/ssl/ClientHello$ClientHelloMessage.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/HandshakeOutStream.h>
#include <sun/security/ssl/OutputRecord.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/RandomCookie.h>
#include <sun/security/ssl/SSLConfiguration.h>
#include <sun/security/ssl/SSLExtension.h>
#include <sun/security/ssl/SSLExtensions.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLHandshake.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/ServerHandshakeContext.h>
#include <sun/security/ssl/ServerHello$ServerHelloMessage.h>
#include <sun/security/ssl/ServerHello.h>
#include <sun/security/ssl/SessionId.h>
#include <jcpp.h>

#undef MESSAGE_HASH
#undef TLS12

using $SSLExtensionArray = $Array<::sun::security::ssl::SSLExtension>;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CipherSuite = ::sun::security::ssl::CipherSuite;
using $ClientHello$ClientHelloMessage = ::sun::security::ssl::ClientHello$ClientHelloMessage;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $HandshakeOutStream = ::sun::security::ssl::HandshakeOutStream;
using $HandshakeProducer = ::sun::security::ssl::HandshakeProducer;
using $OutputRecord = ::sun::security::ssl::OutputRecord;
using $ProtocolVersion = ::sun::security::ssl::ProtocolVersion;
using $RandomCookie = ::sun::security::ssl::RandomCookie;
using $SSLConfiguration = ::sun::security::ssl::SSLConfiguration;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLExtensions = ::sun::security::ssl::SSLExtensions;
using $SSLHandshake = ::sun::security::ssl::SSLHandshake;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;
using $ServerHello = ::sun::security::ssl::ServerHello;
using $ServerHello$ServerHelloMessage = ::sun::security::ssl::ServerHello$ServerHelloMessage;
using $SessionId = ::sun::security::ssl::SessionId;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _ServerHello$T13HelloRetryRequestReproducer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(ServerHello$T13HelloRetryRequestReproducer::*)()>(&ServerHello$T13HelloRetryRequestReproducer::init$))},
	{"produce", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)[B", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _ServerHello$T13HelloRetryRequestReproducer_InnerClassesInfo_[] = {
	{"sun.security.ssl.ServerHello$T13HelloRetryRequestReproducer", "sun.security.ssl.ServerHello", "T13HelloRetryRequestReproducer", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _ServerHello$T13HelloRetryRequestReproducer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.ServerHello$T13HelloRetryRequestReproducer",
	"java.lang.Object",
	"sun.security.ssl.HandshakeProducer",
	nullptr,
	_ServerHello$T13HelloRetryRequestReproducer_MethodInfo_,
	nullptr,
	nullptr,
	_ServerHello$T13HelloRetryRequestReproducer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.ServerHello"
};

$Object* allocate$ServerHello$T13HelloRetryRequestReproducer($Class* clazz) {
	return $of($alloc(ServerHello$T13HelloRetryRequestReproducer));
}

void ServerHello$T13HelloRetryRequestReproducer::init$() {
}

$bytes* ServerHello$T13HelloRetryRequestReproducer::produce($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$var($ServerHandshakeContext, shc, $cast($ServerHandshakeContext, context));
	$var($ClientHello$ClientHelloMessage, clientHello, $cast($ClientHello$ClientHelloMessage, message));
	$CipherSuite* cipherSuite = $nc(shc)->negotiatedCipherSuite;
	$init($ProtocolVersion);
	$init($RandomCookie);
	$var($ServerHello$ServerHelloMessage, hhrm, $new($ServerHello$ServerHelloMessage, shc, $ProtocolVersion::TLS12, $nc(clientHello)->sessionId, cipherSuite, $RandomCookie::hrrRandom, clientHello));
	$init($SSLHandshake);
	$var($SSLExtensionArray, serverHelloExtensions, $nc(shc->sslConfig)->getEnabledExtensions($SSLHandshake::MESSAGE_HASH, shc->negotiatedProtocol));
	$nc(hhrm->extensions)->produce(shc, serverHelloExtensions);
	$init($SSLLogger);
	if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
		$SSLLogger::fine("Reproduced HelloRetryRequest handshake message"_s, $$new($ObjectArray, {$of(hhrm)}));
	}
	$var($HandshakeOutStream, hos, $new($HandshakeOutStream, nullptr));
	hhrm->write(hos);
	return hos->toByteArray();
}

ServerHello$T13HelloRetryRequestReproducer::ServerHello$T13HelloRetryRequestReproducer() {
}

$Class* ServerHello$T13HelloRetryRequestReproducer::load$($String* name, bool initialize) {
	$loadClass(ServerHello$T13HelloRetryRequestReproducer, name, initialize, &_ServerHello$T13HelloRetryRequestReproducer_ClassInfo_, allocate$ServerHello$T13HelloRetryRequestReproducer);
	return class$;
}

$Class* ServerHello$T13HelloRetryRequestReproducer::class$ = nullptr;

		} // ssl
	} // security
} // sun