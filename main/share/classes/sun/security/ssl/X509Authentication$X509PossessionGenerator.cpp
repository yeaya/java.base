#include <sun/security/ssl/X509Authentication$X509PossessionGenerator.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/Socket.h>
#include <java/security/Principal.h>
#include <java/security/PrivateKey.h>
#include <java/security/PublicKey.h>
#include <java/security/cert/X509Certificate.h>
#include <java/security/interfaces/ECPublicKey.h>
#include <java/security/spec/ECParameterSpec.h>
#include <java/util/List.h>
#include <javax/net/ssl/SSLEngine.h>
#include <javax/net/ssl/SSLSocket.h>
#include <javax/net/ssl/X509ExtendedKeyManager.h>
#include <javax/security/auth/x500/X500Principal.h>
#include <sun/security/ssl/ClientHandshakeContext.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/NamedGroup.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/SSLConfiguration.h>
#include <sun/security/ssl/SSLContextImpl.h>
#include <sun/security/ssl/SSLEngineImpl.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/SSLPossession.h>
#include <sun/security/ssl/SSLSocketImpl.h>
#include <sun/security/ssl/SSLTransport.h>
#include <sun/security/ssl/ServerHandshakeContext.h>
#include <sun/security/ssl/SupportedGroupsExtension$SupportedGroups.h>
#include <sun/security/ssl/TransportContext.h>
#include <sun/security/ssl/X509Authentication$X509Possession.h>
#include <sun/security/ssl/X509Authentication.h>
#include <jcpp.h>

using $PrincipalArray = $Array<::java::security::Principal>;
using $X509CertificateArray = $Array<::java::security::cert::X509Certificate>;
using $X500PrincipalArray = $Array<::javax::security::auth::x500::X500Principal>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Socket = ::java::net::Socket;
using $Key = ::java::security::Key;
using $Principal = ::java::security::Principal;
using $PrivateKey = ::java::security::PrivateKey;
using $PublicKey = ::java::security::PublicKey;
using $Certificate = ::java::security::cert::Certificate;
using $X509Certificate = ::java::security::cert::X509Certificate;
using $ECKey = ::java::security::interfaces::ECKey;
using $ECPublicKey = ::java::security::interfaces::ECPublicKey;
using $ECParameterSpec = ::java::security::spec::ECParameterSpec;
using $List = ::java::util::List;
using $SSLEngine = ::javax::net::ssl::SSLEngine;
using $SSLSocket = ::javax::net::ssl::SSLSocket;
using $X509ExtendedKeyManager = ::javax::net::ssl::X509ExtendedKeyManager;
using $X509KeyManager = ::javax::net::ssl::X509KeyManager;
using $ClientHandshakeContext = ::sun::security::ssl::ClientHandshakeContext;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $NamedGroup = ::sun::security::ssl::NamedGroup;
using $ProtocolVersion = ::sun::security::ssl::ProtocolVersion;
using $SSLConfiguration = ::sun::security::ssl::SSLConfiguration;
using $SSLContextImpl = ::sun::security::ssl::SSLContextImpl;
using $SSLEngineImpl = ::sun::security::ssl::SSLEngineImpl;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $SSLPossession = ::sun::security::ssl::SSLPossession;
using $SSLPossessionGenerator = ::sun::security::ssl::SSLPossessionGenerator;
using $SSLSocketImpl = ::sun::security::ssl::SSLSocketImpl;
using $SSLTransport = ::sun::security::ssl::SSLTransport;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;
using $SupportedGroupsExtension$SupportedGroups = ::sun::security::ssl::SupportedGroupsExtension$SupportedGroups;
using $TransportContext = ::sun::security::ssl::TransportContext;
using $X509Authentication = ::sun::security::ssl::X509Authentication;
using $X509Authentication$X509Possession = ::sun::security::ssl::X509Authentication$X509Possession;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _X509Authentication$X509PossessionGenerator_FieldInfo_[] = {
	{"keyTypes", "[Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(X509Authentication$X509PossessionGenerator, keyTypes)},
	{}
};

$MethodInfo _X509Authentication$X509PossessionGenerator_MethodInfo_[] = {
	{"<init>", "([Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(X509Authentication$X509PossessionGenerator::*)($StringArray*)>(&X509Authentication$X509PossessionGenerator::init$))},
	{"createClientPossession", "(Lsun/security/ssl/ClientHandshakeContext;Ljava/lang/String;)Lsun/security/ssl/SSLPossession;", nullptr, $PRIVATE, $method(static_cast<$SSLPossession*(X509Authentication$X509PossessionGenerator::*)($ClientHandshakeContext*,$String*)>(&X509Authentication$X509PossessionGenerator::createClientPossession))},
	{"createPossession", "(Lsun/security/ssl/HandshakeContext;)Lsun/security/ssl/SSLPossession;", nullptr, $PUBLIC},
	{"createServerPossession", "(Lsun/security/ssl/ServerHandshakeContext;Ljava/lang/String;)Lsun/security/ssl/SSLPossession;", nullptr, $PRIVATE, $method(static_cast<$SSLPossession*(X509Authentication$X509PossessionGenerator::*)($ServerHandshakeContext*,$String*)>(&X509Authentication$X509PossessionGenerator::createServerPossession))},
	{}
};

$InnerClassInfo _X509Authentication$X509PossessionGenerator_InnerClassesInfo_[] = {
	{"sun.security.ssl.X509Authentication$X509PossessionGenerator", "sun.security.ssl.X509Authentication", "X509PossessionGenerator", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _X509Authentication$X509PossessionGenerator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.X509Authentication$X509PossessionGenerator",
	"java.lang.Object",
	"sun.security.ssl.SSLPossessionGenerator",
	_X509Authentication$X509PossessionGenerator_FieldInfo_,
	_X509Authentication$X509PossessionGenerator_MethodInfo_,
	nullptr,
	nullptr,
	_X509Authentication$X509PossessionGenerator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.X509Authentication"
};

$Object* allocate$X509Authentication$X509PossessionGenerator($Class* clazz) {
	return $of($alloc(X509Authentication$X509PossessionGenerator));
}

void X509Authentication$X509PossessionGenerator::init$($StringArray* keyTypes) {
	$set(this, keyTypes, keyTypes);
}

$SSLPossession* X509Authentication$X509PossessionGenerator::createPossession($HandshakeContext* context) {
	if ($nc($nc(context)->sslConfig)->isClientMode) {
		{
			$var($StringArray, arr$, this->keyTypes);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($String, keyType, arr$->get(i$));
				{
					$var($SSLPossession, poss, createClientPossession($cast($ClientHandshakeContext, context), keyType));
					if (poss != nullptr) {
						return poss;
					}
				}
			}
		}
	} else {
		{
			$var($StringArray, arr$, this->keyTypes);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($String, keyType, arr$->get(i$));
				{
					$var($SSLPossession, poss, createServerPossession($cast($ServerHandshakeContext, context), keyType));
					if (poss != nullptr) {
						return poss;
					}
				}
			}
		}
	}
	return nullptr;
}

$SSLPossession* X509Authentication$X509PossessionGenerator::createClientPossession($ClientHandshakeContext* chc, $String* keyType) {
	$var($X509ExtendedKeyManager, km, $nc($nc(chc)->sslContext)->getX509KeyManager());
	$var($String, clientAlias, nullptr);
	if ($instanceOf($SSLSocketImpl, $nc(chc->conContext)->transport)) {
		$assign(clientAlias, $nc(km)->chooseClientAlias($$new($StringArray, {keyType}), chc->peerSupportedAuthorities == nullptr ? ($PrincipalArray*)nullptr : $cast($PrincipalArray, $($nc(chc->peerSupportedAuthorities)->clone())), $cast($SSLSocket, $nc(chc->conContext)->transport)));
	} else if ($instanceOf($SSLEngineImpl, $nc($nc(chc)->conContext)->transport)) {
		$assign(clientAlias, $nc(km)->chooseEngineClientAlias($$new($StringArray, {keyType}), chc->peerSupportedAuthorities == nullptr ? ($PrincipalArray*)nullptr : $cast($PrincipalArray, $($nc(chc->peerSupportedAuthorities)->clone())), $cast($SSLEngine, $nc(chc->conContext)->transport)));
	}
	if (clientAlias == nullptr) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl"_s)) {
			$SSLLogger::finest($$str({"No X.509 cert selected for "_s, keyType}), $$new($ObjectArray, 0));
		}
		return nullptr;
	}
	$var($PrivateKey, clientPrivateKey, $nc(km)->getPrivateKey(clientAlias));
	if (clientPrivateKey == nullptr) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl"_s)) {
			$SSLLogger::finest($$str({clientAlias, " is not a private key entry"_s}), $$new($ObjectArray, 0));
		}
		return nullptr;
	}
	$var($X509CertificateArray, clientCerts, km->getCertificateChain(clientAlias));
	if ((clientCerts == nullptr) || ($nc(clientCerts)->length == 0)) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl"_s)) {
			$SSLLogger::finest($$str({clientAlias, " is a private key entry with no cert chain stored"_s}), $$new($ObjectArray, 0));
		}
		return nullptr;
	}
	$var($PublicKey, clientPublicKey, $nc($nc(clientCerts)->get(0))->getPublicKey());
	bool var$0 = (!$nc($($nc(clientPrivateKey)->getAlgorithm()))->equals(keyType));
	if (var$0 || (!$nc($($nc(clientPublicKey)->getAlgorithm()))->equals(keyType))) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl"_s)) {
			$SSLLogger::fine($$str({clientAlias, " private or public key is not of "_s, keyType, " algorithm"_s}), $$new($ObjectArray, 0));
		}
		return nullptr;
	}
	return $new($X509Authentication$X509Possession, clientPrivateKey, clientCerts);
}

$SSLPossession* X509Authentication$X509PossessionGenerator::createServerPossession($ServerHandshakeContext* shc, $String* keyType) {
	$var($X509ExtendedKeyManager, km, $nc($nc(shc)->sslContext)->getX509KeyManager());
	$var($String, serverAlias, nullptr);
	if ($instanceOf($SSLSocketImpl, $nc(shc->conContext)->transport)) {
		$assign(serverAlias, $nc(km)->chooseServerAlias(keyType, shc->peerSupportedAuthorities == nullptr ? ($PrincipalArray*)nullptr : $cast($PrincipalArray, $($nc(shc->peerSupportedAuthorities)->clone())), $cast($SSLSocket, $nc(shc->conContext)->transport)));
	} else if ($instanceOf($SSLEngineImpl, $nc($nc(shc)->conContext)->transport)) {
		$assign(serverAlias, $nc(km)->chooseEngineServerAlias(keyType, shc->peerSupportedAuthorities == nullptr ? ($PrincipalArray*)nullptr : $cast($PrincipalArray, $($nc(shc->peerSupportedAuthorities)->clone())), $cast($SSLEngine, $nc(shc->conContext)->transport)));
	}
	if (serverAlias == nullptr) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl"_s)) {
			$SSLLogger::finest($$str({"No X.509 cert selected for "_s, keyType}), $$new($ObjectArray, 0));
		}
		return nullptr;
	}
	$var($PrivateKey, serverPrivateKey, $nc(km)->getPrivateKey(serverAlias));
	if (serverPrivateKey == nullptr) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl"_s)) {
			$SSLLogger::finest($$str({serverAlias, " is not a private key entry"_s}), $$new($ObjectArray, 0));
		}
		return nullptr;
	}
	$var($X509CertificateArray, serverCerts, km->getCertificateChain(serverAlias));
	if ((serverCerts == nullptr) || ($nc(serverCerts)->length == 0)) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl"_s)) {
			$SSLLogger::finest($$str({serverAlias, " is not a certificate entry"_s}), $$new($ObjectArray, 0));
		}
		return nullptr;
	}
	$var($PublicKey, serverPublicKey, $nc($nc(serverCerts)->get(0))->getPublicKey());
	bool var$0 = (!$nc($($nc(serverPrivateKey)->getAlgorithm()))->equals(keyType));
	if (var$0 || (!$nc($($nc(serverPublicKey)->getAlgorithm()))->equals(keyType))) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl"_s)) {
			$SSLLogger::fine($$str({serverAlias, " private or public key is not of "_s, keyType, " algorithm"_s}), $$new($ObjectArray, 0));
		}
		return nullptr;
	}
	bool var$1 = !$nc(shc->negotiatedProtocol)->useTLS13PlusSpec();
	if (var$1 && $nc(keyType)->equals("EC"_s)) {
		if (!($instanceOf($ECPublicKey, serverPublicKey))) {
			$init($SSLLogger);
			if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl"_s)) {
				$SSLLogger::warning($$str({serverAlias, " public key is not an instance of ECPublicKey"_s}), $$new($ObjectArray, 0));
			}
			return nullptr;
		}
		$var($ECParameterSpec, params, $nc(($cast($ECPublicKey, serverPublicKey)))->getParams());
		$NamedGroup* namedGroup = $NamedGroup::valueOf(params);
		bool var$2 = (namedGroup == nullptr) || (!$SupportedGroupsExtension$SupportedGroups::isSupported(namedGroup));
		if (var$2 || ((shc->clientRequestedNamedGroups != nullptr) && !$nc(shc->clientRequestedNamedGroups)->contains(namedGroup))) {
			$init($SSLLogger);
			if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl"_s)) {
				$SSLLogger::warning($$str({"Unsupported named group ("_s, namedGroup, ") used in the "_s, serverAlias, " certificate"_s}), $$new($ObjectArray, 0));
			}
			return nullptr;
		}
	}
	return $new($X509Authentication$X509Possession, serverPrivateKey, serverCerts);
}

X509Authentication$X509PossessionGenerator::X509Authentication$X509PossessionGenerator() {
}

$Class* X509Authentication$X509PossessionGenerator::load$($String* name, bool initialize) {
	$loadClass(X509Authentication$X509PossessionGenerator, name, initialize, &_X509Authentication$X509PossessionGenerator_ClassInfo_, allocate$X509Authentication$X509PossessionGenerator);
	return class$;
}

$Class* X509Authentication$X509PossessionGenerator::class$ = nullptr;

		} // ssl
	} // security
} // sun