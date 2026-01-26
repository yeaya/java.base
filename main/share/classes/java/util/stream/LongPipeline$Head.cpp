#include <java/util/stream/LongPipeline$Head.h>

#include <java/lang/UnsupportedOperationException.h>
#include <java/util/Iterator.h>
#include <java/util/PrimitiveIterator$OfLong.h>
#include <java/util/Spliterator$OfLong.h>
#include <java/util/Spliterator.h>
#include <java/util/function/LongConsumer.h>
#include <java/util/function/Supplier.h>
#include <java/util/stream/AbstractPipeline.h>
#include <java/util/stream/BaseStream.h>
#include <java/util/stream/LongPipeline.h>
#include <java/util/stream/LongStream.h>
#include <java/util/stream/Sink.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Iterator = ::java::util::Iterator;
using $Spliterator = ::java::util::Spliterator;
using $Spliterator$OfLong = ::java::util::Spliterator$OfLong;
using $LongConsumer = ::java::util::function::LongConsumer;
using $Supplier = ::java::util::function::Supplier;
using $BaseStream = ::java::util::stream::BaseStream;
using $LongPipeline = ::java::util::stream::LongPipeline;
using $LongStream = ::java::util::stream::LongStream;
using $Sink = ::java::util::stream::Sink;

namespace java {
	namespace util {
		namespace stream {

$MethodInfo _LongPipeline$Head_MethodInfo_[] = {
	{"<init>", "(Ljava/util/function/Supplier;IZ)V", "(Ljava/util/function/Supplier<+Ljava/util/Spliterator<Ljava/lang/Long;>;>;IZ)V", 0, $method(LongPipeline$Head, init$, void, $Supplier*, int32_t, bool)},
	{"<init>", "(Ljava/util/Spliterator;IZ)V", "(Ljava/util/Spliterator<Ljava/lang/Long;>;IZ)V", 0, $method(LongPipeline$Head, init$, void, $Spliterator*, int32_t, bool)},
	{"forEach", "(Ljava/util/function/LongConsumer;)V", nullptr, $PUBLIC, $virtualMethod(LongPipeline$Head, forEach, void, $LongConsumer*)},
	{"forEachOrdered", "(Ljava/util/function/LongConsumer;)V", nullptr, $PUBLIC, $virtualMethod(LongPipeline$Head, forEachOrdered, void, $LongConsumer*)},
	{"iterator", "()Ljava/util/Iterator;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(LongPipeline$Head, iterator, $Iterator*)},
	{"lazySpliterator", "(Ljava/util/function/Supplier;)Ljava/util/Spliterator;", nullptr, $VOLATILE | $SYNTHETIC, $virtualMethod(LongPipeline$Head, lazySpliterator, $Spliterator*, $Supplier*)},
	{"opIsStateful", "()Z", nullptr, $FINAL, $virtualMethod(LongPipeline$Head, opIsStateful, bool)},
	{"opWrapSink", "(ILjava/util/stream/Sink;)Ljava/util/stream/Sink;", "(ILjava/util/stream/Sink<Ljava/lang/Long;>;)Ljava/util/stream/Sink<TE_IN;>;", $FINAL, $virtualMethod(LongPipeline$Head, opWrapSink, $Sink*, int32_t, $Sink*)},
	{"parallel", "()Ljava/util/stream/LongStream;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(LongPipeline$Head, parallel, $BaseStream*)},
	{"sequential", "()Ljava/util/stream/LongStream;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(LongPipeline$Head, sequential, $BaseStream*)},
	{"spliterator", "()Ljava/util/Spliterator;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(LongPipeline$Head, spliterator, $Spliterator*)},
	{"unordered", "()Ljava/util/stream/BaseStream;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(LongPipeline$Head, unordered, $BaseStream*)},
	{}
};

$InnerClassInfo _LongPipeline$Head_InnerClassesInfo_[] = {
	{"java.util.stream.LongPipeline$Head", "java.util.stream.LongPipeline", "Head", $STATIC},
	{}
};

$ClassInfo _LongPipeline$Head_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.stream.LongPipeline$Head",
	"java.util.stream.LongPipeline",
	nullptr,
	nullptr,
	_LongPipeline$Head_MethodInfo_,
	"<E_IN:Ljava/lang/Object;>Ljava/util/stream/LongPipeline<TE_IN;>;",
	nullptr,
	_LongPipeline$Head_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.LongPipeline"
};

$Object* allocate$LongPipeline$Head($Class* clazz) {
	return $of($alloc(LongPipeline$Head));
}

void LongPipeline$Head::init$($Supplier* source, int32_t sourceFlags, bool parallel) {
	$LongPipeline::init$(source, sourceFlags, parallel);
}

void LongPipeline$Head::init$($Spliterator* source, int32_t sourceFlags, bool parallel) {
	$LongPipeline::init$(source, sourceFlags, parallel);
}

bool LongPipeline$Head::opIsStateful() {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

$Sink* LongPipeline$Head::opWrapSink(int32_t flags, $Sink* sink) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

void LongPipeline$Head::forEach($LongConsumer* action) {
	$useLocalCurrentObjectStackCache();
	if (!isParallel()) {
		$nc($($LongPipeline::adapt($(sourceStageSpliterator()))))->forEachRemaining(action);
	} else {
		$LongPipeline::forEach(action);
	}
}

void LongPipeline$Head::forEachOrdered($LongConsumer* action) {
	$useLocalCurrentObjectStackCache();
	if (!isParallel()) {
		$nc($($LongPipeline::adapt($(sourceStageSpliterator()))))->forEachRemaining(action);
	} else {
		$LongPipeline::forEachOrdered(action);
	}
}

$BaseStream* LongPipeline$Head::parallel() {
	return $cast($LongStream, $LongPipeline::parallel());
}

$BaseStream* LongPipeline$Head::sequential() {
	return $cast($LongStream, $LongPipeline::sequential());
}

$BaseStream* LongPipeline$Head::unordered() {
	return $LongPipeline::unordered();
}

$Spliterator* LongPipeline$Head::spliterator() {
	return $LongPipeline::spliterator();
}

$Iterator* LongPipeline$Head::iterator() {
	return $LongPipeline::iterator();
}

$Spliterator* LongPipeline$Head::lazySpliterator($Supplier* supplier) {
	return $LongPipeline::lazySpliterator(supplier);
}

LongPipeline$Head::LongPipeline$Head() {
}

$Class* LongPipeline$Head::load$($String* name, bool initialize) {
	$loadClass(LongPipeline$Head, name, initialize, &_LongPipeline$Head_ClassInfo_, allocate$LongPipeline$Head);
	return class$;
}

$Class* LongPipeline$Head::class$ = nullptr;

		} // stream
	} // util
} // java