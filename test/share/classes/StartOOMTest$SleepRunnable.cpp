#include <StartOOMTest$SleepRunnable.h>
#include <StartOOMTest.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

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
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(StartOOMTest$SleepRunnable, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(StartOOMTest$SleepRunnable, run, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"StartOOMTest$SleepRunnable", "StartOOMTest", "SleepRunnable", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"StartOOMTest$SleepRunnable",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"StartOOMTest"
	};
	$loadClass(StartOOMTest$SleepRunnable, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StartOOMTest$SleepRunnable);
	});
	return class$;
}

$Class* StartOOMTest$SleepRunnable::class$ = nullptr;