#include <sun/security/ssl/Finished.h>

#include <java/security/cert/X509Certificate.h>
#include <java/time/Instant.h>
#include <javax/net/ssl/SSLPeerUnverifiedException.h>
#include <jdk/internal/event/EventHelper.h>
#include <jdk/internal/event/TLSHandshakeEvent.h>
#include <sun/security/ssl/Finished$T12FinishedConsumer.h>
#include <sun/security/ssl/Finished$T12FinishedProducer.h>
#include <sun/security/ssl/Finished$T13FinishedConsumer.h>
#include <sun/security/ssl/Finished$T13FinishedProducer.h>
#include <sun/security/ssl/HandshakeProducer.h>
#include <sun/security/ssl/SSLConsumer.h>
#include <sun/security/ssl/SSLSessionImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $X509Certificate = ::java::security::cert::X509Certificate;
using $Instant = ::java::time::Instant;
using $SSLPeerUnverifiedException = ::javax::net::ssl::SSLPeerUnverifiedException;
using $EventHelper = ::jdk::internal::event::EventHelper;
using $TLSHandshakeEvent = ::jdk::internal::event::TLSHandshakeEvent;
using $Finished$T12FinishedConsumer = ::sun::security::ssl::Finished$T12FinishedConsumer;
using $Finished$T12FinishedProducer = ::sun::security::ssl::Finished$T12FinishedProducer;
using $Finished$T13FinishedConsumer = ::sun::security::ssl::Finished$T13FinishedConsumer;
using $Finished$T13FinishedProducer = ::sun::security::ssl::Finished$T13FinishedProducer;
using $HandshakeProducer = ::sun::security::ssl::HandshakeProducer;
using $SSLConsumer = ::sun::security::ssl::SSLConsumer;
using $SSLSessionImpl = ::sun::security::ssl::SSLSessionImpl;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _Finished_FieldInfo_[] = {
	{"t12HandshakeConsumer", "Lsun/security/ssl/SSLConsumer;", nullptr, $STATIC | $FINAL, $staticField(Finished, t12HandshakeConsumer)},
	{"t12HandshakeProducer", "Lsun/security/ssl/HandshakeProducer;", nullptr, $STATIC | $FINAL, $staticField(Finished, t12HandshakeProducer)},
	{"t13HandshakeConsumer", "Lsun/security/ssl/SSLConsumer;", nullptr, $STATIC | $FINAL, $staticField(Finished, t13HandshakeConsumer)},
	{"t13HandshakeProducer", "Lsun/security/ssl/HandshakeProducer;", nullptr, $STATIC | $FINAL, $staticField(Finished, t13HandshakeProducer)},
	{}
};

$MethodInfo _Finished_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Finished::*)()>(&Finished::init$))},
	{"recordEvent", "(Lsun/security/ssl/SSLSessionImpl;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($SSLSessionImpl*)>(&Finished::recordEvent))},
	{}
};

$InnerClassInfo _Finished_InnerClassesInfo_[] = {
	{"sun.security.ssl.Finished$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"sun.security.ssl.Finished$T13FinishedConsumer", "sun.security.ssl.Finished", "T13FinishedConsumer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.Finished$T13FinishedProducer", "sun.security.ssl.Finished", "T13FinishedProducer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.Finished$T12FinishedConsumer", "sun.security.ssl.Finished", "T12FinishedConsumer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.Finished$T12FinishedProducer", "sun.security.ssl.Finished", "T12FinishedProducer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.Finished$T13VerifyDataGenerator", "sun.security.ssl.Finished", "T13VerifyDataGenerator", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.Finished$T12VerifyDataGenerator", "sun.security.ssl.Finished", "T12VerifyDataGenerator", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.Finished$T10VerifyDataGenerator", "sun.security.ssl.Finished", "T10VerifyDataGenerator", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.Finished$S30VerifyDataGenerator", "sun.security.ssl.Finished", "S30VerifyDataGenerator", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.Finished$VerifyDataScheme", "sun.security.ssl.Finished", "VerifyDataScheme", $STATIC | $FINAL | $ENUM},
	{"sun.security.ssl.Finished$VerifyDataGenerator", "sun.security.ssl.Finished", "VerifyDataGenerator", $STATIC | $INTERFACE | $ABSTRACT},
	{"sun.security.ssl.Finished$FinishedMessage", "sun.security.ssl.Finished", "FinishedMessage", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _Finished_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.Finished",
	"java.lang.Object",
	nullptr,
	_Finished_FieldInfo_,
	_Finished_MethodInfo_,
	nullptr,
	nullptr,
	_Finished_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.security.ssl.Finished$1,sun.security.ssl.Finished$T13FinishedConsumer,sun.security.ssl.Finished$T13FinishedProducer,sun.security.ssl.Finished$T12FinishedConsumer,sun.security.ssl.Finished$T12FinishedProducer,sun.security.ssl.Finished$T13VerifyDataGenerator,sun.security.ssl.Finished$T12VerifyDataGenerator,sun.security.ssl.Finished$T10VerifyDataGenerator,sun.security.ssl.Finished$S30VerifyDataGenerator,sun.security.ssl.Finished$VerifyDataScheme,sun.security.ssl.Finished$VerifyDataGenerator,sun.security.ssl.Finished$FinishedMessage"
};

$Object* allocate$Finished($Class* clazz) {
	return $of($alloc(Finished));
}

$SSLConsumer* Finished::t12HandshakeConsumer = nullptr;
$HandshakeProducer* Finished::t12HandshakeProducer = nullptr;
$SSLConsumer* Finished::t13HandshakeConsumer = nullptr;
$HandshakeProducer* Finished::t13HandshakeProducer = nullptr;

void Finished::init$() {
}

void Finished::recordEvent($SSLSessionImpl* session) {
	$init(Finished);
	$useLocalCurrentObjectStackCache();
	$var($TLSHandshakeEvent, event, $new($TLSHandshakeEvent));
	bool var$0 = event->shouldCommit();
	if (var$0 || $EventHelper::isLoggingSecurity()) {
		int32_t peerCertificateId = 0;
		try {
			peerCertificateId = $nc($nc($($nc(session)->getCertificateChain()))->get(0))->hashCode();
		} catch ($SSLPeerUnverifiedException& e) {
		}
		if (event->shouldCommit()) {
			$set(event, peerHost, $nc(session)->getPeerHost());
			event->peerPort = session->getPeerPort();
			$set(event, cipherSuite, session->getCipherSuite());
			$set(event, protocolVersion, session->getProtocol());
			event->certificateId = peerCertificateId;
			event->commit();
		}
		if ($EventHelper::isLoggingSecurity()) {
			$var($String, var$1, $nc(session)->getPeerHost());
			int32_t var$2 = session->getPeerPort();
			$var($String, var$3, session->getCipherSuite());
			$EventHelper::logTLSHandshakeEvent(nullptr, var$1, var$2, var$3, $(session->getProtocol()), peerCertificateId);
		}
	}
}

void clinit$Finished($Class* class$) {
	$assignStatic(Finished::t12HandshakeConsumer, $new($Finished$T12FinishedConsumer));
	$assignStatic(Finished::t12HandshakeProducer, $new($Finished$T12FinishedProducer));
	$assignStatic(Finished::t13HandshakeConsumer, $new($Finished$T13FinishedConsumer));
	$assignStatic(Finished::t13HandshakeProducer, $new($Finished$T13FinishedProducer));
}

Finished::Finished() {
}

$Class* Finished::load$($String* name, bool initialize) {
	$loadClass(Finished, name, initialize, &_Finished_ClassInfo_, clinit$Finished, allocate$Finished);
	return class$;
}

$Class* Finished::class$ = nullptr;

		} // ssl
	} // security
} // sun