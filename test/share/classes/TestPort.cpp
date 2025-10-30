#include <TestPort.h>

#include <java/net/MalformedURLException.h>
#include <java/net/URL.h>
#include <jcpp.h>

#undef MAX_VALUE

using $ClassInfo = ::java::lang::ClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $MalformedURLException = ::java::net::MalformedURLException;
using $URL = ::java::net::URL;

$MethodInfo _TestPort_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestPort::*)()>(&TestPort::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&TestPort::main)), "java.net.MalformedURLException"},
	{}
};

$ClassInfo _TestPort_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestPort",
	"java.lang.Object",
	nullptr,
	nullptr,
	_TestPort_MethodInfo_
};

$Object* allocate$TestPort($Class* clazz) {
	return $of($alloc(TestPort));
}

void TestPort::init$() {
}

void TestPort::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($URL, url, $new($URL, "http"_s, "server"_s, $Integer::MAX_VALUE, "/path"_s));
	$assign(url, $new($URL, $$str({"http://server:"_s, $$str($Integer::MAX_VALUE), "/path"_s})));
	$assign(url, $new($URL, "http://server/path"_s));
	$assign(url, $new($URL, "http"_s, "server"_s, -1, "/path"_s));
	try {
		$assign(url, $new($URL, "ftp"_s, "java.sun.com"_s, -20, "/pub/"_s));
		$throwNew($RuntimeException, "MalformedURLException not thrown!"_s);
	} catch ($MalformedURLException& e) {
	}
	try {
		$assign(url, $new($URL, "ftp://java.sun.com:-20/pub/"_s));
		$throwNew($RuntimeException, "MalformedURLException not thrown!"_s);
	} catch ($MalformedURLException& e) {
	}
}

TestPort::TestPort() {
}

$Class* TestPort::load$($String* name, bool initialize) {
	$loadClass(TestPort, name, initialize, &_TestPort_ClassInfo_, allocate$TestPort);
	return class$;
}

$Class* TestPort::class$ = nullptr;