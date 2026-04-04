#include <javax/net/ssl/SSLServerSocketFactory$DefaultFactoryHolder.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/reflect/Constructor.h>
#include <javax/net/ssl/DefaultSSLServerSocketFactory.h>
#include <javax/net/ssl/SSLServerSocketFactory.h>
#include <javax/net/ssl/SSLSocketFactory.h>
#include <jcpp.h>

#undef DEBUG

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultSSLServerSocketFactory = ::javax::net::ssl::DefaultSSLServerSocketFactory;
using $SSLServerSocketFactory = ::javax::net::ssl::SSLServerSocketFactory;
using $SSLSocketFactory = ::javax::net::ssl::SSLSocketFactory;

namespace javax {
	namespace net {
		namespace ssl {

$SSLServerSocketFactory* SSLServerSocketFactory$DefaultFactoryHolder::defaultFactory = nullptr;

void SSLServerSocketFactory$DefaultFactoryHolder::init$() {
}

void SSLServerSocketFactory$DefaultFactoryHolder::log($String* msg) {
	$init(SSLServerSocketFactory$DefaultFactoryHolder);
	$init($SSLSocketFactory);
	if ($SSLSocketFactory::DEBUG) {
		$nc($System::out)->println(msg);
	}
}

void SSLServerSocketFactory$DefaultFactoryHolder::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	{
		$var($SSLServerSocketFactory, mediator, nullptr);
		$var($String, clsName, $SSLSocketFactory::getSecurityProperty("ssl.ServerSocketFactory.provider"_s));
		if (clsName != nullptr) {
			SSLServerSocketFactory$DefaultFactoryHolder::log("setting up default SSLServerSocketFactory"_s);
			try {
				$Class* cls = nullptr;
				try {
					cls = $Class::forName(clsName);
				} catch ($ClassNotFoundException& e) {
					$var($ClassLoader, cl, $ClassLoader::getSystemClassLoader());
					if (cl != nullptr) {
						cls = cl->loadClass(clsName);
					}
				}
				SSLServerSocketFactory$DefaultFactoryHolder::log($$str({"class "_s, clsName, " is loaded"_s}));
				$assign(mediator, $cast($SSLServerSocketFactory, $$nc($nc(cls)->getDeclaredConstructor($$new($ClassArray, 0)))->newInstance($$new($ObjectArray, 0))));
				SSLServerSocketFactory$DefaultFactoryHolder::log($$str({"instantiated an instance of class "_s, clsName}));
			} catch ($Exception& e) {
				SSLServerSocketFactory$DefaultFactoryHolder::log($$str({"SSLServerSocketFactory instantiation failed: "_s, e}));
				$assign(mediator, $new($DefaultSSLServerSocketFactory, e));
			}
		}
		$assignStatic(SSLServerSocketFactory$DefaultFactoryHolder::defaultFactory, mediator);
	}
}

SSLServerSocketFactory$DefaultFactoryHolder::SSLServerSocketFactory$DefaultFactoryHolder() {
}

$Class* SSLServerSocketFactory$DefaultFactoryHolder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"defaultFactory", "Ljavax/net/ssl/SSLServerSocketFactory;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SSLServerSocketFactory$DefaultFactoryHolder, defaultFactory)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(SSLServerSocketFactory$DefaultFactoryHolder, init$, void)},
		{"log", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(SSLServerSocketFactory$DefaultFactoryHolder, log, void, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.net.ssl.SSLServerSocketFactory$DefaultFactoryHolder", "javax.net.ssl.SSLServerSocketFactory", "DefaultFactoryHolder", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"javax.net.ssl.SSLServerSocketFactory$DefaultFactoryHolder",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.net.ssl.SSLServerSocketFactory"
	};
	$loadClass(SSLServerSocketFactory$DefaultFactoryHolder, name, initialize, &classInfo$$, SSLServerSocketFactory$DefaultFactoryHolder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SSLServerSocketFactory$DefaultFactoryHolder);
	});
	return class$;
}

$Class* SSLServerSocketFactory$DefaultFactoryHolder::class$ = nullptr;

		} // ssl
	} // net
} // javax