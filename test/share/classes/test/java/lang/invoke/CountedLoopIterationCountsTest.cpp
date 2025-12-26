#include <test/java/lang/invoke/CountedLoopIterationCountsTest.h>

#include <java/lang/AssertionError.h>
#include <java/lang/ExceptionInInitializerError.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodHandles.h>
#include <java/lang/invoke/MethodType.h>
#include <jcpp.h>

#undef MAX_VALUE
#undef MIN_VALUE
#undef TYPE

using $PrintStream = ::java::io::PrintStream;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $ExceptionInInitializerError = ::java::lang::ExceptionInInitializerError;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;

namespace test {
	namespace java {
		namespace lang {
			namespace invoke {

$FieldInfo _CountedLoopIterationCountsTest_FieldInfo_[] = {
	{"failed", "Z", nullptr, $STATIC, $staticField(CountedLoopIterationCountsTest, failed)},
	{"MH_m1", "Ljava/lang/invoke/MethodHandle;", nullptr, $STATIC | $FINAL, $staticField(CountedLoopIterationCountsTest, MH_m1)},
	{"MH_step", "Ljava/lang/invoke/MethodHandle;", nullptr, $STATIC | $FINAL, $staticField(CountedLoopIterationCountsTest, MH_step)},
	{}
};

$MethodInfo _CountedLoopIterationCountsTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CountedLoopIterationCountsTest::*)()>(&CountedLoopIterationCountsTest::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&CountedLoopIterationCountsTest::main)), "java.lang.Throwable"},
	{"run", "(III)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(int32_t,int32_t,int32_t)>(&CountedLoopIterationCountsTest::run)), "java.lang.Throwable"},
	{"step", "(II)I", nullptr, $STATIC, $method(static_cast<int32_t(*)(int32_t,int32_t)>(&CountedLoopIterationCountsTest::step))},
	{}
};

$ClassInfo _CountedLoopIterationCountsTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"test.java.lang.invoke.CountedLoopIterationCountsTest",
	"java.lang.Object",
	nullptr,
	_CountedLoopIterationCountsTest_FieldInfo_,
	_CountedLoopIterationCountsTest_MethodInfo_
};

$Object* allocate$CountedLoopIterationCountsTest($Class* clazz) {
	return $of($alloc(CountedLoopIterationCountsTest));
}

bool CountedLoopIterationCountsTest::failed = false;
$MethodHandle* CountedLoopIterationCountsTest::MH_m1 = nullptr;
$MethodHandle* CountedLoopIterationCountsTest::MH_step = nullptr;

void CountedLoopIterationCountsTest::init$() {
}

void CountedLoopIterationCountsTest::main($StringArray* args) {
	$init(CountedLoopIterationCountsTest);
	run(1, -10, 0);
	run(1, 0, 0);
	run($Integer::MAX_VALUE - 1, $Integer::MIN_VALUE + 10, 0);
	run($Integer::MIN_VALUE, $Integer::MIN_VALUE + 4, 4);
	run($Integer::MAX_VALUE - 2, $Integer::MAX_VALUE - 1, 1);
	run($Integer::MAX_VALUE - 1, 0, 0);
	run($Integer::MAX_VALUE - 1, 10, 0);
	run($Integer::MAX_VALUE - 1, -10, 0);
	run($Integer::MAX_VALUE, $Integer::MIN_VALUE + 10, 0);
	run($Integer::MAX_VALUE - 1, $Integer::MAX_VALUE, 1);
	run($Integer::MAX_VALUE, $Integer::MAX_VALUE, 0);
	if (CountedLoopIterationCountsTest::failed) {
		$throwNew($AssertionError, $of("one or more tests failed"_s));
	}
}

void CountedLoopIterationCountsTest::run(int32_t start, int32_t end, int32_t expectedIterations) {
	$init(CountedLoopIterationCountsTest);
	$useLocalCurrentObjectStackCache();
	$nc($System::out)->println($$str({"run from "_s, $$str(start), " to "_s, $$str(end)}));
	$init($Integer);
	$var($MethodHandle, var$0, $MethodHandles::constant($Integer::TYPE, $($Integer::valueOf(start))));
	$var($MethodHandle, loop, $MethodHandles::countedLoop(var$0, $($MethodHandles::constant($Integer::TYPE, $($Integer::valueOf(end)))), CountedLoopIterationCountsTest::MH_m1, CountedLoopIterationCountsTest::MH_step));
	int32_t r = $intValue($nc(loop)->invoke($$new($ObjectArray, 0)));
	if (r + 1 != expectedIterations) {
		$nc($System::out)->println($$str({"expected "_s, $$str(expectedIterations), " iterations, but got "_s, $$str(r)}));
		CountedLoopIterationCountsTest::failed = true;
	}
}

int32_t CountedLoopIterationCountsTest::step(int32_t stepCount, int32_t counter) {
	$init(CountedLoopIterationCountsTest);
	return stepCount + 1;
}

void clinit$CountedLoopIterationCountsTest($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	CountedLoopIterationCountsTest::failed = false;
	{
		try {
			$init($Integer);
			$assignStatic(CountedLoopIterationCountsTest::MH_m1, $MethodHandles::constant($Integer::TYPE, $($Integer::valueOf(-1))));
			$assignStatic(CountedLoopIterationCountsTest::MH_step, $nc($($MethodHandles::lookup()))->findStatic(CountedLoopIterationCountsTest::class$, "step"_s, $($MethodType::methodType($Integer::TYPE, $Integer::TYPE, $$new($ClassArray, {$Integer::TYPE})))));
		} catch ($Throwable& t) {
			$throwNew($ExceptionInInitializerError, $cast($Throwable, t));
		}
	}
}

CountedLoopIterationCountsTest::CountedLoopIterationCountsTest() {
}

$Class* CountedLoopIterationCountsTest::load$($String* name, bool initialize) {
	$loadClass(CountedLoopIterationCountsTest, name, initialize, &_CountedLoopIterationCountsTest_ClassInfo_, clinit$CountedLoopIterationCountsTest, allocate$CountedLoopIterationCountsTest);
	return class$;
}

$Class* CountedLoopIterationCountsTest::class$ = nullptr;

			} // invoke
		} // lang
	} // java
} // test