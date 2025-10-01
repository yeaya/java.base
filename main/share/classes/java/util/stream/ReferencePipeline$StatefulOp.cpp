#include <java/util/stream/ReferencePipeline$StatefulOp.h>

#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
using $Stream = ::java::util::stream::Stream;
using $StreamShape = ::java::util::stream::StreamShape;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _ReferencePipeline$StatefulOp_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ReferencePipeline$StatefulOp, $assertionsDisabled)},
	{}
};

$MethodInfo _ReferencePipeline$StatefulOp_MethodInfo_[] = {
	{"<init>", "(Ljava/util/stream/AbstractPipeline;Ljava/util/stream/StreamShape;I)V", "(Ljava/util/stream/AbstractPipeline<*TE_IN;*>;Ljava/util/stream/StreamShape;I)V", 0, $method(static_cast<void(ReferencePipeline$StatefulOp::*)($AbstractPipeline*,$StreamShape*,int32_t)>(&ReferencePipeline$StatefulOp::init$))},
	{"opEvaluateParallel", "(Ljava/util/stream/PipelineHelper;Ljava/util/Spliterator;Ljava/util/function/IntFunction;)Ljava/util/stream/Node;", nullptr, $ABSTRACT},
	{"opIsStateful", "()Z", nullptr, $FINAL},
	{"unordered", "()Ljava/util/stream/BaseStream;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _ReferencePipeline$StatefulOp_InnerClassesInfo_[] = {
	{"java.util.stream.ReferencePipeline$StatefulOp", "java.util.stream.ReferencePipeline", "StatefulOp", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _ReferencePipeline$StatefulOp_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"java.util.stream.ReferencePipeline$StatefulOp",
	"java.util.stream.ReferencePipeline",
	nullptr,
	_ReferencePipeline$StatefulOp_FieldInfo_,
	_ReferencePipeline$StatefulOp_MethodInfo_,
	"<E_IN:Ljava/lang/Object;E_OUT:Ljava/lang/Object;>Ljava/util/stream/ReferencePipeline<TE_IN;TE_OUT;>;",
	nullptr,
	_ReferencePipeline$StatefulOp_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.ReferencePipeline"
};

$Object* allocate$ReferencePipeline$StatefulOp($Class* clazz) {
	return $of($alloc(ReferencePipeline$StatefulOp));
}

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

void clinit$ReferencePipeline$StatefulOp($Class* class$) {
	$load($ReferencePipeline);
	ReferencePipeline$StatefulOp::$assertionsDisabled = !$ReferencePipeline::class$->desiredAssertionStatus();
}

ReferencePipeline$StatefulOp::ReferencePipeline$StatefulOp() {
}

$Class* ReferencePipeline$StatefulOp::load$($String* name, bool initialize) {
	$loadClass(ReferencePipeline$StatefulOp, name, initialize, &_ReferencePipeline$StatefulOp_ClassInfo_, clinit$ReferencePipeline$StatefulOp, allocate$ReferencePipeline$StatefulOp);
	return class$;
}

$Class* ReferencePipeline$StatefulOp::class$ = nullptr;

		} // stream
	} // util
} // java