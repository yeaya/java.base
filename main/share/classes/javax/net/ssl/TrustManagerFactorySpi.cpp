#include <javax/net/ssl/TrustManagerFactorySpi.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$MethodInfo _TrustManagerFactorySpi_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TrustManagerFactorySpi::*)()>(&TrustManagerFactorySpi::init$))},
	{"engineGetTrustManagers", "()[Ljavax/net/ssl/TrustManager;", nullptr, $PROTECTED | $ABSTRACT},
	{"engineInit", "(Ljava/security/KeyStore;)V", nullptr, $PROTECTED | $ABSTRACT, nullptr, "java.security.KeyStoreException"},
	{"engineInit", "(Ljavax/net/ssl/ManagerFactoryParameters;)V", nullptr, $PROTECTED | $ABSTRACT, nullptr, "java.security.InvalidAlgorithmParameterException"},
	{}
};

$ClassInfo _TrustManagerFactorySpi_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.net.ssl.TrustManagerFactorySpi",
	"java.lang.Object",
	nullptr,
	nullptr,
	_TrustManagerFactorySpi_MethodInfo_
};

$Object* allocate$TrustManagerFactorySpi($Class* clazz) {
	return $of($alloc(TrustManagerFactorySpi));
}

void TrustManagerFactorySpi::init$() {
}

TrustManagerFactorySpi::TrustManagerFactorySpi() {
}

$Class* TrustManagerFactorySpi::load$($String* name, bool initialize) {
	$loadClass(TrustManagerFactorySpi, name, initialize, &_TrustManagerFactorySpi_ClassInfo_, allocate$TrustManagerFactorySpi);
	return class$;
}

$Class* TrustManagerFactorySpi::class$ = nullptr;

		} // ssl
	} // net
} // javax