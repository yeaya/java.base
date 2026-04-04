#include <java/net/URLStreamHandlerFactory.h>
#include <java/net/URLStreamHandler.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URLStreamHandler = ::java::net::URLStreamHandler;

namespace java {
	namespace net {

$Class* URLStreamHandlerFactory::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"createURLStreamHandler", "(Ljava/lang/String;)Ljava/net/URLStreamHandler;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(URLStreamHandlerFactory, createURLStreamHandler, $URLStreamHandler*, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.net.URLStreamHandlerFactory",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(URLStreamHandlerFactory, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(URLStreamHandlerFactory);
	});
	return class$;
}

$Class* URLStreamHandlerFactory::class$ = nullptr;

	} // net
} // java