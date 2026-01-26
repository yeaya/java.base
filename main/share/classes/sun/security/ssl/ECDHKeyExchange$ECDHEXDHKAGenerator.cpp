#include <sun/security/ssl/ECDHKeyExchange$ECDHEXDHKAGenerator.h>

#include <java/security/PrivateKey.h>
#include <java/security/PublicKey.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <javax/net/ssl/SSLException.h>
#include <sun/security/ssl/Alert.h>
#include <sun/security/ssl/ECDHKeyExchange$1.h>
#include <sun/security/ssl/ECDHKeyExchange$ECDHECredentials.h>
#include <sun/security/ssl/ECDHKeyExchange$ECDHEPossession.h>
#include <sun/security/ssl/ECDHKeyExchange.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/KAKeyDerivation.h>
#include <sun/security/ssl/NamedGroup$NamedGroupSpec.h>
#include <sun/security/ssl/NamedGroup.h>
#include <sun/security/ssl/NamedGroupCredentials.h>
#include <sun/security/ssl/NamedGroupPossession.h>
#include <sun/security/ssl/SSLCredentials.h>
#include <sun/security/ssl/SSLKeyDerivation.h>
#include <sun/security/ssl/SSLPossession.h>
#include <sun/security/ssl/TransportContext.h>
#include <sun/security/ssl/XDHKeyExchange$XDHECredentials.h>
#include <sun/security/ssl/XDHKeyExchange$XDHEPossession.h>
#include <jcpp.h>

#undef HANDSHAKE_FAILURE

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $PrivateKey = ::java::security::PrivateKey;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Alert = ::sun::security::ssl::Alert;
using $ECDHKeyExchange$1 = ::sun::security::ssl::ECDHKeyExchange$1;
using $ECDHKeyExchange$ECDHECredentials = ::sun::security::ssl::ECDHKeyExchange$ECDHECredentials;
using $ECDHKeyExchange$ECDHEPossession = ::sun::security::ssl::ECDHKeyExchange$ECDHEPossession;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $KAKeyDerivation = ::sun::security::ssl::KAKeyDerivation;
using $NamedGroup = ::sun::security::ssl::NamedGroup;
using $NamedGroup$NamedGroupSpec = ::sun::security::ssl::NamedGroup$NamedGroupSpec;
using $NamedGroupCredentials = ::sun::security::ssl::NamedGroupCredentials;
using $NamedGroupPossession = ::sun::security::ssl::NamedGroupPossession;
using $SSLCredentials = ::sun::security::ssl::SSLCredentials;
using $SSLKeyDerivation = ::sun::security::ssl::SSLKeyDerivation;
using $SSLPossession = ::sun::security::ssl::SSLPossession;
using $TransportContext = ::sun::security::ssl::TransportContext;
using $XDHKeyExchange$XDHECredentials = ::sun::security::ssl::XDHKeyExchange$XDHECredentials;
using $XDHKeyExchange$XDHEPossession = ::sun::security::ssl::XDHKeyExchange$XDHEPossession;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _ECDHKeyExchange$ECDHEXDHKAGenerator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(ECDHKeyExchange$ECDHEXDHKAGenerator, init$, void)},
	{"createKeyDerivation", "(Lsun/security/ssl/HandshakeContext;)Lsun/security/ssl/SSLKeyDerivation;", nullptr, $PUBLIC, $virtualMethod(ECDHKeyExchange$ECDHEXDHKAGenerator, createKeyDerivation, $SSLKeyDerivation*, $HandshakeContext*), "java.io.IOException"},
	{}
};

$InnerClassInfo _ECDHKeyExchange$ECDHEXDHKAGenerator_InnerClassesInfo_[] = {
	{"sun.security.ssl.ECDHKeyExchange$ECDHEXDHKAGenerator", "sun.security.ssl.ECDHKeyExchange", "ECDHEXDHKAGenerator", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _ECDHKeyExchange$ECDHEXDHKAGenerator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.ECDHKeyExchange$ECDHEXDHKAGenerator",
	"java.lang.Object",
	"sun.security.ssl.SSLKeyAgreementGenerator",
	nullptr,
	_ECDHKeyExchange$ECDHEXDHKAGenerator_MethodInfo_,
	nullptr,
	nullptr,
	_ECDHKeyExchange$ECDHEXDHKAGenerator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.ECDHKeyExchange"
};

$Object* allocate$ECDHKeyExchange$ECDHEXDHKAGenerator($Class* clazz) {
	return $of($alloc(ECDHKeyExchange$ECDHEXDHKAGenerator));
}

void ECDHKeyExchange$ECDHEXDHKAGenerator::init$() {
}

$SSLKeyDerivation* ECDHKeyExchange$ECDHEXDHKAGenerator::createKeyDerivation($HandshakeContext* context) {
	$useLocalCurrentObjectStackCache();
	$var($NamedGroupPossession, namedGroupPossession, nullptr);
	$var($NamedGroupCredentials, namedGroupCredentials, nullptr);
	$NamedGroup* namedGroup = nullptr;
	bool search$break = false;
	{
		$var($Iterator, i$, $nc($nc(context)->handshakePossessions)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SSLPossession, poss, $cast($SSLPossession, i$->next()));
			{
				{
					$var($Iterator, i$, $nc(context->handshakeCredentials)->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($SSLCredentials, cred, $cast($SSLCredentials, i$->next()));
						{
							if ((($instanceOf($ECDHKeyExchange$ECDHEPossession, poss)) && ($instanceOf($ECDHKeyExchange$ECDHECredentials, cred))) || (($instanceOf($XDHKeyExchange$XDHEPossession, poss)) && ($instanceOf($XDHKeyExchange$XDHECredentials, cred)))) {
								$var($NamedGroupPossession, p, $cast($NamedGroupPossession, poss));
								$var($NamedGroupCredentials, c, $cast($NamedGroupCredentials, cred));
								if ($nc(p)->getNamedGroup() != $nc(c)->getNamedGroup()) {
									continue;
								} else {
									namedGroup = p->getNamedGroup();
								}
								$assign(namedGroupPossession, p);
								$assign(namedGroupCredentials, c);
								search$break = true;
								break;
							}
						}
					}
					if (search$break) {
						break;
					}
				}
			}
		}
	}
	if (namedGroupPossession == nullptr || namedGroupCredentials == nullptr) {
		$init($Alert);
		$throw($($nc(context->conContext)->fatal($Alert::HANDSHAKE_FAILURE, "No sufficient ECDHE/XDH key agreement parameters negotiated"_s)));
	}
	$var($String, alg, nullptr);
	$init($ECDHKeyExchange$1);
	switch ($nc($ECDHKeyExchange$1::$SwitchMap$sun$security$ssl$NamedGroup$NamedGroupSpec)->get(($nc(namedGroup)->spec)->ordinal())) {
	case 1:
		{
			$assign(alg, "ECDH"_s);
			break;
		}
	case 2:
		{
			$assign(alg, "XDH"_s);
			break;
		}
	default:
		{
			$throwNew($RuntimeException, "Unexpected named group type"_s);
		}
	}
	$var($String, var$0, alg);
	$var($HandshakeContext, var$1, context);
	$var($PrivateKey, var$2, $nc(namedGroupPossession)->getPrivateKey());
	return $new($KAKeyDerivation, var$0, var$1, var$2, $($nc(namedGroupCredentials)->getPublicKey()));
}

ECDHKeyExchange$ECDHEXDHKAGenerator::ECDHKeyExchange$ECDHEXDHKAGenerator() {
}

$Class* ECDHKeyExchange$ECDHEXDHKAGenerator::load$($String* name, bool initialize) {
	$loadClass(ECDHKeyExchange$ECDHEXDHKAGenerator, name, initialize, &_ECDHKeyExchange$ECDHEXDHKAGenerator_ClassInfo_, allocate$ECDHKeyExchange$ECDHEXDHKAGenerator);
	return class$;
}

$Class* ECDHKeyExchange$ECDHEXDHKAGenerator::class$ = nullptr;

		} // ssl
	} // security
} // sun