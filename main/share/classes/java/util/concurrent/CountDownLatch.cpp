#include <java/util/concurrent/CountDownLatch.h>
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

namespace java {
	namespace util {
		namespace concurrent {

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
	$useLocalObjectStack();
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append($($Object::toString()));
	var$0->append("[Count = "_s);
	var$0->append($nc(this->sync)->getCount());
	var$0->append("]"_s);
	return $str(var$0);
}

CountDownLatch::CountDownLatch() {
}

$Class* CountDownLatch::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"sync", "Ljava/util/concurrent/CountDownLatch$Sync;", nullptr, $PRIVATE | $FINAL, $field(CountDownLatch, sync)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, $PUBLIC, $method(CountDownLatch, init$, void, int32_t)},
		{"await", "()V", nullptr, $PUBLIC, $virtualMethod(CountDownLatch, await, void), "java.lang.InterruptedException"},
		{"await", "(JLjava/util/concurrent/TimeUnit;)Z", nullptr, $PUBLIC, $virtualMethod(CountDownLatch, await, bool, int64_t, $TimeUnit*), "java.lang.InterruptedException"},
		{"countDown", "()V", nullptr, $PUBLIC, $virtualMethod(CountDownLatch, countDown, void)},
		{"getCount", "()J", nullptr, $PUBLIC, $virtualMethod(CountDownLatch, getCount, int64_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(CountDownLatch, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.CountDownLatch$Sync", "java.util.concurrent.CountDownLatch", "Sync", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.util.concurrent.CountDownLatch",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"java.util.concurrent.CountDownLatch$Sync"
	};
	$loadClass(CountDownLatch, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CountDownLatch);
	});
	return class$;
}

$Class* CountDownLatch::class$ = nullptr;

		} // concurrent
	} // util
} // java