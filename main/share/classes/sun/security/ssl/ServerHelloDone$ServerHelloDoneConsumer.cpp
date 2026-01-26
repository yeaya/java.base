#include <sun/security/ssl/ServerHelloDone$ServerHelloDoneConsumer.h>

#include <java/nio/ByteBuffer.h>
#include <java/util/HashMap.h>
#include <java/util/LinkedHashMap.h>
#include <sun/security/ssl/CertificateStatus.h>
#include <sun/security/ssl/ClientHandshakeContext.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/HandshakeAbsence.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/HandshakeProducer.h>
#include <sun/security/ssl/SSLConsumer.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLHandshake.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/ServerHelloDone$ServerHelloDoneMessage.h>
#include <sun/security/ssl/ServerHelloDone.h>
#include <jcpp.h>

#undef CERTIFICATE
#undef CERTIFICATE_STATUS
#undef CERTIFICATE_VERIFY
#undef CLIENT_KEY_EXCHANGE
#undef FINISHED

using $SSLHandshakeArray = $Array<::sun::security::ssl::SSLHandshake>;
using $Byte = ::java::lang::Byte;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $HashMap = ::java::util::HashMap;
using $LinkedHashMap = ::java::util::LinkedHashMap;
using $CertificateStatus = ::sun::security::ssl::CertificateStatus;
using $ClientHandshakeContext = ::sun::security::ssl::ClientHandshakeContext;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $HandshakeAbsence = ::sun::security::ssl::HandshakeAbsence;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $HandshakeProducer = ::sun::security::ssl::HandshakeProducer;
using $SSLConsumer = ::sun::security::ssl::SSLConsumer;
using $SSLHandshake = ::sun::security::ssl::SSLHandshake;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $ServerHelloDone$ServerHelloDoneMessage = ::sun::security::ssl::ServerHelloDone$ServerHelloDoneMessage;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _ServerHelloDone$ServerHelloDoneConsumer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(ServerHelloDone$ServerHelloDoneConsumer, init$, void)},
	{"consume", "(Lsun/security/ssl/ConnectionContext;Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC, $virtualMethod(ServerHelloDone$ServerHelloDoneConsumer, consume, void, $ConnectionContext*, $ByteBuffer*), "java.io.IOException"},
	{}
};

$InnerClassInfo _ServerHelloDone$ServerHelloDoneConsumer_InnerClassesInfo_[] = {
	{"sun.security.ssl.ServerHelloDone$ServerHelloDoneConsumer", "sun.security.ssl.ServerHelloDone", "ServerHelloDoneConsumer", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _ServerHelloDone$ServerHelloDoneConsumer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.ServerHelloDone$ServerHelloDoneConsumer",
	"java.lang.Object",
	"sun.security.ssl.SSLConsumer",
	nullptr,
	_ServerHelloDone$ServerHelloDoneConsumer_MethodInfo_,
	nullptr,
	nullptr,
	_ServerHelloDone$ServerHelloDoneConsumer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.ServerHelloDone"
};

$Object* allocate$ServerHelloDone$ServerHelloDoneConsumer($Class* clazz) {
	return $of($alloc(ServerHelloDone$ServerHelloDoneConsumer));
}

void ServerHelloDone$ServerHelloDoneConsumer::init$() {
}

void ServerHelloDone$ServerHelloDoneConsumer::consume($ConnectionContext* context, $ByteBuffer* message) {
	$useLocalCurrentObjectStackCache();
	$var($ClientHandshakeContext, chc, $cast($ClientHandshakeContext, context));
	$init($SSLHandshake);
	$var($SSLConsumer, certStatCons, $cast($SSLConsumer, $nc($nc(chc)->handshakeConsumers)->remove($($Byte::valueOf($SSLHandshake::CERTIFICATE_STATUS->id)))));
	if (certStatCons != nullptr) {
		$init($CertificateStatus);
		$nc($CertificateStatus::handshakeAbsence)->absent(context, nullptr);
	}
	$nc(chc->handshakeConsumers)->clear();
	$var($ServerHelloDone$ServerHelloDoneMessage, shdm, $new($ServerHelloDone$ServerHelloDoneMessage, chc, message));
	$init($SSLLogger);
	if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
		$SSLLogger::fine("Consuming ServerHelloDone handshake message"_s, $$new($ObjectArray, {$of(shdm)}));
	}
	$nc(chc->handshakeProducers)->put($($Byte::valueOf($SSLHandshake::CLIENT_KEY_EXCHANGE->id)), $SSLHandshake::CLIENT_KEY_EXCHANGE);
	$nc(chc->handshakeProducers)->put($($Byte::valueOf($SSLHandshake::FINISHED->id)), $SSLHandshake::FINISHED);
	$var($SSLHandshakeArray, probableHandshakeMessages, $new($SSLHandshakeArray, {
		$SSLHandshake::CERTIFICATE,
		$SSLHandshake::CLIENT_KEY_EXCHANGE,
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
				$var($HandshakeProducer, handshakeProducer, $cast($HandshakeProducer, $nc(chc->handshakeProducers)->remove($($Byte::valueOf($nc(hs)->id)))));
				if (handshakeProducer != nullptr) {
					handshakeProducer->produce(context, nullptr);
				}
			}
		}
	}
}

ServerHelloDone$ServerHelloDoneConsumer::ServerHelloDone$ServerHelloDoneConsumer() {
}

$Class* ServerHelloDone$ServerHelloDoneConsumer::load$($String* name, bool initialize) {
	$loadClass(ServerHelloDone$ServerHelloDoneConsumer, name, initialize, &_ServerHelloDone$ServerHelloDoneConsumer_ClassInfo_, allocate$ServerHelloDone$ServerHelloDoneConsumer);
	return class$;
}

$Class* ServerHelloDone$ServerHelloDoneConsumer::class$ = nullptr;

		} // ssl
	} // security
} // sun