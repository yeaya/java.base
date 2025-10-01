#include <StartOOMTest$SleepRunnable.h>

#include <StartOOMTest.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $StartOOMTest = ::StartOOMTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

$MethodInfo _StartOOMTest$SleepRunnable_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(StartOOMTest$SleepRunnable::*)()>(&StartOOMTest$SleepRunnable::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _StartOOMTest$SleepRunnable_InnerClassesInfo_[] = {
	{"StartOOMTest$SleepRunnable", "StartOOMTest", "SleepRunnable", $STATIC},
	{}
};

$ClassInfo _StartOOMTest$SleepRunnable_ClassInfo_ = {
	$ACC_SUPER,
	"StartOOMTest$SleepRunnable",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_StartOOMTest$SleepRunnable_MethodInfo_,
	nullptr,
	nullptr,
	_StartOOMTest$SleepRunnable_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"StartOOMTest"
};

$Object* allocate$StartOOMTest$SleepRunnable($Class* clazz) {
	return $of($alloc(StartOOMTest$SleepRunnable));
}

void StartOOMTest$SleepRunnable::init$() {
}

void StartOOMTest$SleepRunnable::run() {
	try {
		$Thread::sleep(60 * 1000);
	} catch ($Throwable&) {
		$catch();
	}
}

StartOOMTest$SleepRunnable::StartOOMTest$SleepRunnable() {
}

$Class* StartOOMTest$SleepRunnable::load$($String* name, bool initialize) {
	$loadClass(StartOOMTest$SleepRunnable, name, initialize, &_StartOOMTest$SleepRunnable_ClassInfo_, allocate$StartOOMTest$SleepRunnable);
	return class$;
}

$Class* StartOOMTest$SleepRunnable::class$ = nullptr;