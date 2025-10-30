#include <SwapMicroBenchmark$4.h>

#include <SwapMicroBenchmark$Job.h>
#include <SwapMicroBenchmark.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/ByteOrder.h>
#include <java/nio/ShortBuffer.h>
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
using $ShortBuffer = ::java::nio::ShortBuffer;

$FieldInfo _SwapMicroBenchmark$4_FieldInfo_[] = {
	{"val$iterations", "I", nullptr, $FINAL | $SYNTHETIC, $field(SwapMicroBenchmark$4, val$iterations)},
	{"val$b", "Ljava/nio/ByteBuffer;", nullptr, $FINAL | $SYNTHETIC, $field(SwapMicroBenchmark$4, val$b)},
	{}
};

$MethodInfo _SwapMicroBenchmark$4_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/nio/ByteBuffer;I)V", nullptr, 0, $method(static_cast<void(SwapMicroBenchmark$4::*)($String*,$ByteBuffer*,int32_t)>(&SwapMicroBenchmark$4::init$))},
	{"work", "()V", nullptr, $PUBLIC, nullptr, "java.lang.Throwable"},
	{}
};

$EnclosingMethodInfo _SwapMicroBenchmark$4_EnclosingMethodInfo_ = {
	"SwapMicroBenchmark",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _SwapMicroBenchmark$4_InnerClassesInfo_[] = {
	{"SwapMicroBenchmark$4", nullptr, nullptr, 0},
	{"SwapMicroBenchmark$Job", "SwapMicroBenchmark", "Job", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _SwapMicroBenchmark$4_ClassInfo_ = {
	$ACC_SUPER,
	"SwapMicroBenchmark$4",
	"SwapMicroBenchmark$Job",
	nullptr,
	_SwapMicroBenchmark$4_FieldInfo_,
	_SwapMicroBenchmark$4_MethodInfo_,
	nullptr,
	&_SwapMicroBenchmark$4_EnclosingMethodInfo_,
	_SwapMicroBenchmark$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"SwapMicroBenchmark"
};

$Object* allocate$SwapMicroBenchmark$4($Class* clazz) {
	return $of($alloc(SwapMicroBenchmark$4));
}

void SwapMicroBenchmark$4::init$($String* name, $ByteBuffer* val$b, int32_t val$iterations) {
	$set(this, val$b, val$b);
	this->val$iterations = val$iterations;
	$SwapMicroBenchmark$Job::init$(name);
}

void SwapMicroBenchmark$4::work() {
	$init($ByteOrder);
	$nc(this->val$b)->order($ByteOrder::BIG_ENDIAN);
	$var($ShortBuffer, x, $nc(this->val$b)->asShortBuffer());
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

SwapMicroBenchmark$4::SwapMicroBenchmark$4() {
}

$Class* SwapMicroBenchmark$4::load$($String* name, bool initialize) {
	$loadClass(SwapMicroBenchmark$4, name, initialize, &_SwapMicroBenchmark$4_ClassInfo_, allocate$SwapMicroBenchmark$4);
	return class$;
}

$Class* SwapMicroBenchmark$4::class$ = nullptr;