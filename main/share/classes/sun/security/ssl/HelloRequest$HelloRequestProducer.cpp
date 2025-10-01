#include <sun/security/ssl/HelloRequest$HelloRequestProducer.h>

#include <java/lang/Array.h>
#include <java/lang/Byte.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/HashMap.h>
#include <java/util/LinkedHashMap.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/HandshakeOutStream.h>
#include <sun/security/ssl/HelloRequest$HelloRequestMessage.h>
#include <sun/security/ssl/HelloRequest.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
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
using $HandshakeProducer = ::sun::security::ssl::HandshakeProducer;
using $HelloRequest = ::sun::security::ssl::HelloRequest;
using $HelloRequest$HelloRequestMessage = ::sun::security::ssl::HelloRequest$HelloRequestMessage;
using $SSLHandshake = ::sun::security::ssl::SSLHandshake;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _HelloRequest$HelloRequestProducer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(HelloRequest$HelloRequestProducer::*)()>(&HelloRequest$HelloRequestProducer::init$))},
	{"produce", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)[B", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _HelloRequest$HelloRequestProducer_InnerClassesInfo_[] = {
	{"sun.security.ssl.HelloRequest$HelloRequestProducer", "sun.security.ssl.HelloRequest", "HelloRequestProducer", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _HelloRequest$HelloRequestProducer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.HelloRequest$HelloRequestProducer",
	"java.lang.Object",
	"sun.security.ssl.HandshakeProducer",
	nullptr,
	_HelloRequest$HelloRequestProducer_MethodInfo_,
	nullptr,
	nullptr,
	_HelloRequest$HelloRequestProducer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.HelloRequest"
};

$Object* allocate$HelloRequest$HelloRequestProducer($Class* clazz) {
	return $of($alloc(HelloRequest$HelloRequestProducer));
}

void HelloRequest$HelloRequestProducer::init$() {
}

$bytes* HelloRequest$HelloRequestProducer::produce($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
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

HelloRequest$HelloRequestProducer::HelloRequest$HelloRequestProducer() {
}

$Class* HelloRequest$HelloRequestProducer::load$($String* name, bool initialize) {
	$loadClass(HelloRequest$HelloRequestProducer, name, initialize, &_HelloRequest$HelloRequestProducer_ClassInfo_, allocate$HelloRequest$HelloRequestProducer);
	return class$;
}

$Class* HelloRequest$HelloRequestProducer::class$ = nullptr;

		} // ssl
	} // security
} // sun