#include <java/util/stream/IntPipeline$8.h>
#include <java/util/stream/AbstractPipeline.h>
#include <java/util/stream/IntPipeline$8$1.h>
#include <java/util/stream/IntPipeline$StatelessOp.h>
#include <java/util/stream/IntPipeline.h>
#include <java/util/stream/IntStream$IntMapMultiConsumer.h>
#include <java/util/stream/Sink.h>
#include <java/util/stream/StreamShape.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractPipeline = ::java::util::stream::AbstractPipeline;
using $IntPipeline = ::java::util::stream::IntPipeline;
using $IntPipeline$8$1 = ::java::util::stream::IntPipeline$8$1;
using $IntPipeline$StatelessOp = ::java::util::stream::IntPipeline$StatelessOp;
using $IntStream$IntMapMultiConsumer = ::java::util::stream::IntStream$IntMapMultiConsumer;
using $Sink = ::java::util::stream::Sink;
using $StreamShape = ::java::util::stream::StreamShape;

namespace java {
	namespace util {
		namespace stream {

void IntPipeline$8::init$($IntPipeline* this$0, $AbstractPipeline* upstream, $StreamShape* inputShape, int32_t opFlags, $IntStream$IntMapMultiConsumer* val$mapper) {
	$set(this, this$0, this$0);
	$set(this, val$mapper, val$mapper);
	$IntPipeline$StatelessOp::init$(upstream, inputShape, opFlags);
}

$Sink* IntPipeline$8::opWrapSink(int32_t flags, $Sink* sink) {
	return $new($IntPipeline$8$1, this, sink);
}

IntPipeline$8::IntPipeline$8() {
}

$Class* IntPipeline$8::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/util/stream/IntPipeline;", nullptr, $FINAL | $SYNTHETIC, $field(IntPipeline$8, this$0)},
		{"val$mapper", "Ljava/util/stream/IntStream$IntMapMultiConsumer;", nullptr, $FINAL | $SYNTHETIC, $field(IntPipeline$8, val$mapper)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/stream/IntPipeline;Ljava/util/stream/AbstractPipeline;Ljava/util/stream/StreamShape;ILjava/util/stream/IntStream$IntMapMultiConsumer;)V", nullptr, 0, $method(IntPipeline$8, init$, void, $IntPipeline*, $AbstractPipeline*, $StreamShape*, int32_t, $IntStream$IntMapMultiConsumer*)},
		{"opWrapSink", "(ILjava/util/stream/Sink;)Ljava/util/stream/Sink;", "(ILjava/util/stream/Sink<Ljava/lang/Integer;>;)Ljava/util/stream/Sink<Ljava/lang/Integer;>;", 0, $virtualMethod(IntPipeline$8, opWrapSink, $Sink*, int32_t, $Sink*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.util.stream.IntPipeline",
		"mapMulti",
		"(Ljava/util/stream/IntStream$IntMapMultiConsumer;)Ljava/util/stream/IntStream;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.stream.IntPipeline$8", nullptr, nullptr, 0},
		{"java.util.stream.IntPipeline$StatelessOp", "java.util.stream.IntPipeline", "StatelessOp", $STATIC | $ABSTRACT},
		{"java.util.stream.IntPipeline$8$1", nullptr, nullptr, 0},
		{"java.util.stream.IntStream$IntMapMultiConsumer", "java.util.stream.IntStream", "IntMapMultiConsumer", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.stream.IntPipeline$8",
		"java.util.stream.IntPipeline$StatelessOp",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/util/stream/IntPipeline$StatelessOp<Ljava/lang/Integer;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.stream.IntPipeline"
	};
	$loadClass(IntPipeline$8, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(IntPipeline$8));
	});
	return class$;
}

$Class* IntPipeline$8::class$ = nullptr;

		} // stream
	} // util
} // java