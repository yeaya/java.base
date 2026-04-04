#include <DumpStackTest$1.h>
#include <DumpStackTest$CallFrame.h>
#include <DumpStackTest.h>
#include <java/lang/StackTraceElement.h>
#include <jcpp.h>

using $DumpStackTest = ::DumpStackTest;
using $DumpStackTest$CallFrame = ::DumpStackTest$CallFrame;
using $DumpStackTest$CallFrameArray = $Array<DumpStackTest$CallFrame>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void DumpStackTest$1::init$() {
	$Thread::init$();
}

void DumpStackTest$1::run() {
	c();
}

void DumpStackTest$1::c() {
	$useLocalObjectStack();
	$var($DumpStackTest$CallFrameArray, callStack, $new($DumpStackTest$CallFrameArray, {
		$$new($DumpStackTest$CallFrame, $Thread::class$, "getStackTrace"_s),
		$$new($DumpStackTest$CallFrame, this->getClass(), "c"_s),
		$$new($DumpStackTest$CallFrame, this->getClass(), "run"_s)
	}));
	$DumpStackTest::assertStackTrace($($($Thread::currentThread())->getStackTrace()), callStack);
	$DumpStackTest::getStackTrace(callStack);
}

DumpStackTest$1::DumpStackTest$1() {
}

$Class* DumpStackTest$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(DumpStackTest$1, init$, void)},
		{"c", "()V", nullptr, 0, $virtualMethod(DumpStackTest$1, c, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(DumpStackTest$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"DumpStackTest",
		"testThread",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"DumpStackTest$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"DumpStackTest$1",
		"java.lang.Thread",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"DumpStackTest"
	};
	$loadClass(DumpStackTest$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DumpStackTest$1);
	});
	return class$;
}

$Class* DumpStackTest$1::class$ = nullptr;