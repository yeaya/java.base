#include <java/util/stream/SliceOps$4.h>

#include <java/io/Serializable.h>
#include <java/lang/Math.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Spliterator$OfDouble.h>
#include <java/util/Spliterator$OfPrimitive.h>
#include <java/util/Spliterator.h>
#include <java/util/concurrent/ForkJoinTask.h>
#include <java/util/function/IntFunction.h>
#include <java/util/stream/AbstractPipeline.h>
#include <java/util/stream/DoublePipeline$StatefulOp.h>
#include <java/util/stream/DoublePipeline.h>
#include <java/util/stream/Node$OfDouble.h>
#include <java/util/stream/Node$OfPrimitive.h>
#include <java/util/stream/Node.h>
#include <java/util/stream/Nodes.h>
#include <java/util/stream/PipelineHelper.h>
#include <java/util/stream/Sink$ChainedDouble.h>
#include <java/util/stream/Sink$OfDouble.h>
#include <java/util/stream/Sink.h>
#include <java/util/stream/SliceOps$4$1.h>
#include <java/util/stream/SliceOps$SliceTask.h>
#include <java/util/stream/SliceOps.h>
#include <java/util/stream/StreamOpFlag.h>
#include <java/util/stream/StreamShape.h>
#include <java/util/stream/StreamSpliterators$SliceSpliterator$OfDouble.h>
#include <java/util/stream/StreamSpliterators$SliceSpliterator$OfPrimitive.h>
#include <java/util/stream/StreamSpliterators$UnorderedSliceSpliterator$OfDouble.h>
#include <jcpp.h>

#undef ORDERED
#undef SUBSIZED

using $DoubleArray = $Array<::java::lang::Double>;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Spliterator = ::java::util::Spliterator;
using $Spliterator$OfDouble = ::java::util::Spliterator$OfDouble;
using $Spliterator$OfPrimitive = ::java::util::Spliterator$OfPrimitive;
using $ForkJoinTask = ::java::util::concurrent::ForkJoinTask;
using $IntFunction = ::java::util::function::IntFunction;
using $AbstractPipeline = ::java::util::stream::AbstractPipeline;
using $DoublePipeline = ::java::util::stream::DoublePipeline;
using $DoublePipeline$StatefulOp = ::java::util::stream::DoublePipeline$StatefulOp;
using $Node = ::java::util::stream::Node;
using $Node$OfDouble = ::java::util::stream::Node$OfDouble;
using $Node$OfPrimitive = ::java::util::stream::Node$OfPrimitive;
using $Nodes = ::java::util::stream::Nodes;
using $PipelineHelper = ::java::util::stream::PipelineHelper;
using $Sink = ::java::util::stream::Sink;
using $Sink$ChainedDouble = ::java::util::stream::Sink$ChainedDouble;
using $Sink$OfDouble = ::java::util::stream::Sink$OfDouble;
using $SliceOps = ::java::util::stream::SliceOps;
using $SliceOps$4$1 = ::java::util::stream::SliceOps$4$1;
using $SliceOps$SliceTask = ::java::util::stream::SliceOps$SliceTask;
using $StreamOpFlag = ::java::util::stream::StreamOpFlag;
using $StreamShape = ::java::util::stream::StreamShape;
using $StreamSpliterators$SliceSpliterator$OfDouble = ::java::util::stream::StreamSpliterators$SliceSpliterator$OfDouble;
using $StreamSpliterators$SliceSpliterator$OfPrimitive = ::java::util::stream::StreamSpliterators$SliceSpliterator$OfPrimitive;
using $StreamSpliterators$UnorderedSliceSpliterator$OfDouble = ::java::util::stream::StreamSpliterators$UnorderedSliceSpliterator$OfDouble;

namespace java {
	namespace util {
		namespace stream {

class SliceOps$4$$Lambda$lambda$opEvaluateParallelLazy$0 : public $IntFunction {
	$class(SliceOps$4$$Lambda$lambda$opEvaluateParallelLazy$0, $NO_CLASS_INIT, $IntFunction)
public:
	void init$() {
	}
	virtual $Object* apply(int32_t x$0) override {
		 return $of(SliceOps$4::lambda$opEvaluateParallelLazy$0(x$0));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<SliceOps$4$$Lambda$lambda$opEvaluateParallelLazy$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo SliceOps$4$$Lambda$lambda$opEvaluateParallelLazy$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SliceOps$4$$Lambda$lambda$opEvaluateParallelLazy$0::*)()>(&SliceOps$4$$Lambda$lambda$opEvaluateParallelLazy$0::init$))},
	{"apply", "(I)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo SliceOps$4$$Lambda$lambda$opEvaluateParallelLazy$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.stream.SliceOps$4$$Lambda$lambda$opEvaluateParallelLazy$0",
	"java.lang.Object",
	"java.util.function.IntFunction",
	nullptr,
	methodInfos
};
$Class* SliceOps$4$$Lambda$lambda$opEvaluateParallelLazy$0::load$($String* name, bool initialize) {
	$loadClass(SliceOps$4$$Lambda$lambda$opEvaluateParallelLazy$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* SliceOps$4$$Lambda$lambda$opEvaluateParallelLazy$0::class$ = nullptr;

$FieldInfo _SliceOps$4_FieldInfo_[] = {
	{"val$limit", "J", nullptr, $FINAL | $SYNTHETIC, $field(SliceOps$4, val$limit)},
	{"val$normalizedLimit", "J", nullptr, $FINAL | $SYNTHETIC, $field(SliceOps$4, val$normalizedLimit)},
	{"val$skip", "J", nullptr, $FINAL | $SYNTHETIC, $field(SliceOps$4, val$skip)},
	{}
};

$MethodInfo _SliceOps$4_MethodInfo_[] = {
	{"<init>", "(Ljava/util/stream/AbstractPipeline;Ljava/util/stream/StreamShape;IJJJ)V", nullptr, 0, $method(static_cast<void(SliceOps$4::*)($AbstractPipeline*,$StreamShape*,int32_t,int64_t,int64_t,int64_t)>(&SliceOps$4::init$))},
	{"exactOutputSize", "(J)J", nullptr, 0},
	{"lambda$opEvaluateParallelLazy$0", "(I)[Ljava/lang/Double;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$DoubleArray*(*)(int32_t)>(&SliceOps$4::lambda$opEvaluateParallelLazy$0))},
	{"opEvaluateParallel", "(Ljava/util/stream/PipelineHelper;Ljava/util/Spliterator;Ljava/util/function/IntFunction;)Ljava/util/stream/Node;", "<P_IN:Ljava/lang/Object;>(Ljava/util/stream/PipelineHelper<Ljava/lang/Double;>;Ljava/util/Spliterator<TP_IN;>;Ljava/util/function/IntFunction<[Ljava/lang/Double;>;)Ljava/util/stream/Node<Ljava/lang/Double;>;", 0},
	{"opEvaluateParallelLazy", "(Ljava/util/stream/PipelineHelper;Ljava/util/Spliterator;)Ljava/util/Spliterator;", "<P_IN:Ljava/lang/Object;>(Ljava/util/stream/PipelineHelper<Ljava/lang/Double;>;Ljava/util/Spliterator<TP_IN;>;)Ljava/util/Spliterator<Ljava/lang/Double;>;", 0},
	{"opWrapSink", "(ILjava/util/stream/Sink;)Ljava/util/stream/Sink;", "(ILjava/util/stream/Sink<Ljava/lang/Double;>;)Ljava/util/stream/Sink<Ljava/lang/Double;>;", 0},
	{"unorderedSkipLimitSpliterator", "(Ljava/util/Spliterator$OfDouble;JJJ)Ljava/util/Spliterator$OfDouble;", nullptr, 0},
	{}
};

$EnclosingMethodInfo _SliceOps$4_EnclosingMethodInfo_ = {
	"java.util.stream.SliceOps",
	"makeDouble",
	"(Ljava/util/stream/AbstractPipeline;JJ)Ljava/util/stream/DoubleStream;"
};

$InnerClassInfo _SliceOps$4_InnerClassesInfo_[] = {
	{"java.util.stream.SliceOps$4", nullptr, nullptr, 0},
	{"java.util.stream.DoublePipeline$StatefulOp", "java.util.stream.DoublePipeline", "StatefulOp", $STATIC | $ABSTRACT},
	{"java.util.stream.SliceOps$4$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SliceOps$4_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.stream.SliceOps$4",
	"java.util.stream.DoublePipeline$StatefulOp",
	nullptr,
	_SliceOps$4_FieldInfo_,
	_SliceOps$4_MethodInfo_,
	"Ljava/util/stream/DoublePipeline$StatefulOp<Ljava/lang/Double;>;",
	&_SliceOps$4_EnclosingMethodInfo_,
	_SliceOps$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.SliceOps"
};

$Object* allocate$SliceOps$4($Class* clazz) {
	return $of($alloc(SliceOps$4));
}

void SliceOps$4::init$($AbstractPipeline* upstream, $StreamShape* inputShape, int32_t opFlags, int64_t val$skip, int64_t val$normalizedLimit, int64_t val$limit) {
	this->val$skip = val$skip;
	this->val$normalizedLimit = val$normalizedLimit;
	this->val$limit = val$limit;
	$DoublePipeline$StatefulOp::init$(upstream, inputShape, opFlags);
}

int64_t SliceOps$4::exactOutputSize(int64_t previousSize) {
	return $SliceOps::calcSize(previousSize, this->val$skip, this->val$normalizedLimit);
}

$Spliterator$OfDouble* SliceOps$4::unorderedSkipLimitSpliterator($Spliterator$OfDouble* s, int64_t skip, int64_t limit, int64_t sizeIfKnown) {
	if (skip <= sizeIfKnown) {
		limit = limit >= 0 ? $Math::min(limit, sizeIfKnown - skip) : sizeIfKnown - skip;
		skip = 0;
	}
	return $as($Spliterator$OfDouble, $new($StreamSpliterators$UnorderedSliceSpliterator$OfDouble, s, skip, limit));
}

$Spliterator* SliceOps$4::opEvaluateParallelLazy($PipelineHelper* helper, $Spliterator* spliterator) {
	$useLocalCurrentObjectStackCache();
	int64_t size = $nc(helper)->exactOutputSizeIfKnown(spliterator);
	if (size > 0 && $nc(spliterator)->hasCharacteristics($Spliterator::SUBSIZED)) {
		$var($Spliterator$OfDouble, var$0, $cast($Spliterator$OfDouble, helper->wrapSpliterator(spliterator)));
		int64_t var$1 = this->val$skip;
		return static_cast<$Spliterator*>(static_cast<$Spliterator$OfPrimitive*>(static_cast<$StreamSpliterators$SliceSpliterator$OfPrimitive*>($new($StreamSpliterators$SliceSpliterator$OfDouble, var$0, var$1, $SliceOps::calcSliceFence(this->val$skip, this->val$limit)))));
	} else {
		$init($StreamOpFlag);
		if (!$StreamOpFlag::ORDERED->isKnown(helper->getStreamAndOpFlags())) {
			return unorderedSkipLimitSpliterator($cast($Spliterator$OfDouble, $(helper->wrapSpliterator(spliterator))), this->val$skip, this->val$limit, size);
		} else {
			return $nc(($cast($Node, $($$new($SliceOps$SliceTask, this, helper, spliterator, static_cast<$IntFunction*>($$new(SliceOps$4$$Lambda$lambda$opEvaluateParallelLazy$0)), this->val$skip, this->val$limit)->invoke()))))->spliterator();
		}
	}
}

$Node* SliceOps$4::opEvaluateParallel($PipelineHelper* helper, $Spliterator* spliterator, $IntFunction* generator) {
	$useLocalCurrentObjectStackCache();
	int64_t size = $nc(helper)->exactOutputSizeIfKnown(spliterator);
	if (size > 0 && $nc(spliterator)->hasCharacteristics($Spliterator::SUBSIZED)) {
		$var($Spliterator, s, $SliceOps::sliceSpliterator($(helper->getSourceShape()), spliterator, this->val$skip, this->val$limit));
		return $Nodes::collectDouble(helper, s, true);
	} else {
		$init($StreamOpFlag);
		if (!$StreamOpFlag::ORDERED->isKnown(helper->getStreamAndOpFlags())) {
			$var($Spliterator$OfDouble, s, unorderedSkipLimitSpliterator($cast($Spliterator$OfDouble, $(helper->wrapSpliterator(spliterator))), this->val$skip, this->val$limit, size));
			return $Nodes::collectDouble(this, s, true);
		} else {
			return $cast($Node, $$new($SliceOps$SliceTask, this, helper, spliterator, generator, this->val$skip, this->val$limit)->invoke());
		}
	}
}

$Sink* SliceOps$4::opWrapSink(int32_t flags, $Sink* sink) {
	return $new($SliceOps$4$1, this, sink);
}

$DoubleArray* SliceOps$4::lambda$opEvaluateParallelLazy$0(int32_t x$0) {
	$init(SliceOps$4);
	return $new($DoubleArray, x$0);
}

SliceOps$4::SliceOps$4() {
}

$Class* SliceOps$4::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(SliceOps$4$$Lambda$lambda$opEvaluateParallelLazy$0::classInfo$.name)) {
			return SliceOps$4$$Lambda$lambda$opEvaluateParallelLazy$0::load$(name, initialize);
		}
	}
	$loadClass(SliceOps$4, name, initialize, &_SliceOps$4_ClassInfo_, allocate$SliceOps$4);
	return class$;
}

$Class* SliceOps$4::class$ = nullptr;

		} // stream
	} // util
} // java