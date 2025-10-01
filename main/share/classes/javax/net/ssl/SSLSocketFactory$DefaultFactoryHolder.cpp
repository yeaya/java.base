#include <javax/net/ssl/SSLSocketFactory$DefaultFactoryHolder.h>

#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/net/ssl/DefaultSSLSocketFactory.h>
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
using $DefaultSSLSocketFactory = ::javax::net::ssl::DefaultSSLSocketFactory;
using $SSLSocketFactory = ::javax::net::ssl::SSLSocketFactory;

namespace javax {
	namespace net {
		namespace ssl {

$FieldInfo _SSLSocketFactory$DefaultFactoryHolder_FieldInfo_[] = {
	{"defaultFactory", "Ljavax/net/ssl/SSLSocketFactory;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SSLSocketFactory$DefaultFactoryHolder, defaultFactory)},
	{}
};

$MethodInfo _SSLSocketFactory$DefaultFactoryHolder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(SSLSocketFactory$DefaultFactoryHolder::*)()>(&SSLSocketFactory$DefaultFactoryHolder::init$))},
	{"log", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*)>(&SSLSocketFactory$DefaultFactoryHolder::log))},
	{}
};

$InnerClassInfo _SSLSocketFactory$DefaultFactoryHolder_InnerClassesInfo_[] = {
	{"javax.net.ssl.SSLSocketFactory$DefaultFactoryHolder", "javax.net.ssl.SSLSocketFactory", "DefaultFactoryHolder", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _SSLSocketFactory$DefaultFactoryHolder_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.net.ssl.SSLSocketFactory$DefaultFactoryHolder",
	"java.lang.Object",
	nullptr,
	_SSLSocketFactory$DefaultFactoryHolder_FieldInfo_,
	_SSLSocketFactory$DefaultFactoryHolder_MethodInfo_,
	nullptr,
	nullptr,
	_SSLSocketFactory$DefaultFactoryHolder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.net.ssl.SSLSocketFactory"
};

$Object* allocate$SSLSocketFactory$DefaultFactoryHolder($Class* clazz) {
	return $of($alloc(SSLSocketFactory$DefaultFactoryHolder));
}

$SSLSocketFactory* SSLSocketFactory$DefaultFactoryHolder::defaultFactory = nullptr;

void SSLSocketFactory$DefaultFactoryHolder::init$() {
}

void SSLSocketFactory$DefaultFactoryHolder::log($String* msg) {
	$init(SSLSocketFactory$DefaultFactoryHolder);
	$init($SSLSocketFactory);
	if ($SSLSocketFactory::DEBUG) {
		$init($System);
		$nc($System::out)->println(msg);
	}
}

void clinit$SSLSocketFactory$DefaultFactoryHolder($Class* class$) {
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
				} catch ($ClassNotFoundException&) {
					$var($ClassNotFoundException, e, $catch());
					$var($ClassLoader, cl, $ClassLoader::getSystemClassLoader());
					if (cl != nullptr) {
						cls = cl->loadClass(clsName);
					}
				}
				SSLSocketFactory$DefaultFactoryHolder::log($$str({"class "_s, clsName, " is loaded"_s}));
				$assign(mediator, $cast($SSLSocketFactory, $nc($($nc(cls)->getDeclaredConstructor($$new($ClassArray, 0))))->newInstance($$new($ObjectArray, 0))));
				SSLSocketFactory$DefaultFactoryHolder::log($$str({"instantiated an instance of class "_s, clsName}));
			} catch ($Exception&) {
				$var($Exception, e, $catch());
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
	$loadClass(SSLSocketFactory$DefaultFactoryHolder, name, initialize, &_SSLSocketFactory$DefaultFactoryHolder_ClassInfo_, clinit$SSLSocketFactory$DefaultFactoryHolder, allocate$SSLSocketFactory$DefaultFactoryHolder);
	return class$;
}

$Class* SSLSocketFactory$DefaultFactoryHolder::class$ = nullptr;

		} // ssl
	} // net
} // javax