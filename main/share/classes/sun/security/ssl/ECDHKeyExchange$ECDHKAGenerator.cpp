#include <sun/security/ssl/ECDHKeyExchange$ECDHKAGenerator.h>

#include <java/security/PrivateKey.h>
#include <java/security/PublicKey.h>
#include <java/security/interfaces/ECPublicKey.h>
#include <java/security/spec/ECParameterSpec.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <javax/net/ssl/SSLException.h>
#include <sun/security/ssl/Alert.h>
#include <sun/security/ssl/ClientHandshakeContext.h>
#include <sun/security/ssl/ECDHKeyExchange$ECDHECredentials.h>
#include <sun/security/ssl/ECDHKeyExchange$ECDHEPossession.h>
#include <sun/security/ssl/ECDHKeyExchange.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/KAKeyDerivation.h>
#include <sun/security/ssl/NamedGroup.h>
#include <sun/security/ssl/SSLCredentials.h>
#include <sun/security/ssl/SSLKeyDerivation.h>
#include <sun/security/ssl/SSLPossession.h>
#include <sun/security/ssl/ServerHandshakeContext.h>
#include <sun/security/ssl/TransportContext.h>
#include <sun/security/ssl/X509Authentication$X509Credentials.h>
#include <sun/security/ssl/X509Authentication$X509Possession.h>
#include <jcpp.h>

#undef HANDSHAKE_FAILURE
#undef ILLEGAL_PARAMETER

using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Key = ::java::security::Key;
using $PrivateKey = ::java::security::PrivateKey;
using $PublicKey = ::java::security::PublicKey;
using $ECKey = ::java::security::interfaces::ECKey;
using $ECPublicKey = ::java::security::interfaces::ECPublicKey;
using $ECParameterSpec = ::java::security::spec::ECParameterSpec;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $SSLException = ::javax::net::ssl::SSLException;
using $Alert = ::sun::security::ssl::Alert;
using $ClientHandshakeContext = ::sun::security::ssl::ClientHandshakeContext;
using $ECDHKeyExchange = ::sun::security::ssl::ECDHKeyExchange;
using $ECDHKeyExchange$ECDHECredentials = ::sun::security::ssl::ECDHKeyExchange$ECDHECredentials;
using $ECDHKeyExchange$ECDHEPossession = ::sun::security::ssl::ECDHKeyExchange$ECDHEPossession;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $KAKeyDerivation = ::sun::security::ssl::KAKeyDerivation;
using $NamedGroup = ::sun::security::ssl::NamedGroup;
using $SSLCredentials = ::sun::security::ssl::SSLCredentials;
using $SSLKeyAgreementGenerator = ::sun::security::ssl::SSLKeyAgreementGenerator;
using $SSLKeyDerivation = ::sun::security::ssl::SSLKeyDerivation;
using $SSLPossession = ::sun::security::ssl::SSLPossession;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;
using $TransportContext = ::sun::security::ssl::TransportContext;
using $X509Authentication$X509Credentials = ::sun::security::ssl::X509Authentication$X509Credentials;
using $X509Authentication$X509Possession = ::sun::security::ssl::X509Authentication$X509Possession;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _ECDHKeyExchange$ECDHKAGenerator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(ECDHKeyExchange$ECDHKAGenerator::*)()>(&ECDHKeyExchange$ECDHKAGenerator::init$))},
	{"createClientKeyDerivation", "(Lsun/security/ssl/ClientHandshakeContext;)Lsun/security/ssl/SSLKeyDerivation;", nullptr, $PRIVATE, $method(static_cast<$SSLKeyDerivation*(ECDHKeyExchange$ECDHKAGenerator::*)($ClientHandshakeContext*)>(&ECDHKeyExchange$ECDHKAGenerator::createClientKeyDerivation)), "java.io.IOException"},
	{"createKeyDerivation", "(Lsun/security/ssl/HandshakeContext;)Lsun/security/ssl/SSLKeyDerivation;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"createServerKeyDerivation", "(Lsun/security/ssl/ServerHandshakeContext;)Lsun/security/ssl/SSLKeyDerivation;", nullptr, $PRIVATE, $method(static_cast<$SSLKeyDerivation*(ECDHKeyExchange$ECDHKAGenerator::*)($ServerHandshakeContext*)>(&ECDHKeyExchange$ECDHKAGenerator::createServerKeyDerivation)), "java.io.IOException"},
	{}
};

$InnerClassInfo _ECDHKeyExchange$ECDHKAGenerator_InnerClassesInfo_[] = {
	{"sun.security.ssl.ECDHKeyExchange$ECDHKAGenerator", "sun.security.ssl.ECDHKeyExchange", "ECDHKAGenerator", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _ECDHKeyExchange$ECDHKAGenerator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.ECDHKeyExchange$ECDHKAGenerator",
	"java.lang.Object",
	"sun.security.ssl.SSLKeyAgreementGenerator",
	nullptr,
	_ECDHKeyExchange$ECDHKAGenerator_MethodInfo_,
	nullptr,
	nullptr,
	_ECDHKeyExchange$ECDHKAGenerator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.ECDHKeyExchange"
};

$Object* allocate$ECDHKeyExchange$ECDHKAGenerator($Class* clazz) {
	return $of($alloc(ECDHKeyExchange$ECDHKAGenerator));
}

void ECDHKeyExchange$ECDHKAGenerator::init$() {
}

$SSLKeyDerivation* ECDHKeyExchange$ECDHKAGenerator::createKeyDerivation($HandshakeContext* context) {
	if ($instanceOf($ServerHandshakeContext, context)) {
		return createServerKeyDerivation($cast($ServerHandshakeContext, context));
	} else {
		return createClientKeyDerivation($cast($ClientHandshakeContext, context));
	}
}

$SSLKeyDerivation* ECDHKeyExchange$ECDHKAGenerator::createServerKeyDerivation($ServerHandshakeContext* shc) {
	$useLocalCurrentObjectStackCache();
	$var($X509Authentication$X509Possession, x509Possession, nullptr);
	$var($ECDHKeyExchange$ECDHECredentials, ecdheCredentials, nullptr);
	{
		$var($Iterator, i$, $nc($nc(shc)->handshakePossessions)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SSLPossession, poss, $cast($SSLPossession, i$->next()));
			{
				if (!($instanceOf($X509Authentication$X509Possession, poss))) {
					continue;
				}
				$var($ECParameterSpec, params, $nc(($cast($X509Authentication$X509Possession, poss)))->getECParameterSpec());
				if (params == nullptr) {
					continue;
				}
				$NamedGroup* ng = $NamedGroup::valueOf(params);
				if (ng == nullptr) {
					$init($Alert);
					$throw($($nc(shc->conContext)->fatal($Alert::ILLEGAL_PARAMETER, "Unsupported EC server cert for ECDH key exchange"_s)));
				}
				{
					$var($Iterator, i$, $nc(shc->handshakeCredentials)->iterator());
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
					$assign(x509Possession, $cast($X509Authentication$X509Possession, poss));
					break;
				}
			}
		}
	}
	if (x509Possession == nullptr || ecdheCredentials == nullptr) {
		$init($Alert);
		$throw($($nc(shc->conContext)->fatal($Alert::HANDSHAKE_FAILURE, "No sufficient ECDHE key agreement parameters negotiated"_s)));
	}
	return $new($KAKeyDerivation, "ECDH"_s, shc, $nc(x509Possession)->popPrivateKey, $nc(ecdheCredentials)->popPublicKey);
}

$SSLKeyDerivation* ECDHKeyExchange$ECDHKAGenerator::createClientKeyDerivation($ClientHandshakeContext* chc) {
	$useLocalCurrentObjectStackCache();
	$var($ECDHKeyExchange$ECDHEPossession, ecdhePossession, nullptr);
	$var($X509Authentication$X509Credentials, x509Credentials, nullptr);
	{
		$var($Iterator, i$, $nc($nc(chc)->handshakePossessions)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SSLPossession, poss, $cast($SSLPossession, i$->next()));
			{
				if (!($instanceOf($ECDHKeyExchange$ECDHEPossession, poss))) {
					continue;
				}
				$NamedGroup* ng = $nc(($cast($ECDHKeyExchange$ECDHEPossession, poss)))->namedGroup;
				{
					$var($Iterator, i$, $nc(chc->handshakeCredentials)->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($SSLCredentials, cred, $cast($SSLCredentials, i$->next()));
						{
							if (!($instanceOf($X509Authentication$X509Credentials, cred))) {
								continue;
							}
							$var($PublicKey, publicKey, $nc(($cast($X509Authentication$X509Credentials, cred)))->popPublicKey);
							if (!$nc($($nc(publicKey)->getAlgorithm()))->equals("EC"_s)) {
								continue;
							}
							$var($ECParameterSpec, params, $nc(($cast($ECPublicKey, publicKey)))->getParams());
							$NamedGroup* namedGroup = $NamedGroup::valueOf(params);
							if (namedGroup == nullptr) {
								$init($Alert);
								$throw($($nc(chc->conContext)->fatal($Alert::ILLEGAL_PARAMETER, "Unsupported EC server cert for ECDH key exchange"_s)));
							}
							if ($nc(ng)->equals(namedGroup)) {
								$assign(x509Credentials, $cast($X509Authentication$X509Credentials, cred));
								break;
							}
						}
					}
				}
				if (x509Credentials != nullptr) {
					$assign(ecdhePossession, $cast($ECDHKeyExchange$ECDHEPossession, poss));
					break;
				}
			}
		}
	}
	if (ecdhePossession == nullptr || x509Credentials == nullptr) {
		$init($Alert);
		$throw($($nc(chc->conContext)->fatal($Alert::HANDSHAKE_FAILURE, "No sufficient ECDH key agreement parameters negotiated"_s)));
	}
	return $new($KAKeyDerivation, "ECDH"_s, chc, $nc(ecdhePossession)->privateKey, $nc(x509Credentials)->popPublicKey);
}

ECDHKeyExchange$ECDHKAGenerator::ECDHKeyExchange$ECDHKAGenerator() {
}

$Class* ECDHKeyExchange$ECDHKAGenerator::load$($String* name, bool initialize) {
	$loadClass(ECDHKeyExchange$ECDHKAGenerator, name, initialize, &_ECDHKeyExchange$ECDHKAGenerator_ClassInfo_, allocate$ECDHKeyExchange$ECDHKAGenerator);
	return class$;
}

$Class* ECDHKeyExchange$ECDHKAGenerator::class$ = nullptr;

		} // ssl
	} // security
} // sun