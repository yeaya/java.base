#include <MyHttpURLConnectionImpl.h>

#include <java/net/HttpURLConnection.h>
#include <java/net/URL.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HttpURLConnection = ::java::net::HttpURLConnection;
using $URL = ::java::net::URL;

$MethodInfo _MyHttpURLConnectionImpl_MethodInfo_[] = {
	{"<init>", "(Ljava/net/URL;)V", nullptr, 0, $method(static_cast<void(MyHttpURLConnectionImpl::*)($URL*)>(&MyHttpURLConnectionImpl::init$))},
	{"connect", "()V", nullptr, $PUBLIC},
	{"disconnect", "()V", nullptr, $PUBLIC},
	{"usingProxy", "()Z", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MyHttpURLConnectionImpl_ClassInfo_ = {
	$ACC_SUPER,
	"MyHttpURLConnectionImpl",
	"java.net.HttpURLConnection",
	nullptr,
	nullptr,
	_MyHttpURLConnectionImpl_MethodInfo_
};

$Object* allocate$MyHttpURLConnectionImpl($Class* clazz) {
	return $of($alloc(MyHttpURLConnectionImpl));
}

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
	$loadClass(MyHttpURLConnectionImpl, name, initialize, &_MyHttpURLConnectionImpl_ClassInfo_, allocate$MyHttpURLConnectionImpl);
	return class$;
}

$Class* MyHttpURLConnectionImpl::class$ = nullptr;