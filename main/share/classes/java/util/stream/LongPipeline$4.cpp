#include <java/util/stream/LongPipeline$4.h>
#include <java/util/function/LongToIntFunction.h>
#include <java/util/stream/AbstractPipeline.h>
#include <java/util/stream/IntPipeline$StatelessOp.h>
#include <java/util/stream/LongPipeline$4$1.h>
#include <java/util/stream/LongPipeline.h>
#include <java/util/stream/Sink.h>
#include <java/util/stream/StreamShape.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LongToIntFunction = ::java::util::function::LongToIntFunction;
using $AbstractPipeline = ::java::util::stream::AbstractPipeline;
using $IntPipeline$StatelessOp = ::java::util::stream::IntPipeline$StatelessOp;
using $LongPipeline = ::java::util::stream::LongPipeline;
using $LongPipeline$4$1 = ::java::util::stream::LongPipeline$4$1;
using $Sink = ::java::util::stream::Sink;
using $StreamShape = ::java::util::stream::StreamShape;

namespace java {
	namespace util {
		namespace stream {

void LongPipeline$4::init$($LongPipeline* this$0, $AbstractPipeline* upstream, $StreamShape* inputShape, int32_t opFlags, $LongToIntFunction* val$mapper) {
	$set(this, this$0, this$0);
	$set(this, val$mapper, val$mapper);
	$IntPipeline$StatelessOp::init$(upstream, inputShape, opFlags);
}

$Sink* LongPipeline$4::opWrapSink(int32_t flags, $Sink* sink) {
	return $new($LongPipeline$4$1, this, sink);
}

LongPipeline$4::LongPipeline$4() {
}

$Class* LongPipeline$4::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/util/stream/LongPipeline;", nullptr, $FINAL | $SYNTHETIC, $field(LongPipeline$4, this$0)},
		{"val$mapper", "Ljava/util/function/LongToIntFunction;", nullptr, $FINAL | $SYNTHETIC, $field(LongPipeline$4, val$mapper)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/stream/LongPipeline;Ljava/util/stream/AbstractPipeline;Ljava/util/stream/StreamShape;ILjava/util/function/LongToIntFunction;)V", nullptr, 0, $method(LongPipeline$4, init$, void, $LongPipeline*, $AbstractPipeline*, $StreamShape*, int32_t, $LongToIntFunction*)},
		{"opWrapSink", "(ILjava/util/stream/Sink;)Ljava/util/stream/Sink;", "(ILjava/util/stream/Sink<Ljava/lang/Integer;>;)Ljava/util/stream/Sink<Ljava/lang/Long;>;", 0, $virtualMethod(LongPipeline$4, opWrapSink, $Sink*, int32_t, $Sink*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.util.stream.LongPipeline",
		"mapToInt",
		"(Ljava/util/function/LongToIntFunction;)Ljava/util/stream/IntStream;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.stream.LongPipeline$4", nullptr, nullptr, 0},
		{"java.util.stream.IntPipeline$StatelessOp", "java.util.stream.IntPipeline", "StatelessOp", $STATIC | $ABSTRACT},
		{"java.util.stream.LongPipeline$4$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.stream.LongPipeline$4",
		"java.util.stream.IntPipeline$StatelessOp",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/util/stream/IntPipeline$StatelessOp<Ljava/lang/Long;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.stream.LongPipeline"
	};
	$loadClass(LongPipeline$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(LongPipeline$4));
	});
	return class$;
}

$Class* LongPipeline$4::class$ = nullptr;

		} // stream
	} // util
} // java