#include <ParseAuthority.h>
#include <java/net/MalformedURLException.h>
#include <java/net/URL.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $MalformedURLException = ::java::net::MalformedURLException;
using $URL = ::java::net::URL;

void ParseAuthority::init$() {
}

void ParseAuthority::main($StringArray* args) {
	$useLocalObjectStack();
	try {
		$var($URL, u1, $new($URL, "http://[fe80::]9999/path1/path2/"_s));
		$throwNew($RuntimeException, "URL parser didn\'t catch invalid authority field"_s);
	} catch ($MalformedURLException& me) {
		if (!$$nc(me->getMessage())->startsWith("Invalid authority field"_s)) {
			$throwNew($RuntimeException, "URL parser didn\'t catch invalid authority field"_s);
		}
	}
	try {
		$var($URL, u2, $new($URL, "http://[www.sun.com]:9999/path1/path2/"_s));
		$throwNew($RuntimeException, "URL parser didn\'t catch invalid host"_s);
	} catch ($MalformedURLException& me) {
		if (!$$nc(me->getMessage())->startsWith("Invalid host"_s)) {
			$throwNew($RuntimeException, "URL parser didn\'t catch invalid host"_s);
		}
	}
}

ParseAuthority::ParseAuthority() {
}

$Class* ParseAuthority::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ParseAuthority, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ParseAuthority, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"ParseAuthority",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ParseAuthority, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ParseAuthority);
	});
	return class$;
}

$Class* ParseAuthority::class$ = nullptr;