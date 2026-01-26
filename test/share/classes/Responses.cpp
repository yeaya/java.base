#include <Responses.h>

#include <Responses$HttpServer.h>
#include <java/io/IOException.h>
#include <java/lang/Runnable.h>
#include <java/net/HttpURLConnection.h>
#include <java/net/Proxy.h>
#include <java/net/URL.h>
#include <java/net/URLConnection.h>
#include <jcpp.h>

#undef NO_PROXY

using $Responses$HttpServer = ::Responses$HttpServer;
using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $IOException = ::java::io::IOException;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $HttpURLConnection = ::java::net::HttpURLConnection;
using $Proxy = ::java::net::Proxy;
using $URL = ::java::net::URL;

$MethodInfo _Responses_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Responses, init$, void)},
	{"getTests", "()[[Ljava/lang/Object;", nullptr, $STATIC, $staticMethod(Responses, getTests, $ObjectArray2*)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Responses, main, void, $StringArray*), "java.lang.Exception"},
	{}
};

$InnerClassInfo _Responses_InnerClassesInfo_[] = {
	{"Responses$HttpServer", "Responses", "HttpServer", $STATIC},
	{}
};

$ClassInfo _Responses_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Responses",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Responses_MethodInfo_,
	nullptr,
	nullptr,
	_Responses_InnerClassesInfo_,
	nullptr,
	nullptr,
	"Responses$HttpServer"
};

$Object* allocate$Responses($Class* clazz) {
	return $of($alloc(Responses));
}

void Responses::init$() {
}

$ObjectArray2* Responses::getTests() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("HTTP/1.1 200 OK"_s),
			$of("200"_s),
			$of("OK"_s)
		}),
		$$new($ObjectArray, {
			$of("HTTP/1.1 404 "_s),
			$of("404"_s),
			($Object*)nullptr
		}),
		$$new($ObjectArray, {
			$of("HTTP/1.1 200"_s),
			$of("200"_s),
			($Object*)nullptr
		}),
		$$new($ObjectArray, {
			$of("HTTP/1.1"_s),
			$of("-1"_s),
			($Object*)nullptr
		}),
		$$new($ObjectArray, {
			$of("Invalid"_s),
			$of("-1"_s),
			($Object*)nullptr
		}),
		$$new($ObjectArray, {
			($Object*)nullptr,
			$of("-1"_s),
			($Object*)nullptr
		})
	});
}

void Responses::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($Responses$HttpServer, svr, $new($Responses$HttpServer));
	($$new($Thread, static_cast<$Runnable*>(svr)))->start();
	$var($String, authority, svr->authority());
	$nc($System::out)->println($$str({"Server listening on: "_s, authority}));
	int32_t failures = 0;
	$var($ObjectArray2, tests, getTests());
	for (int32_t i = 0; i < $nc(tests)->length; ++i) {
		$nc($System::out)->println("******************"_s);
		$nc($System::out)->println($$str({"Test with response: >"_s, $nc(tests->get(i))->get(0), "<"_s}));
		$var($URL, url, $new($URL, $$str({"http://"_s, authority, "/"_s, $$str(i)})));
		$init($Proxy);
		$var($HttpURLConnection, http, $cast($HttpURLConnection, url->openConnection($Proxy::NO_PROXY)));
		try {
			int32_t expectedCode = $Integer::parseInt($cast($String, $nc(tests->get(i))->get(1)));
			int32_t actualCode = $nc(http)->getResponseCode();
			if (actualCode != expectedCode) {
				$nc($System::out)->println($$str({"getResponseCode returned: "_s, $$str(actualCode), ", expected: "_s, $$str(expectedCode)}));
				++failures;
				continue;
			}
			$var($String, expectedPhrase, $cast($String, $nc(tests->get(i))->get(2)));
			$var($String, actualPhrase, http->getResponseMessage());
			if (actualPhrase == nullptr && expectedPhrase == nullptr) {
				continue;
			}
			if (!$nc(actualPhrase)->equals(expectedPhrase)) {
				$nc($System::out)->println($$str({"getResponseMessage returned: "_s, actualPhrase, ", expected: "_s, expectedPhrase}));
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
	$loadClass(Responses, name, initialize, &_Responses_ClassInfo_, allocate$Responses);
	return class$;
}

$Class* Responses::class$ = nullptr;