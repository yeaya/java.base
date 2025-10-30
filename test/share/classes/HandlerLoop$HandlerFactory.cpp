#include <HandlerLoop$HandlerFactory.h>

#include <HandlerLoop$Dummy.h>
#include <HandlerLoop.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/InstantiationException.h>
#include <java/lang/NoSuchMethodException.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/InvocationTargetException.h>
#include <java/net/URLStreamHandler.h>
#include <jcpp.h>

using $HandlerLoop = ::HandlerLoop;
using $HandlerLoop$Dummy = ::HandlerLoop$Dummy;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InstantiationException = ::java::lang::InstantiationException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchMethodException = ::java::lang::NoSuchMethodException;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $Constructor = ::java::lang::reflect::Constructor;
using $InvocationTargetException = ::java::lang::reflect::InvocationTargetException;
using $URLStreamHandler = ::java::net::URLStreamHandler;
using $URLStreamHandlerFactory = ::java::net::URLStreamHandlerFactory;

$FieldInfo _HandlerLoop$HandlerFactory_FieldInfo_[] = {
	{"pkg", "Ljava/lang/String;", nullptr, $PRIVATE, $field(HandlerLoop$HandlerFactory, pkg)},
	{}
};

$MethodInfo _HandlerLoop$HandlerFactory_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(HandlerLoop$HandlerFactory::*)($String*)>(&HandlerLoop$HandlerFactory::init$))},
	{"createURLStreamHandler", "(Ljava/lang/String;)Ljava/net/URLStreamHandler;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _HandlerLoop$HandlerFactory_InnerClassesInfo_[] = {
	{"HandlerLoop$HandlerFactory", "HandlerLoop", "HandlerFactory", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _HandlerLoop$HandlerFactory_ClassInfo_ = {
	$ACC_SUPER,
	"HandlerLoop$HandlerFactory",
	"java.lang.Object",
	"java.net.URLStreamHandlerFactory",
	_HandlerLoop$HandlerFactory_FieldInfo_,
	_HandlerLoop$HandlerFactory_MethodInfo_,
	nullptr,
	nullptr,
	_HandlerLoop$HandlerFactory_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HandlerLoop"
};

$Object* allocate$HandlerLoop$HandlerFactory($Class* clazz) {
	return $of($alloc(HandlerLoop$HandlerFactory));
}

void HandlerLoop$HandlerFactory::init$($String* pkg) {
	$set(this, pkg, pkg);
}

$URLStreamHandler* HandlerLoop$HandlerFactory::createURLStreamHandler($String* protocol) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($String, name, $str({this->pkg, "."_s, protocol, ".Handler"_s}));
	$nc($System::out)->println($$str({"Loading handler class: "_s, name}));
	$new($HandlerLoop$Dummy);
	try {
		$Class* c = $Class::forName(name);
		return $cast($URLStreamHandler, $nc($($nc(c)->getDeclaredConstructor($$new($ClassArray, 0))))->newInstance($$new($ObjectArray, 0)));
	} catch ($ClassNotFoundException& e) {
		e->printStackTrace();
	} catch ($IllegalAccessException& e) {
		e->printStackTrace();
	} catch ($InstantiationException& e) {
		e->printStackTrace();
	} catch ($NoSuchMethodException& e) {
		e->printStackTrace();
	} catch ($InvocationTargetException& e) {
		e->printStackTrace();
	}
	return nullptr;
}

HandlerLoop$HandlerFactory::HandlerLoop$HandlerFactory() {
}

$Class* HandlerLoop$HandlerFactory::load$($String* name, bool initialize) {
	$loadClass(HandlerLoop$HandlerFactory, name, initialize, &_HandlerLoop$HandlerFactory_ClassInfo_, allocate$HandlerLoop$HandlerFactory);
	return class$;
}

$Class* HandlerLoop$HandlerFactory::class$ = nullptr;