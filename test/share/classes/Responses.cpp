#include <Responses.h>
#include <Responses$HttpServer.h>
#include <java/io/IOException.h>
#include <java/net/HttpURLConnection.h>
#include <java/net/Proxy.h>
#include <java/net/URL.h>
#include <java/net/URLConnection.h>
#include <jcpp.h>

#undef NO_PROXY

using $Responses$HttpServer = ::Responses$HttpServer;
using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $HttpURLConnection = ::java::net::HttpURLConnection;
using $Proxy = ::java::net::Proxy;
using $URL = ::java::net::URL;

void Responses::init$() {
}

$ObjectArray2* Responses::getTests() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"HTTP/1.1 200 OK"_s,
			"200"_s,
			"OK"_s
		}),
		$$new($ObjectArray, {
			"HTTP/1.1 404 "_s,
			"404"_s,
			nullptr
		}),
		$$new($ObjectArray, {
			"HTTP/1.1 200"_s,
			"200"_s,
			nullptr
		}),
		$$new($ObjectArray, {
			"HTTP/1.1"_s,
			"-1"_s,
			nullptr
		}),
		$$new($ObjectArray, {
			"Invalid"_s,
			"-1"_s,
			nullptr
		}),
		$$new($ObjectArray, {
			nullptr,
			"-1"_s,
			nullptr
		})
	});
}

void Responses::main($StringArray* args) {
	$useLocalObjectStack();
	$var($Responses$HttpServer, svr, $new($Responses$HttpServer));
	($$new($Thread, svr))->start();
	$var($String, authority, svr->authority());
	$nc($System::out)->println($$str({"Server listening on: "_s, authority}));
	int32_t failures = 0;
	$var($ObjectArray2, tests, getTests());
	for (int32_t i = 0; i < $nc(tests)->length; ++i) {
		$System::out->println("******************"_s);
		$System::out->println($$str({"Test with response: >"_s, $nc(tests->get(i))->get(0), "<"_s}));
		$var($URL, url, $new($URL, $$str({"http://"_s, authority, "/"_s, $$str(i)})));
		$init($Proxy);
		$var($HttpURLConnection, http, $cast($HttpURLConnection, url->openConnection($Proxy::NO_PROXY)));
		try {
			int32_t expectedCode = $Integer::parseInt($cast($String, $nc(tests->get(i))->get(1)));
			int32_t actualCode = $nc(http)->getResponseCode();
			if (actualCode != expectedCode) {
				$System::out->println($$str({"getResponseCode returned: "_s, $$str(actualCode), ", expected: "_s, $$str(expectedCode)}));
				++failures;
				continue;
			}
			$var($String, expectedPhrase, $cast($String, $nc(tests->get(i))->get(2)));
			$var($String, actualPhrase, http->getResponseMessage());
			if (actualPhrase == nullptr && expectedPhrase == nullptr) {
				continue;
			}
			if (!$nc(actualPhrase)->equals(expectedPhrase)) {
				$System::out->println($$str({"getResponseMessage returned: "_s, actualPhrase, ", expected: "_s, expectedPhrase}));
			}
		} catch ($IOException& e) {
			$nc($System::err)->println($$str({"Test failed for >"_s, $nc(tests->get(i))->get(0), "<: "_s, e}));
			e->printStackTrace();
			++failures;
		}
	}
	svr->shutdown();
	if (failures > 0) {
		$throwNew($Exception, $$str({$$str(failures), " sub-test(s) failed."_s}));
	}
}

Responses::Responses() {
}

$Class* Responses::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Responses, init$, void)},
		{"getTests", "()[[Ljava/lang/Object;", nullptr, $STATIC, $staticMethod(Responses, getTests, $ObjectArray2*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Responses, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Responses$HttpServer", "Responses", "HttpServer", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Responses",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"Responses$HttpServer"
	};
	$loadClass(Responses, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Responses);
	});
	return class$;
}

$Class* Responses::class$ = nullptr;