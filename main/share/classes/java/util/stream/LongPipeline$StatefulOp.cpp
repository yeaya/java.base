#include <java/util/stream/LongPipeline$StatefulOp.h>

#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Iterator.h>
#include <java/util/PrimitiveIterator$OfLong.h>
#include <java/util/Spliterator$OfLong.h>
#include <java/util/Spliterator.h>
#include <java/util/function/IntFunction.h>
#include <java/util/function/Supplier.h>
#include <java/util/stream/AbstractPipeline.h>
#include <java/util/stream/BaseStream.h>
#include <java/util/stream/LongPipeline.h>
#include <java/util/stream/LongStream.h>
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
using $PrimitiveIterator$OfLong = ::java::util::PrimitiveIterator$OfLong;
using $Spliterator = ::java::util::Spliterator;
using $Spliterator$OfLong = ::java::util::Spliterator$OfLong;
using $IntFunction = ::java::util::function::IntFunction;
using $Supplier = ::java::util::function::Supplier;
using $AbstractPipeline = ::java::util::stream::AbstractPipeline;
using $BaseStream = ::java::util::stream::BaseStream;
using $LongPipeline = ::java::util::stream::LongPipeline;
using $LongStream = ::java::util::stream::LongStream;
using $Node = ::java::util::stream::Node;
using $PipelineHelper = ::java::util::stream::PipelineHelper;
using $StreamShape = ::java::util::stream::StreamShape;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _LongPipeline$StatefulOp_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(LongPipeline$StatefulOp, $assertionsDisabled)},
	{}
};

$MethodInfo _LongPipeline$StatefulOp_MethodInfo_[] = {
	{"<init>", "(Ljava/util/stream/AbstractPipeline;Ljava/util/stream/StreamShape;I)V", "(Ljava/util/stream/AbstractPipeline<*TE_IN;*>;Ljava/util/stream/StreamShape;I)V", 0, $method(static_cast<void(LongPipeline$StatefulOp::*)($AbstractPipeline*,$StreamShape*,int32_t)>(&LongPipeline$StatefulOp::init$))},
	{"iterator", "()Ljava/util/Iterator;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"lazySpliterator", "(Ljava/util/function/Supplier;)Ljava/util/Spliterator;", nullptr, $VOLATILE | $SYNTHETIC},
	{"opEvaluateParallel", "(Ljava/util/stream/PipelineHelper;Ljava/util/Spliterator;Ljava/util/function/IntFunction;)Ljava/util/stream/Node;", nullptr, $ABSTRACT},
	{"opIsStateful", "()Z", nullptr, $FINAL},
	{"parallel", "()Ljava/util/stream/LongStream;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"sequential", "()Ljava/util/stream/LongStream;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"spliterator", "()Ljava/util/Spliterator;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"unordered", "()Ljava/util/stream/BaseStream;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _LongPipeline$StatefulOp_InnerClassesInfo_[] = {
	{"java.util.stream.LongPipeline$StatefulOp", "java.util.stream.LongPipeline", "StatefulOp", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _LongPipeline$StatefulOp_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"java.util.stream.LongPipeline$StatefulOp",
	"java.util.stream.LongPipeline",
	nullptr,
	_LongPipeline$StatefulOp_FieldInfo_,
	_LongPipeline$StatefulOp_MethodInfo_,
	"<E_IN:Ljava/lang/Object;>Ljava/util/stream/LongPipeline<TE_IN;>;",
	nullptr,
	_LongPipeline$StatefulOp_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.LongPipeline"
};

$Object* allocate$LongPipeline$StatefulOp($Class* clazz) {
	return $of($alloc(LongPipeline$StatefulOp));
}

$Node* LongPipeline$StatefulOp::opEvaluateParallel($PipelineHelper* helper, $Spliterator* spliterator, $IntFunction* generator) {
	 return this->$LongPipeline::opEvaluateParallel(helper, spliterator, generator);
}

bool LongPipeline$StatefulOp::$assertionsDisabled = false;

void LongPipeline$StatefulOp::init$($AbstractPipeline* upstream, $StreamShape* inputShape, int32_t opFlags) {
	$LongPipeline::init$(upstream, opFlags);
	if (!LongPipeline$StatefulOp::$assertionsDisabled && !($nc(upstream)->getOutputShape() == inputShape)) {
		$throwNew($AssertionError);
	}
}

bool LongPipeline$StatefulOp::opIsStateful() {
	return true;
}

$BaseStream* LongPipeline$StatefulOp::parallel() {
	return $cast($LongStream, $LongPipeline::parallel());
}

$BaseStream* LongPipeline$StatefulOp::sequential() {
	return $cast($LongStream, $LongPipeline::sequential());
}

$BaseStream* LongPipeline$StatefulOp::unordered() {
	return $LongPipeline::unordered();
}

$Spliterator* LongPipeline$StatefulOp::spliterator() {
	return $LongPipeline::spliterator();
}

$Iterator* LongPipeline$StatefulOp::iterator() {
	return $LongPipeline::iterator();
}

$Spliterator* LongPipeline$StatefulOp::lazySpliterator($Supplier* supplier) {
	return $LongPipeline::lazySpliterator(supplier);
}

void clinit$LongPipeline$StatefulOp($Class* class$) {
	$load($LongPipeline);
	LongPipeline$StatefulOp::$assertionsDisabled = !$LongPipeline::class$->desiredAssertionStatus();
}

LongPipeline$StatefulOp::LongPipeline$StatefulOp() {
}

$Class* LongPipeline$StatefulOp::load$($String* name, bool initialize) {
	$loadClass(LongPipeline$StatefulOp, name, initialize, &_LongPipeline$StatefulOp_ClassInfo_, clinit$LongPipeline$StatefulOp, allocate$LongPipeline$StatefulOp);
	return class$;
}

$Class* LongPipeline$StatefulOp::class$ = nullptr;

		} // stream
	} // util
} // java