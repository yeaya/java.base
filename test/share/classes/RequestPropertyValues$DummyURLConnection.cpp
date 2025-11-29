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

$MethodInfo _RequestPropertyValues$DummyURLConnection_MethodInfo_[] = {
	{"<init>", "(Ljava/net/URL;)V", nullptr, 0, $method(static_cast<void(RequestPropertyValues$DummyURLConnection::*)($URL*)>(&RequestPropertyValues$DummyURLConnection::init$))},
	{"connect", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _RequestPropertyValues$DummyURLConnection_InnerClassesInfo_[] = {
	{"RequestPropertyValues$DummyURLConnection", "RequestPropertyValues", "DummyURLConnection", $STATIC},
	{}
};

$ClassInfo _RequestPropertyValues$DummyURLConnection_ClassInfo_ = {
	$ACC_SUPER,
	"RequestPropertyValues$DummyURLConnection",
	"java.net.URLConnection",
	nullptr,
	nullptr,
	_RequestPropertyValues$DummyURLConnection_MethodInfo_,
	nullptr,
	nullptr,
	_RequestPropertyValues$DummyURLConnection_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"RequestPropertyValues"
};

$Object* allocate$RequestPropertyValues$DummyURLConnection($Class* clazz) {
	return $of($alloc(RequestPropertyValues$DummyURLConnection));
}

void RequestPropertyValues$DummyURLConnection::init$($URL* url) {
	$URLConnection::init$(url);
}

void RequestPropertyValues$DummyURLConnection::connect() {
	this->connected = true;
}

RequestPropertyValues$DummyURLConnection::RequestPropertyValues$DummyURLConnection() {
}

$Class* RequestPropertyValues$DummyURLConnection::load$($String* name, bool initialize) {
	$loadClass(RequestPropertyValues$DummyURLConnection, name, initialize, &_RequestPropertyValues$DummyURLConnection_ClassInfo_, allocate$RequestPropertyValues$DummyURLConnection);
	return class$;
}

$Class* RequestPropertyValues$DummyURLConnection::class$ = nullptr;