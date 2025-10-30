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

$MethodInfo _KeyManagerFactorySpi_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(KeyManagerFactorySpi::*)()>(&KeyManagerFactorySpi::init$))},
	{"engineGetKeyManagers", "()[Ljavax/net/ssl/KeyManager;", nullptr, $PROTECTED | $ABSTRACT},
	{"engineInit", "(Ljava/security/KeyStore;[C)V", nullptr, $PROTECTED | $ABSTRACT, nullptr, "java.security.KeyStoreException,java.security.NoSuchAlgorithmException,java.security.UnrecoverableKeyException"},
	{"engineInit", "(Ljavax/net/ssl/ManagerFactoryParameters;)V", nullptr, $PROTECTED | $ABSTRACT, nullptr, "java.security.InvalidAlgorithmParameterException"},
	{}
};

$ClassInfo _KeyManagerFactorySpi_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.net.ssl.KeyManagerFactorySpi",
	"java.lang.Object",
	nullptr,
	nullptr,
	_KeyManagerFactorySpi_MethodInfo_
};

$Object* allocate$KeyManagerFactorySpi($Class* clazz) {
	return $of($alloc(KeyManagerFactorySpi));
}

void KeyManagerFactorySpi::init$() {
}

KeyManagerFactorySpi::KeyManagerFactorySpi() {
}

$Class* KeyManagerFactorySpi::load$($String* name, bool initialize) {
	$loadClass(KeyManagerFactorySpi, name, initialize, &_KeyManagerFactorySpi_ClassInfo_, allocate$KeyManagerFactorySpi);
	return class$;
}

$Class* KeyManagerFactorySpi::class$ = nullptr;

		} // ssl
	} // net
} // javax