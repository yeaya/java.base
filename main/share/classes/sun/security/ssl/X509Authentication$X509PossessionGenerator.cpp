#include <sun/security/ssl/X509Authentication$X509PossessionGenerator.h>
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
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivateKey = ::java::security::PrivateKey;
using $PublicKey = ::java::security::PublicKey;
using $ECPublicKey = ::java::security::interfaces::ECPublicKey;
using $ECParameterSpec = ::java::security::spec::ECParameterSpec;
using $SSLEngine = ::javax::net::ssl::SSLEngine;
using $SSLSocket = ::javax::net::ssl::SSLSocket;
using $X509ExtendedKeyManager = ::javax::net::ssl::X509ExtendedKeyManager;
using $ClientHandshakeContext = ::sun::security::ssl::ClientHandshakeContext;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $NamedGroup = ::sun::security::ssl::NamedGroup;
using $SSLEngineImpl = ::sun::security::ssl::SSLEngineImpl;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $SSLPossession = ::sun::security::ssl::SSLPossession;
using $SSLSocketImpl = ::sun::security::ssl::SSLSocketImpl;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;
using $SupportedGroupsExtension$SupportedGroups = ::sun::security::ssl::SupportedGroupsExtension$SupportedGroups;
using $X509Authentication$X509Possession = ::sun::security::ssl::X509Authentication$X509Possession;

namespace sun {
	namespace security {
		namespace ssl {

void X509Authentication$X509PossessionGenerator::init$($StringArray* keyTypes) {
	$set(this, keyTypes, keyTypes);
}

$SSLPossession* X509Authentication$X509PossessionGenerator::createPossession($HandshakeContext* context) {
	$useLocalObjectStack();
	if ($nc($nc(context)->sslConfig)->isClientMode) {
		$var($StringArray, arr$, this->keyTypes);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($String, keyType, arr$->get(i$));
			{
				$var($SSLPossession, poss, createClientPossession($cast($ClientHandshakeContext, context), keyType));
				if (poss != nullptr) {
					return poss;
				}
			}
		}
	} else {
		$var($StringArray, arr$, this->keyTypes);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($String, keyType, arr$->get(i$));
			{
				$var($SSLPossession, poss, createServerPossession($cast($ServerHandshakeContext, context), keyType));
				if (poss != nullptr) {
					return poss;
				}
			}
		}
	}
	return nullptr;
}

$SSLPossession* X509Authentication$X509PossessionGenerator::createClientPossession($ClientHandshakeContext* chc, $String* keyType) {
	$useLocalObjectStack();
	$var($X509ExtendedKeyManager, km, $nc($nc(chc)->sslContext)->getX509KeyManager());
	$var($String, clientAlias, nullptr);
	if ($instanceOf($SSLSocketImpl, $nc(chc->conContext)->transport)) {
		$assign(clientAlias, $nc(km)->chooseClientAlias($$new($StringArray, {keyType}), chc->peerSupportedAuthorities == nullptr ? ($PrincipalArray*)nullptr : $$cast($PrincipalArray, chc->peerSupportedAuthorities->clone()), $cast($SSLSocket, chc->conContext->transport)));
	} else if ($instanceOf($SSLEngineImpl, chc->conContext->transport)) {
		$assign(clientAlias, $nc(km)->chooseEngineClientAlias($$new($StringArray, {keyType}), chc->peerSupportedAuthorities == nullptr ? ($PrincipalArray*)nullptr : $$cast($PrincipalArray, chc->peerSupportedAuthorities->clone()), $cast($SSLEngine, chc->conContext->transport)));
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
	if ((clientCerts == nullptr) || (clientCerts->length == 0)) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl"_s)) {
			$SSLLogger::finest($$str({clientAlias, " is a private key entry with no cert chain stored"_s}), $$new($ObjectArray, 0));
		}
		return nullptr;
	}
	$var($PublicKey, clientPublicKey, $nc($nc(clientCerts)->get(0))->getPublicKey());
	bool var$0 = !$$nc($nc(clientPrivateKey)->getAlgorithm())->equals(keyType);
	if (var$0 || (!$$nc($nc(clientPublicKey)->getAlgorithm())->equals(keyType))) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl"_s)) {
			$SSLLogger::fine($$str({clientAlias, " private or public key is not of "_s, keyType, " algorithm"_s}), $$new($ObjectArray, 0));
		}
		return nullptr;
	}
	return $new($X509Authentication$X509Possession, clientPrivateKey, clientCerts);
}

$SSLPossession* X509Authentication$X509PossessionGenerator::createServerPossession($ServerHandshakeContext* shc, $String* keyType) {
	$useLocalObjectStack();
	$var($X509ExtendedKeyManager, km, $nc($nc(shc)->sslContext)->getX509KeyManager());
	$var($String, serverAlias, nullptr);
	if ($instanceOf($SSLSocketImpl, $nc(shc->conContext)->transport)) {
		$assign(serverAlias, $nc(km)->chooseServerAlias(keyType, shc->peerSupportedAuthorities == nullptr ? ($PrincipalArray*)nullptr : $$cast($PrincipalArray, shc->peerSupportedAuthorities->clone()), $cast($SSLSocket, shc->conContext->transport)));
	} else if ($instanceOf($SSLEngineImpl, shc->conContext->transport)) {
		$assign(serverAlias, $nc(km)->chooseEngineServerAlias(keyType, shc->peerSupportedAuthorities == nullptr ? ($PrincipalArray*)nullptr : $$cast($PrincipalArray, shc->peerSupportedAuthorities->clone()), $cast($SSLEngine, shc->conContext->transport)));
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
	if ((serverCerts == nullptr) || (serverCerts->length == 0)) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl"_s)) {
			$SSLLogger::finest($$str({serverAlias, " is not a certificate entry"_s}), $$new($ObjectArray, 0));
		}
		return nullptr;
	}
	$var($PublicKey, serverPublicKey, $nc($nc(serverCerts)->get(0))->getPublicKey());
	bool var$0 = !$$nc($nc(serverPrivateKey)->getAlgorithm())->equals(keyType);
	if (var$0 || (!$$nc($nc(serverPublicKey)->getAlgorithm())->equals(keyType))) {
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
		$var($ECParameterSpec, params, $nc($cast($ECPublicKey, serverPublicKey))->getParams());
		$NamedGroup* namedGroup = $NamedGroup::valueOf(params);
		bool var$2 = (namedGroup == nullptr) || (!$SupportedGroupsExtension$SupportedGroups::isSupported(namedGroup));
		if (var$2 || ((shc->clientRequestedNamedGroups != nullptr) && !shc->clientRequestedNamedGroups->contains(namedGroup))) {
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
	$FieldInfo fieldInfos$$[] = {
		{"keyTypes", "[Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(X509Authentication$X509PossessionGenerator, keyTypes)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([Ljava/lang/String;)V", nullptr, $PRIVATE, $method(X509Authentication$X509PossessionGenerator, init$, void, $StringArray*)},
		{"createClientPossession", "(Lsun/security/ssl/ClientHandshakeContext;Ljava/lang/String;)Lsun/security/ssl/SSLPossession;", nullptr, $PRIVATE, $method(X509Authentication$X509PossessionGenerator, createClientPossession, $SSLPossession*, $ClientHandshakeContext*, $String*)},
		{"createPossession", "(Lsun/security/ssl/HandshakeContext;)Lsun/security/ssl/SSLPossession;", nullptr, $PUBLIC, $virtualMethod(X509Authentication$X509PossessionGenerator, createPossession, $SSLPossession*, $HandshakeContext*)},
		{"createServerPossession", "(Lsun/security/ssl/ServerHandshakeContext;Ljava/lang/String;)Lsun/security/ssl/SSLPossession;", nullptr, $PRIVATE, $method(X509Authentication$X509PossessionGenerator, createServerPossession, $SSLPossession*, $ServerHandshakeContext*, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.X509Authentication$X509PossessionGenerator", "sun.security.ssl.X509Authentication", "X509PossessionGenerator", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.X509Authentication$X509PossessionGenerator",
		"java.lang.Object",
		"sun.security.ssl.SSLPossessionGenerator",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.ssl.X509Authentication"
	};
	$loadClass(X509Authentication$X509PossessionGenerator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(X509Authentication$X509PossessionGenerator);
	});
	return class$;
}

$Class* X509Authentication$X509PossessionGenerator::class$ = nullptr;

		} // ssl
	} // security
} // sun