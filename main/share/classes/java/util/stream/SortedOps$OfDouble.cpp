#include <java/util/stream/SortedOps$OfDouble.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Arrays.h>
#include <java/util/Objects.h>
#include <java/util/Spliterator.h>
#include <java/util/function/IntFunction.h>
#include <java/util/stream/AbstractPipeline.h>
#include <java/util/stream/DoublePipeline$StatefulOp.h>
#include <java/util/stream/Node$OfDouble.h>
#include <java/util/stream/Node$OfPrimitive.h>
#include <java/util/stream/Node.h>
#include <java/util/stream/Nodes.h>
#include <java/util/stream/PipelineHelper.h>
#include <java/util/stream/Sink$ChainedDouble.h>
#include <java/util/stream/Sink$OfDouble.h>
#include <java/util/stream/Sink.h>
#include <java/util/stream/SortedOps$AbstractDoubleSortingSink.h>
#include <java/util/stream/SortedOps$DoubleSortingSink.h>
#include <java/util/stream/SortedOps$SizedDoubleSortingSink.h>
#include <java/util/stream/SortedOps.h>
#include <java/util/stream/StreamOpFlag.h>
#include <java/util/stream/StreamShape.h>
#include <jcpp.h>

#undef IS_ORDERED
#undef IS_SORTED
#undef SIZED
#undef DOUBLE_VALUE
#undef SORTED

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;
using $Objects = ::java::util::Objects;
using $Spliterator = ::java::util::Spliterator;
using $IntFunction = ::java::util::function::IntFunction;
using $AbstractPipeline = ::java::util::stream::AbstractPipeline;
using $DoublePipeline$StatefulOp = ::java::util::stream::DoublePipeline$StatefulOp;
using $Node = ::java::util::stream::Node;
using $Node$OfDouble = ::java::util::stream::Node$OfDouble;
using $Node$OfPrimitive = ::java::util::stream::Node$OfPrimitive;
using $Nodes = ::java::util::stream::Nodes;
using $PipelineHelper = ::java::util::stream::PipelineHelper;
using $Sink = ::java::util::stream::Sink;
using $Sink$ChainedDouble = ::java::util::stream::Sink$ChainedDouble;
using $Sink$OfDouble = ::java::util::stream::Sink$OfDouble;
using $SortedOps = ::java::util::stream::SortedOps;
using $SortedOps$AbstractDoubleSortingSink = ::java::util::stream::SortedOps$AbstractDoubleSortingSink;
using $SortedOps$DoubleSortingSink = ::java::util::stream::SortedOps$DoubleSortingSink;
using $SortedOps$SizedDoubleSortingSink = ::java::util::stream::SortedOps$SizedDoubleSortingSink;
using $StreamOpFlag = ::java::util::stream::StreamOpFlag;
using $StreamShape = ::java::util::stream::StreamShape;

namespace java {
	namespace util {
		namespace stream {

$MethodInfo _SortedOps$OfDouble_MethodInfo_[] = {
	{"<init>", "(Ljava/util/stream/AbstractPipeline;)V", "(Ljava/util/stream/AbstractPipeline<*Ljava/lang/Double;*>;)V", 0, $method(static_cast<void(SortedOps$OfDouble::*)($AbstractPipeline*)>(&SortedOps$OfDouble::init$))},
	{"opEvaluateParallel", "(Ljava/util/stream/PipelineHelper;Ljava/util/Spliterator;Ljava/util/function/IntFunction;)Ljava/util/stream/Node;", "<P_IN:Ljava/lang/Object;>(Ljava/util/stream/PipelineHelper<Ljava/lang/Double;>;Ljava/util/Spliterator<TP_IN;>;Ljava/util/function/IntFunction<[Ljava/lang/Double;>;)Ljava/util/stream/Node<Ljava/lang/Double;>;", $PUBLIC},
	{"opWrapSink", "(ILjava/util/stream/Sink;)Ljava/util/stream/Sink;", "(ILjava/util/stream/Sink<Ljava/lang/Double;>;)Ljava/util/stream/Sink<Ljava/lang/Double;>;", $PUBLIC},
	{}
};

$InnerClassInfo _SortedOps$OfDouble_InnerClassesInfo_[] = {
	{"java.util.stream.SortedOps$OfDouble", "java.util.stream.SortedOps", "OfDouble", $PRIVATE | $STATIC | $FINAL},
	{"java.util.stream.DoublePipeline$StatefulOp", "java.util.stream.DoublePipeline", "StatefulOp", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _SortedOps$OfDouble_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.stream.SortedOps$OfDouble",
	"java.util.stream.DoublePipeline$StatefulOp",
	nullptr,
	nullptr,
	_SortedOps$OfDouble_MethodInfo_,
	"Ljava/util/stream/DoublePipeline$StatefulOp<Ljava/lang/Double;>;",
	nullptr,
	_SortedOps$OfDouble_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.SortedOps"
};

$Object* allocate$SortedOps$OfDouble($Class* clazz) {
	return $of($alloc(SortedOps$OfDouble));
}

void SortedOps$OfDouble::init$($AbstractPipeline* upstream) {
	$init($StreamShape);
	$init($StreamOpFlag);
	$DoublePipeline$StatefulOp::init$(upstream, $StreamShape::DOUBLE_VALUE, $StreamOpFlag::IS_ORDERED | $StreamOpFlag::IS_SORTED);
}

$Sink* SortedOps$OfDouble::opWrapSink(int32_t flags, $Sink* sink) {
	$Objects::requireNonNull(sink);
	$init($StreamOpFlag);
	if ($StreamOpFlag::SORTED->isKnown(flags)) {
		return sink;
	} else {
		if ($StreamOpFlag::SIZED->isKnown(flags)) {
			return $new($SortedOps$SizedDoubleSortingSink, sink);
		} else {
			return $new($SortedOps$DoubleSortingSink, sink);
		}
	}
}

$Node* SortedOps$OfDouble::opEvaluateParallel($PipelineHelper* helper, $Spliterator* spliterator, $IntFunction* generator) {
	$init($StreamOpFlag);
	if ($StreamOpFlag::SORTED->isKnown($nc(helper)->getStreamAndOpFlags())) {
		return $nc(helper)->evaluate(spliterator, false, generator);
	} else {
		$var($Node$OfDouble, n, $cast($Node$OfDouble, $nc(helper)->evaluate(spliterator, true, generator)));
		$var($doubles, content, $cast($doubles, $nc(n)->asPrimitiveArray()));
		$Arrays::parallelSort(content);
		return $Nodes::node(content);
	}
}

SortedOps$OfDouble::SortedOps$OfDouble() {
}

$Class* SortedOps$OfDouble::load$($String* name, bool initialize) {
	$loadClass(SortedOps$OfDouble, name, initialize, &_SortedOps$OfDouble_ClassInfo_, allocate$SortedOps$OfDouble);
	return class$;
}

$Class* SortedOps$OfDouble::class$ = nullptr;

		} // stream
	} // util
} // java