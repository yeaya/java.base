#include <java/util/stream/DoublePipeline$7.h>

#include <java/util/stream/AbstractPipeline.h>
#include <java/util/stream/DoublePipeline$StatelessOp.h>
#include <java/util/stream/DoublePipeline.h>
#include <java/util/stream/Sink.h>
#include <java/util/stream/StreamShape.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractPipeline = ::java::util::stream::AbstractPipeline;
using $DoublePipeline = ::java::util::stream::DoublePipeline;
using $DoublePipeline$StatelessOp = ::java::util::stream::DoublePipeline$StatelessOp;
using $Sink = ::java::util::stream::Sink;
using $StreamShape = ::java::util::stream::StreamShape;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _DoublePipeline$7_FieldInfo_[] = {
	{"this$0", "Ljava/util/stream/DoublePipeline;", nullptr, $FINAL | $SYNTHETIC, $field(DoublePipeline$7, this$0)},
	{}
};

$MethodInfo _DoublePipeline$7_MethodInfo_[] = {
	{"<init>", "(Ljava/util/stream/DoublePipeline;Ljava/util/stream/AbstractPipeline;Ljava/util/stream/StreamShape;I)V", nullptr, 0, $method(static_cast<void(DoublePipeline$7::*)($DoublePipeline*,$AbstractPipeline*,$StreamShape*,int32_t)>(&DoublePipeline$7::init$))},
	{"opWrapSink", "(ILjava/util/stream/Sink;)Ljava/util/stream/Sink;", "(ILjava/util/stream/Sink<Ljava/lang/Double;>;)Ljava/util/stream/Sink<Ljava/lang/Double;>;", 0},
	{}
};

$EnclosingMethodInfo _DoublePipeline$7_EnclosingMethodInfo_ = {
	"java.util.stream.DoublePipeline",
	"unordered",
	"()Ljava/util/stream/DoubleStream;"
};

$InnerClassInfo _DoublePipeline$7_InnerClassesInfo_[] = {
	{"java.util.stream.DoublePipeline$7", nullptr, nullptr, 0},
	{"java.util.stream.DoublePipeline$StatelessOp", "java.util.stream.DoublePipeline", "StatelessOp", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _DoublePipeline$7_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.stream.DoublePipeline$7",
	"java.util.stream.DoublePipeline$StatelessOp",
	nullptr,
	_DoublePipeline$7_FieldInfo_,
	_DoublePipeline$7_MethodInfo_,
	"Ljava/util/stream/DoublePipeline$StatelessOp<Ljava/lang/Double;>;",
	&_DoublePipeline$7_EnclosingMethodInfo_,
	_DoublePipeline$7_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.DoublePipeline"
};

$Object* allocate$DoublePipeline$7($Class* clazz) {
	return $of($alloc(DoublePipeline$7));
}

void DoublePipeline$7::init$($DoublePipeline* this$0, $AbstractPipeline* upstream, $StreamShape* inputShape, int32_t opFlags) {
	$set(this, this$0, this$0);
	$DoublePipeline$StatelessOp::init$(upstream, inputShape, opFlags);
}

$Sink* DoublePipeline$7::opWrapSink(int32_t flags, $Sink* sink) {
	return sink;
}

DoublePipeline$7::DoublePipeline$7() {
}

$Class* DoublePipeline$7::load$($String* name, bool initialize) {
	$loadClass(DoublePipeline$7, name, initialize, &_DoublePipeline$7_ClassInfo_, allocate$DoublePipeline$7);
	return class$;
}

$Class* DoublePipeline$7::class$ = nullptr;

		} // stream
	} // util
} // java