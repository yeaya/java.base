#include <SwapMicroBenchmark$5.h>
#include <SwapMicroBenchmark$Job.h>
#include <SwapMicroBenchmark.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/ByteOrder.h>
#include <java/nio/ShortBuffer.h>
#include <jcpp.h>

#undef LITTLE_ENDIAN

using $SwapMicroBenchmark = ::SwapMicroBenchmark;
using $SwapMicroBenchmark$Job = ::SwapMicroBenchmark$Job;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $ByteOrder = ::java::nio::ByteOrder;
using $ShortBuffer = ::java::nio::ShortBuffer;

void SwapMicroBenchmark$5::init$($String* name, $ByteBuffer* val$b, int32_t val$iterations) {
	$set(this, val$b, val$b);
	this->val$iterations = val$iterations;
	$SwapMicroBenchmark$Job::init$(name);
}

void SwapMicroBenchmark$5::work() {
	$init($ByteOrder);
	$nc(this->val$b)->order($ByteOrder::LITTLE_ENDIAN);
	$var($ShortBuffer, x, this->val$b->asShortBuffer());
	for (int32_t i = 0; i < this->val$iterations; ++i) {
		int32_t sum = 0;
		for (int32_t j = 0, end = $nc(x)->limit(); j < end; ++j) {
			sum += x->get(j);
		}
		$SwapMicroBenchmark::deoptimize(sum);
	}
}

SwapMicroBenchmark$5::SwapMicroBenchmark$5() {
}

$Class* SwapMicroBenchmark$5::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$iterations", "I", nullptr, $FINAL | $SYNTHETIC, $field(SwapMicroBenchmark$5, val$iterations)},
		{"val$b", "Ljava/nio/ByteBuffer;", nullptr, $FINAL | $SYNTHETIC, $field(SwapMicroBenchmark$5, val$b)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/nio/ByteBuffer;I)V", nullptr, 0, $method(SwapMicroBenchmark$5, init$, void, $String*, $ByteBuffer*, int32_t)},
		{"work", "()V", nullptr, $PUBLIC, $virtualMethod(SwapMicroBenchmark$5, work, void), "java.lang.Throwable"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"SwapMicroBenchmark",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"SwapMicroBenchmark$5", nullptr, nullptr, 0},
		{"SwapMicroBenchmark$Job", "SwapMicroBenchmark", "Job", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"SwapMicroBenchmark$5",
		"SwapMicroBenchmark$Job",
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
	$loadClass(SwapMicroBenchmark$5, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SwapMicroBenchmark$5);
	});
	return class$;
}

$Class* SwapMicroBenchmark$5::class$ = nullptr;