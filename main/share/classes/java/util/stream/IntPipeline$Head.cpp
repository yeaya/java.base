#include <java/util/stream/IntPipeline$Head.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Iterator.h>
#include <java/util/PrimitiveIterator$OfInt.h>
#include <java/util/Spliterator$OfInt.h>
#include <java/util/Spliterator.h>
#include <java/util/function/IntConsumer.h>
#include <java/util/function/Supplier.h>
#include <java/util/stream/AbstractPipeline.h>
#include <java/util/stream/BaseStream.h>
#include <java/util/stream/IntPipeline.h>
#include <java/util/stream/IntStream.h>
#include <java/util/stream/Sink.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Iterator = ::java::util::Iterator;
using $PrimitiveIterator$OfInt = ::java::util::PrimitiveIterator$OfInt;
using $Spliterator = ::java::util::Spliterator;
using $Spliterator$OfInt = ::java::util::Spliterator$OfInt;
using $IntConsumer = ::java::util::function::IntConsumer;
using $Supplier = ::java::util::function::Supplier;
using $AbstractPipeline = ::java::util::stream::AbstractPipeline;
using $BaseStream = ::java::util::stream::BaseStream;
using $IntPipeline = ::java::util::stream::IntPipeline;
using $IntStream = ::java::util::stream::IntStream;
using $Sink = ::java::util::stream::Sink;

namespace java {
	namespace util {
		namespace stream {

$MethodInfo _IntPipeline$Head_MethodInfo_[] = {
	{"<init>", "(Ljava/util/function/Supplier;IZ)V", "(Ljava/util/function/Supplier<+Ljava/util/Spliterator<Ljava/lang/Integer;>;>;IZ)V", 0, $method(static_cast<void(IntPipeline$Head::*)($Supplier*,int32_t,bool)>(&IntPipeline$Head::init$))},
	{"<init>", "(Ljava/util/Spliterator;IZ)V", "(Ljava/util/Spliterator<Ljava/lang/Integer;>;IZ)V", 0, $method(static_cast<void(IntPipeline$Head::*)($Spliterator*,int32_t,bool)>(&IntPipeline$Head::init$))},
	{"forEach", "(Ljava/util/function/IntConsumer;)V", nullptr, $PUBLIC},
	{"forEachOrdered", "(Ljava/util/function/IntConsumer;)V", nullptr, $PUBLIC},
	{"iterator", "()Ljava/util/Iterator;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"lazySpliterator", "(Ljava/util/function/Supplier;)Ljava/util/Spliterator;", nullptr, $VOLATILE | $SYNTHETIC},
	{"opIsStateful", "()Z", nullptr, $FINAL},
	{"opWrapSink", "(ILjava/util/stream/Sink;)Ljava/util/stream/Sink;", "(ILjava/util/stream/Sink<Ljava/lang/Integer;>;)Ljava/util/stream/Sink<TE_IN;>;", $FINAL},
	{"parallel", "()Ljava/util/stream/IntStream;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"sequential", "()Ljava/util/stream/IntStream;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"spliterator", "()Ljava/util/Spliterator;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"unordered", "()Ljava/util/stream/BaseStream;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _IntPipeline$Head_InnerClassesInfo_[] = {
	{"java.util.stream.IntPipeline$Head", "java.util.stream.IntPipeline", "Head", $STATIC},
	{}
};

$ClassInfo _IntPipeline$Head_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.stream.IntPipeline$Head",
	"java.util.stream.IntPipeline",
	nullptr,
	nullptr,
	_IntPipeline$Head_MethodInfo_,
	"<E_IN:Ljava/lang/Object;>Ljava/util/stream/IntPipeline<TE_IN;>;",
	nullptr,
	_IntPipeline$Head_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.IntPipeline"
};

$Object* allocate$IntPipeline$Head($Class* clazz) {
	return $of($alloc(IntPipeline$Head));
}

void IntPipeline$Head::init$($Supplier* source, int32_t sourceFlags, bool parallel) {
	$IntPipeline::init$(source, sourceFlags, parallel);
}

void IntPipeline$Head::init$($Spliterator* source, int32_t sourceFlags, bool parallel) {
	$IntPipeline::init$(source, sourceFlags, parallel);
}

bool IntPipeline$Head::opIsStateful() {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

$Sink* IntPipeline$Head::opWrapSink(int32_t flags, $Sink* sink) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

void IntPipeline$Head::forEach($IntConsumer* action) {
	if (!isParallel()) {
		$nc($($IntPipeline::adapt($(sourceStageSpliterator()))))->forEachRemaining(action);
	} else {
		$IntPipeline::forEach(action);
	}
}

void IntPipeline$Head::forEachOrdered($IntConsumer* action) {
	if (!isParallel()) {
		$nc($($IntPipeline::adapt($(sourceStageSpliterator()))))->forEachRemaining(action);
	} else {
		$IntPipeline::forEachOrdered(action);
	}
}

$BaseStream* IntPipeline$Head::parallel() {
	return $cast($IntStream, $IntPipeline::parallel());
}

$BaseStream* IntPipeline$Head::sequential() {
	return $cast($IntStream, $IntPipeline::sequential());
}

$BaseStream* IntPipeline$Head::unordered() {
	return $IntPipeline::unordered();
}

$Spliterator* IntPipeline$Head::spliterator() {
	return $IntPipeline::spliterator();
}

$Iterator* IntPipeline$Head::iterator() {
	return $IntPipeline::iterator();
}

$Spliterator* IntPipeline$Head::lazySpliterator($Supplier* supplier) {
	return $IntPipeline::lazySpliterator(supplier);
}

IntPipeline$Head::IntPipeline$Head() {
}

$Class* IntPipeline$Head::load$($String* name, bool initialize) {
	$loadClass(IntPipeline$Head, name, initialize, &_IntPipeline$Head_ClassInfo_, allocate$IntPipeline$Head);
	return class$;
}

$Class* IntPipeline$Head::class$ = nullptr;

		} // stream
	} // util
} // java