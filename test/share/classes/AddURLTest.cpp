#include <AddURLTest.h>
#include <AddURLTest$MyURLClassLoader.h>
#include <java/net/URL.h>
#include <jcpp.h>

using $AddURLTest$MyURLClassLoader = ::AddURLTest$MyURLClassLoader;
using $URLArray = $Array<::java::net::URL>;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $URL = ::java::net::URL;

void AddURLTest::init$() {
}

void AddURLTest::main($StringArray* args) {
	$useLocalObjectStack();
	$var($URLArray, urls, $new($URLArray, {$$new($URL, "http://foobar.jar"_s)}));
	$var($AddURLTest$MyURLClassLoader, ucl, $new($AddURLTest$MyURLClassLoader, urls));
	ucl->addURL(nullptr);
	ucl->addURL($$new($URL, "http://foobar.jar"_s));
	ucl->addURL(nullptr);
	ucl->addURL($$new($URL, "http://foobar.jar"_s));
	ucl->addURL(nullptr);
	ucl->addURL($$new($URL, "http://foobar.jar"_s));
	$assign(urls, ucl->getURLs());
	if ($nc(urls)->length != 1) {
		$throwNew($RuntimeException, "Failed: There should only be 1 url in the list of search URLs"_s);
	}
	$var($URL, url, nullptr);
	for (int32_t i = 0; i < urls->length; ++i) {
		$assign(url, urls->get(i));
		if (url == nullptr || !url->equals($$new($URL, "http://foobar.jar"_s))) {
			$throwNew($RuntimeException, "Failed: The url should not be null and should be http://foobar.jar"_s);
		}
	}
}

AddURLTest::AddURLTest() {
}

$Class* AddURLTest::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AddURLTest, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(AddURLTest, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"AddURLTest$MyURLClassLoader", "AddURLTest", "MyURLClassLoader", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"AddURLTest",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"AddURLTest$MyURLClassLoader"
	};
	$loadClass(AddURLTest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AddURLTest);
	});
	return class$;
}

$Class* AddURLTest::class$ = nullptr;