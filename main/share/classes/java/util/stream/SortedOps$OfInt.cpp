#include <java/util/stream/SortedOps$OfInt.h>
#include <java/util/Arrays.h>
#include <java/util/Objects.h>
#include <java/util/Spliterator.h>
#include <java/util/function/IntFunction.h>
#include <java/util/stream/AbstractPipeline.h>
#include <java/util/stream/IntPipeline$StatefulOp.h>
#include <java/util/stream/Node$OfInt.h>
#include <java/util/stream/Node.h>
#include <java/util/stream/Nodes.h>
#include <java/util/stream/PipelineHelper.h>
#include <java/util/stream/Sink.h>
#include <java/util/stream/SortedOps$IntSortingSink.h>
#include <java/util/stream/SortedOps$SizedIntSortingSink.h>
#include <java/util/stream/SortedOps.h>
#include <java/util/stream/StreamOpFlag.h>
#include <java/util/stream/StreamShape.h>
#include <jcpp.h>

#undef INT_VALUE
#undef IS_ORDERED
#undef IS_SORTED
#undef SIZED
#undef SORTED

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;
using $Objects = ::java::util::Objects;
using $Spliterator = ::java::util::Spliterator;
using $IntFunction = ::java::util::function::IntFunction;
using $AbstractPipeline = ::java::util::stream::AbstractPipeline;
using $IntPipeline$StatefulOp = ::java::util::stream::IntPipeline$StatefulOp;
using $Node = ::java::util::stream::Node;
using $Node$OfInt = ::java::util::stream::Node$OfInt;
using $Nodes = ::java::util::stream::Nodes;
using $PipelineHelper = ::java::util::stream::PipelineHelper;
using $Sink = ::java::util::stream::Sink;
using $SortedOps$IntSortingSink = ::java::util::stream::SortedOps$IntSortingSink;
using $SortedOps$SizedIntSortingSink = ::java::util::stream::SortedOps$SizedIntSortingSink;
using $StreamOpFlag = ::java::util::stream::StreamOpFlag;
using $StreamShape = ::java::util::stream::StreamShape;

namespace java {
	namespace util {
		namespace stream {

void SortedOps$OfInt::init$($AbstractPipeline* upstream) {
	$init($StreamShape);
	$init($StreamOpFlag);
	$IntPipeline$StatefulOp::init$(upstream, $StreamShape::INT_VALUE, $StreamOpFlag::IS_ORDERED | $StreamOpFlag::IS_SORTED);
}

$Sink* SortedOps$OfInt::opWrapSink(int32_t flags, $Sink* sink) {
	$Objects::requireNonNull(sink);
	$init($StreamOpFlag);
	if ($StreamOpFlag::SORTED->isKnown(flags)) {
		return sink;
	} else if ($StreamOpFlag::SIZED->isKnown(flags)) {
		return $new($SortedOps$SizedIntSortingSink, sink);
	} else {
		return $new($SortedOps$IntSortingSink, sink);
	}
}

$Node* SortedOps$OfInt::opEvaluateParallel($PipelineHelper* helper, $Spliterator* spliterator, $IntFunction* generator) {
	$useLocalObjectStack();
	$init($StreamOpFlag);
	if ($StreamOpFlag::SORTED->isKnown($nc(helper)->getStreamAndOpFlags())) {
		return helper->evaluate(spliterator, false, generator);
	} else {
		$var($Node$OfInt, n, $cast($Node$OfInt, helper->evaluate(spliterator, true, generator)));
		$var($ints, content, $cast($ints, $nc(n)->asPrimitiveArray()));
		$Arrays::parallelSort(content);
		return $Nodes::node(content);
	}
}

SortedOps$OfInt::SortedOps$OfInt() {
}

$Class* SortedOps$OfInt::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/stream/AbstractPipeline;)V", "(Ljava/util/stream/AbstractPipeline<*Ljava/lang/Integer;*>;)V", 0, $method(SortedOps$OfInt, init$, void, $AbstractPipeline*)},
		{"opEvaluateParallel", "(Ljava/util/stream/PipelineHelper;Ljava/util/Spliterator;Ljava/util/function/IntFunction;)Ljava/util/stream/Node;", "<P_IN:Ljava/lang/Object;>(Ljava/util/stream/PipelineHelper<Ljava/lang/Integer;>;Ljava/util/Spliterator<TP_IN;>;Ljava/util/function/IntFunction<[Ljava/lang/Integer;>;)Ljava/util/stream/Node<Ljava/lang/Integer;>;", $PUBLIC, $virtualMethod(SortedOps$OfInt, opEvaluateParallel, $Node*, $PipelineHelper*, $Spliterator*, $IntFunction*)},
		{"opWrapSink", "(ILjava/util/stream/Sink;)Ljava/util/stream/Sink;", "(ILjava/util/stream/Sink<Ljava/lang/Integer;>;)Ljava/util/stream/Sink<Ljava/lang/Integer;>;", $PUBLIC, $virtualMethod(SortedOps$OfInt, opWrapSink, $Sink*, int32_t, $Sink*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.stream.SortedOps$OfInt", "java.util.stream.SortedOps", "OfInt", $PRIVATE | $STATIC | $FINAL},
		{"java.util.stream.IntPipeline$StatefulOp", "java.util.stream.IntPipeline", "StatefulOp", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.stream.SortedOps$OfInt",
		"java.util.stream.IntPipeline$StatefulOp",
		nullptr,
		nullptr,
		methodInfos$$,
		"Ljava/util/stream/IntPipeline$StatefulOp<Ljava/lang/Integer;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.stream.SortedOps"
	};
	$loadClass(SortedOps$OfInt, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(SortedOps$OfInt));
	});
	return class$;
}

$Class* SortedOps$OfInt::class$ = nullptr;

		} // stream
	} // util
} // java