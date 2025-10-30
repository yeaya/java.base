#include <javax/net/ssl/SSLServerSocketFactory$DefaultFactoryHolder.h>

#include <java/lang/ClassLoader.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/reflect/Constructor.h>
#include <javax/net/ssl/DefaultSSLServerSocketFactory.h>
#include <javax/net/ssl/SSLServerSocketFactory.h>
#include <javax/net/ssl/SSLSocketFactory.h>
#include <jcpp.h>

#undef DEBUG

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Constructor = ::java::lang::reflect::Constructor;
using $DefaultSSLServerSocketFactory = ::javax::net::ssl::DefaultSSLServerSocketFactory;
using $SSLServerSocketFactory = ::javax::net::ssl::SSLServerSocketFactory;
using $SSLSocketFactory = ::javax::net::ssl::SSLSocketFactory;

namespace javax {
	namespace net {
		namespace ssl {

$FieldInfo _SSLServerSocketFactory$DefaultFactoryHolder_FieldInfo_[] = {
	{"defaultFactory", "Ljavax/net/ssl/SSLServerSocketFactory;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SSLServerSocketFactory$DefaultFactoryHolder, defaultFactory)},
	{}
};

$MethodInfo _SSLServerSocketFactory$DefaultFactoryHolder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(SSLServerSocketFactory$DefaultFactoryHolder::*)()>(&SSLServerSocketFactory$DefaultFactoryHolder::init$))},
	{"log", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*)>(&SSLServerSocketFactory$DefaultFactoryHolder::log))},
	{}
};

$InnerClassInfo _SSLServerSocketFactory$DefaultFactoryHolder_InnerClassesInfo_[] = {
	{"javax.net.ssl.SSLServerSocketFactory$DefaultFactoryHolder", "javax.net.ssl.SSLServerSocketFactory", "DefaultFactoryHolder", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _SSLServerSocketFactory$DefaultFactoryHolder_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.net.ssl.SSLServerSocketFactory$DefaultFactoryHolder",
	"java.lang.Object",
	nullptr,
	_SSLServerSocketFactory$DefaultFactoryHolder_FieldInfo_,
	_SSLServerSocketFactory$DefaultFactoryHolder_MethodInfo_,
	nullptr,
	nullptr,
	_SSLServerSocketFactory$DefaultFactoryHolder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.net.ssl.SSLServerSocketFactory"
};

$Object* allocate$SSLServerSocketFactory$DefaultFactoryHolder($Class* clazz) {
	return $of($alloc(SSLServerSocketFactory$DefaultFactoryHolder));
}

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

void clinit$SSLServerSocketFactory$DefaultFactoryHolder($Class* class$) {
	$useLocalCurrentObjectStackCache();
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
				$assign(mediator, $cast($SSLServerSocketFactory, $nc($($nc(cls)->getDeclaredConstructor($$new($ClassArray, 0))))->newInstance($$new($ObjectArray, 0))));
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
	$loadClass(SSLServerSocketFactory$DefaultFactoryHolder, name, initialize, &_SSLServerSocketFactory$DefaultFactoryHolder_ClassInfo_, clinit$SSLServerSocketFactory$DefaultFactoryHolder, allocate$SSLServerSocketFactory$DefaultFactoryHolder);
	return class$;
}

$Class* SSLServerSocketFactory$DefaultFactoryHolder::class$ = nullptr;

		} // ssl
	} // net
} // javax