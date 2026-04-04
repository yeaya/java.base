#include <MyHttpURLConnectionImpl.h>
#include <java/net/HttpURLConnection.h>
#include <java/net/URL.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HttpURLConnection = ::java::net::HttpURLConnection;
using $URL = ::java::net::URL;

void MyHttpURLConnectionImpl::init$($URL* url) {
	$HttpURLConnection::init$(url);
}

bool MyHttpURLConnectionImpl::usingProxy() {
	return true;
}

void MyHttpURLConnectionImpl::connect() {
}

void MyHttpURLConnectionImpl::disconnect() {
}

MyHttpURLConnectionImpl::MyHttpURLConnectionImpl() {
}

$Class* MyHttpURLConnectionImpl::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/net/URL;)V", nullptr, 0, $method(MyHttpURLConnectionImpl, init$, void, $URL*)},
		{"connect", "()V", nullptr, $PUBLIC, $virtualMethod(MyHttpURLConnectionImpl, connect, void)},
		{"disconnect", "()V", nullptr, $PUBLIC, $virtualMethod(MyHttpURLConnectionImpl, disconnect, void)},
		{"usingProxy", "()Z", nullptr, $PUBLIC, $virtualMethod(MyHttpURLConnectionImpl, usingProxy, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"MyHttpURLConnectionImpl",
		"java.net.HttpURLConnection",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(MyHttpURLConnectionImpl, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MyHttpURLConnectionImpl);
	});
	return class$;
}

$Class* MyHttpURLConnectionImpl::class$ = nullptr;