#include <RequestPropertyValues$DummyURLConnection.h>
#include <RequestPropertyValues.h>
#include <java/net/URL.h>
#include <java/net/URLConnection.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $URLConnection = ::java::net::URLConnection;

void RequestPropertyValues$DummyURLConnection::init$($URL* url) {
	$URLConnection::init$(url);
}

void RequestPropertyValues$DummyURLConnection::connect() {
	this->connected = true;
}

RequestPropertyValues$DummyURLConnection::RequestPropertyValues$DummyURLConnection() {
}

$Class* RequestPropertyValues$DummyURLConnection::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/net/URL;)V", nullptr, 0, $method(RequestPropertyValues$DummyURLConnection, init$, void, $URL*)},
		{"connect", "()V", nullptr, $PUBLIC, $virtualMethod(RequestPropertyValues$DummyURLConnection, connect, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"RequestPropertyValues$DummyURLConnection", "RequestPropertyValues", "DummyURLConnection", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"RequestPropertyValues$DummyURLConnection",
		"java.net.URLConnection",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"RequestPropertyValues"
	};
	$loadClass(RequestPropertyValues$DummyURLConnection, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RequestPropertyValues$DummyURLConnection);
	});
	return class$;
}

$Class* RequestPropertyValues$DummyURLConnection::class$ = nullptr;