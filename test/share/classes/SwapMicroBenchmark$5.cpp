#include <SwapMicroBenchmark$5.h>

#include <SwapMicroBenchmark$Job.h>
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
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $ByteOrder = ::java::nio::ByteOrder;
using $ShortBuffer = ::java::nio::ShortBuffer;

$FieldInfo _SwapMicroBenchmark$5_FieldInfo_[] = {
	{"val$iterations", "I", nullptr, $FINAL | $SYNTHETIC, $field(SwapMicroBenchmark$5, val$iterations)},
	{"val$b", "Ljava/nio/ByteBuffer;", nullptr, $FINAL | $SYNTHETIC, $field(SwapMicroBenchmark$5, val$b)},
	{}
};

$MethodInfo _SwapMicroBenchmark$5_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/nio/ByteBuffer;I)V", nullptr, 0, $method(static_cast<void(SwapMicroBenchmark$5::*)($String*,$ByteBuffer*,int32_t)>(&SwapMicroBenchmark$5::init$))},
	{"work", "()V", nullptr, $PUBLIC, nullptr, "java.lang.Throwable"},
	{}
};

$EnclosingMethodInfo _SwapMicroBenchmark$5_EnclosingMethodInfo_ = {
	"SwapMicroBenchmark",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _SwapMicroBenchmark$5_InnerClassesInfo_[] = {
	{"SwapMicroBenchmark$5", nullptr, nullptr, 0},
	{"SwapMicroBenchmark$Job", "SwapMicroBenchmark", "Job", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _SwapMicroBenchmark$5_ClassInfo_ = {
	$ACC_SUPER,
	"SwapMicroBenchmark$5",
	"SwapMicroBenchmark$Job",
	nullptr,
	_SwapMicroBenchmark$5_FieldInfo_,
	_SwapMicroBenchmark$5_MethodInfo_,
	nullptr,
	&_SwapMicroBenchmark$5_EnclosingMethodInfo_,
	_SwapMicroBenchmark$5_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"SwapMicroBenchmark"
};

$Object* allocate$SwapMicroBenchmark$5($Class* clazz) {
	return $of($alloc(SwapMicroBenchmark$5));
}

void SwapMicroBenchmark$5::init$($String* name, $ByteBuffer* val$b, int32_t val$iterations) {
	$set(this, val$b, val$b);
	this->val$iterations = val$iterations;
	$SwapMicroBenchmark$Job::init$(name);
}

void SwapMicroBenchmark$5::work() {
	$init($ByteOrder);
	$nc(this->val$b)->order($ByteOrder::LITTLE_ENDIAN);
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

SwapMicroBenchmark$5::SwapMicroBenchmark$5() {
}

$Class* SwapMicroBenchmark$5::load$($String* name, bool initialize) {
	$loadClass(SwapMicroBenchmark$5, name, initialize, &_SwapMicroBenchmark$5_ClassInfo_, allocate$SwapMicroBenchmark$5);
	return class$;
}

$Class* SwapMicroBenchmark$5::class$ = nullptr;