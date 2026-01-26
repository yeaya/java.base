#include <RelativeURL.h>

#include <java/net/URL.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;

$MethodInfo _RelativeURL_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(RelativeURL, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(RelativeURL, main, void, $StringArray*), "java.lang.Exception"},
	{}
};

$ClassInfo _RelativeURL_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"RelativeURL",
	"java.lang.Object",
	nullptr,
	nullptr,
	_RelativeURL_MethodInfo_
};

$Object* allocate$RelativeURL($Class* clazz) {
	return $of($alloc(RelativeURL));
}

void RelativeURL::init$() {
}

void RelativeURL::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($URL, base, $new($URL, "http"_s, "Layout"_s, -1, "example1.html"_s));
	$var($URL, derived, $new($URL, base, "Graph.html"_s));
	$assign(base, $new($URL, "http"_s, "www.sun.com"_s, -1, "index.html"_s));
	$assign(derived, $new($URL, base, "www.sun.com/index.html"_s));
}

RelativeURL::RelativeURL() {
}

$Class* RelativeURL::load$($String* name, bool initialize) {
	$loadClass(RelativeURL, name, initialize, &_RelativeURL_ClassInfo_, allocate$RelativeURL);
	return class$;
}

$Class* RelativeURL::class$ = nullptr;