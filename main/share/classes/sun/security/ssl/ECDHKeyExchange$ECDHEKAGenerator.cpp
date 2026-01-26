#include <sun/security/ssl/ECDHKeyExchange$ECDHEKAGenerator.h>

#include <java/security/PrivateKey.h>
#include <java/security/PublicKey.h>
#include <java/security/interfaces/ECPublicKey.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <javax/net/ssl/SSLException.h>
#include <sun/security/ssl/Alert.h>
#include <sun/security/ssl/ECDHKeyExchange$ECDHECredentials.h>
#include <sun/security/ssl/ECDHKeyExchange$ECDHEPossession.h>
#include <sun/security/ssl/ECDHKeyExchange.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/KAKeyDerivation.h>
#include <sun/security/ssl/NamedGroup.h>
#include <sun/security/ssl/SSLCredentials.h>
#include <sun/security/ssl/SSLKeyDerivation.h>
#include <sun/security/ssl/SSLPossession.h>
#include <sun/security/ssl/TransportContext.h>
#include <jcpp.h>

#undef HANDSHAKE_FAILURE

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PublicKey = ::java::security::PublicKey;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Alert = ::sun::security::ssl::Alert;
using $ECDHKeyExchange$ECDHECredentials = ::sun::security::ssl::ECDHKeyExchange$ECDHECredentials;
using $ECDHKeyExchange$ECDHEPossession = ::sun::security::ssl::ECDHKeyExchange$ECDHEPossession;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $KAKeyDerivation = ::sun::security::ssl::KAKeyDerivation;
using $NamedGroup = ::sun::security::ssl::NamedGroup;
using $SSLCredentials = ::sun::security::ssl::SSLCredentials;
using $SSLKeyDerivation = ::sun::security::ssl::SSLKeyDerivation;
using $SSLPossession = ::sun::security::ssl::SSLPossession;
using $TransportContext = ::sun::security::ssl::TransportContext;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _ECDHKeyExchange$ECDHEKAGenerator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(ECDHKeyExchange$ECDHEKAGenerator, init$, void)},
	{"createKeyDerivation", "(Lsun/security/ssl/HandshakeContext;)Lsun/security/ssl/SSLKeyDerivation;", nullptr, $PUBLIC, $virtualMethod(ECDHKeyExchange$ECDHEKAGenerator, createKeyDerivation, $SSLKeyDerivation*, $HandshakeContext*), "java.io.IOException"},
	{}
};

$InnerClassInfo _ECDHKeyExchange$ECDHEKAGenerator_InnerClassesInfo_[] = {
	{"sun.security.ssl.ECDHKeyExchange$ECDHEKAGenerator", "sun.security.ssl.ECDHKeyExchange", "ECDHEKAGenerator", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _ECDHKeyExchange$ECDHEKAGenerator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.ECDHKeyExchange$ECDHEKAGenerator",
	"java.lang.Object",
	"sun.security.ssl.SSLKeyAgreementGenerator",
	nullptr,
	_ECDHKeyExchange$ECDHEKAGenerator_MethodInfo_,
	nullptr,
	nullptr,
	_ECDHKeyExchange$ECDHEKAGenerator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.ECDHKeyExchange"
};

$Object* allocate$ECDHKeyExchange$ECDHEKAGenerator($Class* clazz) {
	return $of($alloc(ECDHKeyExchange$ECDHEKAGenerator));
}

void ECDHKeyExchange$ECDHEKAGenerator::init$() {
}

$SSLKeyDerivation* ECDHKeyExchange$ECDHEKAGenerator::createKeyDerivation($HandshakeContext* context) {
	$useLocalCurrentObjectStackCache();
	$var($ECDHKeyExchange$ECDHEPossession, ecdhePossession, nullptr);
	$var($ECDHKeyExchange$ECDHECredentials, ecdheCredentials, nullptr);
	{
		$var($Iterator, i$, $nc($nc(context)->handshakePossessions)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SSLPossession, poss, $cast($SSLPossession, i$->next()));
			{
				if (!($instanceOf($ECDHKeyExchange$ECDHEPossession, poss))) {
					continue;
				}
				$NamedGroup* ng = $nc(($cast($ECDHKeyExchange$ECDHEPossession, poss)))->namedGroup;
				{
					$var($Iterator, i$, $nc(context->handshakeCredentials)->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($SSLCredentials, cred, $cast($SSLCredentials, i$->next()));
						{
							if (!($instanceOf($ECDHKeyExchange$ECDHECredentials, cred))) {
								continue;
							}
							if ($nc(ng)->equals($nc(($cast($ECDHKeyExchange$ECDHECredentials, cred)))->namedGroup)) {
								$assign(ecdheCredentials, $cast($ECDHKeyExchange$ECDHECredentials, cred));
								break;
							}
						}
					}
				}
				if (ecdheCredentials != nullptr) {
					$assign(ecdhePossession, $cast($ECDHKeyExchange$ECDHEPossession, poss));
					break;
				}
			}
		}
	}
	if (ecdhePossession == nullptr || ecdheCredentials == nullptr) {
		$init($Alert);
		$throw($($nc(context->conContext)->fatal($Alert::HANDSHAKE_FAILURE, "No sufficient ECDHE key agreement parameters negotiated"_s)));
	}
	return $new($KAKeyDerivation, "ECDH"_s, context, $nc(ecdhePossession)->privateKey, $nc(ecdheCredentials)->popPublicKey);
}

ECDHKeyExchange$ECDHEKAGenerator::ECDHKeyExchange$ECDHEKAGenerator() {
}

$Class* ECDHKeyExchange$ECDHEKAGenerator::load$($String* name, bool initialize) {
	$loadClass(ECDHKeyExchange$ECDHEKAGenerator, name, initialize, &_ECDHKeyExchange$ECDHEKAGenerator_ClassInfo_, allocate$ECDHKeyExchange$ECDHEKAGenerator);
	return class$;
}

$Class* ECDHKeyExchange$ECDHEKAGenerator::class$ = nullptr;

		} // ssl
	} // security
} // sun