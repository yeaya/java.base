#include <WindowsTest.h>
#include <ProcessTest.h>
#include <java/io/File.h>
#include <java/lang/Process.h>
#include <java/lang/ProcessBuilder.h>
#include <jcpp.h>

using $ProcessTest = ::ProcessTest;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ProcessBuilder = ::java::lang::ProcessBuilder;

void WindowsTest::init$() {
	$useLocalObjectStack();
	$ProcessTest::init$();
	$set(this, bldr, $new($ProcessBuilder, $$new($StringArray, {"ftp"_s})));
	this->bldr->redirectErrorStream(true);
	this->bldr->directory($$new($File, "."_s));
	$set(this, p, this->bldr->start());
}

WindowsTest::WindowsTest() {
}

$Class* WindowsTest::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(WindowsTest, init$, void), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"WindowsTest",
		"ProcessTest",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(WindowsTest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WindowsTest);
	});
	return class$;
}

$Class* WindowsTest::class$ = nullptr;