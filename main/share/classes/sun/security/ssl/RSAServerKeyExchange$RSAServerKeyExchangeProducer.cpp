#include <sun/security/ssl/RSAServerKeyExchange$RSAServerKeyExchangeProducer.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/Key.h>
#include <java/security/PrivateKey.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <javax/net/ssl/SSLException.h>
#include <sun/security/ssl/Alert.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/HandshakeOutStream.h>
#include <sun/security/ssl/RSAKeyExchange$EphemeralRSAPossession.h>
#include <sun/security/ssl/RSAServerKeyExchange$RSAServerKeyExchangeMessage.h>
#include <sun/security/ssl/RSAServerKeyExchange.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/SSLPossession.h>
#include <sun/security/ssl/ServerHandshakeContext.h>
#include <sun/security/ssl/TransportContext.h>
#include <sun/security/ssl/X509Authentication$X509Possession.h>
#include <jcpp.h>

#undef ILLEGAL_PARAMETER

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Key = ::java::security::Key;
using $PrivateKey = ::java::security::PrivateKey;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $SSLException = ::javax::net::ssl::SSLException;
using $Alert = ::sun::security::ssl::Alert;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $HandshakeOutStream = ::sun::security::ssl::HandshakeOutStream;
using $HandshakeProducer = ::sun::security::ssl::HandshakeProducer;
using $RSAKeyExchange$EphemeralRSAPossession = ::sun::security::ssl::RSAKeyExchange$EphemeralRSAPossession;
using $RSAServerKeyExchange = ::sun::security::ssl::RSAServerKeyExchange;
using $RSAServerKeyExchange$RSAServerKeyExchangeMessage = ::sun::security::ssl::RSAServerKeyExchange$RSAServerKeyExchangeMessage;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $SSLPossession = ::sun::security::ssl::SSLPossession;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;
using $TransportContext = ::sun::security::ssl::TransportContext;
using $X509Authentication$X509Possession = ::sun::security::ssl::X509Authentication$X509Possession;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _RSAServerKeyExchange$RSAServerKeyExchangeProducer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(RSAServerKeyExchange$RSAServerKeyExchangeProducer::*)()>(&RSAServerKeyExchange$RSAServerKeyExchangeProducer::init$))},
	{"produce", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)[B", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _RSAServerKeyExchange$RSAServerKeyExchangeProducer_InnerClassesInfo_[] = {
	{"sun.security.ssl.RSAServerKeyExchange$RSAServerKeyExchangeProducer", "sun.security.ssl.RSAServerKeyExchange", "RSAServerKeyExchangeProducer", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _RSAServerKeyExchange$RSAServerKeyExchangeProducer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.RSAServerKeyExchange$RSAServerKeyExchangeProducer",
	"java.lang.Object",
	"sun.security.ssl.HandshakeProducer",
	nullptr,
	_RSAServerKeyExchange$RSAServerKeyExchangeProducer_MethodInfo_,
	nullptr,
	nullptr,
	_RSAServerKeyExchange$RSAServerKeyExchangeProducer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.RSAServerKeyExchange"
};

$Object* allocate$RSAServerKeyExchange$RSAServerKeyExchangeProducer($Class* clazz) {
	return $of($alloc(RSAServerKeyExchange$RSAServerKeyExchangeProducer));
}

void RSAServerKeyExchange$RSAServerKeyExchangeProducer::init$() {
}

$bytes* RSAServerKeyExchange$RSAServerKeyExchangeProducer::produce($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$var($ServerHandshakeContext, shc, $cast($ServerHandshakeContext, context));
	$var($RSAKeyExchange$EphemeralRSAPossession, rsaPossession, nullptr);
	$var($X509Authentication$X509Possession, x509Possession, nullptr);
	{
		$var($Iterator, i$, $nc($nc(shc)->handshakePossessions)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SSLPossession, possession, $cast($SSLPossession, i$->next()));
			{
				if ($instanceOf($RSAKeyExchange$EphemeralRSAPossession, possession)) {
					$assign(rsaPossession, $cast($RSAKeyExchange$EphemeralRSAPossession, possession));
					if (x509Possession != nullptr) {
						break;
					}
				} else if ($instanceOf($X509Authentication$X509Possession, possession)) {
					$assign(x509Possession, $cast($X509Authentication$X509Possession, possession));
					if (rsaPossession != nullptr) {
						break;
					}
				}
			}
		}
	}
	if (rsaPossession == nullptr) {
		return nullptr;
	} else if (x509Possession == nullptr) {
		$init($Alert);
		$throw($($nc($nc(shc)->conContext)->fatal($Alert::ILLEGAL_PARAMETER, "No RSA certificate negotiated for server key exchange"_s)));
	} else if (!"RSA"_s->equals($($nc($nc(x509Possession)->popPrivateKey)->getAlgorithm()))) {
		$init($Alert);
		$throw($($nc($nc(shc)->conContext)->fatal($Alert::ILLEGAL_PARAMETER, "No X.509 possession can be used for ephemeral RSA ServerKeyExchange"_s)));
	}
	$var($RSAServerKeyExchange$RSAServerKeyExchangeMessage, skem, $new($RSAServerKeyExchange$RSAServerKeyExchangeMessage, shc, x509Possession, rsaPossession));
	$init($SSLLogger);
	if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
		$SSLLogger::fine("Produced RSA ServerKeyExchange handshake message"_s, $$new($ObjectArray, {$of(skem)}));
	}
	skem->write(shc->handshakeOutput);
	$nc(shc->handshakeOutput)->flush();
	return nullptr;
}

RSAServerKeyExchange$RSAServerKeyExchangeProducer::RSAServerKeyExchange$RSAServerKeyExchangeProducer() {
}

$Class* RSAServerKeyExchange$RSAServerKeyExchangeProducer::load$($String* name, bool initialize) {
	$loadClass(RSAServerKeyExchange$RSAServerKeyExchangeProducer, name, initialize, &_RSAServerKeyExchange$RSAServerKeyExchangeProducer_ClassInfo_, allocate$RSAServerKeyExchange$RSAServerKeyExchangeProducer);
	return class$;
}

$Class* RSAServerKeyExchange$RSAServerKeyExchangeProducer::class$ = nullptr;

		} // ssl
	} // security
} // sun