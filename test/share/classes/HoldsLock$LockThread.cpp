#include <HoldsLock$LockThread.h>

#include <HoldsLock.h>
#include <jcpp.h>

using $HoldsLock = ::HoldsLock;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HoldsLock$LockThread_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HoldsLock$LockThread::*)()>(&HoldsLock$LockThread::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _HoldsLock$LockThread_InnerClassesInfo_[] = {
	{"HoldsLock$LockThread", "HoldsLock", "LockThread", $STATIC},
	{}
};

$ClassInfo _HoldsLock$LockThread_ClassInfo_ = {
	$ACC_SUPER,
	"HoldsLock$LockThread",
	"java.lang.Thread",
	nullptr,
	nullptr,
	_HoldsLock$LockThread_MethodInfo_,
	nullptr,
	nullptr,
	_HoldsLock$LockThread_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HoldsLock"
};

$Object* allocate$HoldsLock$LockThread($Class* clazz) {
	return $of($alloc(HoldsLock$LockThread));
}

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
	$loadClass(HoldsLock$LockThread, name, initialize, &_HoldsLock$LockThread_ClassInfo_, allocate$HoldsLock$LockThread);
	return class$;
}

$Class* HoldsLock$LockThread::class$ = nullptr;