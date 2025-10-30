#include <java/util/stream/DoublePipeline$Head.h>

#include <java/lang/UnsupportedOperationException.h>
#include <java/util/Iterator.h>
#include <java/util/PrimitiveIterator$OfDouble.h>
#include <java/util/Spliterator$OfDouble.h>
#include <java/util/Spliterator.h>
#include <java/util/function/DoubleConsumer.h>
#include <java/util/function/Supplier.h>
#include <java/util/stream/AbstractPipeline.h>
#include <java/util/stream/BaseStream.h>
#include <java/util/stream/DoublePipeline.h>
#include <java/util/stream/DoubleStream.h>
#include <java/util/stream/Sink.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Iterator = ::java::util::Iterator;
using $PrimitiveIterator$OfDouble = ::java::util::PrimitiveIterator$OfDouble;
using $Spliterator = ::java::util::Spliterator;
using $Spliterator$OfDouble = ::java::util::Spliterator$OfDouble;
using $DoubleConsumer = ::java::util::function::DoubleConsumer;
using $Supplier = ::java::util::function::Supplier;
using $AbstractPipeline = ::java::util::stream::AbstractPipeline;
using $BaseStream = ::java::util::stream::BaseStream;
using $DoublePipeline = ::java::util::stream::DoublePipeline;
using $DoubleStream = ::java::util::stream::DoubleStream;
using $Sink = ::java::util::stream::Sink;

namespace java {
	namespace util {
		namespace stream {

$MethodInfo _DoublePipeline$Head_MethodInfo_[] = {
	{"<init>", "(Ljava/util/function/Supplier;IZ)V", "(Ljava/util/function/Supplier<+Ljava/util/Spliterator<Ljava/lang/Double;>;>;IZ)V", 0, $method(static_cast<void(DoublePipeline$Head::*)($Supplier*,int32_t,bool)>(&DoublePipeline$Head::init$))},
	{"<init>", "(Ljava/util/Spliterator;IZ)V", "(Ljava/util/Spliterator<Ljava/lang/Double;>;IZ)V", 0, $method(static_cast<void(DoublePipeline$Head::*)($Spliterator*,int32_t,bool)>(&DoublePipeline$Head::init$))},
	{"forEach", "(Ljava/util/function/DoubleConsumer;)V", nullptr, $PUBLIC},
	{"forEachOrdered", "(Ljava/util/function/DoubleConsumer;)V", nullptr, $PUBLIC},
	{"iterator", "()Ljava/util/Iterator;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"lazySpliterator", "(Ljava/util/function/Supplier;)Ljava/util/Spliterator;", nullptr, $VOLATILE | $SYNTHETIC},
	{"opIsStateful", "()Z", nullptr, $FINAL},
	{"opWrapSink", "(ILjava/util/stream/Sink;)Ljava/util/stream/Sink;", "(ILjava/util/stream/Sink<Ljava/lang/Double;>;)Ljava/util/stream/Sink<TE_IN;>;", $FINAL},
	{"parallel", "()Ljava/util/stream/DoubleStream;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"sequential", "()Ljava/util/stream/DoubleStream;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"spliterator", "()Ljava/util/Spliterator;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"unordered", "()Ljava/util/stream/BaseStream;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _DoublePipeline$Head_InnerClassesInfo_[] = {
	{"java.util.stream.DoublePipeline$Head", "java.util.stream.DoublePipeline", "Head", $STATIC},
	{}
};

$ClassInfo _DoublePipeline$Head_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.stream.DoublePipeline$Head",
	"java.util.stream.DoublePipeline",
	nullptr,
	nullptr,
	_DoublePipeline$Head_MethodInfo_,
	"<E_IN:Ljava/lang/Object;>Ljava/util/stream/DoublePipeline<TE_IN;>;",
	nullptr,
	_DoublePipeline$Head_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.DoublePipeline"
};

$Object* allocate$DoublePipeline$Head($Class* clazz) {
	return $of($alloc(DoublePipeline$Head));
}

void DoublePipeline$Head::init$($Supplier* source, int32_t sourceFlags, bool parallel) {
	$DoublePipeline::init$(source, sourceFlags, parallel);
}

void DoublePipeline$Head::init$($Spliterator* source, int32_t sourceFlags, bool parallel) {
	$DoublePipeline::init$(source, sourceFlags, parallel);
}

bool DoublePipeline$Head::opIsStateful() {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

$Sink* DoublePipeline$Head::opWrapSink(int32_t flags, $Sink* sink) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

void DoublePipeline$Head::forEach($DoubleConsumer* consumer) {
	$useLocalCurrentObjectStackCache();
	if (!isParallel()) {
		$nc($($DoublePipeline::adapt($(sourceStageSpliterator()))))->forEachRemaining(consumer);
	} else {
		$DoublePipeline::forEach(consumer);
	}
}

void DoublePipeline$Head::forEachOrdered($DoubleConsumer* consumer) {
	$useLocalCurrentObjectStackCache();
	if (!isParallel()) {
		$nc($($DoublePipeline::adapt($(sourceStageSpliterator()))))->forEachRemaining(consumer);
	} else {
		$DoublePipeline::forEachOrdered(consumer);
	}
}

$BaseStream* DoublePipeline$Head::parallel() {
	return $cast($DoubleStream, $DoublePipeline::parallel());
}

$BaseStream* DoublePipeline$Head::sequential() {
	return $cast($DoubleStream, $DoublePipeline::sequential());
}

$BaseStream* DoublePipeline$Head::unordered() {
	return $DoublePipeline::unordered();
}

$Spliterator* DoublePipeline$Head::spliterator() {
	return $DoublePipeline::spliterator();
}

$Iterator* DoublePipeline$Head::iterator() {
	return $DoublePipeline::iterator();
}

$Spliterator* DoublePipeline$Head::lazySpliterator($Supplier* supplier) {
	return $DoublePipeline::lazySpliterator(supplier);
}

DoublePipeline$Head::DoublePipeline$Head() {
}

$Class* DoublePipeline$Head::load$($String* name, bool initialize) {
	$loadClass(DoublePipeline$Head, name, initialize, &_DoublePipeline$Head_ClassInfo_, allocate$DoublePipeline$Head);
	return class$;
}

$Class* DoublePipeline$Head::class$ = nullptr;

		} // stream
	} // util
} // java