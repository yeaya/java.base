#include <sun/security/ssl/ServerHello$T13HelloRetryRequestConsumer.h>
#include <java/io/IOException.h>
#include <java/nio/ByteBuffer.h>
#include <javax/net/ssl/SSLException.h>
#include <sun/security/ssl/Alert.h>
#include <sun/security/ssl/CipherSuite$HashAlg.h>
#include <sun/security/ssl/CipherSuite.h>
#include <sun/security/ssl/ClientHandshakeContext.h>
#include <sun/security/ssl/ClientHello$ClientHelloMessage.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/HandshakeHash.h>
#include <sun/security/ssl/HandshakeOutStream.h>
#include <sun/security/ssl/OutputRecord.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/SSLConfiguration.h>
#include <sun/security/ssl/SSLExtension.h>
#include <sun/security/ssl/SSLExtensions.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLHandshake.h>
#include <sun/security/ssl/ServerHello$ServerHelloMessage.h>
#include <sun/security/ssl/ServerHello.h>
#include <sun/security/ssl/TransportContext.h>
#include <jcpp.h>

#undef CH_COOKIE
#undef CH_KEY_SHARE
#undef CH_PRE_SHARED_KEY
#undef CLIENT_HELLO
#undef HANDSHAKE_FAILURE
#undef HELLO_RETRY_REQUEST
#undef MESSAGE_HASH
#undef PROTOCOL_VERSION
#undef TLS12

using $SSLExtensionArray = $Array<::sun::security::ssl::SSLExtension>;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Alert = ::sun::security::ssl::Alert;
using $ClientHandshakeContext = ::sun::security::ssl::ClientHandshakeContext;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $HandshakeOutStream = ::sun::security::ssl::HandshakeOutStream;
using $OutputRecord = ::sun::security::ssl::OutputRecord;
using $ProtocolVersion = ::sun::security::ssl::ProtocolVersion;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLHandshake = ::sun::security::ssl::SSLHandshake;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $ServerHello$ServerHelloMessage = ::sun::security::ssl::ServerHello$ServerHelloMessage;

namespace sun {
	namespace security {
		namespace ssl {

void ServerHello$T13HelloRetryRequestConsumer::init$() {
}

void ServerHello$T13HelloRetryRequestConsumer::consume($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$useLocalObjectStack();
	$var($ClientHandshakeContext, chc, $cast($ClientHandshakeContext, context));
	$var($ServerHello$ServerHelloMessage, helloRetryRequest, $cast($ServerHello$ServerHelloMessage, message));
	$init($ProtocolVersion);
	if ($nc(helloRetryRequest)->serverVersion != $ProtocolVersion::TLS12) {
		$init($Alert);
		$throw($($nc($nc(chc)->conContext)->fatal($Alert::PROTOCOL_VERSION, "The HelloRetryRequest.legacy_version is not TLS 1.2"_s)));
	}
	$set($nc(chc), negotiatedCipherSuite, helloRetryRequest->cipherSuite);
	$init($SSLHandshake);
	$var($SSLExtensionArray, extTypes, $nc(chc->sslConfig)->getEnabledExtensions($SSLHandshake::HELLO_RETRY_REQUEST));
	$nc(helloRetryRequest->extensions)->consumeOnLoad(chc, extTypes);
	helloRetryRequest->extensions->consumeOnTrade(chc, extTypes);
	$nc(chc->handshakeHash)->finish();
	$var($HandshakeOutStream, hos, $new($HandshakeOutStream, nullptr));
	try {
		$nc(chc->initialClientHelloMsg)->write(hos);
	} catch ($IOException& ioe) {
		$init($Alert);
		$throw($($nc(chc->conContext)->fatal($Alert::HANDSHAKE_FAILURE, "Failed to construct message hash"_s, ioe)));
	}
	chc->handshakeHash->deliver($(hos->toByteArray()));
	chc->handshakeHash->determine(chc->negotiatedProtocol, chc->negotiatedCipherSuite);
	$var($bytes, clientHelloHash, chc->handshakeHash->digest());
	int32_t hashLen = $nc(chc->negotiatedCipherSuite)->hashAlg->hashLength;
	$var($bytes, hashedClientHello, $new($bytes, 4 + hashLen));
	hashedClientHello->set(0, $SSLHandshake::MESSAGE_HASH->id);
	hashedClientHello->set(1, (int8_t)0);
	hashedClientHello->set(2, (int8_t)0);
	hashedClientHello->set(3, (int8_t)(hashLen & 0xff));
	$System::arraycopy(clientHelloHash, 0, hashedClientHello, 4, hashLen);
	chc->handshakeHash->finish();
	chc->handshakeHash->deliver(hashedClientHello);
	int32_t hrrBodyLen = $nc(helloRetryRequest->handshakeRecord)->remaining();
	$var($bytes, hrrMessage, $new($bytes, 4 + hrrBodyLen));
	hrrMessage->set(0, $SSLHandshake::HELLO_RETRY_REQUEST->id);
	hrrMessage->set(1, (int8_t)((hrrBodyLen >> 16) & 0xff));
	hrrMessage->set(2, (int8_t)((hrrBodyLen >> 8) & 0xff));
	hrrMessage->set(3, (int8_t)(hrrBodyLen & 0xff));
	$var($ByteBuffer, hrrBody, helloRetryRequest->handshakeRecord->duplicate());
	$nc(hrrBody)->get(hrrMessage, 4, hrrBodyLen);
	chc->handshakeHash->receive(hrrMessage);
	$init($SSLExtension);
	$nc($nc(chc->initialClientHelloMsg)->extensions)->reproduce(chc, $$new($SSLExtensionArray, {
		$SSLExtension::CH_COOKIE,
		$SSLExtension::CH_KEY_SHARE,
		$SSLExtension::CH_PRE_SHARED_KEY
	}));
	$SSLHandshake::CLIENT_HELLO->produce(context, helloRetryRequest);
}

ServerHello$T13HelloRetryRequestConsumer::ServerHello$T13HelloRetryRequestConsumer() {
}

$Class* ServerHello$T13HelloRetryRequestConsumer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(ServerHello$T13HelloRetryRequestConsumer, init$, void)},
		{"consume", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)V", nullptr, $PUBLIC, $virtualMethod(ServerHello$T13HelloRetryRequestConsumer, consume, void, $ConnectionContext*, $SSLHandshake$HandshakeMessage*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.ServerHello$T13HelloRetryRequestConsumer", "sun.security.ssl.ServerHello", "T13HelloRetryRequestConsumer", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.ServerHello$T13HelloRetryRequestConsumer",
		"java.lang.Object",
		"sun.security.ssl.HandshakeConsumer",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.ssl.ServerHello"
	};
	$loadClass(ServerHello$T13HelloRetryRequestConsumer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ServerHello$T13HelloRetryRequestConsumer);
	});
	return class$;
}

$Class* ServerHello$T13HelloRetryRequestConsumer::class$ = nullptr;

		} // ssl
	} // security
} // sun