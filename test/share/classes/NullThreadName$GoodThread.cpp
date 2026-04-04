#include <NullThreadName$GoodThread.h>
#include <NullThreadName.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <jcpp.h>

using $NullThreadName = ::NullThreadName;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void NullThreadName$GoodThread::init$() {
}

void NullThreadName$GoodThread::run() {
	$nc($System::out)->println("Good Thread started..."_s);
	$System::out->println("Good Thread finishing"_s);
	$init($NullThreadName);
	$nc($NullThreadName::done)->countDown();
}

NullThreadName$GoodThread::NullThreadName$GoodThread() {
}

$Class* NullThreadName$GoodThread::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(NullThreadName$GoodThread, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(NullThreadName$GoodThread, run, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"NullThreadName$GoodThread", "NullThreadName", "GoodThread", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"NullThreadName$GoodThread",
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
		"NullThreadName"
	};
	$loadClass(NullThreadName$GoodThread, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NullThreadName$GoodThread);
	});
	return class$;
}

$Class* NullThreadName$GoodThread::class$ = nullptr;