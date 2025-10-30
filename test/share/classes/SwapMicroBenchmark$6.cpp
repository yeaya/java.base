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
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $ByteOrder = ::java::nio::ByteOrder;
using $IntBuffer = ::java::nio::IntBuffer;

$FieldInfo _SwapMicroBenchmark$6_FieldInfo_[] = {
	{"val$iterations", "I", nullptr, $FINAL | $SYNTHETIC, $field(SwapMicroBenchmark$6, val$iterations)},
	{"val$b", "Ljava/nio/ByteBuffer;", nullptr, $FINAL | $SYNTHETIC, $field(SwapMicroBenchmark$6, val$b)},
	{}
};

$MethodInfo _SwapMicroBenchmark$6_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/nio/ByteBuffer;I)V", nullptr, 0, $method(static_cast<void(SwapMicroBenchmark$6::*)($String*,$ByteBuffer*,int32_t)>(&SwapMicroBenchmark$6::init$))},
	{"work", "()V", nullptr, $PUBLIC, nullptr, "java.lang.Throwable"},
	{}
};

$EnclosingMethodInfo _SwapMicroBenchmark$6_EnclosingMethodInfo_ = {
	"SwapMicroBenchmark",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _SwapMicroBenchmark$6_InnerClassesInfo_[] = {
	{"SwapMicroBenchmark$6", nullptr, nullptr, 0},
	{"SwapMicroBenchmark$Job", "SwapMicroBenchmark", "Job", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _SwapMicroBenchmark$6_ClassInfo_ = {
	$ACC_SUPER,
	"SwapMicroBenchmark$6",
	"SwapMicroBenchmark$Job",
	nullptr,
	_SwapMicroBenchmark$6_FieldInfo_,
	_SwapMicroBenchmark$6_MethodInfo_,
	nullptr,
	&_SwapMicroBenchmark$6_EnclosingMethodInfo_,
	_SwapMicroBenchmark$6_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"SwapMicroBenchmark"
};

$Object* allocate$SwapMicroBenchmark$6($Class* clazz) {
	return $of($alloc(SwapMicroBenchmark$6));
}

void SwapMicroBenchmark$6::init$($String* name, $ByteBuffer* val$b, int32_t val$iterations) {
	$set(this, val$b, val$b);
	this->val$iterations = val$iterations;
	$SwapMicroBenchmark$Job::init$(name);
}

void SwapMicroBenchmark$6::work() {
	$init($ByteOrder);
	$nc(this->val$b)->order($ByteOrder::BIG_ENDIAN);
	$var($IntBuffer, x, $nc(this->val$b)->asIntBuffer());
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

SwapMicroBenchmark$6::SwapMicroBenchmark$6() {
}

$Class* SwapMicroBenchmark$6::load$($String* name, bool initialize) {
	$loadClass(SwapMicroBenchmark$6, name, initialize, &_SwapMicroBenchmark$6_ClassInfo_, allocate$SwapMicroBenchmark$6);
	return class$;
}

$Class* SwapMicroBenchmark$6::class$ = nullptr;