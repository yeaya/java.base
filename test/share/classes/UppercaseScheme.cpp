#include <UppercaseScheme.h>
#include <java/net/URL.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;

void UppercaseScheme::init$() {
}

void UppercaseScheme::main($StringArray* args) {
	$var($URL, u, $new($URL, "HTTP"_s, "10:100::1234"_s, 9999, "/index.html"_s));
}

UppercaseScheme::UppercaseScheme() {
}

$Class* UppercaseScheme::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(UppercaseScheme, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(UppercaseScheme, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"UppercaseScheme",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(UppercaseScheme, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UppercaseScheme);
	});
	return class$;
}

$Class* UppercaseScheme::class$ = nullptr;