#include <javax/net/ssl/KeyManagerFactorySpi.h>
#include <java/security/KeyStore.h>
#include <javax/net/ssl/KeyManager.h>
#include <javax/net/ssl/ManagerFactoryParameters.h>
#include <jcpp.h>

using $KeyManagerArray = $Array<::javax::net::ssl::KeyManager>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $KeyStore = ::java::security::KeyStore;
using $ManagerFactoryParameters = ::javax::net::ssl::ManagerFactoryParameters;

namespace javax {
	namespace net {
		namespace ssl {

void KeyManagerFactorySpi::init$() {
}

KeyManagerFactorySpi::KeyManagerFactorySpi() {
}

$Class* KeyManagerFactorySpi::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(KeyManagerFactorySpi, init$, void)},
		{"engineGetKeyManagers", "()[Ljavax/net/ssl/KeyManager;", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(KeyManagerFactorySpi, engineGetKeyManagers, $KeyManagerArray*)},
		{"engineInit", "(Ljava/security/KeyStore;[C)V", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(KeyManagerFactorySpi, engineInit, void, $KeyStore*, $chars*), "java.security.KeyStoreException,java.security.NoSuchAlgorithmException,java.security.UnrecoverableKeyException"},
		{"engineInit", "(Ljavax/net/ssl/ManagerFactoryParameters;)V", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(KeyManagerFactorySpi, engineInit, void, $ManagerFactoryParameters*), "java.security.InvalidAlgorithmParameterException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"javax.net.ssl.KeyManagerFactorySpi",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(KeyManagerFactorySpi, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(KeyManagerFactorySpi);
	});
	return class$;
}

$Class* KeyManagerFactorySpi::class$ = nullptr;

		} // ssl
	} // net
} // javax