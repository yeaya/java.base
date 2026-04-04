#include <java/util/stream/IntPipeline$StatefulOp.h>
#include <java/lang/AssertionError.h>
#include <java/util/Iterator.h>
#include <java/util/PrimitiveIterator$OfInt.h>
#include <java/util/Spliterator$OfInt.h>
#include <java/util/Spliterator.h>
#include <java/util/function/IntFunction.h>
#include <java/util/function/Supplier.h>
#include <java/util/stream/AbstractPipeline.h>
#include <java/util/stream/BaseStream.h>
#include <java/util/stream/IntPipeline.h>
#include <java/util/stream/IntStream.h>
#include <java/util/stream/Node.h>
#include <java/util/stream/PipelineHelper.h>
#include <java/util/stream/StreamShape.h>
#include <jcpp.h>

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $Spliterator = ::java::util::Spliterator;
using $IntFunction = ::java::util::function::IntFunction;
using $Supplier = ::java::util::function::Supplier;
using $AbstractPipeline = ::java::util::stream::AbstractPipeline;
using $BaseStream = ::java::util::stream::BaseStream;
using $IntPipeline = ::java::util::stream::IntPipeline;
using $IntStream = ::java::util::stream::IntStream;
using $Node = ::java::util::stream::Node;
using $PipelineHelper = ::java::util::stream::PipelineHelper;
using $StreamShape = ::java::util::stream::StreamShape;

namespace java {
	namespace util {
		namespace stream {

$Node* IntPipeline$StatefulOp::opEvaluateParallel($PipelineHelper* helper, $Spliterator* spliterator, $IntFunction* generator) {
	 return this->$IntPipeline::opEvaluateParallel(helper, spliterator, generator);
}

bool IntPipeline$StatefulOp::$assertionsDisabled = false;

void IntPipeline$StatefulOp::init$($AbstractPipeline* upstream, $StreamShape* inputShape, int32_t opFlags) {
	$IntPipeline::init$(upstream, opFlags);
	if (!IntPipeline$StatefulOp::$assertionsDisabled && !($nc(upstream)->getOutputShape() == inputShape)) {
		$throwNew($AssertionError);
	}
}

bool IntPipeline$StatefulOp::opIsStateful() {
	return true;
}

$BaseStream* IntPipeline$StatefulOp::parallel() {
	return $cast($IntStream, $IntPipeline::parallel());
}

$BaseStream* IntPipeline$StatefulOp::sequential() {
	return $cast($IntStream, $IntPipeline::sequential());
}

$BaseStream* IntPipeline$StatefulOp::unordered() {
	return $IntPipeline::unordered();
}

$Spliterator* IntPipeline$StatefulOp::spliterator() {
	return $IntPipeline::spliterator();
}

$Iterator* IntPipeline$StatefulOp::iterator() {
	return $IntPipeline::iterator();
}

$Spliterator* IntPipeline$StatefulOp::lazySpliterator($Supplier* supplier) {
	return $IntPipeline::lazySpliterator(supplier);
}

void IntPipeline$StatefulOp::clinit$($Class* clazz) {
	$load($IntPipeline);
	IntPipeline$StatefulOp::$assertionsDisabled = !$IntPipeline::class$->desiredAssertionStatus();
}

IntPipeline$StatefulOp::IntPipeline$StatefulOp() {
}

$Class* IntPipeline$StatefulOp::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(IntPipeline$StatefulOp, $assertionsDisabled)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/stream/AbstractPipeline;Ljava/util/stream/StreamShape;I)V", "(Ljava/util/stream/AbstractPipeline<*TE_IN;*>;Ljava/util/stream/StreamShape;I)V", 0, $method(IntPipeline$StatefulOp, init$, void, $AbstractPipeline*, $StreamShape*, int32_t)},
		{"iterator", "()Ljava/util/Iterator;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(IntPipeline$StatefulOp, iterator, $Iterator*)},
		{"lazySpliterator", "(Ljava/util/function/Supplier;)Ljava/util/Spliterator;", nullptr, $VOLATILE | $SYNTHETIC, $virtualMethod(IntPipeline$StatefulOp, lazySpliterator, $Spliterator*, $Supplier*)},
		{"opEvaluateParallel", "(Ljava/util/stream/PipelineHelper;Ljava/util/Spliterator;Ljava/util/function/IntFunction;)Ljava/util/stream/Node;", nullptr, $ABSTRACT},
		{"opIsStateful", "()Z", nullptr, $FINAL, $virtualMethod(IntPipeline$StatefulOp, opIsStateful, bool)},
		{"parallel", "()Ljava/util/stream/IntStream;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(IntPipeline$StatefulOp, parallel, $BaseStream*)},
		{"sequential", "()Ljava/util/stream/IntStream;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(IntPipeline$StatefulOp, sequential, $BaseStream*)},
		{"spliterator", "()Ljava/util/Spliterator;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(IntPipeline$StatefulOp, spliterator, $Spliterator*)},
		{"unordered", "()Ljava/util/stream/BaseStream;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(IntPipeline$StatefulOp, unordered, $BaseStream*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.stream.IntPipeline$StatefulOp", "java.util.stream.IntPipeline", "StatefulOp", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"java.util.stream.IntPipeline$StatefulOp",
		"java.util.stream.IntPipeline",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"<E_IN:Ljava/lang/Object;>Ljava/util/stream/IntPipeline<TE_IN;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.stream.IntPipeline"
	};
	$loadClass(IntPipeline$StatefulOp, name, initialize, &classInfo$$, IntPipeline$StatefulOp::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(IntPipeline$StatefulOp));
	});
	return class$;
}

$Class* IntPipeline$StatefulOp::class$ = nullptr;

		} // stream
	} // util
} // java