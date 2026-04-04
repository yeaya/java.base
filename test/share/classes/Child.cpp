#include <Child.h>
#include <java/net/URL.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;

void Child::init$() {
}

void Child::main($StringArray* args) {
	$useLocalObjectStack();
	if ($nc(args)->length != 1) {
		$nc($System::err)->println("Usage: java Child <protocol>"_s);
		return;
	}
	$var($String, protocol, args->get(0));
	$var($URL, url, $new($URL, $$str({protocol, "://"_s})));
	$var($String, s, url->toExternalForm());
	if (!$nc(s)->equals(protocol)) {
		$nc($System::err)->println($$str({"Expected url.toExternalForm to return "_s, protocol, ", but got: "_s, s}));
		$System::exit(1);
	}
}

Child::Child() {
}

$Class* Child::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Child, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Child, main, void, $StringArray*), "java.net.MalformedURLException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Child",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Child, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Child);
	});
	return class$;
}

$Class* Child::class$ = nullptr;