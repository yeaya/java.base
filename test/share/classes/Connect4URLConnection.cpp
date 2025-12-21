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

$MethodInfo _Connect4URLConnection_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Connect4URLConnection::*)()>(&Connect4URLConnection::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Connect4URLConnection::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _Connect4URLConnection_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Connect4URLConnection",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Connect4URLConnection_MethodInfo_
};

$Object* allocate$Connect4URLConnection($Class* clazz) {
	return $of($alloc(Connect4URLConnection));
}

void Connect4URLConnection::init$() {
}

void Connect4URLConnection::main($StringArray* s) {
	$useLocalCurrentObjectStackCache();
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
	$loadClass(Connect4URLConnection, name, initialize, &_Connect4URLConnection_ClassInfo_, allocate$Connect4URLConnection);
	return class$;
}

$Class* Connect4URLConnection::class$ = nullptr;