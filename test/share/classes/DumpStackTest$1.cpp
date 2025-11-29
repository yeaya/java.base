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

$MethodInfo _DumpStackTest$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(DumpStackTest$1::*)()>(&DumpStackTest$1::init$))},
	{"c", "()V", nullptr, 0},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _DumpStackTest$1_EnclosingMethodInfo_ = {
	"DumpStackTest",
	"testThread",
	"()V"
};

$InnerClassInfo _DumpStackTest$1_InnerClassesInfo_[] = {
	{"DumpStackTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _DumpStackTest$1_ClassInfo_ = {
	$ACC_SUPER,
	"DumpStackTest$1",
	"java.lang.Thread",
	nullptr,
	nullptr,
	_DumpStackTest$1_MethodInfo_,
	nullptr,
	&_DumpStackTest$1_EnclosingMethodInfo_,
	_DumpStackTest$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"DumpStackTest"
};

$Object* allocate$DumpStackTest$1($Class* clazz) {
	return $of($alloc(DumpStackTest$1));
}

void DumpStackTest$1::init$() {
	$Thread::init$();
}

void DumpStackTest$1::run() {
	c();
}

void DumpStackTest$1::c() {
	$useLocalCurrentObjectStackCache();
	$var($DumpStackTest$CallFrameArray, callStack, $new($DumpStackTest$CallFrameArray, {
		$$new($DumpStackTest$CallFrame, $Thread::class$, "getStackTrace"_s),
		$$new($DumpStackTest$CallFrame, $of(this)->getClass(), "c"_s),
		$$new($DumpStackTest$CallFrame, $of(this)->getClass(), "run"_s)
	}));
	$DumpStackTest::assertStackTrace($($($Thread::currentThread())->getStackTrace()), callStack);
	$DumpStackTest::getStackTrace(callStack);
}

DumpStackTest$1::DumpStackTest$1() {
}

$Class* DumpStackTest$1::load$($String* name, bool initialize) {
	$loadClass(DumpStackTest$1, name, initialize, &_DumpStackTest$1_ClassInfo_, allocate$DumpStackTest$1);
	return class$;
}

$Class* DumpStackTest$1::class$ = nullptr;