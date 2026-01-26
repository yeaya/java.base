#include <RelativePath.h>

#include <java/net/URI.h>
#include <java/net/URL.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $URI = ::java::net::URI;
using $URL = ::java::net::URL;

$MethodInfo _RelativePath_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(RelativePath, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(RelativePath, main, void, $StringArray*), "java.lang.Exception"},
	{}
};

$ClassInfo _RelativePath_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"RelativePath",
	"java.lang.Object",
	nullptr,
	nullptr,
	_RelativePath_MethodInfo_
};

$Object* allocate$RelativePath($Class* clazz) {
	return $of($alloc(RelativePath));
}

void RelativePath::init$() {
}

void RelativePath::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($String, uri1, "http://h/../d1/"_s);
	$var($String, uri2, "../d/i.htm"_s);
	$var($String, expected, "http://h/../d/i.htm"_s);
	$var($URI, uri, $new($URI, uri1));
	$var($String, s1, $nc($(uri->resolve(uri2)))->toString());
	$var($URL, url, $new($URL, uri1));
	$var($URL, url2, $new($URL, url, uri2));
	$var($String, s2, url2->toString());
	if (!(expected->equalsIgnoreCase(s1))) {
		$throwNew($RuntimeException, $$str({"URI.resolve didn\'t return expected result ["_s, s1, " versus "_s, expected, "]"_s}));
	}
	if (!(expected->equalsIgnoreCase(s2))) {
		$throwNew($RuntimeException, $$str({"URL(url, String) didn\'t return expected result ["_s, s2, " versus "_s, expected, "]"_s}));
	}
}

RelativePath::RelativePath() {
}

$Class* RelativePath::load$($String* name, bool initialize) {
	$loadClass(RelativePath, name, initialize, &_RelativePath_ClassInfo_, allocate$RelativePath);
	return class$;
}

$Class* RelativePath::class$ = nullptr;