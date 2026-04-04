#include <java/util/stream/SliceOps$3.h>
#include <java/io/Serializable.h>
#include <java/lang/Math.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Spliterator$OfLong.h>
#include <java/util/Spliterator.h>
#include <java/util/concurrent/ForkJoinTask.h>
#include <java/util/function/IntFunction.h>
#include <java/util/stream/AbstractPipeline.h>
#include <java/util/stream/LongPipeline$StatefulOp.h>
#include <java/util/stream/Node$OfLong.h>
#include <java/util/stream/Node.h>
#include <java/util/stream/Nodes.h>
#include <java/util/stream/PipelineHelper.h>
#include <java/util/stream/Sink.h>
#include <java/util/stream/SliceOps$3$1.h>
#include <java/util/stream/SliceOps$SliceTask.h>
#include <java/util/stream/SliceOps.h>
#include <java/util/stream/StreamOpFlag.h>
#include <java/util/stream/StreamShape.h>
#include <java/util/stream/StreamSpliterators$SliceSpliterator$OfLong.h>
#include <java/util/stream/StreamSpliterators$SliceSpliterator$OfPrimitive.h>
#include <java/util/stream/StreamSpliterators$UnorderedSliceSpliterator$OfLong.h>
#include <jcpp.h>

#undef ORDERED
#undef SUBSIZED

using $LongArray = $Array<::java::lang::Long>;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Spliterator = ::java::util::Spliterator;
using $Spliterator$OfLong = ::java::util::Spliterator$OfLong;
using $IntFunction = ::java::util::function::IntFunction;
using $AbstractPipeline = ::java::util::stream::AbstractPipeline;
using $LongPipeline$StatefulOp = ::java::util::stream::LongPipeline$StatefulOp;
using $Node = ::java::util::stream::Node;
using $Nodes = ::java::util::stream::Nodes;
using $PipelineHelper = ::java::util::stream::PipelineHelper;
using $Sink = ::java::util::stream::Sink;
using $SliceOps = ::java::util::stream::SliceOps;
using $SliceOps$3$1 = ::java::util::stream::SliceOps$3$1;
using $SliceOps$SliceTask = ::java::util::stream::SliceOps$SliceTask;
using $StreamOpFlag = ::java::util::stream::StreamOpFlag;
using $StreamShape = ::java::util::stream::StreamShape;
using $StreamSpliterators$SliceSpliterator$OfLong = ::java::util::stream::StreamSpliterators$SliceSpliterator$OfLong;
using $StreamSpliterators$SliceSpliterator$OfPrimitive = ::java::util::stream::StreamSpliterators$SliceSpliterator$OfPrimitive;
using $StreamSpliterators$UnorderedSliceSpliterator$OfLong = ::java::util::stream::StreamSpliterators$UnorderedSliceSpliterator$OfLong;

namespace java {
	namespace util {
		namespace stream {

class SliceOps$3$$Lambda$lambda$opEvaluateParallelLazy$0 : public $IntFunction {
	$class(SliceOps$3$$Lambda$lambda$opEvaluateParallelLazy$0, $NO_CLASS_INIT, $IntFunction)
public:
	void init$() {
	}
	virtual $Object* apply(int32_t x$0) override {
		 return SliceOps$3::lambda$opEvaluateParallelLazy$0(x$0);
	}
};
$Class* SliceOps$3$$Lambda$lambda$opEvaluateParallelLazy$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SliceOps$3$$Lambda$lambda$opEvaluateParallelLazy$0, init$, void)},
		{"apply", "(I)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(SliceOps$3$$Lambda$lambda$opEvaluateParallelLazy$0, apply, $Object*, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.stream.SliceOps$3$$Lambda$lambda$opEvaluateParallelLazy$0",
		"java.lang.Object",
		"java.util.function.IntFunction",
		nullptr,
		methodInfos$$
	};
	$loadClass(SliceOps$3$$Lambda$lambda$opEvaluateParallelLazy$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SliceOps$3$$Lambda$lambda$opEvaluateParallelLazy$0);
	});
	return class$;
}
$Class* SliceOps$3$$Lambda$lambda$opEvaluateParallelLazy$0::class$ = nullptr;

void SliceOps$3::init$($AbstractPipeline* upstream, $StreamShape* inputShape, int32_t opFlags, int64_t val$skip, int64_t val$normalizedLimit, int64_t val$limit) {
	this->val$skip = val$skip;
	this->val$normalizedLimit = val$normalizedLimit;
	this->val$limit = val$limit;
	$LongPipeline$StatefulOp::init$(upstream, inputShape, opFlags);
}

int64_t SliceOps$3::exactOutputSize(int64_t previousSize) {
	return $SliceOps::calcSize(previousSize, this->val$skip, this->val$normalizedLimit);
}

$Spliterator$OfLong* SliceOps$3::unorderedSkipLimitSpliterator($Spliterator$OfLong* s, int64_t skip, int64_t limit, int64_t sizeIfKnown) {
	if (skip <= sizeIfKnown) {
		limit = limit >= 0 ? $Math::min(limit, sizeIfKnown - skip) : sizeIfKnown - skip;
		skip = 0;
	}
	return $as($Spliterator$OfLong, $new($StreamSpliterators$UnorderedSliceSpliterator$OfLong, s, skip, limit));
}

$Spliterator* SliceOps$3::opEvaluateParallelLazy($PipelineHelper* helper, $Spliterator* spliterator) {
	$useLocalObjectStack();
	int64_t size = $nc(helper)->exactOutputSizeIfKnown(spliterator);
	if (size > 0 && $nc(spliterator)->hasCharacteristics($Spliterator::SUBSIZED)) {
		$var($Spliterator$OfLong, var$0, $cast($Spliterator$OfLong, helper->wrapSpliterator(spliterator)));
		int64_t var$1 = this->val$skip;
		return $cast($StreamSpliterators$SliceSpliterator$OfPrimitive, $new($StreamSpliterators$SliceSpliterator$OfLong, var$0, var$1, $SliceOps::calcSliceFence(this->val$skip, this->val$limit)));
	} else {
		$init($StreamOpFlag);
		if (!$StreamOpFlag::ORDERED->isKnown(helper->getStreamAndOpFlags())) {
			return unorderedSkipLimitSpliterator($$cast($Spliterator$OfLong, helper->wrapSpliterator(spliterator)), this->val$skip, this->val$limit, size);
		} else {
			return $$sure($Node, $$new($SliceOps$SliceTask, this, helper, spliterator, $$new(SliceOps$3$$Lambda$lambda$opEvaluateParallelLazy$0), this->val$skip, this->val$limit)->invoke())->spliterator();
		}
	}
}

$Node* SliceOps$3::opEvaluateParallel($PipelineHelper* helper, $Spliterator* spliterator, $IntFunction* generator) {
	$useLocalObjectStack();
	int64_t size = $nc(helper)->exactOutputSizeIfKnown(spliterator);
	if (size > 0 && $nc(spliterator)->hasCharacteristics($Spliterator::SUBSIZED)) {
		$var($Spliterator, s, $SliceOps::sliceSpliterator($(helper->getSourceShape()), spliterator, this->val$skip, this->val$limit));
		return $Nodes::collectLong(helper, s, true);
	} else {
		$init($StreamOpFlag);
		if (!$StreamOpFlag::ORDERED->isKnown(helper->getStreamAndOpFlags())) {
			$var($Spliterator$OfLong, s, unorderedSkipLimitSpliterator($$cast($Spliterator$OfLong, helper->wrapSpliterator(spliterator)), this->val$skip, this->val$limit, size));
			return $Nodes::collectLong(this, s, true);
		} else {
			return $cast($Node, $$new($SliceOps$SliceTask, this, helper, spliterator, generator, this->val$skip, this->val$limit)->invoke());
		}
	}
}

$Sink* SliceOps$3::opWrapSink(int32_t flags, $Sink* sink) {
	return $new($SliceOps$3$1, this, sink);
}

$LongArray* SliceOps$3::lambda$opEvaluateParallelLazy$0(int32_t x$0) {
	$init(SliceOps$3);
	return $new($LongArray, x$0);
}

SliceOps$3::SliceOps$3() {
}

$Class* SliceOps$3::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("java.util.stream.SliceOps$3$$Lambda$lambda$opEvaluateParallelLazy$0")) {
			return SliceOps$3$$Lambda$lambda$opEvaluateParallelLazy$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"val$limit", "J", nullptr, $FINAL | $SYNTHETIC, $field(SliceOps$3, val$limit)},
		{"val$normalizedLimit", "J", nullptr, $FINAL | $SYNTHETIC, $field(SliceOps$3, val$normalizedLimit)},
		{"val$skip", "J", nullptr, $FINAL | $SYNTHETIC, $field(SliceOps$3, val$skip)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/stream/AbstractPipeline;Ljava/util/stream/StreamShape;IJJJ)V", nullptr, 0, $method(SliceOps$3, init$, void, $AbstractPipeline*, $StreamShape*, int32_t, int64_t, int64_t, int64_t)},
		{"exactOutputSize", "(J)J", nullptr, 0, $virtualMethod(SliceOps$3, exactOutputSize, int64_t, int64_t)},
		{"lambda$opEvaluateParallelLazy$0", "(I)[Ljava/lang/Long;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(SliceOps$3, lambda$opEvaluateParallelLazy$0, $LongArray*, int32_t)},
		{"opEvaluateParallel", "(Ljava/util/stream/PipelineHelper;Ljava/util/Spliterator;Ljava/util/function/IntFunction;)Ljava/util/stream/Node;", "<P_IN:Ljava/lang/Object;>(Ljava/util/stream/PipelineHelper<Ljava/lang/Long;>;Ljava/util/Spliterator<TP_IN;>;Ljava/util/function/IntFunction<[Ljava/lang/Long;>;)Ljava/util/stream/Node<Ljava/lang/Long;>;", 0, $virtualMethod(SliceOps$3, opEvaluateParallel, $Node*, $PipelineHelper*, $Spliterator*, $IntFunction*)},
		{"opEvaluateParallelLazy", "(Ljava/util/stream/PipelineHelper;Ljava/util/Spliterator;)Ljava/util/Spliterator;", "<P_IN:Ljava/lang/Object;>(Ljava/util/stream/PipelineHelper<Ljava/lang/Long;>;Ljava/util/Spliterator<TP_IN;>;)Ljava/util/Spliterator<Ljava/lang/Long;>;", 0, $virtualMethod(SliceOps$3, opEvaluateParallelLazy, $Spliterator*, $PipelineHelper*, $Spliterator*)},
		{"opWrapSink", "(ILjava/util/stream/Sink;)Ljava/util/stream/Sink;", "(ILjava/util/stream/Sink<Ljava/lang/Long;>;)Ljava/util/stream/Sink<Ljava/lang/Long;>;", 0, $virtualMethod(SliceOps$3, opWrapSink, $Sink*, int32_t, $Sink*)},
		{"unorderedSkipLimitSpliterator", "(Ljava/util/Spliterator$OfLong;JJJ)Ljava/util/Spliterator$OfLong;", nullptr, 0, $virtualMethod(SliceOps$3, unorderedSkipLimitSpliterator, $Spliterator$OfLong*, $Spliterator$OfLong*, int64_t, int64_t, int64_t)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.util.stream.SliceOps",
		"makeLong",
		"(Ljava/util/stream/AbstractPipeline;JJ)Ljava/util/stream/LongStream;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.stream.SliceOps$3", nullptr, nullptr, 0},
		{"java.util.stream.LongPipeline$StatefulOp", "java.util.stream.LongPipeline", "StatefulOp", $STATIC | $ABSTRACT},
		{"java.util.stream.SliceOps$3$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.stream.SliceOps$3",
		"java.util.stream.LongPipeline$StatefulOp",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/util/stream/LongPipeline$StatefulOp<Ljava/lang/Long;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.stream.SliceOps"
	};
	$loadClass(SliceOps$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(SliceOps$3));
	});
	return class$;
}

$Class* SliceOps$3::class$ = nullptr;

		} // stream
	} // util
} // java