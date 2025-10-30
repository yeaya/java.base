#include <java/util/stream/ReferencePipeline$1.h>

#include <java/util/stream/AbstractPipeline.h>
#include <java/util/stream/ReferencePipeline$StatelessOp.h>
#include <java/util/stream/ReferencePipeline.h>
#include <java/util/stream/Sink.h>
#include <java/util/stream/StreamShape.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractPipeline = ::java::util::stream::AbstractPipeline;
using $ReferencePipeline = ::java::util::stream::ReferencePipeline;
using $ReferencePipeline$StatelessOp = ::java::util::stream::ReferencePipeline$StatelessOp;
using $Sink = ::java::util::stream::Sink;
using $StreamShape = ::java::util::stream::StreamShape;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _ReferencePipeline$1_FieldInfo_[] = {
	{"this$0", "Ljava/util/stream/ReferencePipeline;", nullptr, $FINAL | $SYNTHETIC, $field(ReferencePipeline$1, this$0)},
	{}
};

$MethodInfo _ReferencePipeline$1_MethodInfo_[] = {
	{"<init>", "(Ljava/util/stream/ReferencePipeline;Ljava/util/stream/AbstractPipeline;Ljava/util/stream/StreamShape;I)V", nullptr, 0, $method(static_cast<void(ReferencePipeline$1::*)($ReferencePipeline*,$AbstractPipeline*,$StreamShape*,int32_t)>(&ReferencePipeline$1::init$))},
	{"opWrapSink", "(ILjava/util/stream/Sink;)Ljava/util/stream/Sink;", "(ILjava/util/stream/Sink<TP_OUT;>;)Ljava/util/stream/Sink<TP_OUT;>;", 0},
	{}
};

$EnclosingMethodInfo _ReferencePipeline$1_EnclosingMethodInfo_ = {
	"java.util.stream.ReferencePipeline",
	"unordered",
	"()Ljava/util/stream/Stream;"
};

$InnerClassInfo _ReferencePipeline$1_InnerClassesInfo_[] = {
	{"java.util.stream.ReferencePipeline$1", nullptr, nullptr, 0},
	{"java.util.stream.ReferencePipeline$StatelessOp", "java.util.stream.ReferencePipeline", "StatelessOp", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _ReferencePipeline$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.stream.ReferencePipeline$1",
	"java.util.stream.ReferencePipeline$StatelessOp",
	nullptr,
	_ReferencePipeline$1_FieldInfo_,
	_ReferencePipeline$1_MethodInfo_,
	"Ljava/util/stream/ReferencePipeline$StatelessOp<TP_OUT;TP_OUT;>;",
	&_ReferencePipeline$1_EnclosingMethodInfo_,
	_ReferencePipeline$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.ReferencePipeline"
};

$Object* allocate$ReferencePipeline$1($Class* clazz) {
	return $of($alloc(ReferencePipeline$1));
}

void ReferencePipeline$1::init$($ReferencePipeline* this$0, $AbstractPipeline* upstream, $StreamShape* inputShape, int32_t opFlags) {
	$set(this, this$0, this$0);
	$ReferencePipeline$StatelessOp::init$(upstream, inputShape, opFlags);
}

$Sink* ReferencePipeline$1::opWrapSink(int32_t flags, $Sink* sink) {
	return sink;
}

ReferencePipeline$1::ReferencePipeline$1() {
}

$Class* ReferencePipeline$1::load$($String* name, bool initialize) {
	$loadClass(ReferencePipeline$1, name, initialize, &_ReferencePipeline$1_ClassInfo_, allocate$ReferencePipeline$1);
	return class$;
}

$Class* ReferencePipeline$1::class$ = nullptr;

		} // stream
	} // util
} // java