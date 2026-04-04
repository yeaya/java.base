#include <SwapMicroBenchmark$1.h>
#include <SwapMicroBenchmark.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;

void SwapMicroBenchmark$1::init$($CountDownLatch* val$drained) {
	$set(this, val$drained, val$drained);
}

void SwapMicroBenchmark$1::finalize() {
	$nc(this->val$drained)->countDown();
}

SwapMicroBenchmark$1::SwapMicroBenchmark$1() {
}

$Class* SwapMicroBenchmark$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$drained", "Ljava/util/concurrent/CountDownLatch;", nullptr, $FINAL | $SYNTHETIC, $field(SwapMicroBenchmark$1, val$drained)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/concurrent/CountDownLatch;)V", nullptr, 0, $method(SwapMicroBenchmark$1, init$, void, $CountDownLatch*)},
		{"finalize", "()V", nullptr, $PROTECTED, $virtualMethod(SwapMicroBenchmark$1, finalize, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"SwapMicroBenchmark",
		"collectAllGarbage",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"SwapMicroBenchmark$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"SwapMicroBenchmark$1",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"SwapMicroBenchmark"
	};
	$loadClass(SwapMicroBenchmark$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SwapMicroBenchmark$1);
	});
	return class$;
}

$Class* SwapMicroBenchmark$1::class$ = nullptr;