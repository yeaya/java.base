#include <sun/security/ssl/HelloRequest.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/security/ssl/HandshakeProducer.h>
#include <sun/security/ssl/HelloRequest$HelloRequestConsumer.h>
#include <sun/security/ssl/HelloRequest$HelloRequestKickstartProducer.h>
#include <sun/security/ssl/HelloRequest$HelloRequestProducer.h>
#include <sun/security/ssl/SSLConsumer.h>
#include <sun/security/ssl/SSLProducer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HandshakeProducer = ::sun::security::ssl::HandshakeProducer;
using $HelloRequest$HelloRequestConsumer = ::sun::security::ssl::HelloRequest$HelloRequestConsumer;
using $HelloRequest$HelloRequestKickstartProducer = ::sun::security::ssl::HelloRequest$HelloRequestKickstartProducer;
using $HelloRequest$HelloRequestProducer = ::sun::security::ssl::HelloRequest$HelloRequestProducer;
using $SSLConsumer = ::sun::security::ssl::SSLConsumer;
using $SSLProducer = ::sun::security::ssl::SSLProducer;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _HelloRequest_FieldInfo_[] = {
	{"kickstartProducer", "Lsun/security/ssl/SSLProducer;", nullptr, $STATIC | $FINAL, $staticField(HelloRequest, kickstartProducer)},
	{"handshakeConsumer", "Lsun/security/ssl/SSLConsumer;", nullptr, $STATIC | $FINAL, $staticField(HelloRequest, handshakeConsumer)},
	{"handshakeProducer", "Lsun/security/ssl/HandshakeProducer;", nullptr, $STATIC | $FINAL, $staticField(HelloRequest, handshakeProducer)},
	{}
};

$MethodInfo _HelloRequest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HelloRequest::*)()>(&HelloRequest::init$))},
	{}
};

$InnerClassInfo _HelloRequest_InnerClassesInfo_[] = {
	{"sun.security.ssl.HelloRequest$HelloRequestConsumer", "sun.security.ssl.HelloRequest", "HelloRequestConsumer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.HelloRequest$HelloRequestProducer", "sun.security.ssl.HelloRequest", "HelloRequestProducer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.HelloRequest$HelloRequestKickstartProducer", "sun.security.ssl.HelloRequest", "HelloRequestKickstartProducer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.HelloRequest$HelloRequestMessage", "sun.security.ssl.HelloRequest", "HelloRequestMessage", $STATIC | $FINAL},
	{}
};

$ClassInfo _HelloRequest_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.HelloRequest",
	"java.lang.Object",
	nullptr,
	_HelloRequest_FieldInfo_,
	_HelloRequest_MethodInfo_,
	nullptr,
	nullptr,
	_HelloRequest_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.security.ssl.HelloRequest$HelloRequestConsumer,sun.security.ssl.HelloRequest$HelloRequestProducer,sun.security.ssl.HelloRequest$HelloRequestKickstartProducer,sun.security.ssl.HelloRequest$HelloRequestMessage"
};

$Object* allocate$HelloRequest($Class* clazz) {
	return $of($alloc(HelloRequest));
}

$SSLProducer* HelloRequest::kickstartProducer = nullptr;
$SSLConsumer* HelloRequest::handshakeConsumer = nullptr;
$HandshakeProducer* HelloRequest::handshakeProducer = nullptr;

void HelloRequest::init$() {
}

void clinit$HelloRequest($Class* class$) {
	$assignStatic(HelloRequest::kickstartProducer, $new($HelloRequest$HelloRequestKickstartProducer));
	$assignStatic(HelloRequest::handshakeConsumer, $new($HelloRequest$HelloRequestConsumer));
	$assignStatic(HelloRequest::handshakeProducer, $new($HelloRequest$HelloRequestProducer));
}

HelloRequest::HelloRequest() {
}

$Class* HelloRequest::load$($String* name, bool initialize) {
	$loadClass(HelloRequest, name, initialize, &_HelloRequest_ClassInfo_, clinit$HelloRequest, allocate$HelloRequest);
	return class$;
}

$Class* HelloRequest::class$ = nullptr;

		} // ssl
	} // security
} // sun