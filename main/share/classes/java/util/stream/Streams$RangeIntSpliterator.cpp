#include <java/util/stream/Streams$RangeIntSpliterator.h>

#include <java/util/Comparator.h>
#include <java/util/Objects.h>
#include <java/util/Spliterator$OfInt.h>
#include <java/util/Spliterator.h>
#include <java/util/function/IntConsumer.h>
#include <java/util/stream/Streams.h>
#include <jcpp.h>

#undef BALANCED_SPLIT_THRESHOLD
#undef DISTINCT
#undef IMMUTABLE
#undef NONNULL
#undef ORDERED
#undef RIGHT_BALANCED_SPLIT_RATIO
#undef SIZED
#undef SORTED
#undef SUBSIZED

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Comparator = ::java::util::Comparator;
using $Objects = ::java::util::Objects;
using $Spliterator = ::java::util::Spliterator;
using $Spliterator$OfInt = ::java::util::Spliterator$OfInt;
using $IntConsumer = ::java::util::function::IntConsumer;
using $Streams = ::java::util::stream::Streams;

namespace java {
	namespace util {
		namespace stream {

$CompoundAttribute _Streams$RangeIntSpliterator_MethodAnnotations_forEachRemaining4[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Streams$RangeIntSpliterator_MethodAnnotations_forEachRemaining5[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$FieldInfo _Streams$RangeIntSpliterator_FieldInfo_[] = {
	{"from", "I", nullptr, $PRIVATE, $field(Streams$RangeIntSpliterator, from)},
	{"upTo", "I", nullptr, $PRIVATE | $FINAL, $field(Streams$RangeIntSpliterator, upTo)},
	{"last", "I", nullptr, $PRIVATE, $field(Streams$RangeIntSpliterator, last)},
	{"BALANCED_SPLIT_THRESHOLD", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Streams$RangeIntSpliterator, BALANCED_SPLIT_THRESHOLD)},
	{"RIGHT_BALANCED_SPLIT_RATIO", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Streams$RangeIntSpliterator, RIGHT_BALANCED_SPLIT_RATIO)},
	{}
};

$MethodInfo _Streams$RangeIntSpliterator_MethodInfo_[] = {
	{"<init>", "(IIZ)V", nullptr, 0, $method(static_cast<void(Streams$RangeIntSpliterator::*)(int32_t,int32_t,bool)>(&Streams$RangeIntSpliterator::init$))},
	{"<init>", "(III)V", nullptr, $PRIVATE, $method(static_cast<void(Streams$RangeIntSpliterator::*)(int32_t,int32_t,int32_t)>(&Streams$RangeIntSpliterator::init$))},
	{"characteristics", "()I", nullptr, $PUBLIC},
	{"estimateSize", "()J", nullptr, $PUBLIC},
	{"forEachRemaining", "(Ljava/util/function/IntConsumer;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _Streams$RangeIntSpliterator_MethodAnnotations_forEachRemaining4},
	{"forEachRemaining", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, nullptr, nullptr, nullptr, _Streams$RangeIntSpliterator_MethodAnnotations_forEachRemaining5},
	{"getComparator", "()Ljava/util/Comparator;", "()Ljava/util/Comparator<-Ljava/lang/Integer;>;", $PUBLIC},
	{"splitPoint", "(J)I", nullptr, $PRIVATE, $method(static_cast<int32_t(Streams$RangeIntSpliterator::*)(int64_t)>(&Streams$RangeIntSpliterator::splitPoint))},
	{"tryAdvance", "(Ljava/util/function/IntConsumer;)Z", nullptr, $PUBLIC},
	{"tryAdvance", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"trySplit", "()Ljava/util/Spliterator$OfInt;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Streams$RangeIntSpliterator_InnerClassesInfo_[] = {
	{"java.util.stream.Streams$RangeIntSpliterator", "java.util.stream.Streams", "RangeIntSpliterator", $STATIC | $FINAL},
	{"java.util.Spliterator$OfInt", "java.util.Spliterator", "OfInt", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Streams$RangeIntSpliterator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.stream.Streams$RangeIntSpliterator",
	"java.lang.Object",
	"java.util.Spliterator$OfInt",
	_Streams$RangeIntSpliterator_FieldInfo_,
	_Streams$RangeIntSpliterator_MethodInfo_,
	nullptr,
	nullptr,
	_Streams$RangeIntSpliterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.Streams"
};

$Object* allocate$Streams$RangeIntSpliterator($Class* clazz) {
	return $of($alloc(Streams$RangeIntSpliterator));
}

void Streams$RangeIntSpliterator::init$(int32_t from, int32_t upTo, bool closed) {
	Streams$RangeIntSpliterator::init$(from, upTo, closed ? 1 : 0);
}

void Streams$RangeIntSpliterator::init$(int32_t from, int32_t upTo, int32_t last) {
	this->from = from;
	this->upTo = upTo;
	this->last = last;
}

bool Streams$RangeIntSpliterator::tryAdvance($IntConsumer* consumer) {
	$Objects::requireNonNull(consumer);
	int32_t i = this->from;
	if (i < this->upTo) {
		++this->from;
		consumer->accept(i);
		return true;
	} else if (this->last > 0) {
		this->last = 0;
		consumer->accept(i);
		return true;
	}
	return false;
}

void Streams$RangeIntSpliterator::forEachRemaining($IntConsumer* consumer) {
	$Objects::requireNonNull(consumer);
	int32_t i = this->from;
	int32_t hUpTo = this->upTo;
	int32_t hLast = this->last;
	this->from = this->upTo;
	this->last = 0;
	while (i < hUpTo) {
		consumer->accept(i++);
	}
	if (hLast > 0) {
		consumer->accept(i);
	}
}

int64_t Streams$RangeIntSpliterator::estimateSize() {
	return ((int64_t)this->upTo) - this->from + this->last;
}

int32_t Streams$RangeIntSpliterator::characteristics() {
	return ((((($Spliterator::ORDERED | $Spliterator::SIZED) | $Spliterator::SUBSIZED) | $Spliterator::IMMUTABLE) | $Spliterator::NONNULL) | $Spliterator::DISTINCT) | $Spliterator::SORTED;
}

$Comparator* Streams$RangeIntSpliterator::getComparator() {
	return nullptr;
}

$Spliterator$OfInt* Streams$RangeIntSpliterator::trySplit() {
	int64_t size = estimateSize();
	$var($Spliterator$OfInt, var$0, nullptr);
	if (size <= 1) {
		$assign(var$0, nullptr);
	} else {
		int32_t var$1 = this->from;
		$assign(var$0, $new(Streams$RangeIntSpliterator, var$1, this->from = this->from + splitPoint(size), 0));
	}
	return var$0;
}

int32_t Streams$RangeIntSpliterator::splitPoint(int64_t size) {
	int32_t d = (size < Streams$RangeIntSpliterator::BALANCED_SPLIT_THRESHOLD) ? 2 : Streams$RangeIntSpliterator::RIGHT_BALANCED_SPLIT_RATIO;
	return (int32_t)($div(size, d));
}

void Streams$RangeIntSpliterator::forEachRemaining(Object$* consumer) {
	this->forEachRemaining($cast($IntConsumer, consumer));
}

bool Streams$RangeIntSpliterator::tryAdvance(Object$* consumer) {
	return this->tryAdvance($cast($IntConsumer, consumer));
}

Streams$RangeIntSpliterator::Streams$RangeIntSpliterator() {
}

$Class* Streams$RangeIntSpliterator::load$($String* name, bool initialize) {
	$loadClass(Streams$RangeIntSpliterator, name, initialize, &_Streams$RangeIntSpliterator_ClassInfo_, allocate$Streams$RangeIntSpliterator);
	return class$;
}

$Class* Streams$RangeIntSpliterator::class$ = nullptr;

		} // stream
	} // util
} // java