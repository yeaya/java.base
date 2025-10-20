#include <HoldsLock.h>

#include <HoldsLock$LockThread.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $HoldsLock$LockThread = ::HoldsLock$LockThread;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;

$FieldInfo _HoldsLock_FieldInfo_[] = {
	{"target", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC, $staticField(HoldsLock, target)},
	{}
};

$MethodInfo _HoldsLock_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HoldsLock::*)()>(&HoldsLock::init$))},
	{"checkLock", "(Z)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(bool)>(&HoldsLock::checkLock))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&HoldsLock::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _HoldsLock_InnerClassesInfo_[] = {
	{"HoldsLock$LockThread", "HoldsLock", "LockThread", $STATIC},
	{}
};

$ClassInfo _HoldsLock_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"HoldsLock",
	"java.lang.Object",
	nullptr,
	_HoldsLock_FieldInfo_,
	_HoldsLock_MethodInfo_,
	nullptr,
	nullptr,
	_HoldsLock_InnerClassesInfo_,
	nullptr,
	nullptr,
	"HoldsLock$LockThread"
};

$Object* allocate$HoldsLock($Class* clazz) {
	return $of($alloc(HoldsLock));
}

$Object* HoldsLock::target = nullptr;

void HoldsLock::init$() {
}

void HoldsLock::checkLock(bool value) {
	$init(HoldsLock);
	$useLocalCurrentObjectStackCache();
	if ($Thread::holdsLock(HoldsLock::target) != value) {
		$throwNew($RuntimeException, $$str({"Should be "_s, $$str(value)}));
	}
}

void HoldsLock::main($StringArray* args) {
	$init(HoldsLock);
	try {
		checkLock(false);
		$throwNew($RuntimeException, "NullPointerException not thrown"_s);
	} catch ($NullPointerException&) {
		$catch();
	}
	$assignStatic(HoldsLock::target, $new($Object));
	checkLock(false);
	$synchronized(HoldsLock::target) {
		checkLock(true);
	}
	checkLock(false);
	$synchronized(HoldsLock::target) {
		checkLock(true);
		$$new($HoldsLock$LockThread)->start();
		checkLock(true);
		$Thread::sleep(100);
		checkLock(true);
	}
	checkLock(false);
}

void clinit$HoldsLock($Class* class$) {
	$assignStatic(HoldsLock::target, nullptr);
}

HoldsLock::HoldsLock() {
}

$Class* HoldsLock::load$($String* name, bool initialize) {
	$loadClass(HoldsLock, name, initialize, &_HoldsLock_ClassInfo_, clinit$HoldsLock, allocate$HoldsLock);
	return class$;
}

$Class* HoldsLock::class$ = nullptr;