#include <SwapMicroBenchmark$1.h>

#include <SwapMicroBenchmark.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <jcpp.h>

using $SwapMicroBenchmark = ::SwapMicroBenchmark;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;

$FieldInfo _SwapMicroBenchmark$1_FieldInfo_[] = {
	{"val$drained", "Ljava/util/concurrent/CountDownLatch;", nullptr, $FINAL | $SYNTHETIC, $field(SwapMicroBenchmark$1, val$drained)},
	{}
};

$MethodInfo _SwapMicroBenchmark$1_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/CountDownLatch;)V", nullptr, 0, $method(static_cast<void(SwapMicroBenchmark$1::*)($CountDownLatch*)>(&SwapMicroBenchmark$1::init$))},
	{"finalize", "()V", nullptr, $PROTECTED},
	{}
};

$EnclosingMethodInfo _SwapMicroBenchmark$1_EnclosingMethodInfo_ = {
	"SwapMicroBenchmark",
	"collectAllGarbage",
	"()V"
};

$InnerClassInfo _SwapMicroBenchmark$1_InnerClassesInfo_[] = {
	{"SwapMicroBenchmark$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SwapMicroBenchmark$1_ClassInfo_ = {
	$ACC_SUPER,
	"SwapMicroBenchmark$1",
	"java.lang.Object",
	nullptr,
	_SwapMicroBenchmark$1_FieldInfo_,
	_SwapMicroBenchmark$1_MethodInfo_,
	nullptr,
	&_SwapMicroBenchmark$1_EnclosingMethodInfo_,
	_SwapMicroBenchmark$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"SwapMicroBenchmark"
};

$Object* allocate$SwapMicroBenchmark$1($Class* clazz) {
	return $of($alloc(SwapMicroBenchmark$1));
}

void SwapMicroBenchmark$1::init$($CountDownLatch* val$drained) {
	$set(this, val$drained, val$drained);
}

void SwapMicroBenchmark$1::finalize() {
	$nc(this->val$drained)->countDown();
}

SwapMicroBenchmark$1::SwapMicroBenchmark$1() {
}

$Class* SwapMicroBenchmark$1::load$($String* name, bool initialize) {
	$loadClass(SwapMicroBenchmark$1, name, initialize, &_SwapMicroBenchmark$1_ClassInfo_, allocate$SwapMicroBenchmark$1);
	return class$;
}

$Class* SwapMicroBenchmark$1::class$ = nullptr;