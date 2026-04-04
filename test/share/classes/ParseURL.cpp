#include <ParseURL.h>
#include <java/net/URL.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $URL = ::java::net::URL;

void ParseURL::init$() {
}

void ParseURL::main($StringArray* args) {
	$useLocalObjectStack();
	$var($String, url, $$new($URL, $$new($URL, "http://cnn.com"_s), "index.html"_s)->toExternalForm());
	if ($nc(url)->equalsIgnoreCase("http://cnn.com/index.html"_s)) {
		$nc($System::err)->println("Success!!"_s);
	} else {
		$throwNew($RuntimeException, $$str({"The result is "_s, url, ", it should be http://cnn.com/index.html"_s}));
	}
}

ParseURL::ParseURL() {
}

$Class* ParseURL::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ParseURL, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ParseURL, main, void, $StringArray*), "java.net.MalformedURLException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"ParseURL",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ParseURL, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ParseURL);
	});
	return class$;
}

$Class* ParseURL::class$ = nullptr;