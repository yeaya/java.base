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
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $URLClassLoader = ::java::net::URLClassLoader;

$FieldInfo _GetURLsTest_FieldInfo_[] = {
	{"TEST_DIR", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(GetURLsTest, TEST_DIR)},
	{}
};

$MethodInfo _GetURLsTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(GetURLsTest::*)()>(&GetURLsTest::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&GetURLsTest::main)), "java.lang.Exception"},
	{"p", "(Ljava/lang/String;[Ljava/net/URL;)V", nullptr, $STATIC, $method(static_cast<void(*)($String*,$URLArray*)>(&GetURLsTest::p))},
	{"p", "(Ljava/lang/String;)V", nullptr, $STATIC, $method(static_cast<void(*)($String*)>(&GetURLsTest::p))},
	{}
};

$InnerClassInfo _GetURLsTest_InnerClassesInfo_[] = {
	{"GetURLsTest$MyURLClassLoader", "GetURLsTest", "MyURLClassLoader", $STATIC},
	{}
};

$ClassInfo _GetURLsTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"GetURLsTest",
	"java.lang.Object",
	nullptr,
	_GetURLsTest_FieldInfo_,
	_GetURLsTest_MethodInfo_,
	nullptr,
	nullptr,
	_GetURLsTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	"GetURLsTest$MyURLClassLoader"
};

$Object* allocate$GetURLsTest($Class* clazz) {
	return $of($alloc(GetURLsTest));
}

$String* GetURLsTest::TEST_DIR = nullptr;

void GetURLsTest::init$() {
}

void GetURLsTest::main($StringArray* args) {
	$init(GetURLsTest);
	$useLocalCurrentObjectStackCache();
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
	$useLocalCurrentObjectStackCache();
	$nc($System::out)->print(s);
	if ($nc(urls)->length > 0) {
		for (int32_t i = 0; i < urls->length - 1; ++i) {
			$nc($System::out)->print($$str({urls->get(i), " "_s}));
		}
	}
	$nc($System::out)->println($of($nc(urls)->get(urls->length - 1)));
}

void GetURLsTest::p($String* s) {
	$init(GetURLsTest);
	$nc($System::out)->println(s);
}

void clinit$GetURLsTest($Class* class$) {
	$assignStatic(GetURLsTest::TEST_DIR, $System::getProperty("test.src"_s, "."_s));
}

GetURLsTest::GetURLsTest() {
}

$Class* GetURLsTest::load$($String* name, bool initialize) {
	$loadClass(GetURLsTest, name, initialize, &_GetURLsTest_ClassInfo_, clinit$GetURLsTest, allocate$GetURLsTest);
	return class$;
}

$Class* GetURLsTest::class$ = nullptr;