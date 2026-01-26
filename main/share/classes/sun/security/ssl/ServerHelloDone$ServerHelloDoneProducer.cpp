#include <sun/security/ssl/ServerHelloDone$ServerHelloDoneProducer.h>

#include <java/util/HashMap.h>
#include <java/util/LinkedHashMap.h>
#include <java/util/Map.h>
#include <sun/security/ssl/ChangeCipherSpec.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/ContentType.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/HandshakeOutStream.h>
#include <sun/security/ssl/SSLConsumer.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLHandshake.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/ServerHandshakeContext.h>
#include <sun/security/ssl/ServerHelloDone$ServerHelloDoneMessage.h>
#include <sun/security/ssl/ServerHelloDone.h>
#include <sun/security/ssl/TransportContext.h>
#include <jcpp.h>

#undef CHANGE_CIPHER_SPEC
#undef CLIENT_KEY_EXCHANGE
#undef FINISHED

using $Byte = ::java::lang::Byte;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LinkedHashMap = ::java::util::LinkedHashMap;
using $Map = ::java::util::Map;
using $ChangeCipherSpec = ::sun::security::ssl::ChangeCipherSpec;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $ContentType = ::sun::security::ssl::ContentType;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $HandshakeOutStream = ::sun::security::ssl::HandshakeOutStream;
using $SSLHandshake = ::sun::security::ssl::SSLHandshake;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;
using $ServerHelloDone$ServerHelloDoneMessage = ::sun::security::ssl::ServerHelloDone$ServerHelloDoneMessage;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _ServerHelloDone$ServerHelloDoneProducer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(ServerHelloDone$ServerHelloDoneProducer, init$, void)},
	{"produce", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)[B", nullptr, $PUBLIC, $virtualMethod(ServerHelloDone$ServerHelloDoneProducer, produce, $bytes*, $ConnectionContext*, $SSLHandshake$HandshakeMessage*), "java.io.IOException"},
	{}
};

$InnerClassInfo _ServerHelloDone$ServerHelloDoneProducer_InnerClassesInfo_[] = {
	{"sun.security.ssl.ServerHelloDone$ServerHelloDoneProducer", "sun.security.ssl.ServerHelloDone", "ServerHelloDoneProducer", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _ServerHelloDone$ServerHelloDoneProducer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.ServerHelloDone$ServerHelloDoneProducer",
	"java.lang.Object",
	"sun.security.ssl.HandshakeProducer",
	nullptr,
	_ServerHelloDone$ServerHelloDoneProducer_MethodInfo_,
	nullptr,
	nullptr,
	_ServerHelloDone$ServerHelloDoneProducer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.ServerHelloDone"
};

$Object* allocate$ServerHelloDone$ServerHelloDoneProducer($Class* clazz) {
	return $of($alloc(ServerHelloDone$ServerHelloDoneProducer));
}

void ServerHelloDone$ServerHelloDoneProducer::init$() {
}

$bytes* ServerHelloDone$ServerHelloDoneProducer::produce($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$useLocalCurrentObjectStackCache();
	$var($ServerHandshakeContext, shc, $cast($ServerHandshakeContext, context));
	$var($ServerHelloDone$ServerHelloDoneMessage, shdm, $new($ServerHelloDone$ServerHelloDoneMessage, shc));
	$init($SSLLogger);
	if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
		$SSLLogger::fine("Produced ServerHelloDone handshake message"_s, $$new($ObjectArray, {$of(shdm)}));
	}
	shdm->write($nc(shc)->handshakeOutput);
	$nc($nc(shc)->handshakeOutput)->flush();
	$init($SSLHandshake);
	$nc(shc->handshakeConsumers)->put($($Byte::valueOf($SSLHandshake::CLIENT_KEY_EXCHANGE->id)), $SSLHandshake::CLIENT_KEY_EXCHANGE);
	$init($ContentType);
	$init($ChangeCipherSpec);
	$nc($nc(shc->conContext)->consumers)->put($($Byte::valueOf($ContentType::CHANGE_CIPHER_SPEC->id)), $ChangeCipherSpec::t10Consumer);
	$nc(shc->handshakeConsumers)->put($($Byte::valueOf($SSLHandshake::FINISHED->id)), $SSLHandshake::FINISHED);
	return nullptr;
}

ServerHelloDone$ServerHelloDoneProducer::ServerHelloDone$ServerHelloDoneProducer() {
}

$Class* ServerHelloDone$ServerHelloDoneProducer::load$($String* name, bool initialize) {
	$loadClass(ServerHelloDone$ServerHelloDoneProducer, name, initialize, &_ServerHelloDone$ServerHelloDoneProducer_ClassInfo_, allocate$ServerHelloDone$ServerHelloDoneProducer);
	return class$;
}

$Class* ServerHelloDone$ServerHelloDoneProducer::class$ = nullptr;

		} // ssl
	} // security
} // sun