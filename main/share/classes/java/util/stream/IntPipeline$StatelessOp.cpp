#include <java/util/stream/IntPipeline$StatelessOp.h>
#include <java/lang/AssertionError.h>
#include <java/util/Iterator.h>
#include <java/util/PrimitiveIterator$OfInt.h>
#include <java/util/Spliterator$OfInt.h>
#include <java/util/Spliterator.h>
#include <java/util/function/Supplier.h>
#include <java/util/stream/AbstractPipeline.h>
#include <java/util/stream/BaseStream.h>
#include <java/util/stream/IntPipeline.h>
#include <java/util/stream/IntStream.h>
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
using $IntPipeline = ::java::util::stream::IntPipeline;
using $IntStream = ::java::util::stream::IntStream;
using $StreamShape = ::java::util::stream::StreamShape;

namespace java {
	namespace util {
		namespace stream {

bool IntPipeline$StatelessOp::$assertionsDisabled = false;

void IntPipeline$StatelessOp::init$($AbstractPipeline* upstream, $StreamShape* inputShape, int32_t opFlags) {
	$IntPipeline::init$(upstream, opFlags);
	if (!IntPipeline$StatelessOp::$assertionsDisabled && !($nc(upstream)->getOutputShape() == inputShape)) {
		$throwNew($AssertionError);
	}
}

bool IntPipeline$StatelessOp::opIsStateful() {
	return false;
}

$BaseStream* IntPipeline$StatelessOp::parallel() {
	return $cast($IntStream, $IntPipeline::parallel());
}

$BaseStream* IntPipeline$StatelessOp::sequential() {
	return $cast($IntStream, $IntPipeline::sequential());
}

$BaseStream* IntPipeline$StatelessOp::unordered() {
	return $IntPipeline::unordered();
}

$Spliterator* IntPipeline$StatelessOp::spliterator() {
	return $IntPipeline::spliterator();
}

$Iterator* IntPipeline$StatelessOp::iterator() {
	return $IntPipeline::iterator();
}

$Spliterator* IntPipeline$StatelessOp::lazySpliterator($Supplier* supplier) {
	return $IntPipeline::lazySpliterator(supplier);
}

void IntPipeline$StatelessOp::clinit$($Class* clazz) {
	$load($IntPipeline);
	IntPipeline$StatelessOp::$assertionsDisabled = !$IntPipeline::class$->desiredAssertionStatus();
}

IntPipeline$StatelessOp::IntPipeline$StatelessOp() {
}

$Class* IntPipeline$StatelessOp::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(IntPipeline$StatelessOp, $assertionsDisabled)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/stream/AbstractPipeline;Ljava/util/stream/StreamShape;I)V", "(Ljava/util/stream/AbstractPipeline<*TE_IN;*>;Ljava/util/stream/StreamShape;I)V", 0, $method(IntPipeline$StatelessOp, init$, void, $AbstractPipeline*, $StreamShape*, int32_t)},
		{"iterator", "()Ljava/util/Iterator;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(IntPipeline$StatelessOp, iterator, $Iterator*)},
		{"lazySpliterator", "(Ljava/util/function/Supplier;)Ljava/util/Spliterator;", nullptr, $VOLATILE | $SYNTHETIC, $virtualMethod(IntPipeline$StatelessOp, lazySpliterator, $Spliterator*, $Supplier*)},
		{"opIsStateful", "()Z", nullptr, $FINAL, $virtualMethod(IntPipeline$StatelessOp, opIsStateful, bool)},
		{"parallel", "()Ljava/util/stream/IntStream;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(IntPipeline$StatelessOp, parallel, $BaseStream*)},
		{"sequential", "()Ljava/util/stream/IntStream;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(IntPipeline$StatelessOp, sequential, $BaseStream*)},
		{"spliterator", "()Ljava/util/Spliterator;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(IntPipeline$StatelessOp, spliterator, $Spliterator*)},
		{"unordered", "()Ljava/util/stream/BaseStream;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(IntPipeline$StatelessOp, unordered, $BaseStream*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.stream.IntPipeline$StatelessOp", "java.util.stream.IntPipeline", "StatelessOp", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"java.util.stream.IntPipeline$StatelessOp",
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
	$loadClass(IntPipeline$StatelessOp, name, initialize, &classInfo$$, IntPipeline$StatelessOp::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(IntPipeline$StatelessOp));
	});
	return class$;
}

$Class* IntPipeline$StatelessOp::class$ = nullptr;

		} // stream
	} // util
} // java