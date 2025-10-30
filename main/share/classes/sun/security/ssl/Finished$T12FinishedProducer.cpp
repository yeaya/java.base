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
using $HashMap = ::java::util::HashMap;
using $LinkedHashMap = ::java::util::LinkedHashMap;
using $Map = ::java::util::Map;
using $SSLEngineResult$HandshakeStatus = ::javax::net::ssl::SSLEngineResult$HandshakeStatus;
using $SSLSessionContext = ::javax::net::ssl::SSLSessionContext;
using $ChangeCipherSpec = ::sun::security::ssl::ChangeCipherSpec;
using $ClientHandshakeContext = ::sun::security::ssl::ClientHandshakeContext;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $ContentType = ::sun::security::ssl::ContentType;
using $Finished = ::sun::security::ssl::Finished;
using $Finished$FinishedMessage = ::sun::security::ssl::Finished$FinishedMessage;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $HandshakeHash = ::sun::security::ssl::HandshakeHash;
using $HandshakeOutStream = ::sun::security::ssl::HandshakeOutStream;
using $HandshakeProducer = ::sun::security::ssl::HandshakeProducer;
using $InputRecord = ::sun::security::ssl::InputRecord;
using $NewSessionTicket = ::sun::security::ssl::NewSessionTicket;
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

$MethodInfo _Finished$T12FinishedProducer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(Finished$T12FinishedProducer::*)()>(&Finished$T12FinishedProducer::init$))},
	{"onProduceFinished", "(Lsun/security/ssl/ClientHandshakeContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)[B", nullptr, $PRIVATE, $method(static_cast<$bytes*(Finished$T12FinishedProducer::*)($ClientHandshakeContext*,$SSLHandshake$HandshakeMessage*)>(&Finished$T12FinishedProducer::onProduceFinished)), "java.io.IOException"},
	{"onProduceFinished", "(Lsun/security/ssl/ServerHandshakeContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)[B", nullptr, $PRIVATE, $method(static_cast<$bytes*(Finished$T12FinishedProducer::*)($ServerHandshakeContext*,$SSLHandshake$HandshakeMessage*)>(&Finished$T12FinishedProducer::onProduceFinished)), "java.io.IOException"},
	{"produce", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)[B", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _Finished$T12FinishedProducer_InnerClassesInfo_[] = {
	{"sun.security.ssl.Finished$T12FinishedProducer", "sun.security.ssl.Finished", "T12FinishedProducer", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _Finished$T12FinishedProducer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.Finished$T12FinishedProducer",
	"java.lang.Object",
	"sun.security.ssl.HandshakeProducer",
	nullptr,
	_Finished$T12FinishedProducer_MethodInfo_,
	nullptr,
	nullptr,
	_Finished$T12FinishedProducer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.Finished"
};

$Object* allocate$Finished$T12FinishedProducer($Class* clazz) {
	return $of($alloc(Finished$T12FinishedProducer));
}

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
	$useLocalCurrentObjectStackCache();
	$nc($nc(chc)->handshakeHash)->update();
	$var($Finished$FinishedMessage, fm, $new($Finished$FinishedMessage, chc));
	$init($ChangeCipherSpec);
	$nc($ChangeCipherSpec::t10Producer)->produce(chc, message);
	$init($SSLLogger);
	if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
		$SSLLogger::fine("Produced client Finished handshake message"_s, $$new($ObjectArray, {$of(fm)}));
	}
	fm->write(chc->handshakeOutput);
	$nc(chc->handshakeOutput)->flush();
	if ($nc(chc->conContext)->secureRenegotiation) {
		$set($nc(chc->conContext), clientVerifyData, fm->verifyData);
	}
	if (chc->statelessResumption) {
		$init($SSLHandshake);
		$nc(chc->handshakeConsumers)->put($($Byte::valueOf($SSLHandshake::NEW_SESSION_TICKET->id)), $SSLHandshake::NEW_SESSION_TICKET);
	}
	if (!chc->isResumption) {
		$init($ContentType);
		$nc($nc(chc->conContext)->consumers)->put($($Byte::valueOf($ContentType::CHANGE_CIPHER_SPEC->id)), $ChangeCipherSpec::t10Consumer);
		$init($SSLHandshake);
		$nc(chc->handshakeConsumers)->put($($Byte::valueOf($SSLHandshake::FINISHED->id)), $SSLHandshake::FINISHED);
		$nc($nc(chc->conContext)->inputRecord)->expectingFinishFlight();
	} else {
		if ($nc(chc->handshakeSession)->isRejoinable()) {
			$nc(($cast($SSLSessionContextImpl, $($nc(chc->sslContext)->engineGetClientSessionContext()))))->put(chc->handshakeSession);
		}
		$set($nc(chc->conContext), conSession, $nc(chc->handshakeSession)->finish());
		$set($nc(chc->conContext), protocolVersion, chc->negotiatedProtocol);
		chc->handshakeFinished = true;
		if (!$nc(chc->sslContext)->isDTLS()) {
			$nc(chc->conContext)->finishHandshake();
		}
	}
	return nullptr;
}

$bytes* Finished$T12FinishedProducer::onProduceFinished($ServerHandshakeContext* shc, $SSLHandshake$HandshakeMessage* message) {
	$useLocalCurrentObjectStackCache();
	if ($nc(shc)->statelessResumption) {
		$init($NewSessionTicket);
		$nc($NewSessionTicket::handshake12Producer)->produce(shc, message);
	}
	$nc($nc(shc)->handshakeHash)->update();
	$var($Finished$FinishedMessage, fm, $new($Finished$FinishedMessage, shc));
	$init($ChangeCipherSpec);
	$nc($ChangeCipherSpec::t10Producer)->produce(shc, message);
	$init($SSLLogger);
	if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
		$SSLLogger::fine("Produced server Finished handshake message"_s, $$new($ObjectArray, {$of(fm)}));
	}
	fm->write(shc->handshakeOutput);
	$nc(shc->handshakeOutput)->flush();
	if ($nc(shc->conContext)->secureRenegotiation) {
		$set($nc(shc->conContext), serverVerifyData, fm->verifyData);
	}
	if (shc->isResumption) {
		$init($ContentType);
		$nc($nc(shc->conContext)->consumers)->put($($Byte::valueOf($ContentType::CHANGE_CIPHER_SPEC->id)), $ChangeCipherSpec::t10Consumer);
		$init($SSLHandshake);
		$nc(shc->handshakeConsumers)->put($($Byte::valueOf($SSLHandshake::FINISHED->id)), $SSLHandshake::FINISHED);
		$nc($nc(shc->conContext)->inputRecord)->expectingFinishFlight();
	} else {
		if (shc->statelessResumption && $nc(shc->handshakeSession)->isStatelessable()) {
			$nc(shc->handshakeSession)->setContext($cast($SSLSessionContextImpl, $($nc(shc->sslContext)->engineGetServerSessionContext())));
		} else if ($nc(shc->handshakeSession)->isRejoinable()) {
			$nc(($cast($SSLSessionContextImpl, $($nc(shc->sslContext)->engineGetServerSessionContext()))))->put(shc->handshakeSession);
		}
		$set($nc(shc->conContext), conSession, $nc(shc->handshakeSession)->finish());
		$set($nc(shc->conContext), protocolVersion, shc->negotiatedProtocol);
		shc->handshakeFinished = true;
		if (!$nc(shc->sslContext)->isDTLS()) {
			$nc(shc->conContext)->finishHandshake();
		}
	}
	return nullptr;
}

Finished$T12FinishedProducer::Finished$T12FinishedProducer() {
}

$Class* Finished$T12FinishedProducer::load$($String* name, bool initialize) {
	$loadClass(Finished$T12FinishedProducer, name, initialize, &_Finished$T12FinishedProducer_ClassInfo_, allocate$Finished$T12FinishedProducer);
	return class$;
}

$Class* Finished$T12FinishedProducer::class$ = nullptr;

		} // ssl
	} // security
} // sun