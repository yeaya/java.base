#include <java/net/ContentHandlerFactory.h>
#include <java/net/ContentHandler.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ContentHandler = ::java::net::ContentHandler;

namespace java {
	namespace net {

$Class* ContentHandlerFactory::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"createContentHandler", "(Ljava/lang/String;)Ljava/net/ContentHandler;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ContentHandlerFactory, createContentHandler, $ContentHandler*, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.net.ContentHandlerFactory",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ContentHandlerFactory, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ContentHandlerFactory);
	});
	return class$;
}

$Class* ContentHandlerFactory::class$ = nullptr;

	} // net
} // java