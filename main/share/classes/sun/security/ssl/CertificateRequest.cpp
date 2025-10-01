#include <sun/security/ssl/CertificateRequest.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/security/ssl/CertificateRequest$T10CertificateRequestConsumer.h>
#include <sun/security/ssl/CertificateRequest$T10CertificateRequestProducer.h>
#include <sun/security/ssl/CertificateRequest$T12CertificateRequestConsumer.h>
#include <sun/security/ssl/CertificateRequest$T12CertificateRequestProducer.h>
#include <sun/security/ssl/CertificateRequest$T13CertificateRequestConsumer.h>
#include <sun/security/ssl/CertificateRequest$T13CertificateRequestProducer.h>
#include <sun/security/ssl/HandshakeProducer.h>
#include <sun/security/ssl/SSLConsumer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CertificateRequest$T10CertificateRequestConsumer = ::sun::security::ssl::CertificateRequest$T10CertificateRequestConsumer;
using $CertificateRequest$T10CertificateRequestProducer = ::sun::security::ssl::CertificateRequest$T10CertificateRequestProducer;
using $CertificateRequest$T12CertificateRequestConsumer = ::sun::security::ssl::CertificateRequest$T12CertificateRequestConsumer;
using $CertificateRequest$T12CertificateRequestProducer = ::sun::security::ssl::CertificateRequest$T12CertificateRequestProducer;
using $CertificateRequest$T13CertificateRequestConsumer = ::sun::security::ssl::CertificateRequest$T13CertificateRequestConsumer;
using $CertificateRequest$T13CertificateRequestProducer = ::sun::security::ssl::CertificateRequest$T13CertificateRequestProducer;
using $HandshakeProducer = ::sun::security::ssl::HandshakeProducer;
using $SSLConsumer = ::sun::security::ssl::SSLConsumer;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _CertificateRequest_FieldInfo_[] = {
	{"t10HandshakeConsumer", "Lsun/security/ssl/SSLConsumer;", nullptr, $STATIC | $FINAL, $staticField(CertificateRequest, t10HandshakeConsumer)},
	{"t10HandshakeProducer", "Lsun/security/ssl/HandshakeProducer;", nullptr, $STATIC | $FINAL, $staticField(CertificateRequest, t10HandshakeProducer)},
	{"t12HandshakeConsumer", "Lsun/security/ssl/SSLConsumer;", nullptr, $STATIC | $FINAL, $staticField(CertificateRequest, t12HandshakeConsumer)},
	{"t12HandshakeProducer", "Lsun/security/ssl/HandshakeProducer;", nullptr, $STATIC | $FINAL, $staticField(CertificateRequest, t12HandshakeProducer)},
	{"t13HandshakeConsumer", "Lsun/security/ssl/SSLConsumer;", nullptr, $STATIC | $FINAL, $staticField(CertificateRequest, t13HandshakeConsumer)},
	{"t13HandshakeProducer", "Lsun/security/ssl/HandshakeProducer;", nullptr, $STATIC | $FINAL, $staticField(CertificateRequest, t13HandshakeProducer)},
	{}
};

$MethodInfo _CertificateRequest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(CertificateRequest::*)()>(&CertificateRequest::init$))},
	{}
};

$InnerClassInfo _CertificateRequest_InnerClassesInfo_[] = {
	{"sun.security.ssl.CertificateRequest$T13CertificateRequestConsumer", "sun.security.ssl.CertificateRequest", "T13CertificateRequestConsumer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.CertificateRequest$T13CertificateRequestProducer", "sun.security.ssl.CertificateRequest", "T13CertificateRequestProducer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.CertificateRequest$T13CertificateRequestMessage", "sun.security.ssl.CertificateRequest", "T13CertificateRequestMessage", $STATIC | $FINAL},
	{"sun.security.ssl.CertificateRequest$T12CertificateRequestConsumer", "sun.security.ssl.CertificateRequest", "T12CertificateRequestConsumer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.CertificateRequest$T12CertificateRequestProducer", "sun.security.ssl.CertificateRequest", "T12CertificateRequestProducer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.CertificateRequest$T12CertificateRequestMessage", "sun.security.ssl.CertificateRequest", "T12CertificateRequestMessage", $STATIC | $FINAL},
	{"sun.security.ssl.CertificateRequest$T10CertificateRequestConsumer", "sun.security.ssl.CertificateRequest", "T10CertificateRequestConsumer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.CertificateRequest$T10CertificateRequestProducer", "sun.security.ssl.CertificateRequest", "T10CertificateRequestProducer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.CertificateRequest$T10CertificateRequestMessage", "sun.security.ssl.CertificateRequest", "T10CertificateRequestMessage", $STATIC | $FINAL},
	{"sun.security.ssl.CertificateRequest$ClientCertificateType", "sun.security.ssl.CertificateRequest", "ClientCertificateType", $PRIVATE | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _CertificateRequest_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.CertificateRequest",
	"java.lang.Object",
	nullptr,
	_CertificateRequest_FieldInfo_,
	_CertificateRequest_MethodInfo_,
	nullptr,
	nullptr,
	_CertificateRequest_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.security.ssl.CertificateRequest$T13CertificateRequestConsumer,sun.security.ssl.CertificateRequest$T13CertificateRequestProducer,sun.security.ssl.CertificateRequest$T13CertificateRequestMessage,sun.security.ssl.CertificateRequest$T12CertificateRequestConsumer,sun.security.ssl.CertificateRequest$T12CertificateRequestProducer,sun.security.ssl.CertificateRequest$T12CertificateRequestMessage,sun.security.ssl.CertificateRequest$T10CertificateRequestConsumer,sun.security.ssl.CertificateRequest$T10CertificateRequestProducer,sun.security.ssl.CertificateRequest$T10CertificateRequestMessage,sun.security.ssl.CertificateRequest$ClientCertificateType"
};

$Object* allocate$CertificateRequest($Class* clazz) {
	return $of($alloc(CertificateRequest));
}

$SSLConsumer* CertificateRequest::t10HandshakeConsumer = nullptr;
$HandshakeProducer* CertificateRequest::t10HandshakeProducer = nullptr;
$SSLConsumer* CertificateRequest::t12HandshakeConsumer = nullptr;
$HandshakeProducer* CertificateRequest::t12HandshakeProducer = nullptr;
$SSLConsumer* CertificateRequest::t13HandshakeConsumer = nullptr;
$HandshakeProducer* CertificateRequest::t13HandshakeProducer = nullptr;

void CertificateRequest::init$() {
}

void clinit$CertificateRequest($Class* class$) {
	$assignStatic(CertificateRequest::t10HandshakeConsumer, $new($CertificateRequest$T10CertificateRequestConsumer));
	$assignStatic(CertificateRequest::t10HandshakeProducer, $new($CertificateRequest$T10CertificateRequestProducer));
	$assignStatic(CertificateRequest::t12HandshakeConsumer, $new($CertificateRequest$T12CertificateRequestConsumer));
	$assignStatic(CertificateRequest::t12HandshakeProducer, $new($CertificateRequest$T12CertificateRequestProducer));
	$assignStatic(CertificateRequest::t13HandshakeConsumer, $new($CertificateRequest$T13CertificateRequestConsumer));
	$assignStatic(CertificateRequest::t13HandshakeProducer, $new($CertificateRequest$T13CertificateRequestProducer));
}

CertificateRequest::CertificateRequest() {
}

$Class* CertificateRequest::load$($String* name, bool initialize) {
	$loadClass(CertificateRequest, name, initialize, &_CertificateRequest_ClassInfo_, clinit$CertificateRequest, allocate$CertificateRequest);
	return class$;
}

$Class* CertificateRequest::class$ = nullptr;

		} // ssl
	} // security
} // sun