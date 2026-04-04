#include <sun/security/ssl/Finished$T12FinishedProducer.h>
#include <java/util/HashMap.h>
#include <java/util/LinkedHashMap.h>
#include <java/util/Map.h>
#include <javax/net/ssl/SSLEngineResult$HandshakeStatus.h>
#include <javax/net/ssl/SSLSessionContext.h>
#include <sun/security/ssl/ChangeCipherSpec.h>
#include <sun/security/ssl/ClientHandshakeContext.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/ContentType.h>
#include <sun/security/ssl/Finished$FinishedMessage.h>
#include <sun/security/ssl/Finished.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/HandshakeHash.h>
#include <sun/security/ssl/HandshakeOutStream.h>
#include <sun/security/ssl/HandshakeProducer.h>
#include <sun/security/ssl/InputRecord.h>
#include <sun/security/ssl/NewSessionTicket.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/SSLConfiguration.h>
#include <sun/security/ssl/SSLConsumer.h>
#include <sun/security/ssl/SSLContextImpl.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLHandshake.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/SSLSessionContextImpl.h>
#include <sun/security/ssl/SSLSessionImpl.h>
#include <sun/security/ssl/ServerHandshakeContext.h>
#include <sun/security/ssl/TransportContext.h>
#include <jcpp.h>

#undef CHANGE_CIPHER_SPEC
#undef FINISHED
#undef NEW_SESSION_TICKET

using $Byte = ::java::lang::Byte;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ChangeCipherSpec = ::sun::security::ssl::ChangeCipherSpec;
using $ClientHandshakeContext = ::sun::security::ssl::ClientHandshakeContext;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $ContentType = ::sun::security::ssl::ContentType;
using $Finished$FinishedMessage = ::sun::security::ssl::Finished$FinishedMessage;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $NewSessionTicket = ::sun::security::ssl::NewSessionTicket;
using $SSLHandshake = ::sun::security::ssl::SSLHandshake;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $SSLSessionContextImpl = ::sun::security::ssl::SSLSessionContextImpl;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;

namespace sun {
	namespace security {
		namespace ssl {

void Finished$T12FinishedProducer::init$() {
}

$bytes* Finished$T12FinishedProducer::produce($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$var($HandshakeContext, hc, $cast($HandshakeContext, context));
	if ($nc($nc(hc)->sslConfig)->isClientMode) {
		return onProduceFinished($cast($ClientHandshakeContext, context), message);
	} else {
		return onProduceFinished($cast($ServerHandshakeContext, context), message);
	}
}

$bytes* Finished$T12FinishedProducer::onProduceFinished($ClientHandshakeContext* chc, $SSLHandshake$HandshakeMessage* message) {
	$useLocalObjectStack();
	$nc($nc(chc)->handshakeHash)->update();
	$var($Finished$FinishedMessage, fm, $new($Finished$FinishedMessage, chc));
	$init($ChangeCipherSpec);
	$nc($ChangeCipherSpec::t10Producer)->produce(chc, message);
	$init($SSLLogger);
	if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
		$SSLLogger::fine("Produced client Finished handshake message"_s, $$new($ObjectArray, {fm}));
	}
	fm->write(chc->handshakeOutput);
	$nc(chc->handshakeOutput)->flush();
	if ($nc(chc->conContext)->secureRenegotiation) {
		$set(chc->conContext, clientVerifyData, fm->verifyData);
	}
	if (chc->statelessResumption) {
		$init($SSLHandshake);
		$nc(chc->handshakeConsumers)->put($($Byte::valueOf($SSLHandshake::NEW_SESSION_TICKET->id)), $SSLHandshake::NEW_SESSION_TICKET);
	}
	if (!chc->isResumption) {
		$init($ContentType);
		$nc(chc->conContext->consumers)->put($($Byte::valueOf($ContentType::CHANGE_CIPHER_SPEC->id)), $ChangeCipherSpec::t10Consumer);
		$init($SSLHandshake);
		$nc(chc->handshakeConsumers)->put($($Byte::valueOf($SSLHandshake::FINISHED->id)), $SSLHandshake::FINISHED);
		$nc(chc->conContext->inputRecord)->expectingFinishFlight();
	} else {
		if ($nc(chc->handshakeSession)->isRejoinable()) {
			$$sure($SSLSessionContextImpl, $nc(chc->sslContext)->engineGetClientSessionContext())->put(chc->handshakeSession);
		}
		$set(chc->conContext, conSession, chc->handshakeSession->finish());
		$set(chc->conContext, protocolVersion, chc->negotiatedProtocol);
		chc->handshakeFinished = true;
		if (!$nc(chc->sslContext)->isDTLS()) {
			chc->conContext->finishHandshake();
		}
	}
	return nullptr;
}

$bytes* Finished$T12FinishedProducer::onProduceFinished($ServerHandshakeContext* shc, $SSLHandshake$HandshakeMessage* message) {
	$useLocalObjectStack();
	if ($nc(shc)->statelessResumption) {
		$init($NewSessionTicket);
		$nc($NewSessionTicket::handshake12Producer)->produce(shc, message);
	}
	$nc(shc->handshakeHash)->update();
	$var($Finished$FinishedMessage, fm, $new($Finished$FinishedMessage, shc));
	$init($ChangeCipherSpec);
	$nc($ChangeCipherSpec::t10Producer)->produce(shc, message);
	$init($SSLLogger);
	if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
		$SSLLogger::fine("Produced server Finished handshake message"_s, $$new($ObjectArray, {fm}));
	}
	fm->write(shc->handshakeOutput);
	$nc(shc->handshakeOutput)->flush();
	if ($nc(shc->conContext)->secureRenegotiation) {
		$set(shc->conContext, serverVerifyData, fm->verifyData);
	}
	if (shc->isResumption) {
		$init($ContentType);
		$nc(shc->conContext->consumers)->put($($Byte::valueOf($ContentType::CHANGE_CIPHER_SPEC->id)), $ChangeCipherSpec::t10Consumer);
		$init($SSLHandshake);
		$nc(shc->handshakeConsumers)->put($($Byte::valueOf($SSLHandshake::FINISHED->id)), $SSLHandshake::FINISHED);
		$nc(shc->conContext->inputRecord)->expectingFinishFlight();
	} else {
		if (shc->statelessResumption && $nc(shc->handshakeSession)->isStatelessable()) {
			shc->handshakeSession->setContext($$cast($SSLSessionContextImpl, $nc(shc->sslContext)->engineGetServerSessionContext()));
		} else if ($nc(shc->handshakeSession)->isRejoinable()) {
			$$sure($SSLSessionContextImpl, $nc(shc->sslContext)->engineGetServerSessionContext())->put(shc->handshakeSession);
		}
		$set(shc->conContext, conSession, $nc(shc->handshakeSession)->finish());
		$set(shc->conContext, protocolVersion, shc->negotiatedProtocol);
		shc->handshakeFinished = true;
		if (!$nc(shc->sslContext)->isDTLS()) {
			shc->conContext->finishHandshake();
		}
	}
	return nullptr;
}

Finished$T12FinishedProducer::Finished$T12FinishedProducer() {
}

$Class* Finished$T12FinishedProducer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(Finished$T12FinishedProducer, init$, void)},
		{"onProduceFinished", "(Lsun/security/ssl/ClientHandshakeContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)[B", nullptr, $PRIVATE, $method(Finished$T12FinishedProducer, onProduceFinished, $bytes*, $ClientHandshakeContext*, $SSLHandshake$HandshakeMessage*), "java.io.IOException"},
		{"onProduceFinished", "(Lsun/security/ssl/ServerHandshakeContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)[B", nullptr, $PRIVATE, $method(Finished$T12FinishedProducer, onProduceFinished, $bytes*, $ServerHandshakeContext*, $SSLHandshake$HandshakeMessage*), "java.io.IOException"},
		{"produce", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)[B", nullptr, $PUBLIC, $virtualMethod(Finished$T12FinishedProducer, produce, $bytes*, $ConnectionContext*, $SSLHandshake$HandshakeMessage*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.Finished$T12FinishedProducer", "sun.security.ssl.Finished", "T12FinishedProducer", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.Finished$T12FinishedProducer",
		"java.lang.Object",
		"sun.security.ssl.HandshakeProducer",
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
	$loadClass(Finished$T12FinishedProducer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Finished$T12FinishedProducer);
	});
	return class$;
}

$Class* Finished$T12FinishedProducer::class$ = nullptr;

		} // ssl
	} // security
} // sun