#include <ParseURL.h>

#include <java/net/URL.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $URL = ::java::net::URL;

$MethodInfo _ParseURL_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ParseURL, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ParseURL, main, void, $StringArray*), "java.net.MalformedURLException"},
	{}
};

$ClassInfo _ParseURL_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ParseURL",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ParseURL_MethodInfo_
};

$Object* allocate$ParseURL($Class* clazz) {
	return $of($alloc(ParseURL));
}

void ParseURL::init$() {
}

void ParseURL::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($String, url, $$new($URL, $$new($URL, "http://cnn.com"_s), "index.html"_s)->toExternalForm());
	if ($nc(url)->equalsIgnoreCase("http://cnn.com/index.html"_s)) {
		$nc($System::err)->println("Success!!"_s);
	} else {
		$throwNew($RuntimeException, $$str({"The result is "_s, url, ", it should be http://cnn.com/index.html"_s}));
	}
}

ParseURL::ParseURL() {
}

$Class* ParseURL::load$($String* name, bool initialize) {
	$loadClass(ParseURL, name, initialize, &_ParseURL_ClassInfo_, allocate$ParseURL);
	return class$;
}

$Class* ParseURL::class$ = nullptr;