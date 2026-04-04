#include <sun/security/ssl/Finished$T12FinishedConsumer.h>
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
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Alert = ::sun::security::ssl::Alert;
using $ClientHandshakeContext = ::sun::security::ssl::ClientHandshakeContext;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $ContentType = ::sun::security::ssl::ContentType;
using $Finished = ::sun::security::ssl::Finished;
using $Finished$FinishedMessage = ::sun::security::ssl::Finished$FinishedMessage;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $HandshakeProducer = ::sun::security::ssl::HandshakeProducer;
using $SSLHandshake = ::sun::security::ssl::SSLHandshake;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $SSLSessionContextImpl = ::sun::security::ssl::SSLSessionContextImpl;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;

namespace sun {
	namespace security {
		namespace ssl {

void Finished$T12FinishedConsumer::init$() {
}

void Finished$T12FinishedConsumer::consume($ConnectionContext* context, $ByteBuffer* message) {
	$useLocalObjectStack();
	$var($HandshakeContext, hc, $cast($HandshakeContext, context));
	$init($SSLHandshake);
	$nc($nc(hc)->handshakeConsumers)->remove($($Byte::valueOf($SSLHandshake::FINISHED->id)));
	$init($ContentType);
	if ($nc($nc(hc->conContext)->consumers)->containsKey($($Byte::valueOf($ContentType::CHANGE_CIPHER_SPEC->id)))) {
		$init($Alert);
		$throw($(hc->conContext->fatal($Alert::UNEXPECTED_MESSAGE, "Missing ChangeCipherSpec message"_s)));
	}
	if ($nc(hc->sslConfig)->isClientMode) {
		onConsumeFinished($cast($ClientHandshakeContext, context), message);
	} else {
		onConsumeFinished($cast($ServerHandshakeContext, context), message);
	}
}

void Finished$T12FinishedConsumer::onConsumeFinished($ClientHandshakeContext* chc, $ByteBuffer* message) {
	$useLocalObjectStack();
	$var($Finished$FinishedMessage, fm, $new($Finished$FinishedMessage, chc, message));
	$init($SSLLogger);
	if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
		$SSLLogger::fine("Consuming server Finished handshake message"_s, $$new($ObjectArray, {fm}));
	}
	if ($nc($nc(chc)->conContext)->secureRenegotiation) {
		$set(chc->conContext, serverVerifyData, fm->verifyData);
	}
	if (!chc->isResumption) {
		if ($nc(chc->handshakeSession)->isRejoinable()) {
			$$sure($SSLSessionContextImpl, $nc(chc->sslContext)->engineGetClientSessionContext())->put(chc->handshakeSession);
		}
		$set(chc->conContext, conSession, chc->handshakeSession->finish());
		$set(chc->conContext, protocolVersion, chc->negotiatedProtocol);
		chc->handshakeFinished = true;
		$Finished::recordEvent(chc->conContext->conSession);
		if (!$nc(chc->sslContext)->isDTLS()) {
			chc->conContext->finishHandshake();
		}
	} else {
		$init($SSLHandshake);
		$nc(chc->handshakeProducers)->put($($Byte::valueOf($SSLHandshake::FINISHED->id)), $SSLHandshake::FINISHED);
	}
	$init($SSLHandshake);
	$var($SSLHandshakeArray, probableHandshakeMessages, $new($SSLHandshakeArray, {$SSLHandshake::FINISHED}));
	{
		$var($SSLHandshakeArray, arr$, probableHandshakeMessages);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$SSLHandshake* hs = arr$->get(i$);
			{
				$var($HandshakeProducer, handshakeProducer, $cast($HandshakeProducer, $nc(chc->handshakeProducers)->remove($($Byte::valueOf($nc(hs)->id)))));
				if (handshakeProducer != nullptr) {
					handshakeProducer->produce(chc, fm);
				}
			}
		}
	}
}

void Finished$T12FinishedConsumer::onConsumeFinished($ServerHandshakeContext* shc, $ByteBuffer* message) {
	$useLocalObjectStack();
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
		$SSLLogger::fine("Consuming client Finished handshake message"_s, $$new($ObjectArray, {fm}));
	}
	if ($nc(shc->conContext)->secureRenegotiation) {
		$set(shc->conContext, clientVerifyData, fm->verifyData);
	}
	if (shc->isResumption) {
		if ($nc(shc->handshakeSession)->isRejoinable() && !shc->statelessResumption) {
			$$sure($SSLSessionContextImpl, $nc(shc->sslContext)->engineGetServerSessionContext())->put(shc->handshakeSession);
		}
		$set(shc->conContext, conSession, shc->handshakeSession->finish());
		$set(shc->conContext, protocolVersion, shc->negotiatedProtocol);
		shc->handshakeFinished = true;
		$Finished::recordEvent(shc->conContext->conSession);
		if (!$nc(shc->sslContext)->isDTLS()) {
			shc->conContext->finishHandshake();
		}
	} else {
		$init($SSLHandshake);
		$nc(shc->handshakeProducers)->put($($Byte::valueOf($SSLHandshake::FINISHED->id)), $SSLHandshake::FINISHED);
	}
	$init($SSLHandshake);
	$var($SSLHandshakeArray, probableHandshakeMessages, $new($SSLHandshakeArray, {$SSLHandshake::FINISHED}));
	{
		$var($SSLHandshakeArray, arr$, probableHandshakeMessages);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$SSLHandshake* hs = arr$->get(i$);
			{
				$var($HandshakeProducer, handshakeProducer, $cast($HandshakeProducer, $nc(shc->handshakeProducers)->remove($($Byte::valueOf($nc(hs)->id)))));
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
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(Finished$T12FinishedConsumer, init$, void)},
		{"consume", "(Lsun/security/ssl/ConnectionContext;Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC, $virtualMethod(Finished$T12FinishedConsumer, consume, void, $ConnectionContext*, $ByteBuffer*), "java.io.IOException"},
		{"onConsumeFinished", "(Lsun/security/ssl/ClientHandshakeContext;Ljava/nio/ByteBuffer;)V", nullptr, $PRIVATE, $method(Finished$T12FinishedConsumer, onConsumeFinished, void, $ClientHandshakeContext*, $ByteBuffer*), "java.io.IOException"},
		{"onConsumeFinished", "(Lsun/security/ssl/ServerHandshakeContext;Ljava/nio/ByteBuffer;)V", nullptr, $PRIVATE, $method(Finished$T12FinishedConsumer, onConsumeFinished, void, $ServerHandshakeContext*, $ByteBuffer*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.Finished$T12FinishedConsumer", "sun.security.ssl.Finished", "T12FinishedConsumer", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.Finished$T12FinishedConsumer",
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
		"sun.security.ssl.Finished"
	};
	$loadClass(Finished$T12FinishedConsumer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Finished$T12FinishedConsumer);
	});
	return class$;
}

$Class* Finished$T12FinishedConsumer::class$ = nullptr;

		} // ssl
	} // security
} // sun