#include <OversynchronizedTest.h>

#include <TestObj.h>
#include <java/io/FilterOutputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/PrintStream.h>
#include <java/io/PrintWriter.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Thread.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $TestObj = ::TestObj;
using $OversynchronizedTestArray = $Array<OversynchronizedTest>;
using $FilterOutputStream = ::java::io::FilterOutputStream;
using $OutputStream = ::java::io::OutputStream;
using $PrintStream = ::java::io::PrintStream;
using $PrintWriter = ::java::io::PrintWriter;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _OversynchronizedTest_FieldInfo_[] = {
	{"writer", "Ljava/io/PrintWriter;", nullptr, $PRIVATE | $STATIC, $staticField(OversynchronizedTest, writer)},
	{"testObj", "LTestObj;", nullptr, $PRIVATE | $STATIC, $staticField(OversynchronizedTest, testObj)},
	{"loopNum", "I", nullptr, $PRIVATE | $STATIC, $staticField(OversynchronizedTest, loopNum)},
	{}
};

$MethodInfo _OversynchronizedTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(OversynchronizedTest::*)()>(&OversynchronizedTest::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&OversynchronizedTest::main)), "java.lang.Exception"},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _OversynchronizedTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"OversynchronizedTest",
	"java.lang.Thread",
	nullptr,
	_OversynchronizedTest_FieldInfo_,
	_OversynchronizedTest_MethodInfo_
};

$Object* allocate$OversynchronizedTest($Class* clazz) {
	return $of($alloc(OversynchronizedTest));
}

$PrintWriter* OversynchronizedTest::writer = nullptr;
$TestObj* OversynchronizedTest::testObj = nullptr;
int32_t OversynchronizedTest::loopNum = 0;

void OversynchronizedTest::init$() {
	$Thread::init$();
}

void OversynchronizedTest::run() {
	for (int32_t i = 0; i < OversynchronizedTest::loopNum; ++i) {
		$nc(OversynchronizedTest::testObj)->test();
		$nc(OversynchronizedTest::writer)->println($of(OversynchronizedTest::testObj));
	}
}

void OversynchronizedTest::main($StringArray* args) {
	$init(OversynchronizedTest);
	$useLocalCurrentObjectStackCache();
	$nc(OversynchronizedTest::writer)->println(($Object*)nullptr);
	int32_t num = 5;
	$var($OversynchronizedTestArray, t, $new($OversynchronizedTestArray, num));
	for (int32_t i = 0; i < num; ++i) {
		t->set(i, $$new(OversynchronizedTest));
		$nc(t->get(i))->start();
	}
	for (int32_t i = 0; i < num; ++i) {
		$nc(t->get(i))->join();
	}
	$init($System);
	$nc($System::out)->println("Test completed"_s);
}

void clinit$OversynchronizedTest($Class* class$) {
	$init($System);
	$assignStatic(OversynchronizedTest::writer, $new($PrintWriter, static_cast<$OutputStream*>($System::out)));
	$assignStatic(OversynchronizedTest::testObj, $new($TestObj, "This is a test."_s, OversynchronizedTest::writer));
	OversynchronizedTest::loopNum = 100;
}

OversynchronizedTest::OversynchronizedTest() {
}

$Class* OversynchronizedTest::load$($String* name, bool initialize) {
	$loadClass(OversynchronizedTest, name, initialize, &_OversynchronizedTest_ClassInfo_, clinit$OversynchronizedTest, allocate$OversynchronizedTest);
	return class$;
}

$Class* OversynchronizedTest::class$ = nullptr;