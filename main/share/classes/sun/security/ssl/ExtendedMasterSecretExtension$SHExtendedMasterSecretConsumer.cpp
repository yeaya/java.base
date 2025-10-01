#include <sun/security/ssl/ExtendedMasterSecretExtension$SHExtendedMasterSecretConsumer.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/Map.h>
#include <javax/net/ssl/SSLException.h>
#include <sun/security/ssl/Alert.h>
#include <sun/security/ssl/ClientHandshakeContext.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/ExtendedMasterSecretExtension$ExtendedMasterSecretSpec.h>
#include <sun/security/ssl/ExtendedMasterSecretExtension.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/SSLExtension.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLSessionImpl.h>
#include <sun/security/ssl/TransportContext.h>
#include <jcpp.h>

#undef UNSUPPORTED_EXTENSION
#undef SH_EXTENDED_MASTER_SECRET
#undef NOMINAL
#undef CH_EXTENDED_MASTER_SECRET

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Map = ::java::util::Map;
using $SSLException = ::javax::net::ssl::SSLException;
using $Alert = ::sun::security::ssl::Alert;
using $ClientHandshakeContext = ::sun::security::ssl::ClientHandshakeContext;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $ExtendedMasterSecretExtension = ::sun::security::ssl::ExtendedMasterSecretExtension;
using $ExtendedMasterSecretExtension$ExtendedMasterSecretSpec = ::sun::security::ssl::ExtendedMasterSecretExtension$ExtendedMasterSecretSpec;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLExtension$ExtensionConsumer = ::sun::security::ssl::SSLExtension$ExtensionConsumer;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLSessionImpl = ::sun::security::ssl::SSLSessionImpl;
using $TransportContext = ::sun::security::ssl::TransportContext;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _ExtendedMasterSecretExtension$SHExtendedMasterSecretConsumer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(ExtendedMasterSecretExtension$SHExtendedMasterSecretConsumer::*)()>(&ExtendedMasterSecretExtension$SHExtendedMasterSecretConsumer::init$))},
	{"consume", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _ExtendedMasterSecretExtension$SHExtendedMasterSecretConsumer_InnerClassesInfo_[] = {
	{"sun.security.ssl.ExtendedMasterSecretExtension$SHExtendedMasterSecretConsumer", "sun.security.ssl.ExtendedMasterSecretExtension", "SHExtendedMasterSecretConsumer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.SSLExtension$ExtensionConsumer", "sun.security.ssl.SSLExtension", "ExtensionConsumer", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ExtendedMasterSecretExtension$SHExtendedMasterSecretConsumer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.ExtendedMasterSecretExtension$SHExtendedMasterSecretConsumer",
	"java.lang.Object",
	"sun.security.ssl.SSLExtension$ExtensionConsumer",
	nullptr,
	_ExtendedMasterSecretExtension$SHExtendedMasterSecretConsumer_MethodInfo_,
	nullptr,
	nullptr,
	_ExtendedMasterSecretExtension$SHExtendedMasterSecretConsumer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.ExtendedMasterSecretExtension"
};

$Object* allocate$ExtendedMasterSecretExtension$SHExtendedMasterSecretConsumer($Class* clazz) {
	return $of($alloc(ExtendedMasterSecretExtension$SHExtendedMasterSecretConsumer));
}

void ExtendedMasterSecretExtension$SHExtendedMasterSecretConsumer::init$() {
}

void ExtendedMasterSecretExtension$SHExtendedMasterSecretConsumer::consume($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message, $ByteBuffer* buffer) {
	$var($ClientHandshakeContext, chc, $cast($ClientHandshakeContext, context));
	$init($SSLExtension);
	$var($ExtendedMasterSecretExtension$ExtendedMasterSecretSpec, requstedSpec, $cast($ExtendedMasterSecretExtension$ExtendedMasterSecretSpec, $nc($nc(chc)->handshakeExtensions)->get($SSLExtension::CH_EXTENDED_MASTER_SECRET)));
	if (requstedSpec == nullptr) {
		$init($Alert);
		$throw($($nc(chc->conContext)->fatal($Alert::UNSUPPORTED_EXTENSION, "Server sent the extended_master_secret extension improperly"_s)));
	}
	$var($ExtendedMasterSecretExtension$ExtendedMasterSecretSpec, spec, $new($ExtendedMasterSecretExtension$ExtendedMasterSecretSpec, chc, buffer));
	if (chc->isResumption && chc->resumingSession != nullptr && !$nc(chc->resumingSession)->useExtendedMasterSecret) {
		$init($Alert);
		$throw($($nc(chc->conContext)->fatal($Alert::UNSUPPORTED_EXTENSION, "Server sent an unexpected extended_master_secret extension on session resumption"_s)));
	}
	$init($ExtendedMasterSecretExtension$ExtendedMasterSecretSpec);
	$nc(chc->handshakeExtensions)->put($SSLExtension::SH_EXTENDED_MASTER_SECRET, $ExtendedMasterSecretExtension$ExtendedMasterSecretSpec::NOMINAL);
}

ExtendedMasterSecretExtension$SHExtendedMasterSecretConsumer::ExtendedMasterSecretExtension$SHExtendedMasterSecretConsumer() {
}

$Class* ExtendedMasterSecretExtension$SHExtendedMasterSecretConsumer::load$($String* name, bool initialize) {
	$loadClass(ExtendedMasterSecretExtension$SHExtendedMasterSecretConsumer, name, initialize, &_ExtendedMasterSecretExtension$SHExtendedMasterSecretConsumer_ClassInfo_, allocate$ExtendedMasterSecretExtension$SHExtendedMasterSecretConsumer);
	return class$;
}

$Class* ExtendedMasterSecretExtension$SHExtendedMasterSecretConsumer::class$ = nullptr;

		} // ssl
	} // security
} // sun