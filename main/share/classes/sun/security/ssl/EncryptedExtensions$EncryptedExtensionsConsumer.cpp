#include <sun/security/ssl/EncryptedExtensions$EncryptedExtensionsConsumer.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/HashMap.h>
#include <java/util/LinkedHashMap.h>
#include <sun/security/ssl/ClientHandshakeContext.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/EncryptedExtensions$EncryptedExtensionsMessage.h>
#include <sun/security/ssl/EncryptedExtensions.h>
#include <sun/security/ssl/SSLConfiguration.h>
#include <sun/security/ssl/SSLExtension.h>
#include <sun/security/ssl/SSLExtensions.h>
#include <sun/security/ssl/SSLHandshake.h>
#include <sun/security/ssl/SSLLogger.h>
#include <jcpp.h>

#undef ENCRYPTED_EXTENSIONS

using $SSLExtensionArray = $Array<::sun::security::ssl::SSLExtension>;
using $Byte = ::java::lang::Byte;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $ClientHandshakeContext = ::sun::security::ssl::ClientHandshakeContext;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $EncryptedExtensions$EncryptedExtensionsMessage = ::sun::security::ssl::EncryptedExtensions$EncryptedExtensionsMessage;
using $SSLHandshake = ::sun::security::ssl::SSLHandshake;
using $SSLLogger = ::sun::security::ssl::SSLLogger;

namespace sun {
	namespace security {
		namespace ssl {

void EncryptedExtensions$EncryptedExtensionsConsumer::init$() {
}

void EncryptedExtensions$EncryptedExtensionsConsumer::consume($ConnectionContext* context, $ByteBuffer* message) {
	$useLocalObjectStack();
	$var($ClientHandshakeContext, chc, $cast($ClientHandshakeContext, context));
	$init($SSLHandshake);
	$nc($nc(chc)->handshakeConsumers)->remove($($Byte::valueOf($SSLHandshake::ENCRYPTED_EXTENSIONS->id)));
	$var($EncryptedExtensions$EncryptedExtensionsMessage, eem, $new($EncryptedExtensions$EncryptedExtensionsMessage, chc, message));
	$init($SSLLogger);
	if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
		$SSLLogger::fine("Consuming EncryptedExtensions handshake message"_s, $$new($ObjectArray, {eem}));
	}
	$var($SSLExtensionArray, extTypes, $nc(chc->sslConfig)->getEnabledExtensions($SSLHandshake::ENCRYPTED_EXTENSIONS));
	$nc(eem->extensions)->consumeOnLoad(chc, extTypes);
	eem->extensions->consumeOnTrade(chc, extTypes);
}

EncryptedExtensions$EncryptedExtensionsConsumer::EncryptedExtensions$EncryptedExtensionsConsumer() {
}

$Class* EncryptedExtensions$EncryptedExtensionsConsumer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(EncryptedExtensions$EncryptedExtensionsConsumer, init$, void)},
		{"consume", "(Lsun/security/ssl/ConnectionContext;Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC, $virtualMethod(EncryptedExtensions$EncryptedExtensionsConsumer, consume, void, $ConnectionContext*, $ByteBuffer*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.EncryptedExtensions$EncryptedExtensionsConsumer", "sun.security.ssl.EncryptedExtensions", "EncryptedExtensionsConsumer", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.EncryptedExtensions$EncryptedExtensionsConsumer",
		"java.lang.Object",
		"sun.security.ssl.SSLConsumer",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.ssl.EncryptedExtensions"
	};
	$loadClass(EncryptedExtensions$EncryptedExtensionsConsumer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(EncryptedExtensions$EncryptedExtensionsConsumer);
	});
	return class$;
}

$Class* EncryptedExtensions$EncryptedExtensionsConsumer::class$ = nullptr;

		} // ssl
	} // security
} // sun