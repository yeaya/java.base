#include <SpecifyHandler.h>
#include <java/net/URL.h>
#include <java/net/URLStreamHandler.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $URLStreamHandler = ::java::net::URLStreamHandler;

void SpecifyHandler::init$() {
}

void SpecifyHandler::main($StringArray* args) {
	$useLocalObjectStack();
	$var($URLStreamHandler, handler, getFileHandler());
	$var($URL, url1, $new($URL, "file"_s, ""_s, -1, "/bogus/index.html"_s, handler));
	$var($URL, url2, $new($URL, nullptr, "file://bogus.index.html"_s, handler));
}

$URLStreamHandler* SpecifyHandler::getFileHandler() {
	$load(SpecifyHandler);
	$beforeCallerSensitive();
	$Class* c = $Class::forName("sun.net.www.protocol.file.Handler"_s);
	return $cast($URLStreamHandler, c->newInstance());
}

SpecifyHandler::SpecifyHandler() {
}

$Class* SpecifyHandler::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SpecifyHandler, init$, void)},
		{"getFileHandler", "()Ljava/net/URLStreamHandler;", nullptr, $PRIVATE | $STATIC, $staticMethod(SpecifyHandler, getFileHandler, $URLStreamHandler*), "java.lang.Exception"},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(SpecifyHandler, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"SpecifyHandler",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(SpecifyHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SpecifyHandler);
	});
	return class$;
}

$Class* SpecifyHandler::class$ = nullptr;