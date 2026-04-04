#include <sun/security/ssl/AbstractKeyManagerWrapper.h>
#include <java/net/Socket.h>
#include <java/security/Principal.h>
#include <java/security/PrivateKey.h>
#include <java/security/cert/X509Certificate.h>
#include <javax/net/ssl/X509ExtendedKeyManager.h>
#include <javax/net/ssl/X509KeyManager.h>
#include <jcpp.h>

using $PrincipalArray = $Array<::java::security::Principal>;
using $X509CertificateArray = $Array<::java::security::cert::X509Certificate>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Socket = ::java::net::Socket;
using $PrivateKey = ::java::security::PrivateKey;
using $X509ExtendedKeyManager = ::javax::net::ssl::X509ExtendedKeyManager;
using $X509KeyManager = ::javax::net::ssl::X509KeyManager;

namespace sun {
	namespace security {
		namespace ssl {

void AbstractKeyManagerWrapper::init$($X509KeyManager* km) {
	$X509ExtendedKeyManager::init$();
	$set(this, km, km);
}

$StringArray* AbstractKeyManagerWrapper::getClientAliases($String* keyType, $PrincipalArray* issuers) {
	return $nc(this->km)->getClientAliases(keyType, issuers);
}

$String* AbstractKeyManagerWrapper::chooseClientAlias($StringArray* keyType, $PrincipalArray* issuers, $Socket* socket) {
	return $nc(this->km)->chooseClientAlias(keyType, issuers, socket);
}

$StringArray* AbstractKeyManagerWrapper::getServerAliases($String* keyType, $PrincipalArray* issuers) {
	return $nc(this->km)->getServerAliases(keyType, issuers);
}

$String* AbstractKeyManagerWrapper::chooseServerAlias($String* keyType, $PrincipalArray* issuers, $Socket* socket) {
	return $nc(this->km)->chooseServerAlias(keyType, issuers, socket);
}

$X509CertificateArray* AbstractKeyManagerWrapper::getCertificateChain($String* alias) {
	return $nc(this->km)->getCertificateChain(alias);
}

$PrivateKey* AbstractKeyManagerWrapper::getPrivateKey($String* alias) {
	return $nc(this->km)->getPrivateKey(alias);
}

AbstractKeyManagerWrapper::AbstractKeyManagerWrapper() {
}

$Class* AbstractKeyManagerWrapper::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"km", "Ljavax/net/ssl/X509KeyManager;", nullptr, $PRIVATE | $FINAL, $field(AbstractKeyManagerWrapper, km)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/net/ssl/X509KeyManager;)V", nullptr, 0, $method(AbstractKeyManagerWrapper, init$, void, $X509KeyManager*)},
		{"chooseClientAlias", "([Ljava/lang/String;[Ljava/security/Principal;Ljava/net/Socket;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AbstractKeyManagerWrapper, chooseClientAlias, $String*, $StringArray*, $PrincipalArray*, $Socket*)},
		{"chooseServerAlias", "(Ljava/lang/String;[Ljava/security/Principal;Ljava/net/Socket;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AbstractKeyManagerWrapper, chooseServerAlias, $String*, $String*, $PrincipalArray*, $Socket*)},
		{"getCertificateChain", "(Ljava/lang/String;)[Ljava/security/cert/X509Certificate;", nullptr, $PUBLIC, $virtualMethod(AbstractKeyManagerWrapper, getCertificateChain, $X509CertificateArray*, $String*)},
		{"getClientAliases", "(Ljava/lang/String;[Ljava/security/Principal;)[Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AbstractKeyManagerWrapper, getClientAliases, $StringArray*, $String*, $PrincipalArray*)},
		{"getPrivateKey", "(Ljava/lang/String;)Ljava/security/PrivateKey;", nullptr, $PUBLIC, $virtualMethod(AbstractKeyManagerWrapper, getPrivateKey, $PrivateKey*, $String*)},
		{"getServerAliases", "(Ljava/lang/String;[Ljava/security/Principal;)[Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AbstractKeyManagerWrapper, getServerAliases, $StringArray*, $String*, $PrincipalArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.AbstractKeyManagerWrapper",
		"javax.net.ssl.X509ExtendedKeyManager",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(AbstractKeyManagerWrapper, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AbstractKeyManagerWrapper);
	});
	return class$;
}

$Class* AbstractKeyManagerWrapper::class$ = nullptr;

		} // ssl
	} // security
} // sun