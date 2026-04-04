#include <sun/security/ssl/KeyManagerFactoryImpl.h>
#include <java/lang/IllegalStateException.h>
#include <javax/net/ssl/KeyManager.h>
#include <javax/net/ssl/KeyManagerFactorySpi.h>
#include <javax/net/ssl/X509ExtendedKeyManager.h>
#include <jcpp.h>

using $KeyManagerArray = $Array<::javax::net::ssl::KeyManager>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $KeyManagerFactorySpi = ::javax::net::ssl::KeyManagerFactorySpi;

namespace sun {
	namespace security {
		namespace ssl {

void KeyManagerFactoryImpl::init$() {
	$KeyManagerFactorySpi::init$();
}

$KeyManagerArray* KeyManagerFactoryImpl::engineGetKeyManagers() {
	if (!this->isInitialized) {
		$throwNew($IllegalStateException, "KeyManagerFactoryImpl is not initialized"_s);
	}
	return $new($KeyManagerArray, {this->keyManager});
}

KeyManagerFactoryImpl::KeyManagerFactoryImpl() {
}

$Class* KeyManagerFactoryImpl::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"keyManager", "Ljavax/net/ssl/X509ExtendedKeyManager;", nullptr, 0, $field(KeyManagerFactoryImpl, keyManager)},
		{"isInitialized", "Z", nullptr, 0, $field(KeyManagerFactoryImpl, isInitialized)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(KeyManagerFactoryImpl, init$, void)},
		{"engineGetKeyManagers", "()[Ljavax/net/ssl/KeyManager;", nullptr, $PROTECTED, $virtualMethod(KeyManagerFactoryImpl, engineGetKeyManagers, $KeyManagerArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.KeyManagerFactoryImpl$X509", "sun.security.ssl.KeyManagerFactoryImpl", "X509", $PUBLIC | $STATIC | $FINAL},
		{"sun.security.ssl.KeyManagerFactoryImpl$SunX509", "sun.security.ssl.KeyManagerFactoryImpl", "SunX509", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"sun.security.ssl.KeyManagerFactoryImpl",
		"javax.net.ssl.KeyManagerFactorySpi",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.security.ssl.KeyManagerFactoryImpl$X509,sun.security.ssl.KeyManagerFactoryImpl$SunX509"
	};
	$loadClass(KeyManagerFactoryImpl, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(KeyManagerFactoryImpl);
	});
	return class$;
}

$Class* KeyManagerFactoryImpl::class$ = nullptr;

		} // ssl
	} // security
} // sun