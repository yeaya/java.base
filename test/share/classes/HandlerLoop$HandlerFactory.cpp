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

using $HandlerLoop$Dummy = ::HandlerLoop$Dummy;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InstantiationException = ::java::lang::InstantiationException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchMethodException = ::java::lang::NoSuchMethodException;
using $InvocationTargetException = ::java::lang::reflect::InvocationTargetException;
using $URLStreamHandler = ::java::net::URLStreamHandler;

void HandlerLoop$HandlerFactory::init$($String* pkg) {
	$set(this, pkg, pkg);
}

$URLStreamHandler* HandlerLoop$HandlerFactory::createURLStreamHandler($String* protocol) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($String, name, $str({this->pkg, "."_s, protocol, ".Handler"_s}));
	$nc($System::out)->println($$str({"Loading handler class: "_s, name}));
	$new($HandlerLoop$Dummy);
	try {
		$Class* c = $Class::forName(name);
		return $cast($URLStreamHandler, $$nc(c->getDeclaredConstructor($$new($ClassArray, 0)))->newInstance($$new($ObjectArray, 0)));
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
	$FieldInfo fieldInfos$$[] = {
		{"pkg", "Ljava/lang/String;", nullptr, $PRIVATE, $field(HandlerLoop$HandlerFactory, pkg)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(HandlerLoop$HandlerFactory, init$, void, $String*)},
		{"createURLStreamHandler", "(Ljava/lang/String;)Ljava/net/URLStreamHandler;", nullptr, $PUBLIC, $virtualMethod(HandlerLoop$HandlerFactory, createURLStreamHandler, $URLStreamHandler*, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"HandlerLoop$HandlerFactory", "HandlerLoop", "HandlerFactory", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"HandlerLoop$HandlerFactory",
		"java.lang.Object",
		"java.net.URLStreamHandlerFactory",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"HandlerLoop"
	};
	$loadClass(HandlerLoop$HandlerFactory, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HandlerLoop$HandlerFactory);
	});
	return class$;
}

$Class* HandlerLoop$HandlerFactory::class$ = nullptr;