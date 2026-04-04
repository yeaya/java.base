#include <DestroyTest.h>
#include <ProcessTest.h>
#include <UnixTest.h>
#include <WindowsTest.h>
#include <java/io/File.h>
#include <jcpp.h>

using $ProcessTest = ::ProcessTest;
using $UnixTest = ::UnixTest;
using $WindowsTest = ::WindowsTest;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

void DestroyTest::init$() {
}

$ProcessTest* DestroyTest::getTest() {
	$useLocalObjectStack();
	$var($String, osName, $System::getProperty("os.name"_s));
	if ($nc(osName)->startsWith("Windows"_s)) {
		return $new($WindowsTest);
	} else {
		$var($File, userDir, $new($File, $($System::getProperty("user.dir"_s, "."_s))));
		$var($File, tempFile, $File::createTempFile("ProcessTrap-"_s, ".sh"_s, userDir));
		bool var$1 = osName->startsWith("Linux"_s);
		bool var$0 = var$1 || osName->startsWith("Mac OS"_s);
		if (var$0 || osName->equals("AIX"_s)) {
			return $new($UnixTest, tempFile);
		}
	}
	return nullptr;
}

void DestroyTest::main($StringArray* args) {
	$useLocalObjectStack();
	$var($ProcessTest, test, getTest());
	if (test == nullptr) {
		$throwNew($RuntimeException, "Unrecognised OS"_s);
	} else {
		$$new($Thread, test)->start();
		$Thread::sleep(1000);
		test->runTest();
	}
}

DestroyTest::DestroyTest() {
}

$Class* DestroyTest::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DestroyTest, init$, void)},
		{"getTest", "()LProcessTest;", nullptr, $PUBLIC | $STATIC, $staticMethod(DestroyTest, getTest, $ProcessTest*), "java.lang.Exception"},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(DestroyTest, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"DestroyTest",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(DestroyTest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DestroyTest);
	});
	return class$;
}

$Class* DestroyTest::class$ = nullptr;