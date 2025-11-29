#include <java/util/stream/IntPipeline$1$1.h>

#include <java/util/function/IntFunction.h>
#include <java/util/stream/IntPipeline$1.h>
#include <java/util/stream/Sink$ChainedInt.h>
#include <java/util/stream/Sink.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $IntFunction = ::java::util::function::IntFunction;
using $IntPipeline$1 = ::java::util::stream::IntPipeline$1;
using $Sink = ::java::util::stream::Sink;
using $Sink$ChainedInt = ::java::util::stream::Sink$ChainedInt;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _IntPipeline$1$1_FieldInfo_[] = {
	{"this$1", "Ljava/util/stream/IntPipeline$1;", nullptr, $FINAL | $SYNTHETIC, $field(IntPipeline$1$1, this$1)},
	{}
};

$MethodInfo _IntPipeline$1$1_MethodInfo_[] = {
	{"<init>", "(Ljava/util/stream/IntPipeline$1;Ljava/util/stream/Sink;)V", nullptr, 0, $method(static_cast<void(IntPipeline$1$1::*)($IntPipeline$1*,$Sink*)>(&IntPipeline$1$1::init$))},
	{"accept", "(I)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _IntPipeline$1$1_EnclosingMethodInfo_ = {
	"java.util.stream.IntPipeline$1",
	"opWrapSink",
	"(ILjava/util/stream/Sink;)Ljava/util/stream/Sink;"
};

$InnerClassInfo _IntPipeline$1$1_InnerClassesInfo_[] = {
	{"java.util.stream.IntPipeline$1", nullptr, nullptr, 0},
	{"java.util.stream.IntPipeline$1$1", nullptr, nullptr, 0},
	{"java.util.stream.Sink$ChainedInt", "java.util.stream.Sink", "ChainedInt", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _IntPipeline$1$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.stream.IntPipeline$1$1",
	"java.util.stream.Sink$ChainedInt",
	nullptr,
	_IntPipeline$1$1_FieldInfo_,
	_IntPipeline$1$1_MethodInfo_,
	"Ljava/util/stream/Sink$ChainedInt<TU;>;",
	&_IntPipeline$1$1_EnclosingMethodInfo_,
	_IntPipeline$1$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.IntPipeline"
};

$Object* allocate$IntPipeline$1$1($Class* clazz) {
	return $of($alloc(IntPipeline$1$1));
}

void IntPipeline$1$1::init$($IntPipeline$1* this$1, $Sink* downstream) {
	$set(this, this$1, this$1);
	$Sink$ChainedInt::init$(downstream);
}

void IntPipeline$1$1::accept(int32_t t) {
	$nc(this->downstream)->accept($($nc(this->this$1->val$mapper)->apply(t)));
}

IntPipeline$1$1::IntPipeline$1$1() {
}

$Class* IntPipeline$1$1::load$($String* name, bool initialize) {
	$loadClass(IntPipeline$1$1, name, initialize, &_IntPipeline$1$1_ClassInfo_, allocate$IntPipeline$1$1);
	return class$;
}

$Class* IntPipeline$1$1::class$ = nullptr;

		} // stream
	} // util
} // java