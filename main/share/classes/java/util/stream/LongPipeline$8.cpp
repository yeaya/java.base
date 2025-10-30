#include <java/util/stream/LongPipeline$8.h>

#include <java/util/stream/AbstractPipeline.h>
#include <java/util/stream/LongPipeline$StatelessOp.h>
#include <java/util/stream/LongPipeline.h>
#include <java/util/stream/Sink.h>
#include <java/util/stream/StreamShape.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractPipeline = ::java::util::stream::AbstractPipeline;
using $LongPipeline = ::java::util::stream::LongPipeline;
using $LongPipeline$StatelessOp = ::java::util::stream::LongPipeline$StatelessOp;
using $Sink = ::java::util::stream::Sink;
using $StreamShape = ::java::util::stream::StreamShape;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _LongPipeline$8_FieldInfo_[] = {
	{"this$0", "Ljava/util/stream/LongPipeline;", nullptr, $FINAL | $SYNTHETIC, $field(LongPipeline$8, this$0)},
	{}
};

$MethodInfo _LongPipeline$8_MethodInfo_[] = {
	{"<init>", "(Ljava/util/stream/LongPipeline;Ljava/util/stream/AbstractPipeline;Ljava/util/stream/StreamShape;I)V", nullptr, 0, $method(static_cast<void(LongPipeline$8::*)($LongPipeline*,$AbstractPipeline*,$StreamShape*,int32_t)>(&LongPipeline$8::init$))},
	{"opWrapSink", "(ILjava/util/stream/Sink;)Ljava/util/stream/Sink;", "(ILjava/util/stream/Sink<Ljava/lang/Long;>;)Ljava/util/stream/Sink<Ljava/lang/Long;>;", 0},
	{}
};

$EnclosingMethodInfo _LongPipeline$8_EnclosingMethodInfo_ = {
	"java.util.stream.LongPipeline",
	"unordered",
	"()Ljava/util/stream/LongStream;"
};

$InnerClassInfo _LongPipeline$8_InnerClassesInfo_[] = {
	{"java.util.stream.LongPipeline$8", nullptr, nullptr, 0},
	{"java.util.stream.LongPipeline$StatelessOp", "java.util.stream.LongPipeline", "StatelessOp", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _LongPipeline$8_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.stream.LongPipeline$8",
	"java.util.stream.LongPipeline$StatelessOp",
	nullptr,
	_LongPipeline$8_FieldInfo_,
	_LongPipeline$8_MethodInfo_,
	"Ljava/util/stream/LongPipeline$StatelessOp<Ljava/lang/Long;>;",
	&_LongPipeline$8_EnclosingMethodInfo_,
	_LongPipeline$8_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.LongPipeline"
};

$Object* allocate$LongPipeline$8($Class* clazz) {
	return $of($alloc(LongPipeline$8));
}

void LongPipeline$8::init$($LongPipeline* this$0, $AbstractPipeline* upstream, $StreamShape* inputShape, int32_t opFlags) {
	$set(this, this$0, this$0);
	$LongPipeline$StatelessOp::init$(upstream, inputShape, opFlags);
}

$Sink* LongPipeline$8::opWrapSink(int32_t flags, $Sink* sink) {
	return sink;
}

LongPipeline$8::LongPipeline$8() {
}

$Class* LongPipeline$8::load$($String* name, bool initialize) {
	$loadClass(LongPipeline$8, name, initialize, &_LongPipeline$8_ClassInfo_, allocate$LongPipeline$8);
	return class$;
}

$Class* LongPipeline$8::class$ = nullptr;

		} // stream
	} // util
} // java