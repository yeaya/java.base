#include <java/util/stream/ReferencePipeline$StatefulOp.h>
#include <java/lang/AssertionError.h>
#include <java/util/Spliterator.h>
#include <java/util/function/IntFunction.h>
#include <java/util/stream/AbstractPipeline.h>
#include <java/util/stream/BaseStream.h>
#include <java/util/stream/Node.h>
#include <java/util/stream/PipelineHelper.h>
#include <java/util/stream/ReferencePipeline.h>
#include <java/util/stream/Stream.h>
#include <java/util/stream/StreamShape.h>
#include <jcpp.h>

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Spliterator = ::java::util::Spliterator;
using $IntFunction = ::java::util::function::IntFunction;
using $AbstractPipeline = ::java::util::stream::AbstractPipeline;
using $BaseStream = ::java::util::stream::BaseStream;
using $Node = ::java::util::stream::Node;
using $PipelineHelper = ::java::util::stream::PipelineHelper;
using $ReferencePipeline = ::java::util::stream::ReferencePipeline;
using $StreamShape = ::java::util::stream::StreamShape;

namespace java {
	namespace util {
		namespace stream {

$Node* ReferencePipeline$StatefulOp::opEvaluateParallel($PipelineHelper* helper, $Spliterator* spliterator, $IntFunction* generator) {
	 return this->$ReferencePipeline::opEvaluateParallel(helper, spliterator, generator);
}

bool ReferencePipeline$StatefulOp::$assertionsDisabled = false;

void ReferencePipeline$StatefulOp::init$($AbstractPipeline* upstream, $StreamShape* inputShape, int32_t opFlags) {
	$ReferencePipeline::init$(upstream, opFlags);
	if (!ReferencePipeline$StatefulOp::$assertionsDisabled && !($nc(upstream)->getOutputShape() == inputShape)) {
		$throwNew($AssertionError);
	}
}

bool ReferencePipeline$StatefulOp::opIsStateful() {
	return true;
}

$BaseStream* ReferencePipeline$StatefulOp::unordered() {
	return $ReferencePipeline::unordered();
}

void ReferencePipeline$StatefulOp::clinit$($Class* clazz) {
	$load($ReferencePipeline);
	ReferencePipeline$StatefulOp::$assertionsDisabled = !$ReferencePipeline::class$->desiredAssertionStatus();
}

ReferencePipeline$StatefulOp::ReferencePipeline$StatefulOp() {
}

$Class* ReferencePipeline$StatefulOp::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ReferencePipeline$StatefulOp, $assertionsDisabled)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/stream/AbstractPipeline;Ljava/util/stream/StreamShape;I)V", "(Ljava/util/stream/AbstractPipeline<*TE_IN;*>;Ljava/util/stream/StreamShape;I)V", 0, $method(ReferencePipeline$StatefulOp, init$, void, $AbstractPipeline*, $StreamShape*, int32_t)},
		{"opEvaluateParallel", "(Ljava/util/stream/PipelineHelper;Ljava/util/Spliterator;Ljava/util/function/IntFunction;)Ljava/util/stream/Node;", nullptr, $ABSTRACT},
		{"opIsStateful", "()Z", nullptr, $FINAL, $virtualMethod(ReferencePipeline$StatefulOp, opIsStateful, bool)},
		{"unordered", "()Ljava/util/stream/BaseStream;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(ReferencePipeline$StatefulOp, unordered, $BaseStream*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.stream.ReferencePipeline$StatefulOp", "java.util.stream.ReferencePipeline", "StatefulOp", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"java.util.stream.ReferencePipeline$StatefulOp",
		"java.util.stream.ReferencePipeline",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"<E_IN:Ljava/lang/Object;E_OUT:Ljava/lang/Object;>Ljava/util/stream/ReferencePipeline<TE_IN;TE_OUT;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.stream.ReferencePipeline"
	};
	$loadClass(ReferencePipeline$StatefulOp, name, initialize, &classInfo$$, ReferencePipeline$StatefulOp::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(ReferencePipeline$StatefulOp));
	});
	return class$;
}

$Class* ReferencePipeline$StatefulOp::class$ = nullptr;

		} // stream
	} // util
} // java