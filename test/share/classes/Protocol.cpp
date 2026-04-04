#include <Protocol.h>
#include <java/net/URL.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;

void Protocol::init$() {
}

void Protocol::main($StringArray* args) {
	$useLocalObjectStack();
	$var($URL, url, $new($URL, "file://bogus/index.html"_s));
	$var($URL, url2, $new($URL, url, "here.pl?notaspec:atall"_s));
}

Protocol::Protocol() {
}

$Class* Protocol::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Protocol, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Protocol, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Protocol",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Protocol, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Protocol);
	});
	return class$;
}

$Class* Protocol::class$ = nullptr;