#include <handlers/jar/Handler.h>
#include <java/net/URL.h>
#include <java/net/URLConnection.h>
#include <java/net/URLStreamHandler.h>
#include <java/util/Collections.h>
#include <java/util/HashSet.h>
#include <java/util/Set.h>
#include <jcpp.h>

#undef URLS

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $URLConnection = ::java::net::URLConnection;
using $URLStreamHandler = ::java::net::URLStreamHandler;
using $Collections = ::java::util::Collections;
using $HashSet = ::java::util::HashSet;
using $Set = ::java::util::Set;

namespace handlers {
	namespace jar {

$Set* Handler::URLS = nullptr;

void Handler::init$() {
	$URLStreamHandler::init$();
}

$URLConnection* Handler::openConnection($URL* u) {
	$nc(Handler::URLS)->add(u);
	return nullptr;
}

void Handler::clinit$($Class* clazz) {
	$assignStatic(Handler::URLS, $Collections::synchronizedSet($$new($HashSet)));
}

Handler::Handler() {
}

$Class* Handler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"URLS", "Ljava/util/Set;", "Ljava/util/Set<Ljava/net/URL;>;", $PUBLIC | $STATIC, $staticField(Handler, URLS)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Handler, init$, void)},
		{"openConnection", "(Ljava/net/URL;)Ljava/net/URLConnection;", nullptr, $PROTECTED, $virtualMethod(Handler, openConnection, $URLConnection*, $URL*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"handlers.jar.Handler",
		"java.net.URLStreamHandler",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Handler, name, initialize, &classInfo$$, Handler::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Handler);
	});
	return class$;
}

$Class* Handler::class$ = nullptr;

	} // jar
} // handlers