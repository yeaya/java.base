#include <javax/net/ssl/TrustManagerFactory.h>

#include <java/security/AccessController.h>
#include <java/security/KeyStore.h>
#include <java/security/PrivilegedAction.h>
#include <java/security/Provider.h>
#include <java/util/Objects.h>
#include <javax/net/ssl/ManagerFactoryParameters.h>
#include <javax/net/ssl/TrustManager.h>
#include <javax/net/ssl/TrustManagerFactory$1.h>
#include <javax/net/ssl/TrustManagerFactorySpi.h>
#include <sun/security/jca/GetInstance$Instance.h>
#include <sun/security/jca/GetInstance.h>
#include <jcpp.h>

using $TrustManagerArray = $Array<::javax::net::ssl::TrustManager>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $KeyStore = ::java::security::KeyStore;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Provider = ::java::security::Provider;
using $Objects = ::java::util::Objects;
using $ManagerFactoryParameters = ::javax::net::ssl::ManagerFactoryParameters;
using $TrustManagerFactory$1 = ::javax::net::ssl::TrustManagerFactory$1;
using $TrustManagerFactorySpi = ::javax::net::ssl::TrustManagerFactorySpi;
using $GetInstance = ::sun::security::jca::GetInstance;
using $GetInstance$Instance = ::sun::security::jca::GetInstance$Instance;

namespace javax {
	namespace net {
		namespace ssl {

$FieldInfo _TrustManagerFactory_FieldInfo_[] = {
	{"provider", "Ljava/security/Provider;", nullptr, $PRIVATE, $field(TrustManagerFactory, provider)},
	{"factorySpi", "Ljavax/net/ssl/TrustManagerFactorySpi;", nullptr, $PRIVATE, $field(TrustManagerFactory, factorySpi)},
	{"algorithm", "Ljava/lang/String;", nullptr, $PRIVATE, $field(TrustManagerFactory, algorithm)},
	{}
};

$MethodInfo _TrustManagerFactory_MethodInfo_[] = {
	{"<init>", "(Ljavax/net/ssl/TrustManagerFactorySpi;Ljava/security/Provider;Ljava/lang/String;)V", nullptr, $PROTECTED, $method(TrustManagerFactory, init$, void, $TrustManagerFactorySpi*, $Provider*, $String*)},
	{"getAlgorithm", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $method(TrustManagerFactory, getAlgorithm, $String*)},
	{"getDefaultAlgorithm", "()Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticMethod(TrustManagerFactory, getDefaultAlgorithm, $String*)},
	{"getInstance", "(Ljava/lang/String;)Ljavax/net/ssl/TrustManagerFactory;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticMethod(TrustManagerFactory, getInstance, TrustManagerFactory*, $String*), "java.security.NoSuchAlgorithmException"},
	{"getInstance", "(Ljava/lang/String;Ljava/lang/String;)Ljavax/net/ssl/TrustManagerFactory;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticMethod(TrustManagerFactory, getInstance, TrustManagerFactory*, $String*, $String*), "java.security.NoSuchAlgorithmException,java.security.NoSuchProviderException"},
	{"getInstance", "(Ljava/lang/String;Ljava/security/Provider;)Ljavax/net/ssl/TrustManagerFactory;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticMethod(TrustManagerFactory, getInstance, TrustManagerFactory*, $String*, $Provider*), "java.security.NoSuchAlgorithmException"},
	{"getProvider", "()Ljava/security/Provider;", nullptr, $PUBLIC | $FINAL, $method(TrustManagerFactory, getProvider, $Provider*)},
	{"getTrustManagers", "()[Ljavax/net/ssl/TrustManager;", nullptr, $PUBLIC | $FINAL, $method(TrustManagerFactory, getTrustManagers, $TrustManagerArray*)},
	{"init", "(Ljava/security/KeyStore;)V", nullptr, $PUBLIC | $FINAL, $method(TrustManagerFactory, init, void, $KeyStore*), "java.security.KeyStoreException"},
	{"init", "(Ljavax/net/ssl/ManagerFactoryParameters;)V", nullptr, $PUBLIC | $FINAL, $method(TrustManagerFactory, init, void, $ManagerFactoryParameters*), "java.security.InvalidAlgorithmParameterException"},
	{}
};

$InnerClassInfo _TrustManagerFactory_InnerClassesInfo_[] = {
	{"javax.net.ssl.TrustManagerFactory$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TrustManagerFactory_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.net.ssl.TrustManagerFactory",
	"java.lang.Object",
	nullptr,
	_TrustManagerFactory_FieldInfo_,
	_TrustManagerFactory_MethodInfo_,
	nullptr,
	nullptr,
	_TrustManagerFactory_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.net.ssl.TrustManagerFactory$1"
};

$Object* allocate$TrustManagerFactory($Class* clazz) {
	return $of($alloc(TrustManagerFactory));
}

$String* TrustManagerFactory::getDefaultAlgorithm() {
	$load(TrustManagerFactory);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($String, type, nullptr);
	$assign(type, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($TrustManagerFactory$1)))));
	if (type == nullptr) {
		$assign(type, "SunX509"_s);
	}
	return type;
}

void TrustManagerFactory::init$($TrustManagerFactorySpi* factorySpi, $Provider* provider, $String* algorithm) {
	$set(this, factorySpi, factorySpi);
	$set(this, provider, provider);
	$set(this, algorithm, algorithm);
}

$String* TrustManagerFactory::getAlgorithm() {
	return this->algorithm;
}

TrustManagerFactory* TrustManagerFactory::getInstance($String* algorithm) {
	$Objects::requireNonNull($of(algorithm), "null algorithm name"_s);
	$load($TrustManagerFactorySpi);
	$var($GetInstance$Instance, instance, $GetInstance::getInstance("TrustManagerFactory"_s, $TrustManagerFactorySpi::class$, algorithm));
	return $new(TrustManagerFactory, $cast($TrustManagerFactorySpi, $nc(instance)->impl), instance->provider, algorithm);
}

TrustManagerFactory* TrustManagerFactory::getInstance($String* algorithm, $String* provider) {
	$Objects::requireNonNull($of(algorithm), "null algorithm name"_s);
	$load($TrustManagerFactorySpi);
	$var($GetInstance$Instance, instance, $GetInstance::getInstance("TrustManagerFactory"_s, $TrustManagerFactorySpi::class$, algorithm, provider));
	return $new(TrustManagerFactory, $cast($TrustManagerFactorySpi, $nc(instance)->impl), instance->provider, algorithm);
}

TrustManagerFactory* TrustManagerFactory::getInstance($String* algorithm, $Provider* provider) {
	$Objects::requireNonNull($of(algorithm), "null algorithm name"_s);
	$load($TrustManagerFactorySpi);
	$var($GetInstance$Instance, instance, $GetInstance::getInstance("TrustManagerFactory"_s, $TrustManagerFactorySpi::class$, algorithm, provider));
	return $new(TrustManagerFactory, $cast($TrustManagerFactorySpi, $nc(instance)->impl), instance->provider, algorithm);
}

$Provider* TrustManagerFactory::getProvider() {
	return this->provider;
}

void TrustManagerFactory::init($KeyStore* ks) {
	$nc(this->factorySpi)->engineInit(ks);
}

void TrustManagerFactory::init($ManagerFactoryParameters* spec) {
	$nc(this->factorySpi)->engineInit(spec);
}

$TrustManagerArray* TrustManagerFactory::getTrustManagers() {
	return $nc(this->factorySpi)->engineGetTrustManagers();
}

TrustManagerFactory::TrustManagerFactory() {
}

$Class* TrustManagerFactory::load$($String* name, bool initialize) {
	$loadClass(TrustManagerFactory, name, initialize, &_TrustManagerFactory_ClassInfo_, allocate$TrustManagerFactory);
	return class$;
}

$Class* TrustManagerFactory::class$ = nullptr;

		} // ssl
	} // net
} // javax