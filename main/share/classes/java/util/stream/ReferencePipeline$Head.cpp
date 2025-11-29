#include <java/util/stream/ReferencePipeline$Head.h>

#include <java/lang/UnsupportedOperationException.h>
#include <java/util/Spliterator.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/Supplier.h>
#include <java/util/stream/AbstractPipeline.h>
#include <java/util/stream/BaseStream.h>
#include <java/util/stream/ReferencePipeline.h>
#include <java/util/stream/Sink.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Spliterator = ::java::util::Spliterator;
using $Consumer = ::java::util::function::Consumer;
using $Supplier = ::java::util::function::Supplier;
using $BaseStream = ::java::util::stream::BaseStream;
using $ReferencePipeline = ::java::util::stream::ReferencePipeline;
using $Sink = ::java::util::stream::Sink;

namespace java {
	namespace util {
		namespace stream {

$MethodInfo _ReferencePipeline$Head_MethodInfo_[] = {
	{"<init>", "(Ljava/util/function/Supplier;IZ)V", "(Ljava/util/function/Supplier<+Ljava/util/Spliterator<*>;>;IZ)V", 0, $method(static_cast<void(ReferencePipeline$Head::*)($Supplier*,int32_t,bool)>(&ReferencePipeline$Head::init$))},
	{"<init>", "(Ljava/util/Spliterator;IZ)V", "(Ljava/util/Spliterator<*>;IZ)V", 0, $method(static_cast<void(ReferencePipeline$Head::*)($Spliterator*,int32_t,bool)>(&ReferencePipeline$Head::init$))},
	{"forEach", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-TE_OUT;>;)V", $PUBLIC},
	{"forEachOrdered", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-TE_OUT;>;)V", $PUBLIC},
	{"opIsStateful", "()Z", nullptr, $FINAL},
	{"opWrapSink", "(ILjava/util/stream/Sink;)Ljava/util/stream/Sink;", "(ILjava/util/stream/Sink<TE_OUT;>;)Ljava/util/stream/Sink<TE_IN;>;", $FINAL},
	{"unordered", "()Ljava/util/stream/BaseStream;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _ReferencePipeline$Head_InnerClassesInfo_[] = {
	{"java.util.stream.ReferencePipeline$Head", "java.util.stream.ReferencePipeline", "Head", $STATIC},
	{}
};

$ClassInfo _ReferencePipeline$Head_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.stream.ReferencePipeline$Head",
	"java.util.stream.ReferencePipeline",
	nullptr,
	nullptr,
	_ReferencePipeline$Head_MethodInfo_,
	"<E_IN:Ljava/lang/Object;E_OUT:Ljava/lang/Object;>Ljava/util/stream/ReferencePipeline<TE_IN;TE_OUT;>;",
	nullptr,
	_ReferencePipeline$Head_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.ReferencePipeline"
};

$Object* allocate$ReferencePipeline$Head($Class* clazz) {
	return $of($alloc(ReferencePipeline$Head));
}

void ReferencePipeline$Head::init$($Supplier* source, int32_t sourceFlags, bool parallel) {
	$ReferencePipeline::init$(source, sourceFlags, parallel);
}

void ReferencePipeline$Head::init$($Spliterator* source, int32_t sourceFlags, bool parallel) {
	$ReferencePipeline::init$(source, sourceFlags, parallel);
}

bool ReferencePipeline$Head::opIsStateful() {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

$Sink* ReferencePipeline$Head::opWrapSink(int32_t flags, $Sink* sink) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

void ReferencePipeline$Head::forEach($Consumer* action) {
	if (!isParallel()) {
		$nc($(sourceStageSpliterator()))->forEachRemaining(action);
	} else {
		$ReferencePipeline::forEach(action);
	}
}

void ReferencePipeline$Head::forEachOrdered($Consumer* action) {
	if (!isParallel()) {
		$nc($(sourceStageSpliterator()))->forEachRemaining(action);
	} else {
		$ReferencePipeline::forEachOrdered(action);
	}
}

$BaseStream* ReferencePipeline$Head::unordered() {
	return $ReferencePipeline::unordered();
}

ReferencePipeline$Head::ReferencePipeline$Head() {
}

$Class* ReferencePipeline$Head::load$($String* name, bool initialize) {
	$loadClass(ReferencePipeline$Head, name, initialize, &_ReferencePipeline$Head_ClassInfo_, allocate$ReferencePipeline$Head);
	return class$;
}

$Class* ReferencePipeline$Head::class$ = nullptr;

		} // stream
	} // util
} // java