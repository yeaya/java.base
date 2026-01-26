#include <java/util/stream/IntPipeline$6$1.h>

#include <java/util/function/IntToDoubleFunction.h>
#include <java/util/stream/IntPipeline$6.h>
#include <java/util/stream/Sink$ChainedInt.h>
#include <java/util/stream/Sink.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $IntToDoubleFunction = ::java::util::function::IntToDoubleFunction;
using $IntPipeline$6 = ::java::util::stream::IntPipeline$6;
using $Sink = ::java::util::stream::Sink;
using $Sink$ChainedInt = ::java::util::stream::Sink$ChainedInt;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _IntPipeline$6$1_FieldInfo_[] = {
	{"this$1", "Ljava/util/stream/IntPipeline$6;", nullptr, $FINAL | $SYNTHETIC, $field(IntPipeline$6$1, this$1)},
	{}
};

$MethodInfo _IntPipeline$6$1_MethodInfo_[] = {
	{"<init>", "(Ljava/util/stream/IntPipeline$6;Ljava/util/stream/Sink;)V", nullptr, 0, $method(IntPipeline$6$1, init$, void, $IntPipeline$6*, $Sink*)},
	{"accept", "(I)V", nullptr, $PUBLIC, $virtualMethod(IntPipeline$6$1, accept, void, int32_t)},
	{}
};

$EnclosingMethodInfo _IntPipeline$6$1_EnclosingMethodInfo_ = {
	"java.util.stream.IntPipeline$6",
	"opWrapSink",
	"(ILjava/util/stream/Sink;)Ljava/util/stream/Sink;"
};

$InnerClassInfo _IntPipeline$6$1_InnerClassesInfo_[] = {
	{"java.util.stream.IntPipeline$6", nullptr, nullptr, 0},
	{"java.util.stream.IntPipeline$6$1", nullptr, nullptr, 0},
	{"java.util.stream.Sink$ChainedInt", "java.util.stream.Sink", "ChainedInt", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _IntPipeline$6$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.stream.IntPipeline$6$1",
	"java.util.stream.Sink$ChainedInt",
	nullptr,
	_IntPipeline$6$1_FieldInfo_,
	_IntPipeline$6$1_MethodInfo_,
	"Ljava/util/stream/Sink$ChainedInt<Ljava/lang/Double;>;",
	&_IntPipeline$6$1_EnclosingMethodInfo_,
	_IntPipeline$6$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.IntPipeline"
};

$Object* allocate$IntPipeline$6$1($Class* clazz) {
	return $of($alloc(IntPipeline$6$1));
}

void IntPipeline$6$1::init$($IntPipeline$6* this$1, $Sink* downstream) {
	$set(this, this$1, this$1);
	$Sink$ChainedInt::init$(downstream);
}

void IntPipeline$6$1::accept(int32_t t) {
	$nc(this->downstream)->accept($nc(this->this$1->val$mapper)->applyAsDouble(t));
}

IntPipeline$6$1::IntPipeline$6$1() {
}

$Class* IntPipeline$6$1::load$($String* name, bool initialize) {
	$loadClass(IntPipeline$6$1, name, initialize, &_IntPipeline$6$1_ClassInfo_, allocate$IntPipeline$6$1);
	return class$;
}

$Class* IntPipeline$6$1::class$ = nullptr;

		} // stream
	} // util
} // java