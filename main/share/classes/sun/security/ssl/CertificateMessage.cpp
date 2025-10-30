#include <sun/security/ssl/CertificateMessage.h>

#include <sun/security/ssl/CertificateMessage$T12CertificateConsumer.h>
#include <sun/security/ssl/CertificateMessage$T12CertificateProducer.h>
#include <sun/security/ssl/CertificateMessage$T13CertificateConsumer.h>
#include <sun/security/ssl/CertificateMessage$T13CertificateProducer.h>
#include <sun/security/ssl/HandshakeProducer.h>
#include <sun/security/ssl/SSLConsumer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CertificateMessage$T12CertificateConsumer = ::sun::security::ssl::CertificateMessage$T12CertificateConsumer;
using $CertificateMessage$T12CertificateProducer = ::sun::security::ssl::CertificateMessage$T12CertificateProducer;
using $CertificateMessage$T13CertificateConsumer = ::sun::security::ssl::CertificateMessage$T13CertificateConsumer;
using $CertificateMessage$T13CertificateProducer = ::sun::security::ssl::CertificateMessage$T13CertificateProducer;
using $HandshakeProducer = ::sun::security::ssl::HandshakeProducer;
using $SSLConsumer = ::sun::security::ssl::SSLConsumer;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _CertificateMessage_FieldInfo_[] = {
	{"t12HandshakeConsumer", "Lsun/security/ssl/SSLConsumer;", nullptr, $STATIC | $FINAL, $staticField(CertificateMessage, t12HandshakeConsumer)},
	{"t12HandshakeProducer", "Lsun/security/ssl/HandshakeProducer;", nullptr, $STATIC | $FINAL, $staticField(CertificateMessage, t12HandshakeProducer)},
	{"t13HandshakeConsumer", "Lsun/security/ssl/SSLConsumer;", nullptr, $STATIC | $FINAL, $staticField(CertificateMessage, t13HandshakeConsumer)},
	{"t13HandshakeProducer", "Lsun/security/ssl/HandshakeProducer;", nullptr, $STATIC | $FINAL, $staticField(CertificateMessage, t13HandshakeProducer)},
	{}
};

$MethodInfo _CertificateMessage_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(CertificateMessage::*)()>(&CertificateMessage::init$))},
	{}
};

$InnerClassInfo _CertificateMessage_InnerClassesInfo_[] = {
	{"sun.security.ssl.CertificateMessage$T13CertificateConsumer", "sun.security.ssl.CertificateMessage", "T13CertificateConsumer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.CertificateMessage$T13CertificateProducer", "sun.security.ssl.CertificateMessage", "T13CertificateProducer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.CertificateMessage$T13CertificateMessage", "sun.security.ssl.CertificateMessage", "T13CertificateMessage", $STATIC | $FINAL},
	{"sun.security.ssl.CertificateMessage$CertificateEntry", "sun.security.ssl.CertificateMessage", "CertificateEntry", $STATIC | $FINAL},
	{"sun.security.ssl.CertificateMessage$T12CertificateConsumer", "sun.security.ssl.CertificateMessage", "T12CertificateConsumer", $STATIC | $FINAL},
	{"sun.security.ssl.CertificateMessage$T12CertificateProducer", "sun.security.ssl.CertificateMessage", "T12CertificateProducer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.CertificateMessage$T12CertificateMessage", "sun.security.ssl.CertificateMessage", "T12CertificateMessage", $STATIC | $FINAL},
	{}
};

$ClassInfo _CertificateMessage_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.CertificateMessage",
	"java.lang.Object",
	nullptr,
	_CertificateMessage_FieldInfo_,
	_CertificateMessage_MethodInfo_,
	nullptr,
	nullptr,
	_CertificateMessage_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.security.ssl.CertificateMessage$T13CertificateConsumer,sun.security.ssl.CertificateMessage$T13CertificateProducer,sun.security.ssl.CertificateMessage$T13CertificateMessage,sun.security.ssl.CertificateMessage$CertificateEntry,sun.security.ssl.CertificateMessage$T12CertificateConsumer,sun.security.ssl.CertificateMessage$T12CertificateProducer,sun.security.ssl.CertificateMessage$T12CertificateMessage"
};

$Object* allocate$CertificateMessage($Class* clazz) {
	return $of($alloc(CertificateMessage));
}

$SSLConsumer* CertificateMessage::t12HandshakeConsumer = nullptr;
$HandshakeProducer* CertificateMessage::t12HandshakeProducer = nullptr;
$SSLConsumer* CertificateMessage::t13HandshakeConsumer = nullptr;
$HandshakeProducer* CertificateMessage::t13HandshakeProducer = nullptr;

void CertificateMessage::init$() {
}

void clinit$CertificateMessage($Class* class$) {
	$assignStatic(CertificateMessage::t12HandshakeConsumer, $new($CertificateMessage$T12CertificateConsumer));
	$assignStatic(CertificateMessage::t12HandshakeProducer, $new($CertificateMessage$T12CertificateProducer));
	$assignStatic(CertificateMessage::t13HandshakeConsumer, $new($CertificateMessage$T13CertificateConsumer));
	$assignStatic(CertificateMessage::t13HandshakeProducer, $new($CertificateMessage$T13CertificateProducer));
}

CertificateMessage::CertificateMessage() {
}

$Class* CertificateMessage::load$($String* name, bool initialize) {
	$loadClass(CertificateMessage, name, initialize, &_CertificateMessage_ClassInfo_, clinit$CertificateMessage, allocate$CertificateMessage);
	return class$;
}

$Class* CertificateMessage::class$ = nullptr;

		} // ssl
	} // security
} // sun