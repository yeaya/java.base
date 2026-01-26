#include <javax/net/ssl/KeyManagerFactory.h>

#include <java/security/AccessController.h>
#include <java/security/KeyStore.h>
#include <java/security/PrivilegedAction.h>
#include <java/security/Provider.h>
#include <java/util/Objects.h>
#include <javax/net/ssl/KeyManager.h>
#include <javax/net/ssl/KeyManagerFactory$1.h>
#include <javax/net/ssl/KeyManagerFactorySpi.h>
#include <javax/net/ssl/ManagerFactoryParameters.h>
#include <sun/security/jca/GetInstance$Instance.h>
#include <sun/security/jca/GetInstance.h>
#include <jcpp.h>

using $KeyManagerArray = $Array<::javax::net::ssl::KeyManager>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $KeyStore = ::java::security::KeyStore;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Provider = ::java::security::Provider;
using $Objects = ::java::util::Objects;
using $KeyManagerFactory$1 = ::javax::net::ssl::KeyManagerFactory$1;
using $KeyManagerFactorySpi = ::javax::net::ssl::KeyManagerFactorySpi;
using $ManagerFactoryParameters = ::javax::net::ssl::ManagerFactoryParameters;
using $GetInstance = ::sun::security::jca::GetInstance;
using $GetInstance$Instance = ::sun::security::jca::GetInstance$Instance;

namespace javax {
	namespace net {
		namespace ssl {

$FieldInfo _KeyManagerFactory_FieldInfo_[] = {
	{"provider", "Ljava/security/Provider;", nullptr, $PRIVATE, $field(KeyManagerFactory, provider)},
	{"factorySpi", "Ljavax/net/ssl/KeyManagerFactorySpi;", nullptr, $PRIVATE, $field(KeyManagerFactory, factorySpi)},
	{"algorithm", "Ljava/lang/String;", nullptr, $PRIVATE, $field(KeyManagerFactory, algorithm)},
	{}
};

$MethodInfo _KeyManagerFactory_MethodInfo_[] = {
	{"<init>", "(Ljavax/net/ssl/KeyManagerFactorySpi;Ljava/security/Provider;Ljava/lang/String;)V", nullptr, $PROTECTED, $method(KeyManagerFactory, init$, void, $KeyManagerFactorySpi*, $Provider*, $String*)},
	{"getAlgorithm", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $method(KeyManagerFactory, getAlgorithm, $String*)},
	{"getDefaultAlgorithm", "()Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticMethod(KeyManagerFactory, getDefaultAlgorithm, $String*)},
	{"getInstance", "(Ljava/lang/String;)Ljavax/net/ssl/KeyManagerFactory;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticMethod(KeyManagerFactory, getInstance, KeyManagerFactory*, $String*), "java.security.NoSuchAlgorithmException"},
	{"getInstance", "(Ljava/lang/String;Ljava/lang/String;)Ljavax/net/ssl/KeyManagerFactory;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticMethod(KeyManagerFactory, getInstance, KeyManagerFactory*, $String*, $String*), "java.security.NoSuchAlgorithmException,java.security.NoSuchProviderException"},
	{"getInstance", "(Ljava/lang/String;Ljava/security/Provider;)Ljavax/net/ssl/KeyManagerFactory;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticMethod(KeyManagerFactory, getInstance, KeyManagerFactory*, $String*, $Provider*), "java.security.NoSuchAlgorithmException"},
	{"getKeyManagers", "()[Ljavax/net/ssl/KeyManager;", nullptr, $PUBLIC | $FINAL, $method(KeyManagerFactory, getKeyManagers, $KeyManagerArray*)},
	{"getProvider", "()Ljava/security/Provider;", nullptr, $PUBLIC | $FINAL, $method(KeyManagerFactory, getProvider, $Provider*)},
	{"init", "(Ljava/security/KeyStore;[C)V", nullptr, $PUBLIC | $FINAL, $method(KeyManagerFactory, init, void, $KeyStore*, $chars*), "java.security.KeyStoreException,java.security.NoSuchAlgorithmException,java.security.UnrecoverableKeyException"},
	{"init", "(Ljavax/net/ssl/ManagerFactoryParameters;)V", nullptr, $PUBLIC | $FINAL, $method(KeyManagerFactory, init, void, $ManagerFactoryParameters*), "java.security.InvalidAlgorithmParameterException"},
	{}
};

$InnerClassInfo _KeyManagerFactory_InnerClassesInfo_[] = {
	{"javax.net.ssl.KeyManagerFactory$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _KeyManagerFactory_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.net.ssl.KeyManagerFactory",
	"java.lang.Object",
	nullptr,
	_KeyManagerFactory_FieldInfo_,
	_KeyManagerFactory_MethodInfo_,
	nullptr,
	nullptr,
	_KeyManagerFactory_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.net.ssl.KeyManagerFactory$1"
};

$Object* allocate$KeyManagerFactory($Class* clazz) {
	return $of($alloc(KeyManagerFactory));
}

$String* KeyManagerFactory::getDefaultAlgorithm() {
	$load(KeyManagerFactory);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($String, type, nullptr);
	$assign(type, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($KeyManagerFactory$1)))));
	if (type == nullptr) {
		$assign(type, "SunX509"_s);
	}
	return type;
}

void KeyManagerFactory::init$($KeyManagerFactorySpi* factorySpi, $Provider* provider, $String* algorithm) {
	$set(this, factorySpi, factorySpi);
	$set(this, provider, provider);
	$set(this, algorithm, algorithm);
}

$String* KeyManagerFactory::getAlgorithm() {
	return this->algorithm;
}

KeyManagerFactory* KeyManagerFactory::getInstance($String* algorithm) {
	$Objects::requireNonNull($of(algorithm), "null algorithm name"_s);
	$load($KeyManagerFactorySpi);
	$var($GetInstance$Instance, instance, $GetInstance::getInstance("KeyManagerFactory"_s, $KeyManagerFactorySpi::class$, algorithm));
	return $new(KeyManagerFactory, $cast($KeyManagerFactorySpi, $nc(instance)->impl), instance->provider, algorithm);
}

KeyManagerFactory* KeyManagerFactory::getInstance($String* algorithm, $String* provider) {
	$Objects::requireNonNull($of(algorithm), "null algorithm name"_s);
	$load($KeyManagerFactorySpi);
	$var($GetInstance$Instance, instance, $GetInstance::getInstance("KeyManagerFactory"_s, $KeyManagerFactorySpi::class$, algorithm, provider));
	return $new(KeyManagerFactory, $cast($KeyManagerFactorySpi, $nc(instance)->impl), instance->provider, algorithm);
}

KeyManagerFactory* KeyManagerFactory::getInstance($String* algorithm, $Provider* provider) {
	$Objects::requireNonNull($of(algorithm), "null algorithm name"_s);
	$load($KeyManagerFactorySpi);
	$var($GetInstance$Instance, instance, $GetInstance::getInstance("KeyManagerFactory"_s, $KeyManagerFactorySpi::class$, algorithm, provider));
	return $new(KeyManagerFactory, $cast($KeyManagerFactorySpi, $nc(instance)->impl), instance->provider, algorithm);
}

$Provider* KeyManagerFactory::getProvider() {
	return this->provider;
}

void KeyManagerFactory::init($KeyStore* ks, $chars* password) {
	$nc(this->factorySpi)->engineInit(ks, password);
}

void KeyManagerFactory::init($ManagerFactoryParameters* spec) {
	$nc(this->factorySpi)->engineInit(spec);
}

$KeyManagerArray* KeyManagerFactory::getKeyManagers() {
	return $nc(this->factorySpi)->engineGetKeyManagers();
}

KeyManagerFactory::KeyManagerFactory() {
}

$Class* KeyManagerFactory::load$($String* name, bool initialize) {
	$loadClass(KeyManagerFactory, name, initialize, &_KeyManagerFactory_ClassInfo_, allocate$KeyManagerFactory);
	return class$;
}

$Class* KeyManagerFactory::class$ = nullptr;

		} // ssl
	} // net
} // javax