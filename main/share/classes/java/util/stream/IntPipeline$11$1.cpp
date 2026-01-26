#include <java/util/stream/IntPipeline$11$1.h>

#include <java/util/function/IntConsumer.h>
#include <java/util/stream/IntPipeline$11.h>
#include <java/util/stream/Sink$ChainedInt.h>
#include <java/util/stream/Sink.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $IntConsumer = ::java::util::function::IntConsumer;
using $IntPipeline$11 = ::java::util::stream::IntPipeline$11;
using $Sink = ::java::util::stream::Sink;
using $Sink$ChainedInt = ::java::util::stream::Sink$ChainedInt;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _IntPipeline$11$1_FieldInfo_[] = {
	{"this$1", "Ljava/util/stream/IntPipeline$11;", nullptr, $FINAL | $SYNTHETIC, $field(IntPipeline$11$1, this$1)},
	{}
};

$MethodInfo _IntPipeline$11$1_MethodInfo_[] = {
	{"<init>", "(Ljava/util/stream/IntPipeline$11;Ljava/util/stream/Sink;)V", nullptr, 0, $method(IntPipeline$11$1, init$, void, $IntPipeline$11*, $Sink*)},
	{"accept", "(I)V", nullptr, $PUBLIC, $virtualMethod(IntPipeline$11$1, accept, void, int32_t)},
	{}
};

$EnclosingMethodInfo _IntPipeline$11$1_EnclosingMethodInfo_ = {
	"java.util.stream.IntPipeline$11",
	"opWrapSink",
	"(ILjava/util/stream/Sink;)Ljava/util/stream/Sink;"
};

$InnerClassInfo _IntPipeline$11$1_InnerClassesInfo_[] = {
	{"java.util.stream.IntPipeline$11", nullptr, nullptr, 0},
	{"java.util.stream.IntPipeline$11$1", nullptr, nullptr, 0},
	{"java.util.stream.Sink$ChainedInt", "java.util.stream.Sink", "ChainedInt", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _IntPipeline$11$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.stream.IntPipeline$11$1",
	"java.util.stream.Sink$ChainedInt",
	nullptr,
	_IntPipeline$11$1_FieldInfo_,
	_IntPipeline$11$1_MethodInfo_,
	"Ljava/util/stream/Sink$ChainedInt<Ljava/lang/Integer;>;",
	&_IntPipeline$11$1_EnclosingMethodInfo_,
	_IntPipeline$11$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.IntPipeline"
};

$Object* allocate$IntPipeline$11$1($Class* clazz) {
	return $of($alloc(IntPipeline$11$1));
}

void IntPipeline$11$1::init$($IntPipeline$11* this$1, $Sink* downstream) {
	$set(this, this$1, this$1);
	$Sink$ChainedInt::init$(downstream);
}

void IntPipeline$11$1::accept(int32_t t) {
	$nc(this->this$1->val$action)->accept(t);
	$nc(this->downstream)->accept(t);
}

IntPipeline$11$1::IntPipeline$11$1() {
}

$Class* IntPipeline$11$1::load$($String* name, bool initialize) {
	$loadClass(IntPipeline$11$1, name, initialize, &_IntPipeline$11$1_ClassInfo_, allocate$IntPipeline$11$1);
	return class$;
}

$Class* IntPipeline$11$1::class$ = nullptr;

		} // stream
	} // util
} // java