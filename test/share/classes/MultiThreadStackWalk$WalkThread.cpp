#include <MultiThreadStackWalk$WalkThread.h>
#include <MultiThreadStackWalk$Call$WalkType.h>
#include <MultiThreadStackWalk$Env.h>
#include <MultiThreadStackWalk$Test.h>
#include <MultiThreadStackWalk.h>
#include <java/util/concurrent/atomic/AtomicLong.h>
#include <jcpp.h>

using $MultiThreadStackWalk = ::MultiThreadStackWalk;
using $MultiThreadStackWalk$Env = ::MultiThreadStackWalk$Env;
using $MultiThreadStackWalk$Test = ::MultiThreadStackWalk$Test;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AtomicLong = ::java::util::concurrent::atomic::AtomicLong;

$AtomicLong* MultiThreadStackWalk$WalkThread::walkersCount = nullptr;

void MultiThreadStackWalk$WalkThread::init$($MultiThreadStackWalk$Test* test) {
	$useLocalObjectStack();
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append("WalkThread["_s);
	var$0->append(MultiThreadStackWalk$WalkThread::walkersCount->incrementAndGet());
	var$0->append(", type="_s);
	var$0->append($($nc(test)->getWalkType()));
	var$0->append("]"_s);
	$Thread::init$($$str(var$0));
	$set(this, failed, nullptr);
	$set(this, test, test);
}

void MultiThreadStackWalk$WalkThread::run() {
	try {
		$var($MultiThreadStackWalk$Env, env, $MultiThreadStackWalk::runTest(this->test, 1000, 10));
		$MultiThreadStackWalk::checkTest(env, this->test);
	} catch ($Throwable& t) {
		$set(this, failed, t);
	}
}

void MultiThreadStackWalk$WalkThread::clinit$($Class* clazz) {
	$assignStatic(MultiThreadStackWalk$WalkThread::walkersCount, $new($AtomicLong));
}

MultiThreadStackWalk$WalkThread::MultiThreadStackWalk$WalkThread() {
}

$Class* MultiThreadStackWalk$WalkThread::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"walkersCount", "Ljava/util/concurrent/atomic/AtomicLong;", nullptr, $STATIC | $FINAL, $staticField(MultiThreadStackWalk$WalkThread, walkersCount)},
		{"failed", "Ljava/lang/Throwable;", nullptr, 0, $field(MultiThreadStackWalk$WalkThread, failed)},
		{"test", "LMultiThreadStackWalk$Test;", nullptr, $FINAL, $field(MultiThreadStackWalk$WalkThread, test)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LMultiThreadStackWalk$Test;)V", nullptr, $PUBLIC, $method(MultiThreadStackWalk$WalkThread, init$, void, $MultiThreadStackWalk$Test*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(MultiThreadStackWalk$WalkThread, run, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"MultiThreadStackWalk$WalkThread", "MultiThreadStackWalk", "WalkThread", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"MultiThreadStackWalk$WalkThread",
		"java.lang.Thread",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"MultiThreadStackWalk"
	};
	$loadClass(MultiThreadStackWalk$WalkThread, name, initialize, &classInfo$$, MultiThreadStackWalk$WalkThread::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(MultiThreadStackWalk$WalkThread);
	});
	return class$;
}

$Class* MultiThreadStackWalk$WalkThread::class$ = nullptr;