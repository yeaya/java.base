#include <java/util/stream/LongPipeline$6.h>

#include <java/util/function/LongFunction.h>
#include <java/util/stream/AbstractPipeline.h>
#include <java/util/stream/LongPipeline$6$1.h>
#include <java/util/stream/LongPipeline$StatelessOp.h>
#include <java/util/stream/LongPipeline.h>
#include <java/util/stream/Sink$ChainedLong.h>
#include <java/util/stream/Sink$OfLong.h>
#include <java/util/stream/Sink.h>
#include <java/util/stream/StreamShape.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LongFunction = ::java::util::function::LongFunction;
using $AbstractPipeline = ::java::util::stream::AbstractPipeline;
using $LongPipeline = ::java::util::stream::LongPipeline;
using $LongPipeline$6$1 = ::java::util::stream::LongPipeline$6$1;
using $LongPipeline$StatelessOp = ::java::util::stream::LongPipeline$StatelessOp;
using $Sink = ::java::util::stream::Sink;
using $Sink$ChainedLong = ::java::util::stream::Sink$ChainedLong;
using $Sink$OfLong = ::java::util::stream::Sink$OfLong;
using $StreamShape = ::java::util::stream::StreamShape;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _LongPipeline$6_FieldInfo_[] = {
	{"this$0", "Ljava/util/stream/LongPipeline;", nullptr, $FINAL | $SYNTHETIC, $field(LongPipeline$6, this$0)},
	{"val$mapper", "Ljava/util/function/LongFunction;", nullptr, $FINAL | $SYNTHETIC, $field(LongPipeline$6, val$mapper)},
	{}
};

$MethodInfo _LongPipeline$6_MethodInfo_[] = {
	{"<init>", "(Ljava/util/stream/LongPipeline;Ljava/util/stream/AbstractPipeline;Ljava/util/stream/StreamShape;ILjava/util/function/LongFunction;)V", nullptr, 0, $method(static_cast<void(LongPipeline$6::*)($LongPipeline*,$AbstractPipeline*,$StreamShape*,int32_t,$LongFunction*)>(&LongPipeline$6::init$))},
	{"opWrapSink", "(ILjava/util/stream/Sink;)Ljava/util/stream/Sink;", "(ILjava/util/stream/Sink<Ljava/lang/Long;>;)Ljava/util/stream/Sink<Ljava/lang/Long;>;", 0},
	{}
};

$EnclosingMethodInfo _LongPipeline$6_EnclosingMethodInfo_ = {
	"java.util.stream.LongPipeline",
	"flatMap",
	"(Ljava/util/function/LongFunction;)Ljava/util/stream/LongStream;"
};

$InnerClassInfo _LongPipeline$6_InnerClassesInfo_[] = {
	{"java.util.stream.LongPipeline$6", nullptr, nullptr, 0},
	{"java.util.stream.LongPipeline$StatelessOp", "java.util.stream.LongPipeline", "StatelessOp", $STATIC | $ABSTRACT},
	{"java.util.stream.LongPipeline$6$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _LongPipeline$6_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.stream.LongPipeline$6",
	"java.util.stream.LongPipeline$StatelessOp",
	nullptr,
	_LongPipeline$6_FieldInfo_,
	_LongPipeline$6_MethodInfo_,
	"Ljava/util/stream/LongPipeline$StatelessOp<Ljava/lang/Long;>;",
	&_LongPipeline$6_EnclosingMethodInfo_,
	_LongPipeline$6_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.LongPipeline"
};

$Object* allocate$LongPipeline$6($Class* clazz) {
	return $of($alloc(LongPipeline$6));
}

void LongPipeline$6::init$($LongPipeline* this$0, $AbstractPipeline* upstream, $StreamShape* inputShape, int32_t opFlags, $LongFunction* val$mapper) {
	$set(this, this$0, this$0);
	$set(this, val$mapper, val$mapper);
	$LongPipeline$StatelessOp::init$(upstream, inputShape, opFlags);
}

$Sink* LongPipeline$6::opWrapSink(int32_t flags, $Sink* sink) {
	return $new($LongPipeline$6$1, this, sink);
}

LongPipeline$6::LongPipeline$6() {
}

$Class* LongPipeline$6::load$($String* name, bool initialize) {
	$loadClass(LongPipeline$6, name, initialize, &_LongPipeline$6_ClassInfo_, allocate$LongPipeline$6);
	return class$;
}

$Class* LongPipeline$6::class$ = nullptr;

		} // stream
	} // util
} // java