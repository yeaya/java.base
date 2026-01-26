#include <SwapMicroBenchmark$3.h>

#include <SwapMicroBenchmark$Job.h>
#include <SwapMicroBenchmark.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/ByteOrder.h>
#include <java/nio/CharBuffer.h>
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
using $CharBuffer = ::java::nio::CharBuffer;

$FieldInfo _SwapMicroBenchmark$3_FieldInfo_[] = {
	{"val$iterations", "I", nullptr, $FINAL | $SYNTHETIC, $field(SwapMicroBenchmark$3, val$iterations)},
	{"val$b", "Ljava/nio/ByteBuffer;", nullptr, $FINAL | $SYNTHETIC, $field(SwapMicroBenchmark$3, val$b)},
	{}
};

$MethodInfo _SwapMicroBenchmark$3_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/nio/ByteBuffer;I)V", nullptr, 0, $method(SwapMicroBenchmark$3, init$, void, $String*, $ByteBuffer*, int32_t)},
	{"work", "()V", nullptr, $PUBLIC, $virtualMethod(SwapMicroBenchmark$3, work, void), "java.lang.Throwable"},
	{}
};

$EnclosingMethodInfo _SwapMicroBenchmark$3_EnclosingMethodInfo_ = {
	"SwapMicroBenchmark",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _SwapMicroBenchmark$3_InnerClassesInfo_[] = {
	{"SwapMicroBenchmark$3", nullptr, nullptr, 0},
	{"SwapMicroBenchmark$Job", "SwapMicroBenchmark", "Job", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _SwapMicroBenchmark$3_ClassInfo_ = {
	$ACC_SUPER,
	"SwapMicroBenchmark$3",
	"SwapMicroBenchmark$Job",
	nullptr,
	_SwapMicroBenchmark$3_FieldInfo_,
	_SwapMicroBenchmark$3_MethodInfo_,
	nullptr,
	&_SwapMicroBenchmark$3_EnclosingMethodInfo_,
	_SwapMicroBenchmark$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"SwapMicroBenchmark"
};

$Object* allocate$SwapMicroBenchmark$3($Class* clazz) {
	return $of($alloc(SwapMicroBenchmark$3));
}

void SwapMicroBenchmark$3::init$($String* name, $ByteBuffer* val$b, int32_t val$iterations) {
	$set(this, val$b, val$b);
	this->val$iterations = val$iterations;
	$SwapMicroBenchmark$Job::init$(name);
}

void SwapMicroBenchmark$3::work() {
	$init($ByteOrder);
	$nc(this->val$b)->order($ByteOrder::LITTLE_ENDIAN);
	$var($CharBuffer, x, $nc(this->val$b)->asCharBuffer());
	for (int32_t i = 0; i < this->val$iterations; ++i) {
		int32_t sum = 0;
		{
			int32_t j = 0;
			int32_t end = $nc(x)->limit();
			for (; j < end; ++j) {
				sum += x->get(j);
			}
		}
		$SwapMicroBenchmark::deoptimize(sum);
	}
}

SwapMicroBenchmark$3::SwapMicroBenchmark$3() {
}

$Class* SwapMicroBenchmark$3::load$($String* name, bool initialize) {
	$loadClass(SwapMicroBenchmark$3, name, initialize, &_SwapMicroBenchmark$3_ClassInfo_, allocate$SwapMicroBenchmark$3);
	return class$;
}

$Class* SwapMicroBenchmark$3::class$ = nullptr;