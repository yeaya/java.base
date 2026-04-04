#include <java/util/stream/DoublePipeline$9.h>
#include <java/util/function/DoubleConsumer.h>
#include <java/util/stream/AbstractPipeline.h>
#include <java/util/stream/DoublePipeline$9$1.h>
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
using $DoubleConsumer = ::java::util::function::DoubleConsumer;
using $AbstractPipeline = ::java::util::stream::AbstractPipeline;
using $DoublePipeline = ::java::util::stream::DoublePipeline;
using $DoublePipeline$9$1 = ::java::util::stream::DoublePipeline$9$1;
using $DoublePipeline$StatelessOp = ::java::util::stream::DoublePipeline$StatelessOp;
using $Sink = ::java::util::stream::Sink;
using $StreamShape = ::java::util::stream::StreamShape;

namespace java {
	namespace util {
		namespace stream {

void DoublePipeline$9::init$($DoublePipeline* this$0, $AbstractPipeline* upstream, $StreamShape* inputShape, int32_t opFlags, $DoubleConsumer* val$action) {
	$set(this, this$0, this$0);
	$set(this, val$action, val$action);
	$DoublePipeline$StatelessOp::init$(upstream, inputShape, opFlags);
}

$Sink* DoublePipeline$9::opWrapSink(int32_t flags, $Sink* sink) {
	return $new($DoublePipeline$9$1, this, sink);
}

DoublePipeline$9::DoublePipeline$9() {
}

$Class* DoublePipeline$9::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/util/stream/DoublePipeline;", nullptr, $FINAL | $SYNTHETIC, $field(DoublePipeline$9, this$0)},
		{"val$action", "Ljava/util/function/DoubleConsumer;", nullptr, $FINAL | $SYNTHETIC, $field(DoublePipeline$9, val$action)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/stream/DoublePipeline;Ljava/util/stream/AbstractPipeline;Ljava/util/stream/StreamShape;ILjava/util/function/DoubleConsumer;)V", nullptr, 0, $method(DoublePipeline$9, init$, void, $DoublePipeline*, $AbstractPipeline*, $StreamShape*, int32_t, $DoubleConsumer*)},
		{"opWrapSink", "(ILjava/util/stream/Sink;)Ljava/util/stream/Sink;", "(ILjava/util/stream/Sink<Ljava/lang/Double;>;)Ljava/util/stream/Sink<Ljava/lang/Double;>;", 0, $virtualMethod(DoublePipeline$9, opWrapSink, $Sink*, int32_t, $Sink*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.util.stream.DoublePipeline",
		"peek",
		"(Ljava/util/function/DoubleConsumer;)Ljava/util/stream/DoubleStream;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.stream.DoublePipeline$9", nullptr, nullptr, 0},
		{"java.util.stream.DoublePipeline$StatelessOp", "java.util.stream.DoublePipeline", "StatelessOp", $STATIC | $ABSTRACT},
		{"java.util.stream.DoublePipeline$9$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.stream.DoublePipeline$9",
		"java.util.stream.DoublePipeline$StatelessOp",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/util/stream/DoublePipeline$StatelessOp<Ljava/lang/Double;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.stream.DoublePipeline"
	};
	$loadClass(DoublePipeline$9, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(DoublePipeline$9));
	});
	return class$;
}

$Class* DoublePipeline$9::class$ = nullptr;

		} // stream
	} // util
} // java