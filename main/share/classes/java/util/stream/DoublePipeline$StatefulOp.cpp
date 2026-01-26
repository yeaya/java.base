#include <java/util/stream/DoublePipeline$StatefulOp.h>

#include <java/lang/AssertionError.h>
#include <java/util/Iterator.h>
#include <java/util/PrimitiveIterator$OfDouble.h>
#include <java/util/Spliterator$OfDouble.h>
#include <java/util/Spliterator.h>
#include <java/util/function/IntFunction.h>
#include <java/util/function/Supplier.h>
#include <java/util/stream/AbstractPipeline.h>
#include <java/util/stream/BaseStream.h>
#include <java/util/stream/DoublePipeline.h>
#include <java/util/stream/DoubleStream.h>
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
using $DoublePipeline = ::java::util::stream::DoublePipeline;
using $DoubleStream = ::java::util::stream::DoubleStream;
using $Node = ::java::util::stream::Node;
using $PipelineHelper = ::java::util::stream::PipelineHelper;
using $StreamShape = ::java::util::stream::StreamShape;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _DoublePipeline$StatefulOp_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(DoublePipeline$StatefulOp, $assertionsDisabled)},
	{}
};

$MethodInfo _DoublePipeline$StatefulOp_MethodInfo_[] = {
	{"<init>", "(Ljava/util/stream/AbstractPipeline;Ljava/util/stream/StreamShape;I)V", "(Ljava/util/stream/AbstractPipeline<*TE_IN;*>;Ljava/util/stream/StreamShape;I)V", 0, $method(DoublePipeline$StatefulOp, init$, void, $AbstractPipeline*, $StreamShape*, int32_t)},
	{"iterator", "()Ljava/util/Iterator;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(DoublePipeline$StatefulOp, iterator, $Iterator*)},
	{"lazySpliterator", "(Ljava/util/function/Supplier;)Ljava/util/Spliterator;", nullptr, $VOLATILE | $SYNTHETIC, $virtualMethod(DoublePipeline$StatefulOp, lazySpliterator, $Spliterator*, $Supplier*)},
	{"opEvaluateParallel", "(Ljava/util/stream/PipelineHelper;Ljava/util/Spliterator;Ljava/util/function/IntFunction;)Ljava/util/stream/Node;", nullptr, $ABSTRACT},
	{"opIsStateful", "()Z", nullptr, $FINAL, $virtualMethod(DoublePipeline$StatefulOp, opIsStateful, bool)},
	{"parallel", "()Ljava/util/stream/DoubleStream;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(DoublePipeline$StatefulOp, parallel, $BaseStream*)},
	{"sequential", "()Ljava/util/stream/DoubleStream;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(DoublePipeline$StatefulOp, sequential, $BaseStream*)},
	{"spliterator", "()Ljava/util/Spliterator;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(DoublePipeline$StatefulOp, spliterator, $Spliterator*)},
	{"unordered", "()Ljava/util/stream/BaseStream;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(DoublePipeline$StatefulOp, unordered, $BaseStream*)},
	{}
};

$InnerClassInfo _DoublePipeline$StatefulOp_InnerClassesInfo_[] = {
	{"java.util.stream.DoublePipeline$StatefulOp", "java.util.stream.DoublePipeline", "StatefulOp", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _DoublePipeline$StatefulOp_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"java.util.stream.DoublePipeline$StatefulOp",
	"java.util.stream.DoublePipeline",
	nullptr,
	_DoublePipeline$StatefulOp_FieldInfo_,
	_DoublePipeline$StatefulOp_MethodInfo_,
	"<E_IN:Ljava/lang/Object;>Ljava/util/stream/DoublePipeline<TE_IN;>;",
	nullptr,
	_DoublePipeline$StatefulOp_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.DoublePipeline"
};

$Object* allocate$DoublePipeline$StatefulOp($Class* clazz) {
	return $of($alloc(DoublePipeline$StatefulOp));
}

$Node* DoublePipeline$StatefulOp::opEvaluateParallel($PipelineHelper* helper, $Spliterator* spliterator, $IntFunction* generator) {
	 return this->$DoublePipeline::opEvaluateParallel(helper, spliterator, generator);
}

bool DoublePipeline$StatefulOp::$assertionsDisabled = false;

void DoublePipeline$StatefulOp::init$($AbstractPipeline* upstream, $StreamShape* inputShape, int32_t opFlags) {
	$DoublePipeline::init$(upstream, opFlags);
	if (!DoublePipeline$StatefulOp::$assertionsDisabled && !($nc(upstream)->getOutputShape() == inputShape)) {
		$throwNew($AssertionError);
	}
}

bool DoublePipeline$StatefulOp::opIsStateful() {
	return true;
}

$BaseStream* DoublePipeline$StatefulOp::parallel() {
	return $cast($DoubleStream, $DoublePipeline::parallel());
}

$BaseStream* DoublePipeline$StatefulOp::sequential() {
	return $cast($DoubleStream, $DoublePipeline::sequential());
}

$BaseStream* DoublePipeline$StatefulOp::unordered() {
	return $DoublePipeline::unordered();
}

$Spliterator* DoublePipeline$StatefulOp::spliterator() {
	return $DoublePipeline::spliterator();
}

$Iterator* DoublePipeline$StatefulOp::iterator() {
	return $DoublePipeline::iterator();
}

$Spliterator* DoublePipeline$StatefulOp::lazySpliterator($Supplier* supplier) {
	return $DoublePipeline::lazySpliterator(supplier);
}

void clinit$DoublePipeline$StatefulOp($Class* class$) {
	$load($DoublePipeline);
	DoublePipeline$StatefulOp::$assertionsDisabled = !$DoublePipeline::class$->desiredAssertionStatus();
}

DoublePipeline$StatefulOp::DoublePipeline$StatefulOp() {
}

$Class* DoublePipeline$StatefulOp::load$($String* name, bool initialize) {
	$loadClass(DoublePipeline$StatefulOp, name, initialize, &_DoublePipeline$StatefulOp_ClassInfo_, clinit$DoublePipeline$StatefulOp, allocate$DoublePipeline$StatefulOp);
	return class$;
}

$Class* DoublePipeline$StatefulOp::class$ = nullptr;

		} // stream
	} // util
} // java