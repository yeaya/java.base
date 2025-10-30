#include <MultiThreadStackWalk$WalkThread.h>

#include <MultiThreadStackWalk$Call$WalkType.h>
#include <MultiThreadStackWalk$Env.h>
#include <MultiThreadStackWalk$Test.h>
#include <MultiThreadStackWalk.h>
#include <java/util/concurrent/atomic/AtomicLong.h>
#include <jcpp.h>

using $MultiThreadStackWalk = ::MultiThreadStackWalk;
using $MultiThreadStackWalk$Call$WalkType = ::MultiThreadStackWalk$Call$WalkType;
using $MultiThreadStackWalk$Env = ::MultiThreadStackWalk$Env;
using $MultiThreadStackWalk$Test = ::MultiThreadStackWalk$Test;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AtomicLong = ::java::util::concurrent::atomic::AtomicLong;

$FieldInfo _MultiThreadStackWalk$WalkThread_FieldInfo_[] = {
	{"walkersCount", "Ljava/util/concurrent/atomic/AtomicLong;", nullptr, $STATIC | $FINAL, $staticField(MultiThreadStackWalk$WalkThread, walkersCount)},
	{"failed", "Ljava/lang/Throwable;", nullptr, 0, $field(MultiThreadStackWalk$WalkThread, failed)},
	{"test", "LMultiThreadStackWalk$Test;", nullptr, $FINAL, $field(MultiThreadStackWalk$WalkThread, test)},
	{}
};

$MethodInfo _MultiThreadStackWalk$WalkThread_MethodInfo_[] = {
	{"<init>", "(LMultiThreadStackWalk$Test;)V", nullptr, $PUBLIC, $method(static_cast<void(MultiThreadStackWalk$WalkThread::*)($MultiThreadStackWalk$Test*)>(&MultiThreadStackWalk$WalkThread::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MultiThreadStackWalk$WalkThread_InnerClassesInfo_[] = {
	{"MultiThreadStackWalk$WalkThread", "MultiThreadStackWalk", "WalkThread", $STATIC},
	{}
};

$ClassInfo _MultiThreadStackWalk$WalkThread_ClassInfo_ = {
	$ACC_SUPER,
	"MultiThreadStackWalk$WalkThread",
	"java.lang.Thread",
	nullptr,
	_MultiThreadStackWalk$WalkThread_FieldInfo_,
	_MultiThreadStackWalk$WalkThread_MethodInfo_,
	nullptr,
	nullptr,
	_MultiThreadStackWalk$WalkThread_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"MultiThreadStackWalk"
};

$Object* allocate$MultiThreadStackWalk$WalkThread($Class* clazz) {
	return $of($alloc(MultiThreadStackWalk$WalkThread));
}

$AtomicLong* MultiThreadStackWalk$WalkThread::walkersCount = nullptr;

void MultiThreadStackWalk$WalkThread::init$($MultiThreadStackWalk$Test* test) {
	$useLocalCurrentObjectStackCache();
	$var($String, var$1, $$str({"WalkThread["_s, $$str($nc(MultiThreadStackWalk$WalkThread::walkersCount)->incrementAndGet()), ", type="_s}));
	$var($String, var$0, $$concat(var$1, $($nc(test)->getWalkType())));
	$Thread::init$($$concat(var$0, "]"));
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

void clinit$MultiThreadStackWalk$WalkThread($Class* class$) {
	$assignStatic(MultiThreadStackWalk$WalkThread::walkersCount, $new($AtomicLong));
}

MultiThreadStackWalk$WalkThread::MultiThreadStackWalk$WalkThread() {
}

$Class* MultiThreadStackWalk$WalkThread::load$($String* name, bool initialize) {
	$loadClass(MultiThreadStackWalk$WalkThread, name, initialize, &_MultiThreadStackWalk$WalkThread_ClassInfo_, clinit$MultiThreadStackWalk$WalkThread, allocate$MultiThreadStackWalk$WalkThread);
	return class$;
}

$Class* MultiThreadStackWalk$WalkThread::class$ = nullptr;