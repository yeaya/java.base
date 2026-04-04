#include <sun/security/ssl/KeyManagerFactoryImpl$SunX509.h>
#include <java/security/InvalidAlgorithmParameterException.h>
#include <java/security/KeyStore.h>
#include <javax/net/ssl/ManagerFactoryParameters.h>
#include <sun/security/ssl/KeyManagerFactoryImpl.h>
#include <sun/security/ssl/SunX509KeyManagerImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InvalidAlgorithmParameterException = ::java::security::InvalidAlgorithmParameterException;
using $KeyStore = ::java::security::KeyStore;
using $ManagerFactoryParameters = ::javax::net::ssl::ManagerFactoryParameters;
using $KeyManagerFactoryImpl = ::sun::security::ssl::KeyManagerFactoryImpl;
using $SunX509KeyManagerImpl = ::sun::security::ssl::SunX509KeyManagerImpl;

namespace sun {
	namespace security {
		namespace ssl {

void KeyManagerFactoryImpl$SunX509::init$() {
	$KeyManagerFactoryImpl::init$();
}

void KeyManagerFactoryImpl$SunX509::engineInit($KeyStore* ks, $chars* password) {
	$set(this, keyManager, $new($SunX509KeyManagerImpl, ks, password));
	this->isInitialized = true;
}

void KeyManagerFactoryImpl$SunX509::engineInit($ManagerFactoryParameters* spec) {
	$throwNew($InvalidAlgorithmParameterException, "SunX509KeyManager does not use ManagerFactoryParameters"_s);
}

KeyManagerFactoryImpl$SunX509::KeyManagerFactoryImpl$SunX509() {
}

$Class* KeyManagerFactoryImpl$SunX509::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(KeyManagerFactoryImpl$SunX509, init$, void)},
		{"engineInit", "(Ljava/security/KeyStore;[C)V", nullptr, $PROTECTED, $virtualMethod(KeyManagerFactoryImpl$SunX509, engineInit, void, $KeyStore*, $chars*), "java.security.KeyStoreException,java.security.NoSuchAlgorithmException,java.security.UnrecoverableKeyException"},
		{"engineInit", "(Ljavax/net/ssl/ManagerFactoryParameters;)V", nullptr, $PROTECTED, $virtualMethod(KeyManagerFactoryImpl$SunX509, engineInit, void, $ManagerFactoryParameters*), "java.security.InvalidAlgorithmParameterException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.KeyManagerFactoryImpl$SunX509", "sun.security.ssl.KeyManagerFactoryImpl", "SunX509", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.security.ssl.KeyManagerFactoryImpl$SunX509",
		"sun.security.ssl.KeyManagerFactoryImpl",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.ssl.KeyManagerFactoryImpl"
	};
	$loadClass(KeyManagerFactoryImpl$SunX509, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(KeyManagerFactoryImpl$SunX509);
	});
	return class$;
}

$Class* KeyManagerFactoryImpl$SunX509::class$ = nullptr;

		} // ssl
	} // security
} // sun