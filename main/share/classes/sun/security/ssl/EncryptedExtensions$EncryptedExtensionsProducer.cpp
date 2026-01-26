#include <sun/security/ssl/EncryptedExtensions$EncryptedExtensionsProducer.h>

#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/EncryptedExtensions$EncryptedExtensionsMessage.h>
#include <sun/security/ssl/EncryptedExtensions.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/HandshakeOutStream.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/SSLConfiguration.h>
#include <sun/security/ssl/SSLExtension.h>
#include <sun/security/ssl/SSLExtensions.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLHandshake.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/ServerHandshakeContext.h>
#include <jcpp.h>

#undef ENCRYPTED_EXTENSIONS

using $SSLExtensionArray = $Array<::sun::security::ssl::SSLExtension>;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $EncryptedExtensions$EncryptedExtensionsMessage = ::sun::security::ssl::EncryptedExtensions$EncryptedExtensionsMessage;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $HandshakeOutStream = ::sun::security::ssl::HandshakeOutStream;
using $SSLConfiguration = ::sun::security::ssl::SSLConfiguration;
using $SSLExtensions = ::sun::security::ssl::SSLExtensions;
using $SSLHandshake = ::sun::security::ssl::SSLHandshake;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _EncryptedExtensions$EncryptedExtensionsProducer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(EncryptedExtensions$EncryptedExtensionsProducer, init$, void)},
	{"produce", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)[B", nullptr, $PUBLIC, $virtualMethod(EncryptedExtensions$EncryptedExtensionsProducer, produce, $bytes*, $ConnectionContext*, $SSLHandshake$HandshakeMessage*), "java.io.IOException"},
	{}
};

$InnerClassInfo _EncryptedExtensions$EncryptedExtensionsProducer_InnerClassesInfo_[] = {
	{"sun.security.ssl.EncryptedExtensions$EncryptedExtensionsProducer", "sun.security.ssl.EncryptedExtensions", "EncryptedExtensionsProducer", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _EncryptedExtensions$EncryptedExtensionsProducer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.EncryptedExtensions$EncryptedExtensionsProducer",
	"java.lang.Object",
	"sun.security.ssl.HandshakeProducer",
	nullptr,
	_EncryptedExtensions$EncryptedExtensionsProducer_MethodInfo_,
	nullptr,
	nullptr,
	_EncryptedExtensions$EncryptedExtensionsProducer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.EncryptedExtensions"
};

$Object* allocate$EncryptedExtensions$EncryptedExtensionsProducer($Class* clazz) {
	return $of($alloc(EncryptedExtensions$EncryptedExtensionsProducer));
}

void EncryptedExtensions$EncryptedExtensionsProducer::init$() {
}

$bytes* EncryptedExtensions$EncryptedExtensionsProducer::produce($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$useLocalCurrentObjectStackCache();
	$var($ServerHandshakeContext, shc, $cast($ServerHandshakeContext, context));
	$var($EncryptedExtensions$EncryptedExtensionsMessage, eem, $new($EncryptedExtensions$EncryptedExtensionsMessage, shc));
	$init($SSLHandshake);
	$var($SSLExtensionArray, extTypes, $nc($nc(shc)->sslConfig)->getEnabledExtensions($SSLHandshake::ENCRYPTED_EXTENSIONS, shc->negotiatedProtocol));
	$nc(eem->extensions)->produce(shc, extTypes);
	$init($SSLLogger);
	if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
		$SSLLogger::fine("Produced EncryptedExtensions message"_s, $$new($ObjectArray, {$of(eem)}));
	}
	eem->write(shc->handshakeOutput);
	$nc(shc->handshakeOutput)->flush();
	return nullptr;
}

EncryptedExtensions$EncryptedExtensionsProducer::EncryptedExtensions$EncryptedExtensionsProducer() {
}

$Class* EncryptedExtensions$EncryptedExtensionsProducer::load$($String* name, bool initialize) {
	$loadClass(EncryptedExtensions$EncryptedExtensionsProducer, name, initialize, &_EncryptedExtensions$EncryptedExtensionsProducer_ClassInfo_, allocate$EncryptedExtensions$EncryptedExtensionsProducer);
	return class$;
}

$Class* EncryptedExtensions$EncryptedExtensionsProducer::class$ = nullptr;

		} // ssl
	} // security
} // sun