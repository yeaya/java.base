#include <sun/security/ssl/DummyX509KeyManager.h>

#include <java/net/Socket.h>
#include <java/security/Principal.h>
#include <java/security/PrivateKey.h>
#include <java/security/cert/X509Certificate.h>
#include <javax/net/ssl/SSLEngine.h>
#include <javax/net/ssl/X509ExtendedKeyManager.h>
#include <jcpp.h>

#undef INSTANCE

using $PrincipalArray = $Array<::java::security::Principal>;
using $X509CertificateArray = $Array<::java::security::cert::X509Certificate>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Socket = ::java::net::Socket;
using $PrivateKey = ::java::security::PrivateKey;
using $SSLEngine = ::javax::net::ssl::SSLEngine;
using $X509ExtendedKeyManager = ::javax::net::ssl::X509ExtendedKeyManager;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _DummyX509KeyManager_FieldInfo_[] = {
	{"INSTANCE", "Ljavax/net/ssl/X509ExtendedKeyManager;", nullptr, $STATIC | $FINAL, $staticField(DummyX509KeyManager, INSTANCE)},
	{}
};

$MethodInfo _DummyX509KeyManager_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(DummyX509KeyManager, init$, void)},
	{"chooseClientAlias", "([Ljava/lang/String;[Ljava/security/Principal;Ljava/net/Socket;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DummyX509KeyManager, chooseClientAlias, $String*, $StringArray*, $PrincipalArray*, $Socket*)},
	{"chooseEngineClientAlias", "([Ljava/lang/String;[Ljava/security/Principal;Ljavax/net/ssl/SSLEngine;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DummyX509KeyManager, chooseEngineClientAlias, $String*, $StringArray*, $PrincipalArray*, $SSLEngine*)},
	{"chooseEngineServerAlias", "(Ljava/lang/String;[Ljava/security/Principal;Ljavax/net/ssl/SSLEngine;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DummyX509KeyManager, chooseEngineServerAlias, $String*, $String*, $PrincipalArray*, $SSLEngine*)},
	{"chooseServerAlias", "(Ljava/lang/String;[Ljava/security/Principal;Ljava/net/Socket;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DummyX509KeyManager, chooseServerAlias, $String*, $String*, $PrincipalArray*, $Socket*)},
	{"getCertificateChain", "(Ljava/lang/String;)[Ljava/security/cert/X509Certificate;", nullptr, $PUBLIC, $virtualMethod(DummyX509KeyManager, getCertificateChain, $X509CertificateArray*, $String*)},
	{"getClientAliases", "(Ljava/lang/String;[Ljava/security/Principal;)[Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DummyX509KeyManager, getClientAliases, $StringArray*, $String*, $PrincipalArray*)},
	{"getPrivateKey", "(Ljava/lang/String;)Ljava/security/PrivateKey;", nullptr, $PUBLIC, $virtualMethod(DummyX509KeyManager, getPrivateKey, $PrivateKey*, $String*)},
	{"getServerAliases", "(Ljava/lang/String;[Ljava/security/Principal;)[Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DummyX509KeyManager, getServerAliases, $StringArray*, $String*, $PrincipalArray*)},
	{}
};

$ClassInfo _DummyX509KeyManager_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.DummyX509KeyManager",
	"javax.net.ssl.X509ExtendedKeyManager",
	nullptr,
	_DummyX509KeyManager_FieldInfo_,
	_DummyX509KeyManager_MethodInfo_
};

$Object* allocate$DummyX509KeyManager($Class* clazz) {
	return $of($alloc(DummyX509KeyManager));
}

$X509ExtendedKeyManager* DummyX509KeyManager::INSTANCE = nullptr;

void DummyX509KeyManager::init$() {
	$X509ExtendedKeyManager::init$();
}

$StringArray* DummyX509KeyManager::getClientAliases($String* keyType, $PrincipalArray* issuers) {
	return nullptr;
}

$String* DummyX509KeyManager::chooseClientAlias($StringArray* keyTypes, $PrincipalArray* issuers, $Socket* socket) {
	return nullptr;
}

$String* DummyX509KeyManager::chooseEngineClientAlias($StringArray* keyTypes, $PrincipalArray* issuers, $SSLEngine* engine) {
	return nullptr;
}

$StringArray* DummyX509KeyManager::getServerAliases($String* keyType, $PrincipalArray* issuers) {
	return nullptr;
}

$String* DummyX509KeyManager::chooseServerAlias($String* keyType, $PrincipalArray* issuers, $Socket* socket) {
	return nullptr;
}

$String* DummyX509KeyManager::chooseEngineServerAlias($String* keyType, $PrincipalArray* issuers, $SSLEngine* engine) {
	return nullptr;
}

$X509CertificateArray* DummyX509KeyManager::getCertificateChain($String* alias) {
	return nullptr;
}

$PrivateKey* DummyX509KeyManager::getPrivateKey($String* alias) {
	return nullptr;
}

void clinit$DummyX509KeyManager($Class* class$) {
	$assignStatic(DummyX509KeyManager::INSTANCE, $new(DummyX509KeyManager));
}

DummyX509KeyManager::DummyX509KeyManager() {
}

$Class* DummyX509KeyManager::load$($String* name, bool initialize) {
	$loadClass(DummyX509KeyManager, name, initialize, &_DummyX509KeyManager_ClassInfo_, clinit$DummyX509KeyManager, allocate$DummyX509KeyManager);
	return class$;
}

$Class* DummyX509KeyManager::class$ = nullptr;

		} // ssl
	} // security
} // sun