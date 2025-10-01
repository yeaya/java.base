#include <SwapMicroBenchmark$2.h>

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
#include <java/nio/CharBuffer.h>
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
using $CharBuffer = ::java::nio::CharBuffer;

$FieldInfo _SwapMicroBenchmark$2_FieldInfo_[] = {
	{"val$iterations", "I", nullptr, $FINAL | $SYNTHETIC, $field(SwapMicroBenchmark$2, val$iterations)},
	{"val$b", "Ljava/nio/ByteBuffer;", nullptr, $FINAL | $SYNTHETIC, $field(SwapMicroBenchmark$2, val$b)},
	{}
};

$MethodInfo _SwapMicroBenchmark$2_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/nio/ByteBuffer;I)V", nullptr, 0, $method(static_cast<void(SwapMicroBenchmark$2::*)($String*,$ByteBuffer*,int32_t)>(&SwapMicroBenchmark$2::init$))},
	{"work", "()V", nullptr, $PUBLIC, nullptr, "java.lang.Throwable"},
	{}
};

$EnclosingMethodInfo _SwapMicroBenchmark$2_EnclosingMethodInfo_ = {
	"SwapMicroBenchmark",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _SwapMicroBenchmark$2_InnerClassesInfo_[] = {
	{"SwapMicroBenchmark$2", nullptr, nullptr, 0},
	{"SwapMicroBenchmark$Job", "SwapMicroBenchmark", "Job", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _SwapMicroBenchmark$2_ClassInfo_ = {
	$ACC_SUPER,
	"SwapMicroBenchmark$2",
	"SwapMicroBenchmark$Job",
	nullptr,
	_SwapMicroBenchmark$2_FieldInfo_,
	_SwapMicroBenchmark$2_MethodInfo_,
	nullptr,
	&_SwapMicroBenchmark$2_EnclosingMethodInfo_,
	_SwapMicroBenchmark$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"SwapMicroBenchmark"
};

$Object* allocate$SwapMicroBenchmark$2($Class* clazz) {
	return $of($alloc(SwapMicroBenchmark$2));
}

void SwapMicroBenchmark$2::init$($String* name, $ByteBuffer* val$b, int32_t val$iterations) {
	$set(this, val$b, val$b);
	this->val$iterations = val$iterations;
	$SwapMicroBenchmark$Job::init$(name);
}

void SwapMicroBenchmark$2::work() {
	$init($ByteOrder);
	$nc(this->val$b)->order($ByteOrder::BIG_ENDIAN);
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

SwapMicroBenchmark$2::SwapMicroBenchmark$2() {
}

$Class* SwapMicroBenchmark$2::load$($String* name, bool initialize) {
	$loadClass(SwapMicroBenchmark$2, name, initialize, &_SwapMicroBenchmark$2_ClassInfo_, allocate$SwapMicroBenchmark$2);
	return class$;
}

$Class* SwapMicroBenchmark$2::class$ = nullptr;