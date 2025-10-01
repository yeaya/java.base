#include <sun/security/ssl/HelloVerifyRequest.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/security/ssl/HandshakeProducer.h>
#include <sun/security/ssl/HelloVerifyRequest$HelloVerifyRequestConsumer.h>
#include <sun/security/ssl/HelloVerifyRequest$HelloVerifyRequestProducer.h>
#include <sun/security/ssl/SSLConsumer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HandshakeProducer = ::sun::security::ssl::HandshakeProducer;
using $HelloVerifyRequest$HelloVerifyRequestConsumer = ::sun::security::ssl::HelloVerifyRequest$HelloVerifyRequestConsumer;
using $HelloVerifyRequest$HelloVerifyRequestProducer = ::sun::security::ssl::HelloVerifyRequest$HelloVerifyRequestProducer;
using $SSLConsumer = ::sun::security::ssl::SSLConsumer;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _HelloVerifyRequest_FieldInfo_[] = {
	{"handshakeConsumer", "Lsun/security/ssl/SSLConsumer;", nullptr, $STATIC | $FINAL, $staticField(HelloVerifyRequest, handshakeConsumer)},
	{"handshakeProducer", "Lsun/security/ssl/HandshakeProducer;", nullptr, $STATIC | $FINAL, $staticField(HelloVerifyRequest, handshakeProducer)},
	{}
};

$MethodInfo _HelloVerifyRequest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HelloVerifyRequest::*)()>(&HelloVerifyRequest::init$))},
	{}
};

$InnerClassInfo _HelloVerifyRequest_InnerClassesInfo_[] = {
	{"sun.security.ssl.HelloVerifyRequest$HelloVerifyRequestConsumer", "sun.security.ssl.HelloVerifyRequest", "HelloVerifyRequestConsumer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.HelloVerifyRequest$HelloVerifyRequestProducer", "sun.security.ssl.HelloVerifyRequest", "HelloVerifyRequestProducer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.HelloVerifyRequest$HelloVerifyRequestMessage", "sun.security.ssl.HelloVerifyRequest", "HelloVerifyRequestMessage", $STATIC | $FINAL},
	{}
};

$ClassInfo _HelloVerifyRequest_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.HelloVerifyRequest",
	"java.lang.Object",
	nullptr,
	_HelloVerifyRequest_FieldInfo_,
	_HelloVerifyRequest_MethodInfo_,
	nullptr,
	nullptr,
	_HelloVerifyRequest_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.security.ssl.HelloVerifyRequest$HelloVerifyRequestConsumer,sun.security.ssl.HelloVerifyRequest$HelloVerifyRequestProducer,sun.security.ssl.HelloVerifyRequest$HelloVerifyRequestMessage"
};

$Object* allocate$HelloVerifyRequest($Class* clazz) {
	return $of($alloc(HelloVerifyRequest));
}

$SSLConsumer* HelloVerifyRequest::handshakeConsumer = nullptr;
$HandshakeProducer* HelloVerifyRequest::handshakeProducer = nullptr;

void HelloVerifyRequest::init$() {
}

void clinit$HelloVerifyRequest($Class* class$) {
	$assignStatic(HelloVerifyRequest::handshakeConsumer, $new($HelloVerifyRequest$HelloVerifyRequestConsumer));
	$assignStatic(HelloVerifyRequest::handshakeProducer, $new($HelloVerifyRequest$HelloVerifyRequestProducer));
}

HelloVerifyRequest::HelloVerifyRequest() {
}

$Class* HelloVerifyRequest::load$($String* name, bool initialize) {
	$loadClass(HelloVerifyRequest, name, initialize, &_HelloVerifyRequest_ClassInfo_, clinit$HelloVerifyRequest, allocate$HelloVerifyRequest);
	return class$;
}

$Class* HelloVerifyRequest::class$ = nullptr;

		} // ssl
	} // security
} // sun