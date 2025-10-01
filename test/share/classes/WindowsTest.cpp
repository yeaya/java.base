#include <WindowsTest.h>

#include <ProcessTest.h>
#include <java/io/File.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Process.h>
#include <java/lang/ProcessBuilder.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ProcessTest = ::ProcessTest;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Process = ::java::lang::Process;
using $ProcessBuilder = ::java::lang::ProcessBuilder;

$MethodInfo _WindowsTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WindowsTest::*)()>(&WindowsTest::init$)), "java.io.IOException"},
	{}
};

$ClassInfo _WindowsTest_ClassInfo_ = {
	$ACC_SUPER,
	"WindowsTest",
	"ProcessTest",
	nullptr,
	nullptr,
	_WindowsTest_MethodInfo_
};

$Object* allocate$WindowsTest($Class* clazz) {
	return $of($alloc(WindowsTest));
}

void WindowsTest::init$() {
	$ProcessTest::init$();
	$set(this, bldr, $new($ProcessBuilder, $$new($StringArray, {"ftp"_s})));
	$nc(this->bldr)->redirectErrorStream(true);
	$nc(this->bldr)->directory($$new($File, "."_s));
	$set(this, p, $nc(this->bldr)->start());
}

WindowsTest::WindowsTest() {
}

$Class* WindowsTest::load$($String* name, bool initialize) {
	$loadClass(WindowsTest, name, initialize, &_WindowsTest_ClassInfo_, allocate$WindowsTest);
	return class$;
}

$Class* WindowsTest::class$ = nullptr;