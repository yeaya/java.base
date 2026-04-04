#include <java/net/ContentHandler.h>
#include <java/net/URLConnection.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URLConnection = ::java::net::URLConnection;

namespace java {
	namespace net {

void ContentHandler::init$() {
}

$Object* ContentHandler::getContent($URLConnection* urlc, $ClassArray* classes) {
	$useLocalObjectStack();
	$var($Object, obj, getContent(urlc));
	{
		$var($ClassArray, arr$, classes);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$Class* c = arr$->get(i$);
			if ($nc(c)->isInstance(obj)) {
				return obj;
			}
		}
	}
	return nullptr;
}

ContentHandler::ContentHandler() {
}

$Class* ContentHandler::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ContentHandler, init$, void)},
		{"getContent", "(Ljava/net/URLConnection;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ContentHandler, getContent, $Object*, $URLConnection*), "java.io.IOException"},
		{"getContent", "(Ljava/net/URLConnection;[Ljava/lang/Class;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ContentHandler, getContent, $Object*, $URLConnection*, $ClassArray*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"java.net.ContentHandler",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ContentHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ContentHandler);
	});
	return class$;
}

$Class* ContentHandler::class$ = nullptr;

	} // net
} // java