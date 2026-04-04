#include <java/net/UnknownContentHandler.h>
#include <java/io/InputStream.h>
#include <java/net/ContentHandler.h>
#include <java/net/URLConnection.h>
#include <jcpp.h>

#undef INSTANCE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ContentHandler = ::java::net::ContentHandler;
using $URLConnection = ::java::net::URLConnection;

namespace java {
	namespace net {

$ContentHandler* UnknownContentHandler::INSTANCE = nullptr;

void UnknownContentHandler::init$() {
	$ContentHandler::init$();
}

$Object* UnknownContentHandler::getContent($URLConnection* uc) {
	return $nc(uc)->getInputStream();
}

void UnknownContentHandler::clinit$($Class* clazz) {
	$assignStatic(UnknownContentHandler::INSTANCE, $new(UnknownContentHandler));
}

UnknownContentHandler::UnknownContentHandler() {
}

$Class* UnknownContentHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"INSTANCE", "Ljava/net/ContentHandler;", nullptr, $STATIC | $FINAL, $staticField(UnknownContentHandler, INSTANCE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(UnknownContentHandler, init$, void)},
		{"getContent", "(Ljava/net/URLConnection;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(UnknownContentHandler, getContent, $Object*, $URLConnection*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.net.UnknownContentHandler",
		"java.net.ContentHandler",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(UnknownContentHandler, name, initialize, &classInfo$$, UnknownContentHandler::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(UnknownContentHandler);
	});
	return class$;
}

$Class* UnknownContentHandler::class$ = nullptr;

	} // net
} // java