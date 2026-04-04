#include <SwapMicroBenchmark$6.h>
#include <SwapMicroBenchmark$Job.h>
#include <SwapMicroBenchmark.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/ByteOrder.h>
#include <java/nio/IntBuffer.h>
#include <jcpp.h>

#undef BIG_ENDIAN

using $SwapMicroBenchmark = ::SwapMicroBenchmark;
using $SwapMicroBenchmark$Job = ::SwapMicroBenchmark$Job;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $ByteOrder = ::java::nio::ByteOrder;
using $IntBuffer = ::java::nio::IntBuffer;

void SwapMicroBenchmark$6::init$($String* name, $ByteBuffer* val$b, int32_t val$iterations) {
	$set(this, val$b, val$b);
	this->val$iterations = val$iterations;
	$SwapMicroBenchmark$Job::init$(name);
}

void SwapMicroBenchmark$6::work() {
	$init($ByteOrder);
	$nc(this->val$b)->order($ByteOrder::BIG_ENDIAN);
	$var($IntBuffer, x, this->val$b->asIntBuffer());
	for (int32_t i = 0; i < this->val$iterations; ++i) {
		int32_t sum = 0;
		for (int32_t j = 0, end = $nc(x)->limit(); j < end; ++j) {
			sum += x->get(j);
		}
		$SwapMicroBenchmark::deoptimize(sum);
	}
}

SwapMicroBenchmark$6::SwapMicroBenchmark$6() {
}

$Class* SwapMicroBenchmark$6::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$iterations", "I", nullptr, $FINAL | $SYNTHETIC, $field(SwapMicroBenchmark$6, val$iterations)},
		{"val$b", "Ljava/nio/ByteBuffer;", nullptr, $FINAL | $SYNTHETIC, $field(SwapMicroBenchmark$6, val$b)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/nio/ByteBuffer;I)V", nullptr, 0, $method(SwapMicroBenchmark$6, init$, void, $String*, $ByteBuffer*, int32_t)},
		{"work", "()V", nullptr, $PUBLIC, $virtualMethod(SwapMicroBenchmark$6, work, void), "java.lang.Throwable"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"SwapMicroBenchmark",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"SwapMicroBenchmark$6", nullptr, nullptr, 0},
		{"SwapMicroBenchmark$Job", "SwapMicroBenchmark", "Job", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"SwapMicroBenchmark$6",
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
	$loadClass(SwapMicroBenchmark$6, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SwapMicroBenchmark$6);
	});
	return class$;
}

$Class* SwapMicroBenchmark$6::class$ = nullptr;