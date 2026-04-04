#include <java/util/stream/IntPipeline$5.h>
#include <java/util/function/IntToLongFunction.h>
#include <java/util/stream/AbstractPipeline.h>
#include <java/util/stream/IntPipeline$5$1.h>
#include <java/util/stream/IntPipeline.h>
#include <java/util/stream/LongPipeline$StatelessOp.h>
#include <java/util/stream/Sink.h>
#include <java/util/stream/StreamShape.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $IntToLongFunction = ::java::util::function::IntToLongFunction;
using $AbstractPipeline = ::java::util::stream::AbstractPipeline;
using $IntPipeline = ::java::util::stream::IntPipeline;
using $IntPipeline$5$1 = ::java::util::stream::IntPipeline$5$1;
using $LongPipeline$StatelessOp = ::java::util::stream::LongPipeline$StatelessOp;
using $Sink = ::java::util::stream::Sink;
using $StreamShape = ::java::util::stream::StreamShape;

namespace java {
	namespace util {
		namespace stream {

void IntPipeline$5::init$($IntPipeline* this$0, $AbstractPipeline* upstream, $StreamShape* inputShape, int32_t opFlags, $IntToLongFunction* val$mapper) {
	$set(this, this$0, this$0);
	$set(this, val$mapper, val$mapper);
	$LongPipeline$StatelessOp::init$(upstream, inputShape, opFlags);
}

$Sink* IntPipeline$5::opWrapSink(int32_t flags, $Sink* sink) {
	return $new($IntPipeline$5$1, this, sink);
}

IntPipeline$5::IntPipeline$5() {
}

$Class* IntPipeline$5::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/util/stream/IntPipeline;", nullptr, $FINAL | $SYNTHETIC, $field(IntPipeline$5, this$0)},
		{"val$mapper", "Ljava/util/function/IntToLongFunction;", nullptr, $FINAL | $SYNTHETIC, $field(IntPipeline$5, val$mapper)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/stream/IntPipeline;Ljava/util/stream/AbstractPipeline;Ljava/util/stream/StreamShape;ILjava/util/function/IntToLongFunction;)V", nullptr, 0, $method(IntPipeline$5, init$, void, $IntPipeline*, $AbstractPipeline*, $StreamShape*, int32_t, $IntToLongFunction*)},
		{"opWrapSink", "(ILjava/util/stream/Sink;)Ljava/util/stream/Sink;", "(ILjava/util/stream/Sink<Ljava/lang/Long;>;)Ljava/util/stream/Sink<Ljava/lang/Integer;>;", 0, $virtualMethod(IntPipeline$5, opWrapSink, $Sink*, int32_t, $Sink*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.util.stream.IntPipeline",
		"mapToLong",
		"(Ljava/util/function/IntToLongFunction;)Ljava/util/stream/LongStream;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.stream.IntPipeline$5", nullptr, nullptr, 0},
		{"java.util.stream.LongPipeline$StatelessOp", "java.util.stream.LongPipeline", "StatelessOp", $STATIC | $ABSTRACT},
		{"java.util.stream.IntPipeline$5$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.stream.IntPipeline$5",
		"java.util.stream.LongPipeline$StatelessOp",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/util/stream/LongPipeline$StatelessOp<Ljava/lang/Integer;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.stream.IntPipeline"
	};
	$loadClass(IntPipeline$5, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(IntPipeline$5));
	});
	return class$;
}

$Class* IntPipeline$5::class$ = nullptr;

		} // stream
	} // util
} // java