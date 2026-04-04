#include <javax/net/ssl/SSLSocketFactory$DefaultFactoryHolder.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/reflect/Constructor.h>
#include <javax/net/ssl/DefaultSSLSocketFactory.h>
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
using $DefaultSSLSocketFactory = ::javax::net::ssl::DefaultSSLSocketFactory;
using $SSLSocketFactory = ::javax::net::ssl::SSLSocketFactory;

namespace javax {
	namespace net {
		namespace ssl {

$SSLSocketFactory* SSLSocketFactory$DefaultFactoryHolder::defaultFactory = nullptr;

void SSLSocketFactory$DefaultFactoryHolder::init$() {
}

void SSLSocketFactory$DefaultFactoryHolder::log($String* msg) {
	$init(SSLSocketFactory$DefaultFactoryHolder);
	$init($SSLSocketFactory);
	if ($SSLSocketFactory::DEBUG) {
		$nc($System::out)->println(msg);
	}
}

void SSLSocketFactory$DefaultFactoryHolder::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	{
		$var($SSLSocketFactory, mediator, nullptr);
		$var($String, clsName, $SSLSocketFactory::getSecurityProperty("ssl.SocketFactory.provider"_s));
		if (clsName != nullptr) {
			SSLSocketFactory$DefaultFactoryHolder::log("setting up default SSLSocketFactory"_s);
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
				SSLSocketFactory$DefaultFactoryHolder::log($$str({"class "_s, clsName, " is loaded"_s}));
				$assign(mediator, $cast($SSLSocketFactory, $$nc($nc(cls)->getDeclaredConstructor($$new($ClassArray, 0)))->newInstance($$new($ObjectArray, 0))));
				SSLSocketFactory$DefaultFactoryHolder::log($$str({"instantiated an instance of class "_s, clsName}));
			} catch ($Exception& e) {
				SSLSocketFactory$DefaultFactoryHolder::log($$str({"SSLSocketFactory instantiation failed: "_s, e}));
				$assign(mediator, $new($DefaultSSLSocketFactory, e));
			}
		}
		$assignStatic(SSLSocketFactory$DefaultFactoryHolder::defaultFactory, mediator);
	}
}

SSLSocketFactory$DefaultFactoryHolder::SSLSocketFactory$DefaultFactoryHolder() {
}

$Class* SSLSocketFactory$DefaultFactoryHolder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"defaultFactory", "Ljavax/net/ssl/SSLSocketFactory;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SSLSocketFactory$DefaultFactoryHolder, defaultFactory)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(SSLSocketFactory$DefaultFactoryHolder, init$, void)},
		{"log", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(SSLSocketFactory$DefaultFactoryHolder, log, void, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.net.ssl.SSLSocketFactory$DefaultFactoryHolder", "javax.net.ssl.SSLSocketFactory", "DefaultFactoryHolder", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"javax.net.ssl.SSLSocketFactory$DefaultFactoryHolder",
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
		"javax.net.ssl.SSLSocketFactory"
	};
	$loadClass(SSLSocketFactory$DefaultFactoryHolder, name, initialize, &classInfo$$, SSLSocketFactory$DefaultFactoryHolder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SSLSocketFactory$DefaultFactoryHolder);
	});
	return class$;
}

$Class* SSLSocketFactory$DefaultFactoryHolder::class$ = nullptr;

		} // ssl
	} // net
} // javax