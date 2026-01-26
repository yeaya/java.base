#include <sun/security/ssl/XDHKeyExchange$XDHEKAGenerator.h>

#include <java/security/PrivateKey.h>
#include <java/security/PublicKey.h>
#include <java/security/interfaces/XECPublicKey.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <javax/net/ssl/SSLException.h>
#include <sun/security/ssl/Alert.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/KAKeyDerivation.h>
#include <sun/security/ssl/NamedGroup.h>
#include <sun/security/ssl/SSLCredentials.h>
#include <sun/security/ssl/SSLKeyDerivation.h>
#include <sun/security/ssl/SSLPossession.h>
#include <sun/security/ssl/TransportContext.h>
#include <sun/security/ssl/XDHKeyExchange$XDHECredentials.h>
#include <sun/security/ssl/XDHKeyExchange$XDHEPossession.h>
#include <sun/security/ssl/XDHKeyExchange.h>
#include <jcpp.h>

#undef HANDSHAKE_FAILURE

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PublicKey = ::java::security::PublicKey;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Alert = ::sun::security::ssl::Alert;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $KAKeyDerivation = ::sun::security::ssl::KAKeyDerivation;
using $NamedGroup = ::sun::security::ssl::NamedGroup;
using $SSLCredentials = ::sun::security::ssl::SSLCredentials;
using $SSLKeyDerivation = ::sun::security::ssl::SSLKeyDerivation;
using $SSLPossession = ::sun::security::ssl::SSLPossession;
using $TransportContext = ::sun::security::ssl::TransportContext;
using $XDHKeyExchange$XDHECredentials = ::sun::security::ssl::XDHKeyExchange$XDHECredentials;
using $XDHKeyExchange$XDHEPossession = ::sun::security::ssl::XDHKeyExchange$XDHEPossession;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _XDHKeyExchange$XDHEKAGenerator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(XDHKeyExchange$XDHEKAGenerator, init$, void)},
	{"createKeyDerivation", "(Lsun/security/ssl/HandshakeContext;)Lsun/security/ssl/SSLKeyDerivation;", nullptr, $PUBLIC, $virtualMethod(XDHKeyExchange$XDHEKAGenerator, createKeyDerivation, $SSLKeyDerivation*, $HandshakeContext*), "java.io.IOException"},
	{}
};

$InnerClassInfo _XDHKeyExchange$XDHEKAGenerator_InnerClassesInfo_[] = {
	{"sun.security.ssl.XDHKeyExchange$XDHEKAGenerator", "sun.security.ssl.XDHKeyExchange", "XDHEKAGenerator", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _XDHKeyExchange$XDHEKAGenerator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.XDHKeyExchange$XDHEKAGenerator",
	"java.lang.Object",
	"sun.security.ssl.SSLKeyAgreementGenerator",
	nullptr,
	_XDHKeyExchange$XDHEKAGenerator_MethodInfo_,
	nullptr,
	nullptr,
	_XDHKeyExchange$XDHEKAGenerator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.XDHKeyExchange"
};

$Object* allocate$XDHKeyExchange$XDHEKAGenerator($Class* clazz) {
	return $of($alloc(XDHKeyExchange$XDHEKAGenerator));
}

void XDHKeyExchange$XDHEKAGenerator::init$() {
}

$SSLKeyDerivation* XDHKeyExchange$XDHEKAGenerator::createKeyDerivation($HandshakeContext* context) {
	$useLocalCurrentObjectStackCache();
	$var($XDHKeyExchange$XDHEPossession, xdhePossession, nullptr);
	$var($XDHKeyExchange$XDHECredentials, xdheCredentials, nullptr);
	{
		$var($Iterator, i$, $nc($nc(context)->handshakePossessions)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SSLPossession, poss, $cast($SSLPossession, i$->next()));
			{
				if (!($instanceOf($XDHKeyExchange$XDHEPossession, poss))) {
					continue;
				}
				$NamedGroup* ng = $nc(($cast($XDHKeyExchange$XDHEPossession, poss)))->namedGroup;
				{
					$var($Iterator, i$, $nc(context->handshakeCredentials)->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($SSLCredentials, cred, $cast($SSLCredentials, i$->next()));
						{
							if (!($instanceOf($XDHKeyExchange$XDHECredentials, cred))) {
								continue;
							}
							if ($nc(ng)->equals($nc(($cast($XDHKeyExchange$XDHECredentials, cred)))->namedGroup)) {
								$assign(xdheCredentials, $cast($XDHKeyExchange$XDHECredentials, cred));
								break;
							}
						}
					}
				}
				if (xdheCredentials != nullptr) {
					$assign(xdhePossession, $cast($XDHKeyExchange$XDHEPossession, poss));
					break;
				}
			}
		}
	}
	if (xdhePossession == nullptr || xdheCredentials == nullptr) {
		$init($Alert);
		$nc(context->conContext)->fatal($Alert::HANDSHAKE_FAILURE, "No sufficient XDHE key agreement parameters negotiated"_s);
	}
	return $new($KAKeyDerivation, "XDH"_s, context, $nc(xdhePossession)->privateKey, $nc(xdheCredentials)->popPublicKey);
}

XDHKeyExchange$XDHEKAGenerator::XDHKeyExchange$XDHEKAGenerator() {
}

$Class* XDHKeyExchange$XDHEKAGenerator::load$($String* name, bool initialize) {
	$loadClass(XDHKeyExchange$XDHEKAGenerator, name, initialize, &_XDHKeyExchange$XDHEKAGenerator_ClassInfo_, allocate$XDHKeyExchange$XDHEKAGenerator);
	return class$;
}

$Class* XDHKeyExchange$XDHEKAGenerator::class$ = nullptr;

		} // ssl
	} // security
} // sun