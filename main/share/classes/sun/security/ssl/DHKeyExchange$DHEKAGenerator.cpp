#include <sun/security/ssl/DHKeyExchange$DHEKAGenerator.h>

#include <java/math/BigInteger.h>
#include <java/security/PrivateKey.h>
#include <java/security/PublicKey.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <javax/crypto/interfaces/DHKey.h>
#include <javax/crypto/interfaces/DHPublicKey.h>
#include <javax/crypto/spec/DHParameterSpec.h>
#include <javax/net/ssl/SSLException.h>
#include <sun/security/ssl/Alert.h>
#include <sun/security/ssl/DHKeyExchange$DHECredentials.h>
#include <sun/security/ssl/DHKeyExchange$DHEPossession.h>
#include <sun/security/ssl/DHKeyExchange.h>
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
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigInteger = ::java::math::BigInteger;
using $PublicKey = ::java::security::PublicKey;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $DHPublicKey = ::javax::crypto::interfaces::DHPublicKey;
using $DHParameterSpec = ::javax::crypto::spec::DHParameterSpec;
using $Alert = ::sun::security::ssl::Alert;
using $DHKeyExchange$DHECredentials = ::sun::security::ssl::DHKeyExchange$DHECredentials;
using $DHKeyExchange$DHEPossession = ::sun::security::ssl::DHKeyExchange$DHEPossession;
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

$FieldInfo _DHKeyExchange$DHEKAGenerator_FieldInfo_[] = {
	{"instance", "Lsun/security/ssl/DHKeyExchange$DHEKAGenerator;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DHKeyExchange$DHEKAGenerator, instance)},
	{}
};

$MethodInfo _DHKeyExchange$DHEKAGenerator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(DHKeyExchange$DHEKAGenerator::*)()>(&DHKeyExchange$DHEKAGenerator::init$))},
	{"createKeyDerivation", "(Lsun/security/ssl/HandshakeContext;)Lsun/security/ssl/SSLKeyDerivation;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _DHKeyExchange$DHEKAGenerator_InnerClassesInfo_[] = {
	{"sun.security.ssl.DHKeyExchange$DHEKAGenerator", "sun.security.ssl.DHKeyExchange", "DHEKAGenerator", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _DHKeyExchange$DHEKAGenerator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.DHKeyExchange$DHEKAGenerator",
	"java.lang.Object",
	"sun.security.ssl.SSLKeyAgreementGenerator",
	_DHKeyExchange$DHEKAGenerator_FieldInfo_,
	_DHKeyExchange$DHEKAGenerator_MethodInfo_,
	nullptr,
	nullptr,
	_DHKeyExchange$DHEKAGenerator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.DHKeyExchange"
};

$Object* allocate$DHKeyExchange$DHEKAGenerator($Class* clazz) {
	return $of($alloc(DHKeyExchange$DHEKAGenerator));
}

DHKeyExchange$DHEKAGenerator* DHKeyExchange$DHEKAGenerator::instance = nullptr;

void DHKeyExchange$DHEKAGenerator::init$() {
}

$SSLKeyDerivation* DHKeyExchange$DHEKAGenerator::createKeyDerivation($HandshakeContext* context) {
	$useLocalCurrentObjectStackCache();
	$var($DHKeyExchange$DHEPossession, dhePossession, nullptr);
	$var($DHKeyExchange$DHECredentials, dheCredentials, nullptr);
	{
		$var($Iterator, i$, $nc($nc(context)->handshakePossessions)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SSLPossession, poss, $cast($SSLPossession, i$->next()));
			{
				if (!($instanceOf($DHKeyExchange$DHEPossession, poss))) {
					continue;
				}
				$var($DHKeyExchange$DHEPossession, dhep, $cast($DHKeyExchange$DHEPossession, poss));
				{
					$var($Iterator, i$, $nc(context->handshakeCredentials)->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($SSLCredentials, cred, $cast($SSLCredentials, i$->next()));
						{
							if (!($instanceOf($DHKeyExchange$DHECredentials, cred))) {
								continue;
							}
							$var($DHKeyExchange$DHECredentials, dhec, $cast($DHKeyExchange$DHECredentials, cred));
							if ($nc(dhep)->namedGroup != nullptr && $nc(dhec)->namedGroup != nullptr) {
								if (dhep->namedGroup->equals(dhec->namedGroup)) {
									$assign(dheCredentials, $cast($DHKeyExchange$DHECredentials, cred));
									break;
								}
							} else {
								$var($DHParameterSpec, pps, $nc(dhep->publicKey)->getParams());
								$var($DHParameterSpec, cps, $nc(dhec->popPublicKey)->getParams());
								bool var$0 = $nc($($nc(pps)->getP()))->equals($($nc(cps)->getP()));
								if (var$0 && $nc($(pps->getG()))->equals($($nc(cps)->getG()))) {
									$assign(dheCredentials, $cast($DHKeyExchange$DHECredentials, cred));
									break;
								}
							}
						}
					}
				}
				if (dheCredentials != nullptr) {
					$assign(dhePossession, $cast($DHKeyExchange$DHEPossession, poss));
					break;
				}
			}
		}
	}
	if (dhePossession == nullptr || dheCredentials == nullptr) {
		$init($Alert);
		$throw($($nc(context->conContext)->fatal($Alert::HANDSHAKE_FAILURE, "No sufficient DHE key agreement parameters negotiated"_s)));
	}
	return $new($KAKeyDerivation, "DiffieHellman"_s, context, $nc(dhePossession)->privateKey, $nc(dheCredentials)->popPublicKey);
}

void clinit$DHKeyExchange$DHEKAGenerator($Class* class$) {
	$assignStatic(DHKeyExchange$DHEKAGenerator::instance, $new(DHKeyExchange$DHEKAGenerator));
}

DHKeyExchange$DHEKAGenerator::DHKeyExchange$DHEKAGenerator() {
}

$Class* DHKeyExchange$DHEKAGenerator::load$($String* name, bool initialize) {
	$loadClass(DHKeyExchange$DHEKAGenerator, name, initialize, &_DHKeyExchange$DHEKAGenerator_ClassInfo_, clinit$DHKeyExchange$DHEKAGenerator, allocate$DHKeyExchange$DHEKAGenerator);
	return class$;
}

$Class* DHKeyExchange$DHEKAGenerator::class$ = nullptr;

		} // ssl
	} // security
} // sun