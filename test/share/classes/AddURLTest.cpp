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
using $URLClassLoader = ::java::net::URLClassLoader;

$MethodInfo _AddURLTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AddURLTest::*)()>(&AddURLTest::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&AddURLTest::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _AddURLTest_InnerClassesInfo_[] = {
	{"AddURLTest$MyURLClassLoader", "AddURLTest", "MyURLClassLoader", $STATIC},
	{}
};

$ClassInfo _AddURLTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"AddURLTest",
	"java.lang.Object",
	nullptr,
	nullptr,
	_AddURLTest_MethodInfo_,
	nullptr,
	nullptr,
	_AddURLTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	"AddURLTest$MyURLClassLoader"
};

$Object* allocate$AddURLTest($Class* clazz) {
	return $of($alloc(AddURLTest));
}

void AddURLTest::init$() {
}

void AddURLTest::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
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
	for (int32_t i = 0; i < $nc(urls)->length; ++i) {
		$assign(url, urls->get(i));
		if (url == nullptr || !$nc(url)->equals($$new($URL, "http://foobar.jar"_s))) {
			$throwNew($RuntimeException, "Failed: The url should not be null and should be http://foobar.jar"_s);
		}
	}
}

AddURLTest::AddURLTest() {
}

$Class* AddURLTest::load$($String* name, bool initialize) {
	$loadClass(AddURLTest, name, initialize, &_AddURLTest_ClassInfo_, allocate$AddURLTest);
	return class$;
}

$Class* AddURLTest::class$ = nullptr;