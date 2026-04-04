#include <B4148751.h>
#include <java/net/URI.h>
#include <java/net/URL.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $URI = ::java::net::URI;
using $URL = ::java::net::URL;

$String* B4148751::scheme = nullptr;
$String* B4148751::auth = nullptr;
$String* B4148751::path = nullptr;
$String* B4148751::unencoded = nullptr;
$String* B4148751::encoded = nullptr;

void B4148751::init$() {
}

void B4148751::main($StringArray* args) {
	$init(B4148751);
	$useLocalObjectStack();
	$var($URL, url, nullptr);
	$var($URL, url1, nullptr);
	try {
		$assign(url, $new($URL, B4148751::unencoded));
		$assign(url1, $new($URL, B4148751::encoded));
	} catch ($Exception& e) {
		$nc($System::out)->println($$str({"Unexpected exception :"_s, e}));
		$System::exit(-1);
	}
	if ($nc(url)->sameFile(url1)) {
		$throwNew($RuntimeException, "URL does not understand escaping"_s);
	}
	$var($URI, uri, $nc(url1)->toURI());
	if (!$$nc($nc(uri)->getPath())->equals(B4148751::path)) {
		$throwNew($RuntimeException, $$str({"Got: "_s, $(uri->getPath()), " expected: "_s, B4148751::path}));
	}
	$var($URI, uri1, $new($URI, B4148751::scheme, B4148751::auth, B4148751::path));
	$assign(url, uri->toURL());
	if (!$$nc($nc(url)->toString())->equals(B4148751::encoded)) {
		$throwNew($RuntimeException, $$str({"Got: "_s, $(url->toString()), " expected: "_s, B4148751::encoded}));
	}
}

B4148751::B4148751() {
}

void B4148751::clinit$($Class* clazz) {
	$assignStatic(B4148751::scheme, "http"_s);
	$assignStatic(B4148751::auth, "web2.javasoft.com"_s);
	$assignStatic(B4148751::path, "/some file.html"_s);
	$assignStatic(B4148751::unencoded, "http://web2.javasoft.com/some file.html"_s);
	$assignStatic(B4148751::encoded, "http://web2.javasoft.com/some%20file.html"_s);
}

$Class* B4148751::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"scheme", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(B4148751, scheme)},
		{"auth", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(B4148751, auth)},
		{"path", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(B4148751, path)},
		{"unencoded", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(B4148751, unencoded)},
		{"encoded", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(B4148751, encoded)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(B4148751, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(B4148751, main, void, $StringArray*), "java.net.URISyntaxException,java.net.MalformedURLException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"B4148751",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(B4148751, name, initialize, &classInfo$$, B4148751::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(B4148751);
	});
	return class$;
}

$Class* B4148751::class$ = nullptr;