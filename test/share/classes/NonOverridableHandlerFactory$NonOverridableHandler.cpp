#include <NonOverridableHandlerFactory$NonOverridableHandler.h>
#include <NonOverridableHandlerFactory.h>
#include <java/net/URL.h>
#include <java/net/URLConnection.h>
#include <java/net/URLStreamHandler.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $URL = ::java::net::URL;
using $URLConnection = ::java::net::URLConnection;
using $URLStreamHandler = ::java::net::URLStreamHandler;

void NonOverridableHandlerFactory$NonOverridableHandler::init$() {
	$URLStreamHandler::init$();
}

$URLConnection* NonOverridableHandlerFactory$NonOverridableHandler::openConnection($URL* u) {
	$throwNew($RuntimeException, $$str({"CustomURLStreamHandler used for "_s, u}));
	$shouldNotReachHere();
}

NonOverridableHandlerFactory$NonOverridableHandler::NonOverridableHandlerFactory$NonOverridableHandler() {
}

$Class* NonOverridableHandlerFactory$NonOverridableHandler::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(NonOverridableHandlerFactory$NonOverridableHandler, init$, void)},
		{"openConnection", "(Ljava/net/URL;)Ljava/net/URLConnection;", nullptr, $PROTECTED, $virtualMethod(NonOverridableHandlerFactory$NonOverridableHandler, openConnection, $URLConnection*, $URL*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"NonOverridableHandlerFactory$NonOverridableHandler", "NonOverridableHandlerFactory", "NonOverridableHandler", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"NonOverridableHandlerFactory$NonOverridableHandler",
		"java.net.URLStreamHandler",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"NonOverridableHandlerFactory"
	};
	$loadClass(NonOverridableHandlerFactory$NonOverridableHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NonOverridableHandlerFactory$NonOverridableHandler);
	});
	return class$;
}

$Class* NonOverridableHandlerFactory$NonOverridableHandler::class$ = nullptr;