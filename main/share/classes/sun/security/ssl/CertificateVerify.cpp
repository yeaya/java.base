#include <sun/security/ssl/CertificateVerify.h>

#include <sun/security/ssl/CertificateVerify$S30CertificateVerifyConsumer.h>
#include <sun/security/ssl/CertificateVerify$S30CertificateVerifyProducer.h>
#include <sun/security/ssl/CertificateVerify$T10CertificateVerifyConsumer.h>
#include <sun/security/ssl/CertificateVerify$T10CertificateVerifyProducer.h>
#include <sun/security/ssl/CertificateVerify$T12CertificateVerifyConsumer.h>
#include <sun/security/ssl/CertificateVerify$T12CertificateVerifyProducer.h>
#include <sun/security/ssl/CertificateVerify$T13CertificateVerifyConsumer.h>
#include <sun/security/ssl/CertificateVerify$T13CertificateVerifyProducer.h>
#include <sun/security/ssl/HandshakeProducer.h>
#include <sun/security/ssl/SSLConsumer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CertificateVerify$S30CertificateVerifyConsumer = ::sun::security::ssl::CertificateVerify$S30CertificateVerifyConsumer;
using $CertificateVerify$S30CertificateVerifyProducer = ::sun::security::ssl::CertificateVerify$S30CertificateVerifyProducer;
using $CertificateVerify$T10CertificateVerifyConsumer = ::sun::security::ssl::CertificateVerify$T10CertificateVerifyConsumer;
using $CertificateVerify$T10CertificateVerifyProducer = ::sun::security::ssl::CertificateVerify$T10CertificateVerifyProducer;
using $CertificateVerify$T12CertificateVerifyConsumer = ::sun::security::ssl::CertificateVerify$T12CertificateVerifyConsumer;
using $CertificateVerify$T12CertificateVerifyProducer = ::sun::security::ssl::CertificateVerify$T12CertificateVerifyProducer;
using $CertificateVerify$T13CertificateVerifyConsumer = ::sun::security::ssl::CertificateVerify$T13CertificateVerifyConsumer;
using $CertificateVerify$T13CertificateVerifyProducer = ::sun::security::ssl::CertificateVerify$T13CertificateVerifyProducer;
using $HandshakeProducer = ::sun::security::ssl::HandshakeProducer;
using $SSLConsumer = ::sun::security::ssl::SSLConsumer;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _CertificateVerify_FieldInfo_[] = {
	{"s30HandshakeConsumer", "Lsun/security/ssl/SSLConsumer;", nullptr, $STATIC | $FINAL, $staticField(CertificateVerify, s30HandshakeConsumer)},
	{"s30HandshakeProducer", "Lsun/security/ssl/HandshakeProducer;", nullptr, $STATIC | $FINAL, $staticField(CertificateVerify, s30HandshakeProducer)},
	{"t10HandshakeConsumer", "Lsun/security/ssl/SSLConsumer;", nullptr, $STATIC | $FINAL, $staticField(CertificateVerify, t10HandshakeConsumer)},
	{"t10HandshakeProducer", "Lsun/security/ssl/HandshakeProducer;", nullptr, $STATIC | $FINAL, $staticField(CertificateVerify, t10HandshakeProducer)},
	{"t12HandshakeConsumer", "Lsun/security/ssl/SSLConsumer;", nullptr, $STATIC | $FINAL, $staticField(CertificateVerify, t12HandshakeConsumer)},
	{"t12HandshakeProducer", "Lsun/security/ssl/HandshakeProducer;", nullptr, $STATIC | $FINAL, $staticField(CertificateVerify, t12HandshakeProducer)},
	{"t13HandshakeConsumer", "Lsun/security/ssl/SSLConsumer;", nullptr, $STATIC | $FINAL, $staticField(CertificateVerify, t13HandshakeConsumer)},
	{"t13HandshakeProducer", "Lsun/security/ssl/HandshakeProducer;", nullptr, $STATIC | $FINAL, $staticField(CertificateVerify, t13HandshakeProducer)},
	{}
};

$MethodInfo _CertificateVerify_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(CertificateVerify::*)()>(&CertificateVerify::init$))},
	{}
};

$InnerClassInfo _CertificateVerify_InnerClassesInfo_[] = {
	{"sun.security.ssl.CertificateVerify$T13CertificateVerifyConsumer", "sun.security.ssl.CertificateVerify", "T13CertificateVerifyConsumer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.CertificateVerify$T13CertificateVerifyProducer", "sun.security.ssl.CertificateVerify", "T13CertificateVerifyProducer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.CertificateVerify$T13CertificateVerifyMessage", "sun.security.ssl.CertificateVerify", "T13CertificateVerifyMessage", $STATIC | $FINAL},
	{"sun.security.ssl.CertificateVerify$T12CertificateVerifyConsumer", "sun.security.ssl.CertificateVerify", "T12CertificateVerifyConsumer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.CertificateVerify$T12CertificateVerifyProducer", "sun.security.ssl.CertificateVerify", "T12CertificateVerifyProducer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.CertificateVerify$T12CertificateVerifyMessage", "sun.security.ssl.CertificateVerify", "T12CertificateVerifyMessage", $STATIC | $FINAL},
	{"sun.security.ssl.CertificateVerify$T10CertificateVerifyConsumer", "sun.security.ssl.CertificateVerify", "T10CertificateVerifyConsumer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.CertificateVerify$T10CertificateVerifyProducer", "sun.security.ssl.CertificateVerify", "T10CertificateVerifyProducer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.CertificateVerify$T10CertificateVerifyMessage", "sun.security.ssl.CertificateVerify", "T10CertificateVerifyMessage", $STATIC | $FINAL},
	{"sun.security.ssl.CertificateVerify$S30CertificateVerifyConsumer", "sun.security.ssl.CertificateVerify", "S30CertificateVerifyConsumer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.CertificateVerify$S30CertificateVerifyProducer", "sun.security.ssl.CertificateVerify", "S30CertificateVerifyProducer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.CertificateVerify$S30CertificateVerifyMessage", "sun.security.ssl.CertificateVerify", "S30CertificateVerifyMessage", $STATIC | $FINAL},
	{}
};

$ClassInfo _CertificateVerify_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.CertificateVerify",
	"java.lang.Object",
	nullptr,
	_CertificateVerify_FieldInfo_,
	_CertificateVerify_MethodInfo_,
	nullptr,
	nullptr,
	_CertificateVerify_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.security.ssl.CertificateVerify$T13CertificateVerifyConsumer,sun.security.ssl.CertificateVerify$T13CertificateVerifyProducer,sun.security.ssl.CertificateVerify$T13CertificateVerifyMessage,sun.security.ssl.CertificateVerify$T12CertificateVerifyConsumer,sun.security.ssl.CertificateVerify$T12CertificateVerifyProducer,sun.security.ssl.CertificateVerify$T12CertificateVerifyMessage,sun.security.ssl.CertificateVerify$T10CertificateVerifyConsumer,sun.security.ssl.CertificateVerify$T10CertificateVerifyProducer,sun.security.ssl.CertificateVerify$T10CertificateVerifyMessage,sun.security.ssl.CertificateVerify$S30CertificateVerifyConsumer,sun.security.ssl.CertificateVerify$S30CertificateVerifyProducer,sun.security.ssl.CertificateVerify$S30CertificateVerifyMessage"
};

$Object* allocate$CertificateVerify($Class* clazz) {
	return $of($alloc(CertificateVerify));
}

$SSLConsumer* CertificateVerify::s30HandshakeConsumer = nullptr;
$HandshakeProducer* CertificateVerify::s30HandshakeProducer = nullptr;
$SSLConsumer* CertificateVerify::t10HandshakeConsumer = nullptr;
$HandshakeProducer* CertificateVerify::t10HandshakeProducer = nullptr;
$SSLConsumer* CertificateVerify::t12HandshakeConsumer = nullptr;
$HandshakeProducer* CertificateVerify::t12HandshakeProducer = nullptr;
$SSLConsumer* CertificateVerify::t13HandshakeConsumer = nullptr;
$HandshakeProducer* CertificateVerify::t13HandshakeProducer = nullptr;

void CertificateVerify::init$() {
}

void clinit$CertificateVerify($Class* class$) {
	$assignStatic(CertificateVerify::s30HandshakeConsumer, $new($CertificateVerify$S30CertificateVerifyConsumer));
	$assignStatic(CertificateVerify::s30HandshakeProducer, $new($CertificateVerify$S30CertificateVerifyProducer));
	$assignStatic(CertificateVerify::t10HandshakeConsumer, $new($CertificateVerify$T10CertificateVerifyConsumer));
	$assignStatic(CertificateVerify::t10HandshakeProducer, $new($CertificateVerify$T10CertificateVerifyProducer));
	$assignStatic(CertificateVerify::t12HandshakeConsumer, $new($CertificateVerify$T12CertificateVerifyConsumer));
	$assignStatic(CertificateVerify::t12HandshakeProducer, $new($CertificateVerify$T12CertificateVerifyProducer));
	$assignStatic(CertificateVerify::t13HandshakeConsumer, $new($CertificateVerify$T13CertificateVerifyConsumer));
	$assignStatic(CertificateVerify::t13HandshakeProducer, $new($CertificateVerify$T13CertificateVerifyProducer));
}

CertificateVerify::CertificateVerify() {
}

$Class* CertificateVerify::load$($String* name, bool initialize) {
	$loadClass(CertificateVerify, name, initialize, &_CertificateVerify_ClassInfo_, clinit$CertificateVerify, allocate$CertificateVerify);
	return class$;
}

$Class* CertificateVerify::class$ = nullptr;

		} // ssl
	} // security
} // sun