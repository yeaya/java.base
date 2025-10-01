#include <sun/security/ssl/EncryptedExtensions$EncryptedExtensionsConsumer.h>

#include <java/lang/Array.h>
#include <java/lang/Byte.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/HashMap.h>
#include <java/util/LinkedHashMap.h>
#include <sun/security/ssl/ClientHandshakeContext.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/EncryptedExtensions$EncryptedExtensionsMessage.h>
#include <sun/security/ssl/EncryptedExtensions.h>
#include <sun/security/ssl/HandshakeContext.h>
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
using $HashMap = ::java::util::HashMap;
using $LinkedHashMap = ::java::util::LinkedHashMap;
using $ClientHandshakeContext = ::sun::security::ssl::ClientHandshakeContext;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $EncryptedExtensions = ::sun::security::ssl::EncryptedExtensions;
using $EncryptedExtensions$EncryptedExtensionsMessage = ::sun::security::ssl::EncryptedExtensions$EncryptedExtensionsMessage;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $SSLConfiguration = ::sun::security::ssl::SSLConfiguration;
using $SSLConsumer = ::sun::security::ssl::SSLConsumer;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLExtensions = ::sun::security::ssl::SSLExtensions;
using $SSLHandshake = ::sun::security::ssl::SSLHandshake;
using $SSLLogger = ::sun::security::ssl::SSLLogger;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _EncryptedExtensions$EncryptedExtensionsConsumer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(EncryptedExtensions$EncryptedExtensionsConsumer::*)()>(&EncryptedExtensions$EncryptedExtensionsConsumer::init$))},
	{"consume", "(Lsun/security/ssl/ConnectionContext;Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _EncryptedExtensions$EncryptedExtensionsConsumer_InnerClassesInfo_[] = {
	{"sun.security.ssl.EncryptedExtensions$EncryptedExtensionsConsumer", "sun.security.ssl.EncryptedExtensions", "EncryptedExtensionsConsumer", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _EncryptedExtensions$EncryptedExtensionsConsumer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.EncryptedExtensions$EncryptedExtensionsConsumer",
	"java.lang.Object",
	"sun.security.ssl.SSLConsumer",
	nullptr,
	_EncryptedExtensions$EncryptedExtensionsConsumer_MethodInfo_,
	nullptr,
	nullptr,
	_EncryptedExtensions$EncryptedExtensionsConsumer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.EncryptedExtensions"
};

$Object* allocate$EncryptedExtensions$EncryptedExtensionsConsumer($Class* clazz) {
	return $of($alloc(EncryptedExtensions$EncryptedExtensionsConsumer));
}

void EncryptedExtensions$EncryptedExtensionsConsumer::init$() {
}

void EncryptedExtensions$EncryptedExtensionsConsumer::consume($ConnectionContext* context, $ByteBuffer* message) {
	$var($ClientHandshakeContext, chc, $cast($ClientHandshakeContext, context));
	$init($SSLHandshake);
	$nc($nc(chc)->handshakeConsumers)->remove($($Byte::valueOf($SSLHandshake::ENCRYPTED_EXTENSIONS->id)));
	$var($EncryptedExtensions$EncryptedExtensionsMessage, eem, $new($EncryptedExtensions$EncryptedExtensionsMessage, chc, message));
	$init($SSLLogger);
	if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
		$SSLLogger::fine("Consuming EncryptedExtensions handshake message"_s, $$new($ObjectArray, {$of(eem)}));
	}
	$var($SSLExtensionArray, extTypes, $nc(chc->sslConfig)->getEnabledExtensions($SSLHandshake::ENCRYPTED_EXTENSIONS));
	$nc(eem->extensions)->consumeOnLoad(chc, extTypes);
	$nc(eem->extensions)->consumeOnTrade(chc, extTypes);
}

EncryptedExtensions$EncryptedExtensionsConsumer::EncryptedExtensions$EncryptedExtensionsConsumer() {
}

$Class* EncryptedExtensions$EncryptedExtensionsConsumer::load$($String* name, bool initialize) {
	$loadClass(EncryptedExtensions$EncryptedExtensionsConsumer, name, initialize, &_EncryptedExtensions$EncryptedExtensionsConsumer_ClassInfo_, allocate$EncryptedExtensions$EncryptedExtensionsConsumer);
	return class$;
}

$Class* EncryptedExtensions$EncryptedExtensionsConsumer::class$ = nullptr;

		} // ssl
	} // security
} // sun