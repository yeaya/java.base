#include <sun/security/ssl/ServerHello$ServerHelloConsumer.h>

#include <java/lang/Array.h>
#include <java/lang/Byte.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/HashMap.h>
#include <java/util/LinkedHashMap.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <javax/net/ssl/SSLException.h>
#include <sun/security/ssl/Alert.h>
#include <sun/security/ssl/ClientHandshakeContext.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/HandshakeConsumer.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/OutputRecord.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/RandomCookie.h>
#include <sun/security/ssl/SSLExtension.h>
#include <sun/security/ssl/SSLExtensions.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLHandshake.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/ServerHello$ServerHelloMessage.h>
#include <sun/security/ssl/ServerHello.h>
#include <sun/security/ssl/SupportedVersionsExtension$SHSupportedVersionsSpec.h>
#include <sun/security/ssl/TransportContext.h>
#include <jcpp.h>

#undef HELLO_VERIFY_REQUEST
#undef HRR_SUPPORTED_VERSIONS
#undef ILLEGAL_PARAMETER
#undef PROTOCOL_VERSION
#undef SERVER_HELLO
#undef SH_SUPPORTED_VERSIONS
#undef UNEXPECTED_MESSAGE

using $SSLExtensionArray = $Array<::sun::security::ssl::SSLExtension>;
using $Byte = ::java::lang::Byte;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $HashMap = ::java::util::HashMap;
using $LinkedHashMap = ::java::util::LinkedHashMap;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $SSLException = ::javax::net::ssl::SSLException;
using $Alert = ::sun::security::ssl::Alert;
using $ClientHandshakeContext = ::sun::security::ssl::ClientHandshakeContext;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $HandshakeConsumer = ::sun::security::ssl::HandshakeConsumer;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $OutputRecord = ::sun::security::ssl::OutputRecord;
using $ProtocolVersion = ::sun::security::ssl::ProtocolVersion;
using $RandomCookie = ::sun::security::ssl::RandomCookie;
using $SSLConsumer = ::sun::security::ssl::SSLConsumer;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLExtensions = ::sun::security::ssl::SSLExtensions;
using $SSLHandshake = ::sun::security::ssl::SSLHandshake;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $ServerHello = ::sun::security::ssl::ServerHello;
using $ServerHello$ServerHelloMessage = ::sun::security::ssl::ServerHello$ServerHelloMessage;
using $SupportedVersionsExtension$SHSupportedVersionsSpec = ::sun::security::ssl::SupportedVersionsExtension$SHSupportedVersionsSpec;
using $TransportContext = ::sun::security::ssl::TransportContext;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _ServerHello$ServerHelloConsumer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(ServerHello$ServerHelloConsumer::*)()>(&ServerHello$ServerHelloConsumer::init$))},
	{"consume", "(Lsun/security/ssl/ConnectionContext;Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"onHelloRetryRequest", "(Lsun/security/ssl/ClientHandshakeContext;Lsun/security/ssl/ServerHello$ServerHelloMessage;)V", nullptr, $PRIVATE, $method(static_cast<void(ServerHello$ServerHelloConsumer::*)($ClientHandshakeContext*,$ServerHello$ServerHelloMessage*)>(&ServerHello$ServerHelloConsumer::onHelloRetryRequest)), "java.io.IOException"},
	{"onServerHello", "(Lsun/security/ssl/ClientHandshakeContext;Lsun/security/ssl/ServerHello$ServerHelloMessage;)V", nullptr, $PRIVATE, $method(static_cast<void(ServerHello$ServerHelloConsumer::*)($ClientHandshakeContext*,$ServerHello$ServerHelloMessage*)>(&ServerHello$ServerHelloConsumer::onServerHello)), "java.io.IOException"},
	{}
};

$InnerClassInfo _ServerHello$ServerHelloConsumer_InnerClassesInfo_[] = {
	{"sun.security.ssl.ServerHello$ServerHelloConsumer", "sun.security.ssl.ServerHello", "ServerHelloConsumer", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _ServerHello$ServerHelloConsumer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.ServerHello$ServerHelloConsumer",
	"java.lang.Object",
	"sun.security.ssl.SSLConsumer",
	nullptr,
	_ServerHello$ServerHelloConsumer_MethodInfo_,
	nullptr,
	nullptr,
	_ServerHello$ServerHelloConsumer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.ServerHello"
};

$Object* allocate$ServerHello$ServerHelloConsumer($Class* clazz) {
	return $of($alloc(ServerHello$ServerHelloConsumer));
}

void ServerHello$ServerHelloConsumer::init$() {
}

void ServerHello$ServerHelloConsumer::consume($ConnectionContext* context, $ByteBuffer* message) {
	$var($ClientHandshakeContext, chc, $cast($ClientHandshakeContext, context));
	$init($SSLHandshake);
	$nc($nc(chc)->handshakeConsumers)->remove($($Byte::valueOf($SSLHandshake::SERVER_HELLO->id)));
	if (!$nc(chc->handshakeConsumers)->isEmpty()) {
		$nc(chc->handshakeConsumers)->remove($($Byte::valueOf($SSLHandshake::HELLO_VERIFY_REQUEST->id)));
	}
	if (!$nc(chc->handshakeConsumers)->isEmpty()) {
		$init($Alert);
		$throw($($nc(chc->conContext)->fatal($Alert::UNEXPECTED_MESSAGE, "No more message expected before ServerHello is processed"_s)));
	}
	$var($ServerHello$ServerHelloMessage, shm, $new($ServerHello$ServerHelloMessage, chc, message));
	$init($SSLLogger);
	if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
		$SSLLogger::fine("Consuming ServerHello handshake message"_s, $$new($ObjectArray, {$of(shm)}));
	}
	if ($nc(shm->serverRandom)->isHelloRetryRequest()) {
		onHelloRetryRequest(chc, shm);
	} else {
		onServerHello(chc, shm);
	}
}

void ServerHello$ServerHelloConsumer::onHelloRetryRequest($ClientHandshakeContext* chc, $ServerHello$ServerHelloMessage* helloRetryRequest) {
	$init($SSLExtension);
	$var($SSLExtensionArray, extTypes, $new($SSLExtensionArray, {$SSLExtension::HRR_SUPPORTED_VERSIONS}));
	$nc($nc(helloRetryRequest)->extensions)->consumeOnLoad(chc, extTypes);
	$ProtocolVersion* serverVersion = nullptr;
	$var($SupportedVersionsExtension$SHSupportedVersionsSpec, svs, $cast($SupportedVersionsExtension$SHSupportedVersionsSpec, $nc($nc(chc)->handshakeExtensions)->get($SSLExtension::HRR_SUPPORTED_VERSIONS)));
	if (svs != nullptr) {
		serverVersion = $ProtocolVersion::valueOf(svs->selectedVersion);
	} else {
		serverVersion = helloRetryRequest->serverVersion;
	}
	if (!$nc(chc->activeProtocols)->contains(serverVersion)) {
		$init($Alert);
		$throw($($nc(chc->conContext)->fatal($Alert::PROTOCOL_VERSION, $$str({"The server selected protocol version "_s, serverVersion, " is not accepted by client preferences "_s, chc->activeProtocols}))));
	}
	if (!$nc(serverVersion)->useTLS13PlusSpec()) {
		$init($Alert);
		$throw($($nc(chc->conContext)->fatal($Alert::PROTOCOL_VERSION, $$str({"Unexpected HelloRetryRequest for "_s, serverVersion->name$}))));
	}
	$set(chc, negotiatedProtocol, serverVersion);
	$init($SSLLogger);
	if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
		$SSLLogger::fine($$str({"Negotiated protocol version: "_s, $nc(serverVersion)->name$}), $$new($ObjectArray, 0));
	}
	$nc(chc->handshakePossessions)->clear();
	if ($nc(serverVersion)->isDTLS) {
		$init($ServerHello);
		$nc($ServerHello::d13HrrHandshakeConsumer)->consume(chc, helloRetryRequest);
	} else {
		$init($ServerHello);
		$nc($ServerHello::t13HrrHandshakeConsumer)->consume(chc, helloRetryRequest);
	}
}

void ServerHello$ServerHelloConsumer::onServerHello($ClientHandshakeContext* chc, $ServerHello$ServerHelloMessage* serverHello) {
	$init($SSLExtension);
	$var($SSLExtensionArray, extTypes, $new($SSLExtensionArray, {$SSLExtension::SH_SUPPORTED_VERSIONS}));
	$nc($nc(serverHello)->extensions)->consumeOnLoad(chc, extTypes);
	$ProtocolVersion* serverVersion = nullptr;
	$var($SupportedVersionsExtension$SHSupportedVersionsSpec, svs, $cast($SupportedVersionsExtension$SHSupportedVersionsSpec, $nc($nc(chc)->handshakeExtensions)->get($SSLExtension::SH_SUPPORTED_VERSIONS)));
	if (svs != nullptr) {
		serverVersion = $ProtocolVersion::valueOf(svs->selectedVersion);
	} else {
		serverVersion = serverHello->serverVersion;
	}
	if (!$nc(chc->activeProtocols)->contains(serverVersion)) {
		$init($Alert);
		$throw($($nc(chc->conContext)->fatal($Alert::PROTOCOL_VERSION, $$str({"The server selected protocol version "_s, serverVersion, " is not accepted by client preferences "_s, chc->activeProtocols}))));
	}
	$set(chc, negotiatedProtocol, serverVersion);
	if (!$nc(chc->conContext)->isNegotiated) {
		$set($nc(chc->conContext), protocolVersion, chc->negotiatedProtocol);
		$nc($nc(chc->conContext)->outputRecord)->setVersion(chc->negotiatedProtocol);
	}
	$init($SSLLogger);
	if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
		$SSLLogger::fine($$str({"Negotiated protocol version: "_s, $nc(serverVersion)->name$}), $$new($ObjectArray, 0));
	}
	if ($nc(serverHello->serverRandom)->isVersionDowngrade(chc)) {
		$init($Alert);
		$throw($($nc(chc->conContext)->fatal($Alert::ILLEGAL_PARAMETER, "A potential protocol version downgrade attack"_s)));
	}
	if ($nc(serverVersion)->isDTLS) {
		if (serverVersion->useTLS13PlusSpec()) {
			$init($ServerHello);
			$nc($ServerHello::d13HandshakeConsumer)->consume(chc, serverHello);
		} else {
			$nc(chc->handshakePossessions)->clear();
			$init($ServerHello);
			$nc($ServerHello::d12HandshakeConsumer)->consume(chc, serverHello);
		}
	} else if (serverVersion->useTLS13PlusSpec()) {
		$init($ServerHello);
		$nc($ServerHello::t13HandshakeConsumer)->consume(chc, serverHello);
	} else {
		$nc(chc->handshakePossessions)->clear();
		$init($ServerHello);
		$nc($ServerHello::t12HandshakeConsumer)->consume(chc, serverHello);
	}
}

ServerHello$ServerHelloConsumer::ServerHello$ServerHelloConsumer() {
}

$Class* ServerHello$ServerHelloConsumer::load$($String* name, bool initialize) {
	$loadClass(ServerHello$ServerHelloConsumer, name, initialize, &_ServerHello$ServerHelloConsumer_ClassInfo_, allocate$ServerHello$ServerHelloConsumer);
	return class$;
}

$Class* ServerHello$ServerHelloConsumer::class$ = nullptr;

		} // ssl
	} // security
} // sun