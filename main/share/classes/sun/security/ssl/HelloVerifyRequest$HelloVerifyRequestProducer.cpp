#include <sun/security/ssl/HelloVerifyRequest$HelloVerifyRequestProducer.h>

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
#include <java/util/Map.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/HandshakeHash.h>
#include <sun/security/ssl/HandshakeOutStream.h>
#include <sun/security/ssl/HelloVerifyRequest$HelloVerifyRequestMessage.h>
#include <sun/security/ssl/HelloVerifyRequest.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLHandshake.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/ServerHandshakeContext.h>
#include <jcpp.h>

#undef HELLO_VERIFY_REQUEST
#undef CLIENT_HELLO

using $Byte = ::java::lang::Byte;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HashMap = ::java::util::HashMap;
using $LinkedHashMap = ::java::util::LinkedHashMap;
using $Map = ::java::util::Map;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $HandshakeHash = ::sun::security::ssl::HandshakeHash;
using $HandshakeOutStream = ::sun::security::ssl::HandshakeOutStream;
using $HandshakeProducer = ::sun::security::ssl::HandshakeProducer;
using $HelloVerifyRequest = ::sun::security::ssl::HelloVerifyRequest;
using $HelloVerifyRequest$HelloVerifyRequestMessage = ::sun::security::ssl::HelloVerifyRequest$HelloVerifyRequestMessage;
using $SSLHandshake = ::sun::security::ssl::SSLHandshake;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _HelloVerifyRequest$HelloVerifyRequestProducer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(HelloVerifyRequest$HelloVerifyRequestProducer::*)()>(&HelloVerifyRequest$HelloVerifyRequestProducer::init$))},
	{"produce", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)[B", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _HelloVerifyRequest$HelloVerifyRequestProducer_InnerClassesInfo_[] = {
	{"sun.security.ssl.HelloVerifyRequest$HelloVerifyRequestProducer", "sun.security.ssl.HelloVerifyRequest", "HelloVerifyRequestProducer", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _HelloVerifyRequest$HelloVerifyRequestProducer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.HelloVerifyRequest$HelloVerifyRequestProducer",
	"java.lang.Object",
	"sun.security.ssl.HandshakeProducer",
	nullptr,
	_HelloVerifyRequest$HelloVerifyRequestProducer_MethodInfo_,
	nullptr,
	nullptr,
	_HelloVerifyRequest$HelloVerifyRequestProducer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.HelloVerifyRequest"
};

$Object* allocate$HelloVerifyRequest$HelloVerifyRequestProducer($Class* clazz) {
	return $of($alloc(HelloVerifyRequest$HelloVerifyRequestProducer));
}

void HelloVerifyRequest$HelloVerifyRequestProducer::init$() {
}

$bytes* HelloVerifyRequest$HelloVerifyRequestProducer::produce($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$var($ServerHandshakeContext, shc, $cast($ServerHandshakeContext, context));
	$init($SSLHandshake);
	$nc($nc(shc)->handshakeProducers)->remove($($Byte::valueOf($SSLHandshake::HELLO_VERIFY_REQUEST->id)));
	$var($HelloVerifyRequest$HelloVerifyRequestMessage, hvrm, $new($HelloVerifyRequest$HelloVerifyRequestMessage, static_cast<$HandshakeContext*>(shc), message));
	$init($SSLLogger);
	if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
		$SSLLogger::fine("Produced HelloVerifyRequest handshake message"_s, $$new($ObjectArray, {$of(hvrm)}));
	}
	hvrm->write(shc->handshakeOutput);
	$nc(shc->handshakeOutput)->flush();
	$nc(shc->handshakeHash)->finish();
	$nc(shc->handshakeExtensions)->clear();
	$nc(shc->handshakeConsumers)->put($($Byte::valueOf($SSLHandshake::CLIENT_HELLO->id)), $SSLHandshake::CLIENT_HELLO);
	return nullptr;
}

HelloVerifyRequest$HelloVerifyRequestProducer::HelloVerifyRequest$HelloVerifyRequestProducer() {
}

$Class* HelloVerifyRequest$HelloVerifyRequestProducer::load$($String* name, bool initialize) {
	$loadClass(HelloVerifyRequest$HelloVerifyRequestProducer, name, initialize, &_HelloVerifyRequest$HelloVerifyRequestProducer_ClassInfo_, allocate$HelloVerifyRequest$HelloVerifyRequestProducer);
	return class$;
}

$Class* HelloVerifyRequest$HelloVerifyRequestProducer::class$ = nullptr;

		} // ssl
	} // security
} // sun