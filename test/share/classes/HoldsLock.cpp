#include <HoldsLock.h>
#include <HoldsLock$LockThread.h>
#include <jcpp.h>

using $HoldsLock$LockThread = ::HoldsLock$LockThread;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;

$Object* HoldsLock::target = nullptr;

void HoldsLock::init$() {
}

void HoldsLock::checkLock(bool value) {
	$init(HoldsLock);
	$useLocalObjectStack();
	if ($Thread::holdsLock(HoldsLock::target) != value) {
		$throwNew($RuntimeException, $$str({"Should be "_s, $$str(value)}));
	}
}

void HoldsLock::main($StringArray* args) {
	$init(HoldsLock);
	try {
		checkLock(false);
		$throwNew($RuntimeException, "NullPointerException not thrown"_s);
	} catch ($NullPointerException& e) {
	}
	;
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

void HoldsLock::clinit$($Class* clazz) {
	$assignStatic(HoldsLock::target, nullptr);
}

HoldsLock::HoldsLock() {
}

$Class* HoldsLock::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"target", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC, $staticField(HoldsLock, target)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(HoldsLock, init$, void)},
		{"checkLock", "(Z)V", nullptr, $PRIVATE | $STATIC, $staticMethod(HoldsLock, checkLock, void, bool)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(HoldsLock, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"HoldsLock$LockThread", "HoldsLock", "LockThread", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"HoldsLock",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"HoldsLock$LockThread"
	};
	$loadClass(HoldsLock, name, initialize, &classInfo$$, HoldsLock::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(HoldsLock);
	});
	return class$;
}

$Class* HoldsLock::class$ = nullptr;