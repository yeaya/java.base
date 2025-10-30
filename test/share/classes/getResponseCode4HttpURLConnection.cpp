#include <getResponseCode4HttpURLConnection.h>

#include <MyHttpURLConnectionImpl.h>
#include <java/net/URL.h>
#include <java/net/UnknownServiceException.h>
#include <jcpp.h>

using $MyHttpURLConnectionImpl = ::MyHttpURLConnectionImpl;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $HttpURLConnection = ::java::net::HttpURLConnection;
using $URL = ::java::net::URL;
using $UnknownServiceException = ::java::net::UnknownServiceException;

$MethodInfo _getResponseCode4HttpURLConnection_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(getResponseCode4HttpURLConnection::*)()>(&getResponseCode4HttpURLConnection::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&getResponseCode4HttpURLConnection::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _getResponseCode4HttpURLConnection_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"getResponseCode4HttpURLConnection",
	"java.lang.Object",
	nullptr,
	nullptr,
	_getResponseCode4HttpURLConnection_MethodInfo_
};

$Object* allocate$getResponseCode4HttpURLConnection($Class* clazz) {
	return $of($alloc(getResponseCode4HttpURLConnection));
}

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
	$loadClass(getResponseCode4HttpURLConnection, name, initialize, &_getResponseCode4HttpURLConnection_ClassInfo_, allocate$getResponseCode4HttpURLConnection);
	return class$;
}

$Class* getResponseCode4HttpURLConnection::class$ = nullptr;