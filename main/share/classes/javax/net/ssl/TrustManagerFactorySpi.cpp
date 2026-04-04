#include <javax/net/ssl/TrustManagerFactorySpi.h>
#include <java/security/KeyStore.h>
#include <javax/net/ssl/ManagerFactoryParameters.h>
#include <javax/net/ssl/TrustManager.h>
#include <jcpp.h>

using $TrustManagerArray = $Array<::javax::net::ssl::TrustManager>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $KeyStore = ::java::security::KeyStore;
using $ManagerFactoryParameters = ::javax::net::ssl::ManagerFactoryParameters;

namespace javax {
	namespace net {
		namespace ssl {

void TrustManagerFactorySpi::init$() {
}

TrustManagerFactorySpi::TrustManagerFactorySpi() {
}

$Class* TrustManagerFactorySpi::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TrustManagerFactorySpi, init$, void)},
		{"engineGetTrustManagers", "()[Ljavax/net/ssl/TrustManager;", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(TrustManagerFactorySpi, engineGetTrustManagers, $TrustManagerArray*)},
		{"engineInit", "(Ljava/security/KeyStore;)V", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(TrustManagerFactorySpi, engineInit, void, $KeyStore*), "java.security.KeyStoreException"},
		{"engineInit", "(Ljavax/net/ssl/ManagerFactoryParameters;)V", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(TrustManagerFactorySpi, engineInit, void, $ManagerFactoryParameters*), "java.security.InvalidAlgorithmParameterException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"javax.net.ssl.TrustManagerFactorySpi",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(TrustManagerFactorySpi, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TrustManagerFactorySpi);
	});
	return class$;
}

$Class* TrustManagerFactorySpi::class$ = nullptr;

		} // ssl
	} // net
} // javax