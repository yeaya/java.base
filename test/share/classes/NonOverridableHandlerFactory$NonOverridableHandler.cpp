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

$MethodInfo _NonOverridableHandlerFactory$NonOverridableHandler_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(NonOverridableHandlerFactory$NonOverridableHandler, init$, void)},
	{"openConnection", "(Ljava/net/URL;)Ljava/net/URLConnection;", nullptr, $PROTECTED, $virtualMethod(NonOverridableHandlerFactory$NonOverridableHandler, openConnection, $URLConnection*, $URL*), "java.io.IOException"},
	{}
};

$InnerClassInfo _NonOverridableHandlerFactory$NonOverridableHandler_InnerClassesInfo_[] = {
	{"NonOverridableHandlerFactory$NonOverridableHandler", "NonOverridableHandlerFactory", "NonOverridableHandler", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _NonOverridableHandlerFactory$NonOverridableHandler_ClassInfo_ = {
	$ACC_SUPER,
	"NonOverridableHandlerFactory$NonOverridableHandler",
	"java.net.URLStreamHandler",
	nullptr,
	nullptr,
	_NonOverridableHandlerFactory$NonOverridableHandler_MethodInfo_,
	nullptr,
	nullptr,
	_NonOverridableHandlerFactory$NonOverridableHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"NonOverridableHandlerFactory"
};

$Object* allocate$NonOverridableHandlerFactory$NonOverridableHandler($Class* clazz) {
	return $of($alloc(NonOverridableHandlerFactory$NonOverridableHandler));
}

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
	$loadClass(NonOverridableHandlerFactory$NonOverridableHandler, name, initialize, &_NonOverridableHandlerFactory$NonOverridableHandler_ClassInfo_, allocate$NonOverridableHandlerFactory$NonOverridableHandler);
	return class$;
}

$Class* NonOverridableHandlerFactory$NonOverridableHandler::class$ = nullptr;