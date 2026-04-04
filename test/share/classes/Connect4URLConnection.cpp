#include <Connect4URLConnection.h>
#include <java/io/IOException.h>
#include <java/net/MalformedURLException.h>
#include <java/net/URL.h>
#include <java/net/URLConnection.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $MalformedURLException = ::java::net::MalformedURLException;
using $URL = ::java::net::URL;
using $URLConnection = ::java::net::URLConnection;

void Connect4URLConnection::init$() {
}

void Connect4URLConnection::main($StringArray* s) {
	$useLocalObjectStack();
	try {
		$var($URL, url, $new($URL, "file:azwe.txt"_s));
		$var($URLConnection, urlConnection, url->openConnection());
		$nc(urlConnection)->connect();
		$throwNew($RuntimeException, "No FileNotFoundException thrown."_s);
	} catch ($MalformedURLException& e) {
	} catch ($IOException& e) {
	}
}

Connect4URLConnection::Connect4URLConnection() {
}

$Class* Connect4URLConnection::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Connect4URLConnection, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Connect4URLConnection, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Connect4URLConnection",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Connect4URLConnection, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Connect4URLConnection);
	});
	return class$;
}

$Class* Connect4URLConnection::class$ = nullptr;