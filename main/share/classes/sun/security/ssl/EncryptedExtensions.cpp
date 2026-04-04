#include <sun/security/ssl/EncryptedExtensions.h>
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

$HandshakeProducer* EncryptedExtensions::handshakeProducer = nullptr;
$SSLConsumer* EncryptedExtensions::handshakeConsumer = nullptr;

void EncryptedExtensions::init$() {
}

void EncryptedExtensions::clinit$($Class* clazz) {
	$assignStatic(EncryptedExtensions::handshakeProducer, $new($EncryptedExtensions$EncryptedExtensionsProducer));
	$assignStatic(EncryptedExtensions::handshakeConsumer, $new($EncryptedExtensions$EncryptedExtensionsConsumer));
}

EncryptedExtensions::EncryptedExtensions() {
}

$Class* EncryptedExtensions::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"handshakeProducer", "Lsun/security/ssl/HandshakeProducer;", nullptr, $STATIC | $FINAL, $staticField(EncryptedExtensions, handshakeProducer)},
		{"handshakeConsumer", "Lsun/security/ssl/SSLConsumer;", nullptr, $STATIC | $FINAL, $staticField(EncryptedExtensions, handshakeConsumer)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(EncryptedExtensions, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.EncryptedExtensions$EncryptedExtensionsConsumer", "sun.security.ssl.EncryptedExtensions", "EncryptedExtensionsConsumer", $PRIVATE | $STATIC | $FINAL},
		{"sun.security.ssl.EncryptedExtensions$EncryptedExtensionsProducer", "sun.security.ssl.EncryptedExtensions", "EncryptedExtensionsProducer", $PRIVATE | $STATIC | $FINAL},
		{"sun.security.ssl.EncryptedExtensions$EncryptedExtensionsMessage", "sun.security.ssl.EncryptedExtensions", "EncryptedExtensionsMessage", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.EncryptedExtensions",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.security.ssl.EncryptedExtensions$EncryptedExtensionsConsumer,sun.security.ssl.EncryptedExtensions$EncryptedExtensionsProducer,sun.security.ssl.EncryptedExtensions$EncryptedExtensionsMessage"
	};
	$loadClass(EncryptedExtensions, name, initialize, &classInfo$$, EncryptedExtensions::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(EncryptedExtensions);
	});
	return class$;
}

$Class* EncryptedExtensions::class$ = nullptr;

		} // ssl
	} // security
} // sun