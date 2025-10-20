#include <java/net/ContentHandler.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/URLConnection.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URLConnection = ::java::net::URLConnection;

namespace java {
	namespace net {

$MethodInfo _ContentHandler_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ContentHandler::*)()>(&ContentHandler::init$))},
	{"getContent", "(Ljava/net/URLConnection;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"getContent", "(Ljava/net/URLConnection;[Ljava/lang/Class;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _ContentHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.net.ContentHandler",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ContentHandler_MethodInfo_
};

$Object* allocate$ContentHandler($Class* clazz) {
	return $of($alloc(ContentHandler));
}

void ContentHandler::init$() {
}

$Object* ContentHandler::getContent($URLConnection* urlc, $ClassArray* classes) {
	$useLocalCurrentObjectStackCache();
	$var($Object, obj, getContent(urlc));
	{
		$var($ClassArray, arr$, classes);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$Class* c = arr$->get(i$);
			{
				if ($nc(c)->isInstance(obj)) {
					return $of(obj);
				}
			}
		}
	}
	return $of(nullptr);
}

ContentHandler::ContentHandler() {
}

$Class* ContentHandler::load$($String* name, bool initialize) {
	$loadClass(ContentHandler, name, initialize, &_ContentHandler_ClassInfo_, allocate$ContentHandler);
	return class$;
}

$Class* ContentHandler::class$ = nullptr;

	} // net
} // java