#include <javax/net/ssl/X509ExtendedKeyManager.h>

#include <java/security/Principal.h>
#include <javax/net/ssl/SSLEngine.h>
#include <jcpp.h>

using $PrincipalArray = $Array<::java::security::Principal>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SSLEngine = ::javax::net::ssl::SSLEngine;

namespace javax {
	namespace net {
		namespace ssl {

$MethodInfo _X509ExtendedKeyManager_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(X509ExtendedKeyManager::*)()>(&X509ExtendedKeyManager::init$))},
	{"chooseEngineClientAlias", "([Ljava/lang/String;[Ljava/security/Principal;Ljavax/net/ssl/SSLEngine;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"chooseEngineServerAlias", "(Ljava/lang/String;[Ljava/security/Principal;Ljavax/net/ssl/SSLEngine;)Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _X509ExtendedKeyManager_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.net.ssl.X509ExtendedKeyManager",
	"java.lang.Object",
	"javax.net.ssl.X509KeyManager",
	nullptr,
	_X509ExtendedKeyManager_MethodInfo_
};

$Object* allocate$X509ExtendedKeyManager($Class* clazz) {
	return $of($alloc(X509ExtendedKeyManager));
}

void X509ExtendedKeyManager::init$() {
}

$String* X509ExtendedKeyManager::chooseEngineClientAlias($StringArray* keyType, $PrincipalArray* issuers, $SSLEngine* engine) {
	return nullptr;
}

$String* X509ExtendedKeyManager::chooseEngineServerAlias($String* keyType, $PrincipalArray* issuers, $SSLEngine* engine) {
	return nullptr;
}

X509ExtendedKeyManager::X509ExtendedKeyManager() {
}

$Class* X509ExtendedKeyManager::load$($String* name, bool initialize) {
	$loadClass(X509ExtendedKeyManager, name, initialize, &_X509ExtendedKeyManager_ClassInfo_, allocate$X509ExtendedKeyManager);
	return class$;
}

$Class* X509ExtendedKeyManager::class$ = nullptr;

		} // ssl
	} // net
} // javax