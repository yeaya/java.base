#include <getResponseCode4HttpURLConnection.h>
#include <MyHttpURLConnectionImpl.h>
#include <java/net/URL.h>
#include <java/net/UnknownServiceException.h>
#include <jcpp.h>

using $MyHttpURLConnectionImpl = ::MyHttpURLConnectionImpl;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $URL = ::java::net::URL;
using $UnknownServiceException = ::java::net::UnknownServiceException;

void getResponseCode4HttpURLConnection::init$() {
}

void getResponseCode4HttpURLConnection::main($StringArray* args) {
	try {
		$var($MyHttpURLConnectionImpl, myCon, $new($MyHttpURLConnectionImpl, nullptr));
		int32_t responseCode = myCon->getResponseCode();
		if (responseCode == -1) {
			$throwNew($RuntimeException, "java.net.HttpURLConnection should provide implementation for getResponseCode()"_s);
		}
	} catch ($UnknownServiceException& e) {
		$nc($System::out)->println("PASS"_s);
	}
}

getResponseCode4HttpURLConnection::getResponseCode4HttpURLConnection() {
}

$Class* getResponseCode4HttpURLConnection::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(getResponseCode4HttpURLConnection, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(getResponseCode4HttpURLConnection, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"getResponseCode4HttpURLConnection",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(getResponseCode4HttpURLConnection, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(getResponseCode4HttpURLConnection);
	});
	return class$;
}

$Class* getResponseCode4HttpURLConnection::class$ = nullptr;