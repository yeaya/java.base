#include <javax/net/ssl/X509KeyManager.h>
#include <java/net/Socket.h>
#include <java/security/Principal.h>
#include <java/security/PrivateKey.h>
#include <java/security/cert/X509Certificate.h>
#include <jcpp.h>

using $PrincipalArray = $Array<::java::security::Principal>;
using $X509CertificateArray = $Array<::java::security::cert::X509Certificate>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Socket = ::java::net::Socket;
using $PrivateKey = ::java::security::PrivateKey;

namespace javax {
	namespace net {
		namespace ssl {

$Class* X509KeyManager::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"chooseClientAlias", "([Ljava/lang/String;[Ljava/security/Principal;Ljava/net/Socket;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(X509KeyManager, chooseClientAlias, $String*, $StringArray*, $PrincipalArray*, $Socket*)},
		{"chooseServerAlias", "(Ljava/lang/String;[Ljava/security/Principal;Ljava/net/Socket;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(X509KeyManager, chooseServerAlias, $String*, $String*, $PrincipalArray*, $Socket*)},
		{"getCertificateChain", "(Ljava/lang/String;)[Ljava/security/cert/X509Certificate;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(X509KeyManager, getCertificateChain, $X509CertificateArray*, $String*)},
		{"getClientAliases", "(Ljava/lang/String;[Ljava/security/Principal;)[Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(X509KeyManager, getClientAliases, $StringArray*, $String*, $PrincipalArray*)},
		{"getPrivateKey", "(Ljava/lang/String;)Ljava/security/PrivateKey;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(X509KeyManager, getPrivateKey, $PrivateKey*, $String*)},
		{"getServerAliases", "(Ljava/lang/String;[Ljava/security/Principal;)[Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(X509KeyManager, getServerAliases, $StringArray*, $String*, $PrincipalArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.net.ssl.X509KeyManager",
		nullptr,
		"javax.net.ssl.KeyManager",
		nullptr,
		methodInfos$$
	};
	$loadClass(X509KeyManager, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(X509KeyManager);
	});
	return class$;
}

$Class* X509KeyManager::class$ = nullptr;

		} // ssl
	} // net
} // javax