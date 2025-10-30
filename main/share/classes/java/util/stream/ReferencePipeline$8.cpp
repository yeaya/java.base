#include <java/util/stream/ReferencePipeline$8.h>

#include <java/util/function/Function.h>
#include <java/util/stream/AbstractPipeline.h>
#include <java/util/stream/IntPipeline$StatelessOp.h>
#include <java/util/stream/ReferencePipeline$8$1.h>
#include <java/util/stream/ReferencePipeline.h>
#include <java/util/stream/Sink$ChainedReference.h>
#include <java/util/stream/Sink.h>
#include <java/util/stream/StreamShape.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Function = ::java::util::function::Function;
using $AbstractPipeline = ::java::util::stream::AbstractPipeline;
using $IntPipeline$StatelessOp = ::java::util::stream::IntPipeline$StatelessOp;
using $ReferencePipeline = ::java::util::stream::ReferencePipeline;
using $ReferencePipeline$8$1 = ::java::util::stream::ReferencePipeline$8$1;
using $Sink = ::java::util::stream::Sink;
using $Sink$ChainedReference = ::java::util::stream::Sink$ChainedReference;
using $StreamShape = ::java::util::stream::StreamShape;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _ReferencePipeline$8_FieldInfo_[] = {
	{"this$0", "Ljava/util/stream/ReferencePipeline;", nullptr, $FINAL | $SYNTHETIC, $field(ReferencePipeline$8, this$0)},
	{"val$mapper", "Ljava/util/function/Function;", nullptr, $FINAL | $SYNTHETIC, $field(ReferencePipeline$8, val$mapper)},
	{}
};

$MethodInfo _ReferencePipeline$8_MethodInfo_[] = {
	{"<init>", "(Ljava/util/stream/ReferencePipeline;Ljava/util/stream/AbstractPipeline;Ljava/util/stream/StreamShape;ILjava/util/function/Function;)V", nullptr, 0, $method(static_cast<void(ReferencePipeline$8::*)($ReferencePipeline*,$AbstractPipeline*,$StreamShape*,int32_t,$Function*)>(&ReferencePipeline$8::init$))},
	{"opWrapSink", "(ILjava/util/stream/Sink;)Ljava/util/stream/Sink;", "(ILjava/util/stream/Sink<Ljava/lang/Integer;>;)Ljava/util/stream/Sink<TP_OUT;>;", 0},
	{}
};

$EnclosingMethodInfo _ReferencePipeline$8_EnclosingMethodInfo_ = {
	"java.util.stream.ReferencePipeline",
	"flatMapToInt",
	"(Ljava/util/function/Function;)Ljava/util/stream/IntStream;"
};

$InnerClassInfo _ReferencePipeline$8_InnerClassesInfo_[] = {
	{"java.util.stream.ReferencePipeline$8", nullptr, nullptr, 0},
	{"java.util.stream.IntPipeline$StatelessOp", "java.util.stream.IntPipeline", "StatelessOp", $STATIC | $ABSTRACT},
	{"java.util.stream.ReferencePipeline$8$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ReferencePipeline$8_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.stream.ReferencePipeline$8",
	"java.util.stream.IntPipeline$StatelessOp",
	nullptr,
	_ReferencePipeline$8_FieldInfo_,
	_ReferencePipeline$8_MethodInfo_,
	"Ljava/util/stream/IntPipeline$StatelessOp<TP_OUT;>;",
	&_ReferencePipeline$8_EnclosingMethodInfo_,
	_ReferencePipeline$8_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.ReferencePipeline"
};

$Object* allocate$ReferencePipeline$8($Class* clazz) {
	return $of($alloc(ReferencePipeline$8));
}

void ReferencePipeline$8::init$($ReferencePipeline* this$0, $AbstractPipeline* upstream, $StreamShape* inputShape, int32_t opFlags, $Function* val$mapper) {
	$set(this, this$0, this$0);
	$set(this, val$mapper, val$mapper);
	$IntPipeline$StatelessOp::init$(upstream, inputShape, opFlags);
}

$Sink* ReferencePipeline$8::opWrapSink(int32_t flags, $Sink* sink) {
	return $new($ReferencePipeline$8$1, this, sink);
}

ReferencePipeline$8::ReferencePipeline$8() {
}

$Class* ReferencePipeline$8::load$($String* name, bool initialize) {
	$loadClass(ReferencePipeline$8, name, initialize, &_ReferencePipeline$8_ClassInfo_, allocate$ReferencePipeline$8);
	return class$;
}

$Class* ReferencePipeline$8::class$ = nullptr;

		} // stream
	} // util
} // java