#include <sun/security/ssl/ClientHello$T13ClientHelloConsumer.h>

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
#include <java/util/Arrays.h>
#include <java/util/HashMap.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <javax/net/ssl/SSLException.h>
#include <sun/security/ssl/Alert.h>
#include <sun/security/ssl/ChangeCipherSpec.h>
#include <sun/security/ssl/ClientHello$ClientHelloMessage.h>
#include <sun/security/ssl/ClientHello.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/ContentType.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/HandshakeProducer.h>
#include <sun/security/ssl/OutputRecord.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/RandomCookie.h>
#include <sun/security/ssl/SSLConfiguration.h>
#include <sun/security/ssl/SSLConsumer.h>
#include <sun/security/ssl/SSLExtension.h>
#include <sun/security/ssl/SSLExtensions.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLHandshake.h>
#include <sun/security/ssl/ServerHandshakeContext.h>
#include <sun/security/ssl/TransportContext.h>
#include <jcpp.h>

#undef CERTIFICATE_REQUEST
#undef CERTIFICATE
#undef HANDSHAKE_FAILURE
#undef CH_PRE_SHARED_KEY
#undef FINISHED
#undef UNEXPECTED_MESSAGE
#undef ENCRYPTED_EXTENSIONS
#undef CERTIFICATE_VERIFY
#undef PROTOCOL_VERSION
#undef CH_SUPPORTED_VERSIONS
#undef SERVER_HELLO
#undef HELLO_RETRY_REQUEST
#undef CHANGE_CIPHER_SPEC
#undef PSK_KEY_EXCHANGE_MODES
#undef TLS12
#undef CLIENT_HELLO

using $SSLExtensionArray = $Array<::sun::security::ssl::SSLExtension>;
using $SSLHandshakeArray = $Array<::sun::security::ssl::SSLHandshake>;
using $Byte = ::java::lang::Byte;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Arrays = ::java::util::Arrays;
using $HashMap = ::java::util::HashMap;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $SSLException = ::javax::net::ssl::SSLException;
using $Alert = ::sun::security::ssl::Alert;
using $ChangeCipherSpec = ::sun::security::ssl::ChangeCipherSpec;
using $ClientHello = ::sun::security::ssl::ClientHello;
using $ClientHello$ClientHelloMessage = ::sun::security::ssl::ClientHello$ClientHelloMessage;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $ContentType = ::sun::security::ssl::ContentType;
using $HandshakeConsumer = ::sun::security::ssl::HandshakeConsumer;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $HandshakeProducer = ::sun::security::ssl::HandshakeProducer;
using $OutputRecord = ::sun::security::ssl::OutputRecord;
using $ProtocolVersion = ::sun::security::ssl::ProtocolVersion;
using $RandomCookie = ::sun::security::ssl::RandomCookie;
using $SSLConfiguration = ::sun::security::ssl::SSLConfiguration;
using $SSLConsumer = ::sun::security::ssl::SSLConsumer;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLExtensions = ::sun::security::ssl::SSLExtensions;
using $SSLHandshake = ::sun::security::ssl::SSLHandshake;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;
using $TransportContext = ::sun::security::ssl::TransportContext;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _ClientHello$T13ClientHelloConsumer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(ClientHello$T13ClientHelloConsumer::*)()>(&ClientHello$T13ClientHelloConsumer::init$))},
	{"consume", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"goHelloRetryRequest", "(Lsun/security/ssl/ServerHandshakeContext;Lsun/security/ssl/ClientHello$ClientHelloMessage;)V", nullptr, $PRIVATE, $method(static_cast<void(ClientHello$T13ClientHelloConsumer::*)($ServerHandshakeContext*,$ClientHello$ClientHelloMessage*)>(&ClientHello$T13ClientHelloConsumer::goHelloRetryRequest)), "java.io.IOException"},
	{"goServerHello", "(Lsun/security/ssl/ServerHandshakeContext;Lsun/security/ssl/ClientHello$ClientHelloMessage;)V", nullptr, $PRIVATE, $method(static_cast<void(ClientHello$T13ClientHelloConsumer::*)($ServerHandshakeContext*,$ClientHello$ClientHelloMessage*)>(&ClientHello$T13ClientHelloConsumer::goServerHello)), "java.io.IOException"},
	{}
};

$InnerClassInfo _ClientHello$T13ClientHelloConsumer_InnerClassesInfo_[] = {
	{"sun.security.ssl.ClientHello$T13ClientHelloConsumer", "sun.security.ssl.ClientHello", "T13ClientHelloConsumer", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _ClientHello$T13ClientHelloConsumer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.ClientHello$T13ClientHelloConsumer",
	"java.lang.Object",
	"sun.security.ssl.HandshakeConsumer",
	nullptr,
	_ClientHello$T13ClientHelloConsumer_MethodInfo_,
	nullptr,
	nullptr,
	_ClientHello$T13ClientHelloConsumer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.ClientHello"
};

$Object* allocate$ClientHello$T13ClientHelloConsumer($Class* clazz) {
	return $of($alloc(ClientHello$T13ClientHelloConsumer));
}

void ClientHello$T13ClientHelloConsumer::init$() {
}

void ClientHello$T13ClientHelloConsumer::consume($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$var($ServerHandshakeContext, shc, $cast($ServerHandshakeContext, context));
	$var($ClientHello$ClientHelloMessage, clientHello, $cast($ClientHello$ClientHelloMessage, message));
	if ($nc($nc(shc)->conContext)->isNegotiated) {
		$init($Alert);
		$throw($($nc(shc->conContext)->fatal($Alert::UNEXPECTED_MESSAGE, "Received unexpected renegotiation handshake message"_s)));
	}
	$init($ProtocolVersion);
	if ($nc(clientHello)->clientVersion != $ProtocolVersion::TLS12->id) {
		$init($Alert);
		$throw($($nc($nc(shc)->conContext)->fatal($Alert::PROTOCOL_VERSION, "The ClientHello.legacy_version field is not TLS 1.2"_s)));
	}
	$init($ContentType);
	$init($ChangeCipherSpec);
	$nc($nc($nc(shc)->conContext)->consumers)->putIfAbsent($($Byte::valueOf($ContentType::CHANGE_CIPHER_SPEC->id)), $ChangeCipherSpec::t13Consumer);
	shc->isResumption = true;
		$init($SSLExtension);
	$var($SSLExtensionArray, extTypes, $new($SSLExtensionArray, {
		$SSLExtension::PSK_KEY_EXCHANGE_MODES,
		$SSLExtension::CH_PRE_SHARED_KEY
	}));
	$nc($nc(clientHello)->extensions)->consumeOnLoad(shc, extTypes);
	$init($SSLHandshake);
	$assign(extTypes, $nc(shc->sslConfig)->getExclusiveExtensions($SSLHandshake::CLIENT_HELLO, $($Arrays::asList($$new($SSLExtensionArray, {
		$SSLExtension::PSK_KEY_EXCHANGE_MODES,
		$SSLExtension::CH_PRE_SHARED_KEY,
		$SSLExtension::CH_SUPPORTED_VERSIONS
	})))));
	$nc(clientHello->extensions)->consumeOnLoad(shc, extTypes);
	if (!$nc(shc->handshakeProducers)->isEmpty()) {
		goHelloRetryRequest(shc, clientHello);
	} else {
		goServerHello(shc, clientHello);
	}
}

void ClientHello$T13ClientHelloConsumer::goHelloRetryRequest($ServerHandshakeContext* shc, $ClientHello$ClientHelloMessage* clientHello) {
	$init($SSLHandshake);
	$var($HandshakeProducer, handshakeProducer, $cast($HandshakeProducer, $nc($nc(shc)->handshakeProducers)->remove($($Byte::valueOf($SSLHandshake::HELLO_RETRY_REQUEST->id)))));
	if (handshakeProducer != nullptr) {
		handshakeProducer->produce(shc, clientHello);
	} else {
		$init($Alert);
		$throw($($nc(shc->conContext)->fatal($Alert::HANDSHAKE_FAILURE, $$str({"No HelloRetryRequest producer: "_s, shc->handshakeProducers}))));
	}
	if (!$nc(shc->handshakeProducers)->isEmpty()) {
		$init($Alert);
		$throw($($nc(shc->conContext)->fatal($Alert::HANDSHAKE_FAILURE, $$str({"unknown handshake producers: "_s, shc->handshakeProducers}))));
	}
}

void ClientHello$T13ClientHelloConsumer::goServerHello($ServerHandshakeContext* shc, $ClientHello$ClientHelloMessage* clientHello) {
	$set($nc(shc), clientHelloRandom, $nc(clientHello)->clientRandom);
	if (!$nc(shc->conContext)->isNegotiated) {
		$set($nc(shc->conContext), protocolVersion, shc->negotiatedProtocol);
		$nc($nc(shc->conContext)->outputRecord)->setVersion(shc->negotiatedProtocol);
	}
	$init($SSLHandshake);
	$nc(shc->handshakeProducers)->put($($Byte::valueOf($SSLHandshake::SERVER_HELLO->id)), $SSLHandshake::SERVER_HELLO);
	$var($SSLHandshakeArray, probableHandshakeMessages, $new($SSLHandshakeArray, {
		$SSLHandshake::SERVER_HELLO,
		$SSLHandshake::ENCRYPTED_EXTENSIONS,
		$SSLHandshake::CERTIFICATE_REQUEST,
		$SSLHandshake::CERTIFICATE,
		$SSLHandshake::CERTIFICATE_VERIFY,
		$SSLHandshake::FINISHED
	}));
	{
		$var($SSLHandshakeArray, arr$, probableHandshakeMessages);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$SSLHandshake* hs = arr$->get(i$);
			{
				$var($HandshakeProducer, handshakeProducer, $cast($HandshakeProducer, $nc(shc->handshakeProducers)->remove($($Byte::valueOf($nc(hs)->id)))));
				if (handshakeProducer != nullptr) {
					handshakeProducer->produce(shc, clientHello);
				}
			}
		}
	}
}

ClientHello$T13ClientHelloConsumer::ClientHello$T13ClientHelloConsumer() {
}

$Class* ClientHello$T13ClientHelloConsumer::load$($String* name, bool initialize) {
	$loadClass(ClientHello$T13ClientHelloConsumer, name, initialize, &_ClientHello$T13ClientHelloConsumer_ClassInfo_, allocate$ClientHello$T13ClientHelloConsumer);
	return class$;
}

$Class* ClientHello$T13ClientHelloConsumer::class$ = nullptr;

		} // ssl
	} // security
} // sun