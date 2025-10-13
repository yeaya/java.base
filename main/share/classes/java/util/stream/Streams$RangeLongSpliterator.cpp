#include <java/util/stream/Streams$RangeLongSpliterator.h>

#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Comparator.h>
#include <java/util/Objects.h>
#include <java/util/Spliterator$OfLong.h>
#include <java/util/Spliterator.h>
#include <java/util/function/LongConsumer.h>
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

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Comparator = ::java::util::Comparator;
using $Objects = ::java::util::Objects;
using $Spliterator = ::java::util::Spliterator;
using $Spliterator$OfLong = ::java::util::Spliterator$OfLong;
using $LongConsumer = ::java::util::function::LongConsumer;
using $Streams = ::java::util::stream::Streams;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _Streams$RangeLongSpliterator_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Streams$RangeLongSpliterator, $assertionsDisabled)},
	{"from", "J", nullptr, $PRIVATE, $field(Streams$RangeLongSpliterator, from)},
	{"upTo", "J", nullptr, $PRIVATE | $FINAL, $field(Streams$RangeLongSpliterator, upTo)},
	{"last", "I", nullptr, $PRIVATE, $field(Streams$RangeLongSpliterator, last)},
	{"BALANCED_SPLIT_THRESHOLD", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Streams$RangeLongSpliterator, BALANCED_SPLIT_THRESHOLD)},
	{"RIGHT_BALANCED_SPLIT_RATIO", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Streams$RangeLongSpliterator, RIGHT_BALANCED_SPLIT_RATIO)},
	{}
};

$MethodInfo _Streams$RangeLongSpliterator_MethodInfo_[] = {
	{"<init>", "(JJZ)V", nullptr, 0, $method(static_cast<void(Streams$RangeLongSpliterator::*)(int64_t,int64_t,bool)>(&Streams$RangeLongSpliterator::init$))},
	{"<init>", "(JJI)V", nullptr, $PRIVATE, $method(static_cast<void(Streams$RangeLongSpliterator::*)(int64_t,int64_t,int32_t)>(&Streams$RangeLongSpliterator::init$))},
	{"characteristics", "()I", nullptr, $PUBLIC},
	{"estimateSize", "()J", nullptr, $PUBLIC},
	{"forEachRemaining", "(Ljava/util/function/LongConsumer;)V", nullptr, $PUBLIC},
	{"forEachRemaining", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getComparator", "()Ljava/util/Comparator;", "()Ljava/util/Comparator<-Ljava/lang/Long;>;", $PUBLIC},
	{"splitPoint", "(J)J", nullptr, $PRIVATE, $method(static_cast<int64_t(Streams$RangeLongSpliterator::*)(int64_t)>(&Streams$RangeLongSpliterator::splitPoint))},
	{"tryAdvance", "(Ljava/util/function/LongConsumer;)Z", nullptr, $PUBLIC},
	{"tryAdvance", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"trySplit", "()Ljava/util/Spliterator$OfLong;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Streams$RangeLongSpliterator_InnerClassesInfo_[] = {
	{"java.util.stream.Streams$RangeLongSpliterator", "java.util.stream.Streams", "RangeLongSpliterator", $STATIC | $FINAL},
	{"java.util.Spliterator$OfLong", "java.util.Spliterator", "OfLong", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Streams$RangeLongSpliterator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.stream.Streams$RangeLongSpliterator",
	"java.lang.Object",
	"java.util.Spliterator$OfLong",
	_Streams$RangeLongSpliterator_FieldInfo_,
	_Streams$RangeLongSpliterator_MethodInfo_,
	nullptr,
	nullptr,
	_Streams$RangeLongSpliterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.Streams"
};

$Object* allocate$Streams$RangeLongSpliterator($Class* clazz) {
	return $of($alloc(Streams$RangeLongSpliterator));
}

bool Streams$RangeLongSpliterator::$assertionsDisabled = false;

void Streams$RangeLongSpliterator::init$(int64_t from, int64_t upTo, bool closed) {
	Streams$RangeLongSpliterator::init$(from, upTo, closed ? 1 : 0);
}

void Streams$RangeLongSpliterator::init$(int64_t from, int64_t upTo, int32_t last) {
	if (!Streams$RangeLongSpliterator::$assertionsDisabled && !(upTo - from + last > 0)) {
		$throwNew($AssertionError);
	}
	this->from = from;
	this->upTo = upTo;
	this->last = last;
}

bool Streams$RangeLongSpliterator::tryAdvance($LongConsumer* consumer) {
	$Objects::requireNonNull(consumer);
	int64_t i = this->from;
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

void Streams$RangeLongSpliterator::forEachRemaining($LongConsumer* consumer) {
	$Objects::requireNonNull(consumer);
	int64_t i = this->from;
	int64_t hUpTo = this->upTo;
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

int64_t Streams$RangeLongSpliterator::estimateSize() {
	return this->upTo - this->from + this->last;
}

int32_t Streams$RangeLongSpliterator::characteristics() {
	return ((((($Spliterator::ORDERED | $Spliterator::SIZED) | $Spliterator::SUBSIZED) | $Spliterator::IMMUTABLE) | $Spliterator::NONNULL) | $Spliterator::DISTINCT) | $Spliterator::SORTED;
}

$Comparator* Streams$RangeLongSpliterator::getComparator() {
	return nullptr;
}

$Spliterator$OfLong* Streams$RangeLongSpliterator::trySplit() {
	int64_t size = estimateSize();
	$var($Spliterator$OfLong, var$0, nullptr);
	if (size <= 1) {
		$assign(var$0, nullptr);
	} else {
		int64_t var$1 = this->from;
		$assign(var$0, $new(Streams$RangeLongSpliterator, var$1, this->from = this->from + splitPoint(size), 0));
	}
	return var$0;
}

int64_t Streams$RangeLongSpliterator::splitPoint(int64_t size) {
	int64_t d = (size < Streams$RangeLongSpliterator::BALANCED_SPLIT_THRESHOLD) ? (int64_t)2 : Streams$RangeLongSpliterator::RIGHT_BALANCED_SPLIT_RATIO;
	return $div(size, d);
}

void Streams$RangeLongSpliterator::forEachRemaining(Object$* consumer) {
	this->forEachRemaining($cast($LongConsumer, consumer));
}

bool Streams$RangeLongSpliterator::tryAdvance(Object$* consumer) {
	return this->tryAdvance($cast($LongConsumer, consumer));
}

void clinit$Streams$RangeLongSpliterator($Class* class$) {
	$load($Streams);
	Streams$RangeLongSpliterator::$assertionsDisabled = !$Streams::class$->desiredAssertionStatus();
}

Streams$RangeLongSpliterator::Streams$RangeLongSpliterator() {
}

$Class* Streams$RangeLongSpliterator::load$($String* name, bool initialize) {
	$loadClass(Streams$RangeLongSpliterator, name, initialize, &_Streams$RangeLongSpliterator_ClassInfo_, clinit$Streams$RangeLongSpliterator, allocate$Streams$RangeLongSpliterator);
	return class$;
}

$Class* Streams$RangeLongSpliterator::class$ = nullptr;

		} // stream
	} // util
} // java