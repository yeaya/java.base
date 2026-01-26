#include <RelativeURLTest.h>

#include <java/net/URL.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $URL = ::java::net::URL;

$MethodInfo _RelativeURLTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(RelativeURLTest, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(RelativeURLTest, main, void, $StringArray*), "java.lang.Exception"},
	{}
};

$ClassInfo _RelativeURLTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"RelativeURLTest",
	"java.lang.Object",
	nullptr,
	nullptr,
	_RelativeURLTest_MethodInfo_
};

$Object* allocate$RelativeURLTest($Class* clazz) {
	return $of($alloc(RelativeURLTest));
}

void RelativeURLTest::init$() {
}

void RelativeURLTest::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($URL, base, $new($URL, "file:./"_s));
	$var($URL, url, $new($URL, base, "../images/dummy/../././foo.gif"_s));
	if (!$nc($(url->toString()))->equals("file:../images/foo.gif"_s)) {
		$throwNew($RuntimeException, $$str({"relative URL resolution failed expect: file:../images/foo.gif got: "_s, $(url->toString())}));
	}
}

RelativeURLTest::RelativeURLTest() {
}

$Class* RelativeURLTest::load$($String* name, bool initialize) {
	$loadClass(RelativeURLTest, name, initialize, &_RelativeURLTest_ClassInfo_, allocate$RelativeURLTest);
	return class$;
}

$Class* RelativeURLTest::class$ = nullptr;