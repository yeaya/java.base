#include <sun/security/ssl/EncryptedExtensions.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/security/ssl/EncryptedExtensions$EncryptedExtensionsConsumer.h>
#include <sun/security/ssl/EncryptedExtensions$EncryptedExtensionsProducer.h>
#include <sun/security/ssl/HandshakeProducer.h>
#include <sun/security/ssl/SSLConsumer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EncryptedExtensions$EncryptedExtensionsConsumer = ::sun::security::ssl::EncryptedExtensions$EncryptedExtensionsConsumer;
using $EncryptedExtensions$EncryptedExtensionsProducer = ::sun::security::ssl::EncryptedExtensions$EncryptedExtensionsProducer;
using $HandshakeProducer = ::sun::security::ssl::HandshakeProducer;
using $SSLConsumer = ::sun::security::ssl::SSLConsumer;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _EncryptedExtensions_FieldInfo_[] = {
	{"handshakeProducer", "Lsun/security/ssl/HandshakeProducer;", nullptr, $STATIC | $FINAL, $staticField(EncryptedExtensions, handshakeProducer)},
	{"handshakeConsumer", "Lsun/security/ssl/SSLConsumer;", nullptr, $STATIC | $FINAL, $staticField(EncryptedExtensions, handshakeConsumer)},
	{}
};

$MethodInfo _EncryptedExtensions_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(EncryptedExtensions::*)()>(&EncryptedExtensions::init$))},
	{}
};

$InnerClassInfo _EncryptedExtensions_InnerClassesInfo_[] = {
	{"sun.security.ssl.EncryptedExtensions$EncryptedExtensionsConsumer", "sun.security.ssl.EncryptedExtensions", "EncryptedExtensionsConsumer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.EncryptedExtensions$EncryptedExtensionsProducer", "sun.security.ssl.EncryptedExtensions", "EncryptedExtensionsProducer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.EncryptedExtensions$EncryptedExtensionsMessage", "sun.security.ssl.EncryptedExtensions", "EncryptedExtensionsMessage", $STATIC | $FINAL},
	{}
};

$ClassInfo _EncryptedExtensions_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.EncryptedExtensions",
	"java.lang.Object",
	nullptr,
	_EncryptedExtensions_FieldInfo_,
	_EncryptedExtensions_MethodInfo_,
	nullptr,
	nullptr,
	_EncryptedExtensions_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.security.ssl.EncryptedExtensions$EncryptedExtensionsConsumer,sun.security.ssl.EncryptedExtensions$EncryptedExtensionsProducer,sun.security.ssl.EncryptedExtensions$EncryptedExtensionsMessage"
};

$Object* allocate$EncryptedExtensions($Class* clazz) {
	return $of($alloc(EncryptedExtensions));
}

$HandshakeProducer* EncryptedExtensions::handshakeProducer = nullptr;
$SSLConsumer* EncryptedExtensions::handshakeConsumer = nullptr;

void EncryptedExtensions::init$() {
}

void clinit$EncryptedExtensions($Class* class$) {
	$assignStatic(EncryptedExtensions::handshakeProducer, $new($EncryptedExtensions$EncryptedExtensionsProducer));
	$assignStatic(EncryptedExtensions::handshakeConsumer, $new($EncryptedExtensions$EncryptedExtensionsConsumer));
}

EncryptedExtensions::EncryptedExtensions() {
}

$Class* EncryptedExtensions::load$($String* name, bool initialize) {
	$loadClass(EncryptedExtensions, name, initialize, &_EncryptedExtensions_ClassInfo_, clinit$EncryptedExtensions, allocate$EncryptedExtensions);
	return class$;
}

$Class* EncryptedExtensions::class$ = nullptr;

		} // ssl
	} // security
} // sun