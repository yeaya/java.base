#include <java/util/stream/IntPipeline$8$1.h>

#include <java/util/function/IntConsumer.h>
#include <java/util/stream/IntPipeline$8.h>
#include <java/util/stream/IntStream$IntMapMultiConsumer.h>
#include <java/util/stream/Sink$ChainedInt.h>
#include <java/util/stream/Sink.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $IntConsumer = ::java::util::function::IntConsumer;
using $IntPipeline$8 = ::java::util::stream::IntPipeline$8;
using $IntStream$IntMapMultiConsumer = ::java::util::stream::IntStream$IntMapMultiConsumer;
using $Sink = ::java::util::stream::Sink;
using $Sink$ChainedInt = ::java::util::stream::Sink$ChainedInt;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _IntPipeline$8$1_FieldInfo_[] = {
	{"this$1", "Ljava/util/stream/IntPipeline$8;", nullptr, $FINAL | $SYNTHETIC, $field(IntPipeline$8$1, this$1)},
	{}
};

$MethodInfo _IntPipeline$8$1_MethodInfo_[] = {
	{"<init>", "(Ljava/util/stream/IntPipeline$8;Ljava/util/stream/Sink;)V", nullptr, 0, $method(IntPipeline$8$1, init$, void, $IntPipeline$8*, $Sink*)},
	{"accept", "(I)V", nullptr, $PUBLIC, $virtualMethod(IntPipeline$8$1, accept, void, int32_t)},
	{"begin", "(J)V", nullptr, $PUBLIC, $virtualMethod(IntPipeline$8$1, begin, void, int64_t)},
	{}
};

$EnclosingMethodInfo _IntPipeline$8$1_EnclosingMethodInfo_ = {
	"java.util.stream.IntPipeline$8",
	"opWrapSink",
	"(ILjava/util/stream/Sink;)Ljava/util/stream/Sink;"
};

$InnerClassInfo _IntPipeline$8$1_InnerClassesInfo_[] = {
	{"java.util.stream.IntPipeline$8", nullptr, nullptr, 0},
	{"java.util.stream.IntPipeline$8$1", nullptr, nullptr, 0},
	{"java.util.stream.Sink$ChainedInt", "java.util.stream.Sink", "ChainedInt", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _IntPipeline$8$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.stream.IntPipeline$8$1",
	"java.util.stream.Sink$ChainedInt",
	nullptr,
	_IntPipeline$8$1_FieldInfo_,
	_IntPipeline$8$1_MethodInfo_,
	"Ljava/util/stream/Sink$ChainedInt<Ljava/lang/Integer;>;",
	&_IntPipeline$8$1_EnclosingMethodInfo_,
	_IntPipeline$8$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.IntPipeline"
};

$Object* allocate$IntPipeline$8$1($Class* clazz) {
	return $of($alloc(IntPipeline$8$1));
}

void IntPipeline$8$1::init$($IntPipeline$8* this$1, $Sink* downstream) {
	$set(this, this$1, this$1);
	$Sink$ChainedInt::init$(downstream);
}

void IntPipeline$8$1::begin(int64_t size) {
	$nc(this->downstream)->begin(-1);
}

void IntPipeline$8$1::accept(int32_t t) {
	$nc(this->this$1->val$mapper)->accept(t, $cast($IntConsumer, this->downstream));
}

IntPipeline$8$1::IntPipeline$8$1() {
}

$Class* IntPipeline$8$1::load$($String* name, bool initialize) {
	$loadClass(IntPipeline$8$1, name, initialize, &_IntPipeline$8$1_ClassInfo_, allocate$IntPipeline$8$1);
	return class$;
}

$Class* IntPipeline$8$1::class$ = nullptr;

		} // stream
	} // util
} // java