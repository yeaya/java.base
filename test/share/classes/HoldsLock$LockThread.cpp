#include <HoldsLock$LockThread.h>
#include <HoldsLock.h>
#include <jcpp.h>

using $HoldsLock = ::HoldsLock;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void HoldsLock$LockThread::init$() {
	$Thread::init$();
}

void HoldsLock$LockThread::run() {
	$HoldsLock::checkLock(false);
	$synchronized($HoldsLock::target) {
		$HoldsLock::checkLock(true);
	}
	$HoldsLock::checkLock(false);
}

HoldsLock$LockThread::HoldsLock$LockThread() {
}

$Class* HoldsLock$LockThread::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(HoldsLock$LockThread, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(HoldsLock$LockThread, run, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"HoldsLock$LockThread", "HoldsLock", "LockThread", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"HoldsLock$LockThread",
		"java.lang.Thread",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"HoldsLock"
	};
	$loadClass(HoldsLock$LockThread, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HoldsLock$LockThread);
	});
	return class$;
}

$Class* HoldsLock$LockThread::class$ = nullptr;