#include <GetURLsTest.h>
#include <GetURLsTest$MyURLClassLoader.h>
#include <java/io/File.h>
#include <java/lang/ClassLoader.h>
#include <java/net/URL.h>
#include <jcpp.h>

#undef TEST_DIR

using $GetURLsTest$MyURLClassLoader = ::GetURLsTest$MyURLClassLoader;
using $URLArray = $Array<::java::net::URL>;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;

$String* GetURLsTest::TEST_DIR = nullptr;

void GetURLsTest::init$() {
}

void GetURLsTest::main($StringArray* args) {
	$init(GetURLsTest);
	$useLocalObjectStack();
	$var($File, testJars, $new($File, GetURLsTest::TEST_DIR, "jars"_s));
	$var($GetURLsTest$MyURLClassLoader, ucl, $new($GetURLsTest$MyURLClassLoader, $$new($URLArray, {$($$new($File, "."_s)->toURL())})));
	p("initial urls = "_s, $(ucl->getURLs()));
	$var($URL, u, ucl->getResource("GetURLsTest.java"_s));
	if (u != nullptr) {
		p($$str({"found resource = "_s, u}));
	}
	ucl->addURL($($$new($File, testJars, "class_path_test.jar"_s)->toURL()));
	p("new urls = "_s, $(ucl->getURLs()));
	$Class* c = ucl->loadClass("Foo"_s);
	p($$str({"found class = "_s, c}));
}

void GetURLsTest::p($String* s, $URLArray* urls) {
	$init(GetURLsTest);
	$useLocalObjectStack();
	$nc($System::out)->print(s);
	if ($nc(urls)->length > 0) {
		for (int32_t i = 0; i < urls->length - 1; ++i) {
			$System::out->print($$str({urls->get(i), " "_s}));
		}
	}
	$System::out->println(urls->get(urls->length - 1));
}

void GetURLsTest::p($String* s) {
	$init(GetURLsTest);
	$nc($System::out)->println(s);
}

void GetURLsTest::clinit$($Class* clazz) {
	$assignStatic(GetURLsTest::TEST_DIR, $System::getProperty("test.src"_s, "."_s));
}

GetURLsTest::GetURLsTest() {
}

$Class* GetURLsTest::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"TEST_DIR", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(GetURLsTest, TEST_DIR)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(GetURLsTest, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(GetURLsTest, main, void, $StringArray*), "java.lang.Exception"},
		{"p", "(Ljava/lang/String;[Ljava/net/URL;)V", nullptr, $STATIC, $staticMethod(GetURLsTest, p, void, $String*, $URLArray*)},
		{"p", "(Ljava/lang/String;)V", nullptr, $STATIC, $staticMethod(GetURLsTest, p, void, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"GetURLsTest$MyURLClassLoader", "GetURLsTest", "MyURLClassLoader", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"GetURLsTest",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"GetURLsTest$MyURLClassLoader"
	};
	$loadClass(GetURLsTest, name, initialize, &classInfo$$, GetURLsTest::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(GetURLsTest);
	});
	return class$;
}

$Class* GetURLsTest::class$ = nullptr;