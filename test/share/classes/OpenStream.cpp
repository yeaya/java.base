#include <OpenStream.h>

#include <java/io/InputStream.h>
#include <java/net/Proxy.h>
#include <java/net/URL.h>
#include <java/net/URLConnection.h>
#include <java/net/UnknownHostException.h>
#include <jcpp.h>

#undef NO_PROXY

using $InputStream = ::java::io::InputStream;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Proxy = ::java::net::Proxy;
using $URL = ::java::net::URL;
using $URLConnection = ::java::net::URLConnection;
using $UnknownHostException = ::java::net::UnknownHostException;

$FieldInfo _OpenStream_FieldInfo_[] = {
	{"badHttp", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(OpenStream, badHttp)},
	{"badUnc", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(OpenStream, badUnc)},
	{}
};

$MethodInfo _OpenStream_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(OpenStream, init$, void)},
	{"checkThrows", "(Ljava/lang/String;)V", nullptr, $STATIC, $staticMethod(OpenStream, checkThrows, void, $String*), "java.io.IOException"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(OpenStream, main, void, $StringArray*), "java.io.IOException"},
	{"testHttp", "()V", nullptr, $STATIC, $staticMethod(OpenStream, testHttp, void), "java.io.IOException"},
	{"testUnc", "()V", nullptr, $STATIC, $staticMethod(OpenStream, testUnc, void), "java.io.IOException"},
	{}
};

$ClassInfo _OpenStream_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"OpenStream",
	"java.lang.Object",
	nullptr,
	_OpenStream_FieldInfo_,
	_OpenStream_MethodInfo_
};

$Object* allocate$OpenStream($Class* clazz) {
	return $of($alloc(OpenStream));
}

$String* OpenStream::badHttp = nullptr;
$String* OpenStream::badUnc = nullptr;

void OpenStream::init$() {
}

void OpenStream::main($StringArray* args) {
	$init(OpenStream);
	testHttp();
	testUnc();
}

void OpenStream::testHttp() {
	$init(OpenStream);
	checkThrows(OpenStream::badHttp);
}

void OpenStream::testUnc() {
	$init(OpenStream);
	bool isWindows = $nc($($System::getProperty("os.name"_s)))->startsWith("Windows"_s);
	if (isWindows) {
		checkThrows(OpenStream::badUnc);
	}
}

void OpenStream::checkThrows($String* url) {
	$init(OpenStream);
	$useLocalCurrentObjectStackCache();
	$var($URL, u, $new($URL, url));
	try {
		$init($Proxy);
		$var($InputStream, in, $nc($(u->openConnection($Proxy::NO_PROXY)))->getInputStream());
	} catch ($UnknownHostException& x) {
		$nc($System::out)->println("UnknownHostException is thrown as expected."_s);
		return;
	}
	$throwNew($RuntimeException, $$str({"Expected UnknownHostException to be thrown for "_s, url}));
}

OpenStream::OpenStream() {
}

void clinit$OpenStream($Class* class$) {
	$assignStatic(OpenStream::badHttp, "http://foo.bar.baz/"_s);
	$assignStatic(OpenStream::badUnc, "file://h7qbp368oix47/not-exist.txt"_s);
}

$Class* OpenStream::load$($String* name, bool initialize) {
	$loadClass(OpenStream, name, initialize, &_OpenStream_ClassInfo_, clinit$OpenStream, allocate$OpenStream);
	return class$;
}

$Class* OpenStream::class$ = nullptr;