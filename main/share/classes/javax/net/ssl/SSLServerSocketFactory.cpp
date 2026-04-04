#include <javax/net/ssl/SSLServerSocketFactory.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/security/NoSuchAlgorithmException.h>
#include <javax/net/ServerSocketFactory.h>
#include <javax/net/ssl/DefaultSSLServerSocketFactory.h>
#include <javax/net/ssl/SSLContext.h>
#include <javax/net/ssl/SSLServerSocketFactory$DefaultFactoryHolder.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $NoSuchAlgorithmException = ::java::security::NoSuchAlgorithmException;
using $ServerSocketFactory = ::javax::net::ServerSocketFactory;
using $DefaultSSLServerSocketFactory = ::javax::net::ssl::DefaultSSLServerSocketFactory;
using $SSLContext = ::javax::net::ssl::SSLContext;
using $SSLServerSocketFactory$DefaultFactoryHolder = ::javax::net::ssl::SSLServerSocketFactory$DefaultFactoryHolder;

namespace javax {
	namespace net {
		namespace ssl {

void SSLServerSocketFactory::init$() {
	$ServerSocketFactory::init$();
}

$ServerSocketFactory* SSLServerSocketFactory::getDefault() {
	$init(SSLServerSocketFactory);
	$init($SSLServerSocketFactory$DefaultFactoryHolder);
	if ($SSLServerSocketFactory$DefaultFactoryHolder::defaultFactory != nullptr) {
		return $SSLServerSocketFactory$DefaultFactoryHolder::defaultFactory;
	}
	try {
		return $$nc($SSLContext::getDefault())->getServerSocketFactory();
	} catch ($NoSuchAlgorithmException& e) {
		return $new($DefaultSSLServerSocketFactory, e);
	} catch ($UnsupportedOperationException& e) {
		return $new($DefaultSSLServerSocketFactory, e);
	}
	$shouldNotReachHere();
}

SSLServerSocketFactory::SSLServerSocketFactory() {
}

$Class* SSLServerSocketFactory::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(SSLServerSocketFactory, init$, void)},
		{"getDefault", "()Ljavax/net/ServerSocketFactory;", nullptr, $PUBLIC | $STATIC, $staticMethod(SSLServerSocketFactory, getDefault, $ServerSocketFactory*)},
		{"getDefaultCipherSuites", "()[Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SSLServerSocketFactory, getDefaultCipherSuites, $StringArray*)},
		{"getSupportedCipherSuites", "()[Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SSLServerSocketFactory, getSupportedCipherSuites, $StringArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.net.ssl.SSLServerSocketFactory$DefaultFactoryHolder", "javax.net.ssl.SSLServerSocketFactory", "DefaultFactoryHolder", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"javax.net.ssl.SSLServerSocketFactory",
		"javax.net.ServerSocketFactory",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"javax.net.ssl.SSLServerSocketFactory$DefaultFactoryHolder"
	};
	$loadClass(SSLServerSocketFactory, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SSLServerSocketFactory);
	});
	return class$;
}

$Class* SSLServerSocketFactory::class$ = nullptr;

		} // ssl
	} // net
} // javax