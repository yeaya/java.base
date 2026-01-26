#include <java/util/stream/DoublePipeline$StatelessOp.h>

#include <java/lang/AssertionError.h>
#include <java/util/Iterator.h>
#include <java/util/PrimitiveIterator$OfDouble.h>
#include <java/util/Spliterator$OfDouble.h>
#include <java/util/Spliterator.h>
#include <java/util/function/Supplier.h>
#include <java/util/stream/AbstractPipeline.h>
#include <java/util/stream/BaseStream.h>
#include <java/util/stream/DoublePipeline.h>
#include <java/util/stream/DoubleStream.h>
#include <java/util/stream/StreamShape.h>
#include <jcpp.h>

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $Spliterator = ::java::util::Spliterator;
using $Supplier = ::java::util::function::Supplier;
using $AbstractPipeline = ::java::util::stream::AbstractPipeline;
using $BaseStream = ::java::util::stream::BaseStream;
using $DoublePipeline = ::java::util::stream::DoublePipeline;
using $DoubleStream = ::java::util::stream::DoubleStream;
using $StreamShape = ::java::util::stream::StreamShape;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _DoublePipeline$StatelessOp_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(DoublePipeline$StatelessOp, $assertionsDisabled)},
	{}
};

$MethodInfo _DoublePipeline$StatelessOp_MethodInfo_[] = {
	{"<init>", "(Ljava/util/stream/AbstractPipeline;Ljava/util/stream/StreamShape;I)V", "(Ljava/util/stream/AbstractPipeline<*TE_IN;*>;Ljava/util/stream/StreamShape;I)V", 0, $method(DoublePipeline$StatelessOp, init$, void, $AbstractPipeline*, $StreamShape*, int32_t)},
	{"iterator", "()Ljava/util/Iterator;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(DoublePipeline$StatelessOp, iterator, $Iterator*)},
	{"lazySpliterator", "(Ljava/util/function/Supplier;)Ljava/util/Spliterator;", nullptr, $VOLATILE | $SYNTHETIC, $virtualMethod(DoublePipeline$StatelessOp, lazySpliterator, $Spliterator*, $Supplier*)},
	{"opIsStateful", "()Z", nullptr, $FINAL, $virtualMethod(DoublePipeline$StatelessOp, opIsStateful, bool)},
	{"parallel", "()Ljava/util/stream/DoubleStream;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(DoublePipeline$StatelessOp, parallel, $BaseStream*)},
	{"sequential", "()Ljava/util/stream/DoubleStream;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(DoublePipeline$StatelessOp, sequential, $BaseStream*)},
	{"spliterator", "()Ljava/util/Spliterator;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(DoublePipeline$StatelessOp, spliterator, $Spliterator*)},
	{"unordered", "()Ljava/util/stream/BaseStream;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(DoublePipeline$StatelessOp, unordered, $BaseStream*)},
	{}
};

$InnerClassInfo _DoublePipeline$StatelessOp_InnerClassesInfo_[] = {
	{"java.util.stream.DoublePipeline$StatelessOp", "java.util.stream.DoublePipeline", "StatelessOp", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _DoublePipeline$StatelessOp_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"java.util.stream.DoublePipeline$StatelessOp",
	"java.util.stream.DoublePipeline",
	nullptr,
	_DoublePipeline$StatelessOp_FieldInfo_,
	_DoublePipeline$StatelessOp_MethodInfo_,
	"<E_IN:Ljava/lang/Object;>Ljava/util/stream/DoublePipeline<TE_IN;>;",
	nullptr,
	_DoublePipeline$StatelessOp_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.DoublePipeline"
};

$Object* allocate$DoublePipeline$StatelessOp($Class* clazz) {
	return $of($alloc(DoublePipeline$StatelessOp));
}

bool DoublePipeline$StatelessOp::$assertionsDisabled = false;

void DoublePipeline$StatelessOp::init$($AbstractPipeline* upstream, $StreamShape* inputShape, int32_t opFlags) {
	$DoublePipeline::init$(upstream, opFlags);
	if (!DoublePipeline$StatelessOp::$assertionsDisabled && !($nc(upstream)->getOutputShape() == inputShape)) {
		$throwNew($AssertionError);
	}
}

bool DoublePipeline$StatelessOp::opIsStateful() {
	return false;
}

$BaseStream* DoublePipeline$StatelessOp::parallel() {
	return $cast($DoubleStream, $DoublePipeline::parallel());
}

$BaseStream* DoublePipeline$StatelessOp::sequential() {
	return $cast($DoubleStream, $DoublePipeline::sequential());
}

$BaseStream* DoublePipeline$StatelessOp::unordered() {
	return $DoublePipeline::unordered();
}

$Spliterator* DoublePipeline$StatelessOp::spliterator() {
	return $DoublePipeline::spliterator();
}

$Iterator* DoublePipeline$StatelessOp::iterator() {
	return $DoublePipeline::iterator();
}

$Spliterator* DoublePipeline$StatelessOp::lazySpliterator($Supplier* supplier) {
	return $DoublePipeline::lazySpliterator(supplier);
}

void clinit$DoublePipeline$StatelessOp($Class* class$) {
	$load($DoublePipeline);
	DoublePipeline$StatelessOp::$assertionsDisabled = !$DoublePipeline::class$->desiredAssertionStatus();
}

DoublePipeline$StatelessOp::DoublePipeline$StatelessOp() {
}

$Class* DoublePipeline$StatelessOp::load$($String* name, bool initialize) {
	$loadClass(DoublePipeline$StatelessOp, name, initialize, &_DoublePipeline$StatelessOp_ClassInfo_, clinit$DoublePipeline$StatelessOp, allocate$DoublePipeline$StatelessOp);
	return class$;
}

$Class* DoublePipeline$StatelessOp::class$ = nullptr;

		} // stream
	} // util
} // java