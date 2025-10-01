#include <java/net/URLStreamHandlerFactory.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/URLStreamHandler.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URLStreamHandler = ::java::net::URLStreamHandler;

namespace java {
	namespace net {

$MethodInfo _URLStreamHandlerFactory_MethodInfo_[] = {
	{"createURLStreamHandler", "(Ljava/lang/String;)Ljava/net/URLStreamHandler;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _URLStreamHandlerFactory_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.net.URLStreamHandlerFactory",
	nullptr,
	nullptr,
	nullptr,
	_URLStreamHandlerFactory_MethodInfo_
};

$Object* allocate$URLStreamHandlerFactory($Class* clazz) {
	return $of($alloc(URLStreamHandlerFactory));
}

$Class* URLStreamHandlerFactory::load$($String* name, bool initialize) {
	$loadClass(URLStreamHandlerFactory, name, initialize, &_URLStreamHandlerFactory_ClassInfo_, allocate$URLStreamHandlerFactory);
	return class$;
}

$Class* URLStreamHandlerFactory::class$ = nullptr;

	} // net
} // java