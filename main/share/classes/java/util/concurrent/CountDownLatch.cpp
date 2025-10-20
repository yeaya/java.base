#include <java/util/concurrent/CountDownLatch.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/concurrent/CountDownLatch$Sync.h>
#include <java/util/concurrent/TimeUnit.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CountDownLatch$Sync = ::java::util::concurrent::CountDownLatch$Sync;
using $TimeUnit = ::java::util::concurrent::TimeUnit;
using $AbstractQueuedSynchronizer = ::java::util::concurrent::locks::AbstractQueuedSynchronizer;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _CountDownLatch_FieldInfo_[] = {
	{"sync", "Ljava/util/concurrent/CountDownLatch$Sync;", nullptr, $PRIVATE | $FINAL, $field(CountDownLatch, sync)},
	{}
};

$MethodInfo _CountDownLatch_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(CountDownLatch::*)(int32_t)>(&CountDownLatch::init$))},
	{"await", "()V", nullptr, $PUBLIC, nullptr, "java.lang.InterruptedException"},
	{"await", "(JLjava/util/concurrent/TimeUnit;)Z", nullptr, $PUBLIC, nullptr, "java.lang.InterruptedException"},
	{"countDown", "()V", nullptr, $PUBLIC},
	{"getCount", "()J", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _CountDownLatch_InnerClassesInfo_[] = {
	{"java.util.concurrent.CountDownLatch$Sync", "java.util.concurrent.CountDownLatch", "Sync", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _CountDownLatch_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.util.concurrent.CountDownLatch",
	"java.lang.Object",
	nullptr,
	_CountDownLatch_FieldInfo_,
	_CountDownLatch_MethodInfo_,
	nullptr,
	nullptr,
	_CountDownLatch_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.util.concurrent.CountDownLatch$Sync"
};

$Object* allocate$CountDownLatch($Class* clazz) {
	return $of($alloc(CountDownLatch));
}

void CountDownLatch::init$(int32_t count) {
	if (count < 0) {
		$throwNew($IllegalArgumentException, "count < 0"_s);
	}
	$set(this, sync, $new($CountDownLatch$Sync, count));
}

void CountDownLatch::await() {
	$nc(this->sync)->acquireSharedInterruptibly(1);
}

bool CountDownLatch::await(int64_t timeout, $TimeUnit* unit) {
	return $nc(this->sync)->tryAcquireSharedNanos(1, $nc(unit)->toNanos(timeout));
}

void CountDownLatch::countDown() {
	$nc(this->sync)->releaseShared(1);
}

int64_t CountDownLatch::getCount() {
	return $nc(this->sync)->getCount();
}

$String* CountDownLatch::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$1, $$str({$($Object::toString()), "[Count = "_s}));
	$var($String, var$0, $$concat(var$1, $$str($nc(this->sync)->getCount())));
	return $concat(var$0, "]");
}

CountDownLatch::CountDownLatch() {
}

$Class* CountDownLatch::load$($String* name, bool initialize) {
	$loadClass(CountDownLatch, name, initialize, &_CountDownLatch_ClassInfo_, allocate$CountDownLatch);
	return class$;
}

$Class* CountDownLatch::class$ = nullptr;

		} // concurrent
	} // util
} // java