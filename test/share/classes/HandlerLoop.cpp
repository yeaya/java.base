#include <HandlerLoop.h>
#include <HandlerLoop$HandlerFactory.h>
#include <java/net/URL.h>
#include <java/net/URLConnection.h>
#include <jcpp.h>

using $HandlerLoop$HandlerFactory = ::HandlerLoop$HandlerFactory;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;

void HandlerLoop::init$() {
}

void HandlerLoop::main($StringArray* args) {
	$useLocalObjectStack();
	$URL::setURLStreamHandlerFactory($$new($HandlerLoop$HandlerFactory, "sun.net.www.protocol"_s));
	$var($URL, url, $new($URL, "file:///bogus/index.html"_s));
	$nc($System::out)->println($$str({"url = "_s, url}));
	url->openConnection();
}

HandlerLoop::HandlerLoop() {
}

$Class* HandlerLoop::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(HandlerLoop, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(HandlerLoop, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"HandlerLoop$Dummy", "HandlerLoop", "Dummy", $PRIVATE | $STATIC},
		{"HandlerLoop$HandlerFactory", "HandlerLoop", "HandlerFactory", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"HandlerLoop",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"HandlerLoop$Dummy,HandlerLoop$HandlerFactory"
	};
	$loadClass(HandlerLoop, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HandlerLoop);
	});
	return class$;
}

$Class* HandlerLoop::class$ = nullptr;