#include <sun/security/ssl/RSAKeyExchange$RSAKAGenerator.h>

#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <javax/crypto/SecretKey.h>
#include <javax/net/ssl/SSLException.h>
#include <sun/security/ssl/Alert.h>
#include <sun/security/ssl/ClientHandshakeContext.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/RSAKeyExchange$RSAKAGenerator$RSAKAKeyDerivation.h>
#include <sun/security/ssl/RSAKeyExchange$RSAPremasterSecret.h>
#include <sun/security/ssl/RSAKeyExchange.h>
#include <sun/security/ssl/SSLCredentials.h>
#include <sun/security/ssl/SSLKeyDerivation.h>
#include <sun/security/ssl/SSLPossession.h>
#include <sun/security/ssl/TransportContext.h>
#include <jcpp.h>

#undef HANDSHAKE_FAILURE

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Alert = ::sun::security::ssl::Alert;
using $ClientHandshakeContext = ::sun::security::ssl::ClientHandshakeContext;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $RSAKeyExchange$RSAKAGenerator$RSAKAKeyDerivation = ::sun::security::ssl::RSAKeyExchange$RSAKAGenerator$RSAKAKeyDerivation;
using $RSAKeyExchange$RSAPremasterSecret = ::sun::security::ssl::RSAKeyExchange$RSAPremasterSecret;
using $SSLCredentials = ::sun::security::ssl::SSLCredentials;
using $SSLKeyDerivation = ::sun::security::ssl::SSLKeyDerivation;
using $SSLPossession = ::sun::security::ssl::SSLPossession;
using $TransportContext = ::sun::security::ssl::TransportContext;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _RSAKeyExchange$RSAKAGenerator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(RSAKeyExchange$RSAKAGenerator, init$, void)},
	{"createKeyDerivation", "(Lsun/security/ssl/HandshakeContext;)Lsun/security/ssl/SSLKeyDerivation;", nullptr, $PUBLIC, $virtualMethod(RSAKeyExchange$RSAKAGenerator, createKeyDerivation, $SSLKeyDerivation*, $HandshakeContext*), "java.io.IOException"},
	{}
};

$InnerClassInfo _RSAKeyExchange$RSAKAGenerator_InnerClassesInfo_[] = {
	{"sun.security.ssl.RSAKeyExchange$RSAKAGenerator", "sun.security.ssl.RSAKeyExchange", "RSAKAGenerator", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.RSAKeyExchange$RSAKAGenerator$RSAKAKeyDerivation", "sun.security.ssl.RSAKeyExchange$RSAKAGenerator", "RSAKAKeyDerivation", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _RSAKeyExchange$RSAKAGenerator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.RSAKeyExchange$RSAKAGenerator",
	"java.lang.Object",
	"sun.security.ssl.SSLKeyAgreementGenerator",
	nullptr,
	_RSAKeyExchange$RSAKAGenerator_MethodInfo_,
	nullptr,
	nullptr,
	_RSAKeyExchange$RSAKAGenerator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.RSAKeyExchange"
};

$Object* allocate$RSAKeyExchange$RSAKAGenerator($Class* clazz) {
	return $of($alloc(RSAKeyExchange$RSAKAGenerator));
}

void RSAKeyExchange$RSAKAGenerator::init$() {
}

$SSLKeyDerivation* RSAKeyExchange$RSAKAGenerator::createKeyDerivation($HandshakeContext* context) {
	$useLocalCurrentObjectStackCache();
	$var($RSAKeyExchange$RSAPremasterSecret, premaster, nullptr);
	if ($instanceOf($ClientHandshakeContext, context)) {
		{
			$var($Iterator, i$, $nc($nc(context)->handshakePossessions)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($SSLPossession, possession, $cast($SSLPossession, i$->next()));
				{
					if ($instanceOf($RSAKeyExchange$RSAPremasterSecret, possession)) {
						$assign(premaster, $cast($RSAKeyExchange$RSAPremasterSecret, possession));
						break;
					}
				}
			}
		}
	} else {
		{
			$var($Iterator, i$, $nc($nc(context)->handshakeCredentials)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($SSLCredentials, credential, $cast($SSLCredentials, i$->next()));
				{
					if ($instanceOf($RSAKeyExchange$RSAPremasterSecret, credential)) {
						$assign(premaster, $cast($RSAKeyExchange$RSAPremasterSecret, credential));
						break;
					}
				}
			}
		}
	}
	if (premaster == nullptr) {
		$init($Alert);
		$throw($($nc($nc(context)->conContext)->fatal($Alert::HANDSHAKE_FAILURE, "No sufficient RSA key agreement parameters negotiated"_s)));
	}
	return $new($RSAKeyExchange$RSAKAGenerator$RSAKAKeyDerivation, context, $nc(premaster)->premasterSecret);
}

RSAKeyExchange$RSAKAGenerator::RSAKeyExchange$RSAKAGenerator() {
}

$Class* RSAKeyExchange$RSAKAGenerator::load$($String* name, bool initialize) {
	$loadClass(RSAKeyExchange$RSAKAGenerator, name, initialize, &_RSAKeyExchange$RSAKAGenerator_ClassInfo_, allocate$RSAKeyExchange$RSAKAGenerator);
	return class$;
}

$Class* RSAKeyExchange$RSAKAGenerator::class$ = nullptr;

		} // ssl
	} // security
} // sun