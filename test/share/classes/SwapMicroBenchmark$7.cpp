#include <SwapMicroBenchmark$7.h>
#include <SwapMicroBenchmark$Job.h>
#include <SwapMicroBenchmark.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/ByteOrder.h>
#include <java/nio/IntBuffer.h>
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
using $IntBuffer = ::java::nio::IntBuffer;

void SwapMicroBenchmark$7::init$($String* name, $ByteBuffer* val$b, int32_t val$iterations) {
	$set(this, val$b, val$b);
	this->val$iterations = val$iterations;
	$SwapMicroBenchmark$Job::init$(name);
}

void SwapMicroBenchmark$7::work() {
	$init($ByteOrder);
	$nc(this->val$b)->order($ByteOrder::LITTLE_ENDIAN);
	$var($IntBuffer, x, this->val$b->asIntBuffer());
	for (int32_t i = 0; i < this->val$iterations; ++i) {
		int32_t sum = 0;
		for (int32_t j = 0, end = $nc(x)->limit(); j < end; ++j) {
			sum += x->get(j);
		}
		$SwapMicroBenchmark::deoptimize(sum);
	}
}

SwapMicroBenchmark$7::SwapMicroBenchmark$7() {
}

$Class* SwapMicroBenchmark$7::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$iterations", "I", nullptr, $FINAL | $SYNTHETIC, $field(SwapMicroBenchmark$7, val$iterations)},
		{"val$b", "Ljava/nio/ByteBuffer;", nullptr, $FINAL | $SYNTHETIC, $field(SwapMicroBenchmark$7, val$b)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/nio/ByteBuffer;I)V", nullptr, 0, $method(SwapMicroBenchmark$7, init$, void, $String*, $ByteBuffer*, int32_t)},
		{"work", "()V", nullptr, $PUBLIC, $virtualMethod(SwapMicroBenchmark$7, work, void), "java.lang.Throwable"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"SwapMicroBenchmark",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"SwapMicroBenchmark$7", nullptr, nullptr, 0},
		{"SwapMicroBenchmark$Job", "SwapMicroBenchmark", "Job", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"SwapMicroBenchmark$7",
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
	$loadClass(SwapMicroBenchmark$7, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SwapMicroBenchmark$7);
	});
	return class$;
}

$Class* SwapMicroBenchmark$7::class$ = nullptr;