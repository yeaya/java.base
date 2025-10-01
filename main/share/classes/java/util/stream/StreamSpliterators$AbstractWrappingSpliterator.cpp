#include <java/util/stream/StreamSpliterators$AbstractWrappingSpliterator.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Comparator.h>
#include <java/util/Spliterator.h>
#include <java/util/function/BooleanSupplier.h>
#include <java/util/function/Supplier.h>
#include <java/util/stream/AbstractSpinedBuffer.h>
#include <java/util/stream/PipelineHelper.h>
#include <java/util/stream/Sink.h>
#include <java/util/stream/StreamOpFlag.h>
#include <java/util/stream/StreamSpliterators.h>
#include <jcpp.h>

#undef SUBSIZED
#undef SIZED
#undef SORTED

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Comparator = ::java::util::Comparator;
using $Spliterator = ::java::util::Spliterator;
using $BooleanSupplier = ::java::util::function::BooleanSupplier;
using $Supplier = ::java::util::function::Supplier;
using $AbstractSpinedBuffer = ::java::util::stream::AbstractSpinedBuffer;
using $PipelineHelper = ::java::util::stream::PipelineHelper;
using $Sink = ::java::util::stream::Sink;
using $StreamOpFlag = ::java::util::stream::StreamOpFlag;
using $StreamSpliterators = ::java::util::stream::StreamSpliterators;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _StreamSpliterators$AbstractWrappingSpliterator_FieldInfo_[] = {
	{"isParallel", "Z", nullptr, $FINAL, $field(StreamSpliterators$AbstractWrappingSpliterator, isParallel)},
	{"ph", "Ljava/util/stream/PipelineHelper;", "Ljava/util/stream/PipelineHelper<TP_OUT;>;", $FINAL, $field(StreamSpliterators$AbstractWrappingSpliterator, ph)},
	{"spliteratorSupplier", "Ljava/util/function/Supplier;", "Ljava/util/function/Supplier<Ljava/util/Spliterator<TP_IN;>;>;", $PRIVATE, $field(StreamSpliterators$AbstractWrappingSpliterator, spliteratorSupplier)},
	{"spliterator", "Ljava/util/Spliterator;", "Ljava/util/Spliterator<TP_IN;>;", 0, $field(StreamSpliterators$AbstractWrappingSpliterator, spliterator)},
	{"bufferSink", "Ljava/util/stream/Sink;", "Ljava/util/stream/Sink<TP_IN;>;", 0, $field(StreamSpliterators$AbstractWrappingSpliterator, bufferSink)},
	{"pusher", "Ljava/util/function/BooleanSupplier;", nullptr, 0, $field(StreamSpliterators$AbstractWrappingSpliterator, pusher)},
	{"nextToConsume", "J", nullptr, 0, $field(StreamSpliterators$AbstractWrappingSpliterator, nextToConsume)},
	{"buffer", "Ljava/util/stream/AbstractSpinedBuffer;", "TT_BUFFER;", 0, $field(StreamSpliterators$AbstractWrappingSpliterator, buffer)},
	{"finished", "Z", nullptr, 0, $field(StreamSpliterators$AbstractWrappingSpliterator, finished)},
	{}
};

$MethodInfo _StreamSpliterators$AbstractWrappingSpliterator_MethodInfo_[] = {
	{"<init>", "(Ljava/util/stream/PipelineHelper;Ljava/util/function/Supplier;Z)V", "(Ljava/util/stream/PipelineHelper<TP_OUT;>;Ljava/util/function/Supplier<Ljava/util/Spliterator<TP_IN;>;>;Z)V", 0, $method(static_cast<void(StreamSpliterators$AbstractWrappingSpliterator::*)($PipelineHelper*,$Supplier*,bool)>(&StreamSpliterators$AbstractWrappingSpliterator::init$))},
	{"<init>", "(Ljava/util/stream/PipelineHelper;Ljava/util/Spliterator;Z)V", "(Ljava/util/stream/PipelineHelper<TP_OUT;>;Ljava/util/Spliterator<TP_IN;>;Z)V", 0, $method(static_cast<void(StreamSpliterators$AbstractWrappingSpliterator::*)($PipelineHelper*,$Spliterator*,bool)>(&StreamSpliterators$AbstractWrappingSpliterator::init$))},
	{"characteristics", "()I", nullptr, $PUBLIC | $FINAL},
	{"doAdvance", "()Z", nullptr, $FINAL, $method(static_cast<bool(StreamSpliterators$AbstractWrappingSpliterator::*)()>(&StreamSpliterators$AbstractWrappingSpliterator::doAdvance))},
	{"estimateSize", "()J", nullptr, $PUBLIC | $FINAL},
	{"fillBuffer", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(StreamSpliterators$AbstractWrappingSpliterator::*)()>(&StreamSpliterators$AbstractWrappingSpliterator::fillBuffer))},
	{"getComparator", "()Ljava/util/Comparator;", "()Ljava/util/Comparator<-TP_OUT;>;", $PUBLIC},
	{"getExactSizeIfKnown", "()J", nullptr, $PUBLIC | $FINAL},
	{"init", "()V", nullptr, $FINAL, $method(static_cast<void(StreamSpliterators$AbstractWrappingSpliterator::*)()>(&StreamSpliterators$AbstractWrappingSpliterator::init))},
	{"initPartialTraversalState", "()V", nullptr, $ABSTRACT},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{"trySplit", "()Ljava/util/Spliterator;", "()Ljava/util/Spliterator<TP_OUT;>;", $PUBLIC},
	{"wrap", "(Ljava/util/Spliterator;)Ljava/util/stream/StreamSpliterators$AbstractWrappingSpliterator;", "(Ljava/util/Spliterator<TP_IN;>;)Ljava/util/stream/StreamSpliterators$AbstractWrappingSpliterator<TP_IN;TP_OUT;*>;", $ABSTRACT},
	{}
};

$InnerClassInfo _StreamSpliterators$AbstractWrappingSpliterator_InnerClassesInfo_[] = {
	{"java.util.stream.StreamSpliterators$AbstractWrappingSpliterator", "java.util.stream.StreamSpliterators", "AbstractWrappingSpliterator", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _StreamSpliterators$AbstractWrappingSpliterator_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"java.util.stream.StreamSpliterators$AbstractWrappingSpliterator",
	"java.lang.Object",
	"java.util.Spliterator",
	_StreamSpliterators$AbstractWrappingSpliterator_FieldInfo_,
	_StreamSpliterators$AbstractWrappingSpliterator_MethodInfo_,
	"<P_IN:Ljava/lang/Object;P_OUT:Ljava/lang/Object;T_BUFFER:Ljava/util/stream/AbstractSpinedBuffer;>Ljava/lang/Object;Ljava/util/Spliterator<TP_OUT;>;",
	nullptr,
	_StreamSpliterators$AbstractWrappingSpliterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.StreamSpliterators"
};

$Object* allocate$StreamSpliterators$AbstractWrappingSpliterator($Class* clazz) {
	return $of($alloc(StreamSpliterators$AbstractWrappingSpliterator));
}

void StreamSpliterators$AbstractWrappingSpliterator::init$($PipelineHelper* ph, $Supplier* spliteratorSupplier, bool parallel) {
	$set(this, ph, ph);
	$set(this, spliteratorSupplier, spliteratorSupplier);
	$set(this, spliterator, nullptr);
	this->isParallel = parallel;
}

void StreamSpliterators$AbstractWrappingSpliterator::init$($PipelineHelper* ph, $Spliterator* spliterator, bool parallel) {
	$set(this, ph, ph);
	$set(this, spliteratorSupplier, nullptr);
	$set(this, spliterator, spliterator);
	this->isParallel = parallel;
}

void StreamSpliterators$AbstractWrappingSpliterator::init() {
	if (this->spliterator == nullptr) {
		$set(this, spliterator, $cast($Spliterator, $nc(this->spliteratorSupplier)->get()));
		$set(this, spliteratorSupplier, nullptr);
	}
}

bool StreamSpliterators$AbstractWrappingSpliterator::doAdvance() {
	if (this->buffer == nullptr) {
		if (this->finished) {
			return false;
		}
		init();
		initPartialTraversalState();
		this->nextToConsume = 0;
		$nc(this->bufferSink)->begin($nc(this->spliterator)->getExactSizeIfKnown());
		return fillBuffer();
	} else {
		++this->nextToConsume;
		bool hasNext = this->nextToConsume < $nc(this->buffer)->count();
		if (!hasNext) {
			this->nextToConsume = 0;
			$nc(this->buffer)->clear();
			hasNext = fillBuffer();
		}
		return hasNext;
	}
}

$Spliterator* StreamSpliterators$AbstractWrappingSpliterator::trySplit() {
	if (this->isParallel && this->buffer == nullptr && !this->finished) {
		init();
		$var($Spliterator, split, $nc(this->spliterator)->trySplit());
		return (split == nullptr) ? ($Spliterator*)nullptr : static_cast<$Spliterator*>(wrap(split));
	} else {
		return nullptr;
	}
}

bool StreamSpliterators$AbstractWrappingSpliterator::fillBuffer() {
	while ($nc(this->buffer)->count() == 0) {
		bool var$0 = $nc(this->bufferSink)->cancellationRequested();
		if (var$0 || !$nc(this->pusher)->getAsBoolean()) {
			if (this->finished) {
				return false;
			} else {
				$nc(this->bufferSink)->end();
				this->finished = true;
			}
		}
	}
	return true;
}

int64_t StreamSpliterators$AbstractWrappingSpliterator::estimateSize() {
	int64_t exactSizeIfKnown = getExactSizeIfKnown();
	return exactSizeIfKnown == -1 ? $nc(this->spliterator)->estimateSize() : exactSizeIfKnown;
}

int64_t StreamSpliterators$AbstractWrappingSpliterator::getExactSizeIfKnown() {
	init();
	return $nc(this->ph)->exactOutputSizeIfKnown(this->spliterator);
}

int32_t StreamSpliterators$AbstractWrappingSpliterator::characteristics() {
	init();
	int32_t c = $StreamOpFlag::toCharacteristics($StreamOpFlag::toStreamFlags($nc(this->ph)->getStreamAndOpFlags()));
	if (((int32_t)(c & (uint32_t)$Spliterator::SIZED)) != 0) {
		c &= (uint32_t)~($Spliterator::SIZED | $Spliterator::SUBSIZED);
		c |= ((int32_t)($nc(this->spliterator)->characteristics() & (uint32_t)($Spliterator::SIZED | $Spliterator::SUBSIZED)));
	}
	return c;
}

$Comparator* StreamSpliterators$AbstractWrappingSpliterator::getComparator() {
	if (!hasCharacteristics($Spliterator::SORTED)) {
		$throwNew($IllegalStateException);
	}
	return nullptr;
}

$String* StreamSpliterators$AbstractWrappingSpliterator::toString() {
	return $String::format("%s[%s]"_s, $$new($ObjectArray, {
		$($of($of(this)->getClass()->getName())),
		$of(this->spliterator)
	}));
}

StreamSpliterators$AbstractWrappingSpliterator::StreamSpliterators$AbstractWrappingSpliterator() {
}

$Class* StreamSpliterators$AbstractWrappingSpliterator::load$($String* name, bool initialize) {
	$loadClass(StreamSpliterators$AbstractWrappingSpliterator, name, initialize, &_StreamSpliterators$AbstractWrappingSpliterator_ClassInfo_, allocate$StreamSpliterators$AbstractWrappingSpliterator);
	return class$;
}

$Class* StreamSpliterators$AbstractWrappingSpliterator::class$ = nullptr;

		} // stream
	} // util
} // java