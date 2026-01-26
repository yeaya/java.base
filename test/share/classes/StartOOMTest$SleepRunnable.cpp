#include <StartOOMTest$SleepRunnable.h>

#include <StartOOMTest.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _StartOOMTest$SleepRunnable_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(StartOOMTest$SleepRunnable, init$, void)},
	{"run", "()V", nullptr, $PUBLIC, $virtualMethod(StartOOMTest$SleepRunnable, run, void)},
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
	} catch ($Throwable& t) {
	}
}

StartOOMTest$SleepRunnable::StartOOMTest$SleepRunnable() {
}

$Class* StartOOMTest$SleepRunnable::load$($String* name, bool initialize) {
	$loadClass(StartOOMTest$SleepRunnable, name, initialize, &_StartOOMTest$SleepRunnable_ClassInfo_, allocate$StartOOMTest$SleepRunnable);
	return class$;
}

$Class* StartOOMTest$SleepRunnable::class$ = nullptr;