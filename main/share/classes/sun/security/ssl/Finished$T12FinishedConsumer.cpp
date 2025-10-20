#include <sun/security/ssl/Finished$T12FinishedConsumer.h>

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
#include <java/util/Map.h>
#include <javax/net/ssl/SSLEngineResult$HandshakeStatus.h>
#include <javax/net/ssl/SSLException.h>
#include <javax/net/ssl/SSLSessionContext.h>
#include <sun/security/ssl/Alert.h>
#include <sun/security/ssl/ClientHandshakeContext.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/ContentType.h>
#include <sun/security/ssl/Finished$FinishedMessage.h>
#include <sun/security/ssl/Finished.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/HandshakeProducer.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/SSLConfiguration.h>
#include <sun/security/ssl/SSLContextImpl.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLHandshake.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/SSLSessionContextImpl.h>
#include <sun/security/ssl/SSLSessionImpl.h>
#include <sun/security/ssl/ServerHandshakeContext.h>
#include <sun/security/ssl/TransportContext.h>
#include <jcpp.h>

#undef CERTIFICATE_VERIFY
#undef CHANGE_CIPHER_SPEC
#undef FINISHED
#undef UNEXPECTED_MESSAGE

using $SSLHandshakeArray = $Array<::sun::security::ssl::SSLHandshake>;
using $Byte = ::java::lang::Byte;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $HashMap = ::java::util::HashMap;
using $LinkedHashMap = ::java::util::LinkedHashMap;
using $Map = ::java::util::Map;
using $SSLEngineResult$HandshakeStatus = ::javax::net::ssl::SSLEngineResult$HandshakeStatus;
using $SSLException = ::javax::net::ssl::SSLException;
using $SSLSessionContext = ::javax::net::ssl::SSLSessionContext;
using $Alert = ::sun::security::ssl::Alert;
using $ClientHandshakeContext = ::sun::security::ssl::ClientHandshakeContext;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $ContentType = ::sun::security::ssl::ContentType;
using $Finished = ::sun::security::ssl::Finished;
using $Finished$FinishedMessage = ::sun::security::ssl::Finished$FinishedMessage;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $HandshakeProducer = ::sun::security::ssl::HandshakeProducer;
using $ProtocolVersion = ::sun::security::ssl::ProtocolVersion;
using $SSLConfiguration = ::sun::security::ssl::SSLConfiguration;
using $SSLConsumer = ::sun::security::ssl::SSLConsumer;
using $SSLContextImpl = ::sun::security::ssl::SSLContextImpl;
using $SSLHandshake = ::sun::security::ssl::SSLHandshake;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $SSLSessionContextImpl = ::sun::security::ssl::SSLSessionContextImpl;
using $SSLSessionImpl = ::sun::security::ssl::SSLSessionImpl;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;
using $TransportContext = ::sun::security::ssl::TransportContext;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _Finished$T12FinishedConsumer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(Finished$T12FinishedConsumer::*)()>(&Finished$T12FinishedConsumer::init$))},
	{"consume", "(Lsun/security/ssl/ConnectionContext;Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"onConsumeFinished", "(Lsun/security/ssl/ClientHandshakeContext;Ljava/nio/ByteBuffer;)V", nullptr, $PRIVATE, $method(static_cast<void(Finished$T12FinishedConsumer::*)($ClientHandshakeContext*,$ByteBuffer*)>(&Finished$T12FinishedConsumer::onConsumeFinished)), "java.io.IOException"},
	{"onConsumeFinished", "(Lsun/security/ssl/ServerHandshakeContext;Ljava/nio/ByteBuffer;)V", nullptr, $PRIVATE, $method(static_cast<void(Finished$T12FinishedConsumer::*)($ServerHandshakeContext*,$ByteBuffer*)>(&Finished$T12FinishedConsumer::onConsumeFinished)), "java.io.IOException"},
	{}
};

$InnerClassInfo _Finished$T12FinishedConsumer_InnerClassesInfo_[] = {
	{"sun.security.ssl.Finished$T12FinishedConsumer", "sun.security.ssl.Finished", "T12FinishedConsumer", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _Finished$T12FinishedConsumer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.Finished$T12FinishedConsumer",
	"java.lang.Object",
	"sun.security.ssl.SSLConsumer",
	nullptr,
	_Finished$T12FinishedConsumer_MethodInfo_,
	nullptr,
	nullptr,
	_Finished$T12FinishedConsumer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.Finished"
};

$Object* allocate$Finished$T12FinishedConsumer($Class* clazz) {
	return $of($alloc(Finished$T12FinishedConsumer));
}

void Finished$T12FinishedConsumer::init$() {
}

void Finished$T12FinishedConsumer::consume($ConnectionContext* context, $ByteBuffer* message) {
	$useLocalCurrentObjectStackCache();
	$var($HandshakeContext, hc, $cast($HandshakeContext, context));
	$init($SSLHandshake);
	$nc($nc(hc)->handshakeConsumers)->remove($($Byte::valueOf($SSLHandshake::FINISHED->id)));
	$init($ContentType);
	if ($nc($nc(hc->conContext)->consumers)->containsKey($($Byte::valueOf($ContentType::CHANGE_CIPHER_SPEC->id)))) {
		$init($Alert);
		$throw($($nc(hc->conContext)->fatal($Alert::UNEXPECTED_MESSAGE, "Missing ChangeCipherSpec message"_s)));
	}
	if ($nc(hc->sslConfig)->isClientMode) {
		onConsumeFinished($cast($ClientHandshakeContext, context), message);
	} else {
		onConsumeFinished($cast($ServerHandshakeContext, context), message);
	}
}

void Finished$T12FinishedConsumer::onConsumeFinished($ClientHandshakeContext* chc, $ByteBuffer* message) {
	$useLocalCurrentObjectStackCache();
	$var($Finished$FinishedMessage, fm, $new($Finished$FinishedMessage, chc, message));
	$init($SSLLogger);
	if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
		$SSLLogger::fine("Consuming server Finished handshake message"_s, $$new($ObjectArray, {$of(fm)}));
	}
	if ($nc($nc(chc)->conContext)->secureRenegotiation) {
		$set($nc(chc->conContext), serverVerifyData, fm->verifyData);
	}
	if (!$nc(chc)->isResumption) {
		if ($nc(chc->handshakeSession)->isRejoinable()) {
			$nc(($cast($SSLSessionContextImpl, $($nc(chc->sslContext)->engineGetClientSessionContext()))))->put(chc->handshakeSession);
		}
		$set($nc(chc->conContext), conSession, $nc(chc->handshakeSession)->finish());
		$set($nc(chc->conContext), protocolVersion, chc->negotiatedProtocol);
		chc->handshakeFinished = true;
		$Finished::recordEvent($nc(chc->conContext)->conSession);
		if (!$nc(chc->sslContext)->isDTLS()) {
			$nc(chc->conContext)->finishHandshake();
		}
	} else {
		$init($SSLHandshake);
		$nc(chc->handshakeProducers)->put($($Byte::valueOf($SSLHandshake::FINISHED->id)), $SSLHandshake::FINISHED);
	}
	$init($SSLHandshake);
	$var($SSLHandshakeArray, probableHandshakeMessages, $new($SSLHandshakeArray, {$SSLHandshake::FINISHED}));
	{
		$var($SSLHandshakeArray, arr$, probableHandshakeMessages);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$SSLHandshake* hs = arr$->get(i$);
			{
				$var($HandshakeProducer, handshakeProducer, $cast($HandshakeProducer, $nc($nc(chc)->handshakeProducers)->remove($($Byte::valueOf($nc(hs)->id)))));
				if (handshakeProducer != nullptr) {
					handshakeProducer->produce(chc, fm);
				}
			}
		}
	}
}

void Finished$T12FinishedConsumer::onConsumeFinished($ServerHandshakeContext* shc, $ByteBuffer* message) {
	$useLocalCurrentObjectStackCache();
	if (!$nc(shc)->isResumption) {
		$init($SSLHandshake);
		if ($nc(shc->handshakeConsumers)->containsKey($($Byte::valueOf($SSLHandshake::CERTIFICATE_VERIFY->id)))) {
			$init($Alert);
			$throw($($nc(shc->conContext)->fatal($Alert::UNEXPECTED_MESSAGE, "Unexpected Finished handshake message"_s)));
		}
	}
	$var($Finished$FinishedMessage, fm, $new($Finished$FinishedMessage, shc, message));
	$init($SSLLogger);
	if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
		$SSLLogger::fine("Consuming client Finished handshake message"_s, $$new($ObjectArray, {$of(fm)}));
	}
	if ($nc($nc(shc)->conContext)->secureRenegotiation) {
		$set($nc(shc->conContext), clientVerifyData, fm->verifyData);
	}
	if ($nc(shc)->isResumption) {
		if ($nc(shc->handshakeSession)->isRejoinable() && !shc->statelessResumption) {
			$nc(($cast($SSLSessionContextImpl, $($nc(shc->sslContext)->engineGetServerSessionContext()))))->put(shc->handshakeSession);
		}
		$set($nc(shc->conContext), conSession, $nc(shc->handshakeSession)->finish());
		$set($nc(shc->conContext), protocolVersion, shc->negotiatedProtocol);
		shc->handshakeFinished = true;
		$Finished::recordEvent($nc(shc->conContext)->conSession);
		if (!$nc(shc->sslContext)->isDTLS()) {
			$nc(shc->conContext)->finishHandshake();
		}
	} else {
		$init($SSLHandshake);
		$nc(shc->handshakeProducers)->put($($Byte::valueOf($SSLHandshake::FINISHED->id)), $SSLHandshake::FINISHED);
	}
	$init($SSLHandshake);
	$var($SSLHandshakeArray, probableHandshakeMessages, $new($SSLHandshakeArray, {$SSLHandshake::FINISHED}));
	{
		$var($SSLHandshakeArray, arr$, probableHandshakeMessages);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$SSLHandshake* hs = arr$->get(i$);
			{
				$var($HandshakeProducer, handshakeProducer, $cast($HandshakeProducer, $nc($nc(shc)->handshakeProducers)->remove($($Byte::valueOf($nc(hs)->id)))));
				if (handshakeProducer != nullptr) {
					handshakeProducer->produce(shc, fm);
				}
			}
		}
	}
}

Finished$T12FinishedConsumer::Finished$T12FinishedConsumer() {
}

$Class* Finished$T12FinishedConsumer::load$($String* name, bool initialize) {
	$loadClass(Finished$T12FinishedConsumer, name, initialize, &_Finished$T12FinishedConsumer_ClassInfo_, allocate$Finished$T12FinishedConsumer);
	return class$;
}

$Class* Finished$T12FinishedConsumer::class$ = nullptr;

		} // ssl
	} // security
} // sun