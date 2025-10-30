#include <sun/security/ssl/HelloRequest$HelloRequestKickstartProducer.h>

#include <java/util/HashMap.h>
#include <java/util/LinkedHashMap.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/HandshakeOutStream.h>
#include <sun/security/ssl/HelloRequest$HelloRequestMessage.h>
#include <sun/security/ssl/HelloRequest.h>
#include <sun/security/ssl/SSLHandshake.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/ServerHandshakeContext.h>
#include <jcpp.h>

#undef CLIENT_HELLO

using $Byte = ::java::lang::Byte;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HashMap = ::java::util::HashMap;
using $LinkedHashMap = ::java::util::LinkedHashMap;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $HandshakeOutStream = ::sun::security::ssl::HandshakeOutStream;
using $HelloRequest = ::sun::security::ssl::HelloRequest;
using $HelloRequest$HelloRequestMessage = ::sun::security::ssl::HelloRequest$HelloRequestMessage;
using $SSLHandshake = ::sun::security::ssl::SSLHandshake;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $SSLProducer = ::sun::security::ssl::SSLProducer;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _HelloRequest$HelloRequestKickstartProducer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(HelloRequest$HelloRequestKickstartProducer::*)()>(&HelloRequest$HelloRequestKickstartProducer::init$))},
	{"produce", "(Lsun/security/ssl/ConnectionContext;)[B", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _HelloRequest$HelloRequestKickstartProducer_InnerClassesInfo_[] = {
	{"sun.security.ssl.HelloRequest$HelloRequestKickstartProducer", "sun.security.ssl.HelloRequest", "HelloRequestKickstartProducer", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _HelloRequest$HelloRequestKickstartProducer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.HelloRequest$HelloRequestKickstartProducer",
	"java.lang.Object",
	"sun.security.ssl.SSLProducer",
	nullptr,
	_HelloRequest$HelloRequestKickstartProducer_MethodInfo_,
	nullptr,
	nullptr,
	_HelloRequest$HelloRequestKickstartProducer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.HelloRequest"
};

$Object* allocate$HelloRequest$HelloRequestKickstartProducer($Class* clazz) {
	return $of($alloc(HelloRequest$HelloRequestKickstartProducer));
}

void HelloRequest$HelloRequestKickstartProducer::init$() {
}

$bytes* HelloRequest$HelloRequestKickstartProducer::produce($ConnectionContext* context) {
	$useLocalCurrentObjectStackCache();
	$var($ServerHandshakeContext, shc, $cast($ServerHandshakeContext, context));
	$var($HelloRequest$HelloRequestMessage, hrm, $new($HelloRequest$HelloRequestMessage, shc));
	$init($SSLLogger);
	if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
		$SSLLogger::fine("Produced HelloRequest handshake message"_s, $$new($ObjectArray, {$of(hrm)}));
	}
	hrm->write($nc(shc)->handshakeOutput);
	$nc($nc(shc)->handshakeOutput)->flush();
	$init($SSLHandshake);
	$nc(shc->handshakeConsumers)->put($($Byte::valueOf($SSLHandshake::CLIENT_HELLO->id)), $SSLHandshake::CLIENT_HELLO);
	return nullptr;
}

HelloRequest$HelloRequestKickstartProducer::HelloRequest$HelloRequestKickstartProducer() {
}

$Class* HelloRequest$HelloRequestKickstartProducer::load$($String* name, bool initialize) {
	$loadClass(HelloRequest$HelloRequestKickstartProducer, name, initialize, &_HelloRequest$HelloRequestKickstartProducer_ClassInfo_, allocate$HelloRequest$HelloRequestKickstartProducer);
	return class$;
}

$Class* HelloRequest$HelloRequestKickstartProducer::class$ = nullptr;

		} // ssl
	} // security
} // sun