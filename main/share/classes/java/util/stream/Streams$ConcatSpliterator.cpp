#include <java/util/stream/Streams$ConcatSpliterator.h>

#include <java/lang/IllegalStateException.h>
#include <java/util/Comparator.h>
#include <java/util/Spliterator.h>
#include <java/util/function/Consumer.h>
#include <java/util/stream/Streams.h>
#include <jcpp.h>

#undef DISTINCT
#undef MAX_VALUE
#undef SIZED
#undef SORTED
#undef SUBSIZED

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Comparator = ::java::util::Comparator;
using $Spliterator = ::java::util::Spliterator;
using $Consumer = ::java::util::function::Consumer;
using $Streams = ::java::util::stream::Streams;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _Streams$ConcatSpliterator_FieldInfo_[] = {
	{"aSpliterator", "Ljava/util/Spliterator;", "TT_SPLITR;", $PROTECTED | $FINAL, $field(Streams$ConcatSpliterator, aSpliterator)},
	{"bSpliterator", "Ljava/util/Spliterator;", "TT_SPLITR;", $PROTECTED | $FINAL, $field(Streams$ConcatSpliterator, bSpliterator)},
	{"beforeSplit", "Z", nullptr, 0, $field(Streams$ConcatSpliterator, beforeSplit)},
	{"unsized", "Z", nullptr, $FINAL, $field(Streams$ConcatSpliterator, unsized)},
	{}
};

$MethodInfo _Streams$ConcatSpliterator_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Spliterator;Ljava/util/Spliterator;)V", "(TT_SPLITR;TT_SPLITR;)V", $PUBLIC, $method(static_cast<void(Streams$ConcatSpliterator::*)($Spliterator*,$Spliterator*)>(&Streams$ConcatSpliterator::init$))},
	{"characteristics", "()I", nullptr, $PUBLIC},
	{"estimateSize", "()J", nullptr, $PUBLIC},
	{"forEachRemaining", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-TT;>;)V", $PUBLIC},
	{"getComparator", "()Ljava/util/Comparator;", "()Ljava/util/Comparator<-TT;>;", $PUBLIC},
	{"tryAdvance", "(Ljava/util/function/Consumer;)Z", "(Ljava/util/function/Consumer<-TT;>;)Z", $PUBLIC},
	{"trySplit", "()Ljava/util/Spliterator;", "()TT_SPLITR;", $PUBLIC},
	{}
};

$InnerClassInfo _Streams$ConcatSpliterator_InnerClassesInfo_[] = {
	{"java.util.stream.Streams$ConcatSpliterator", "java.util.stream.Streams", "ConcatSpliterator", $STATIC | $ABSTRACT},
	{"java.util.stream.Streams$ConcatSpliterator$OfDouble", "java.util.stream.Streams$ConcatSpliterator", "OfDouble", $STATIC},
	{"java.util.stream.Streams$ConcatSpliterator$OfLong", "java.util.stream.Streams$ConcatSpliterator", "OfLong", $STATIC},
	{"java.util.stream.Streams$ConcatSpliterator$OfInt", "java.util.stream.Streams$ConcatSpliterator", "OfInt", $STATIC},
	{"java.util.stream.Streams$ConcatSpliterator$OfPrimitive", "java.util.stream.Streams$ConcatSpliterator", "OfPrimitive", $PRIVATE | $STATIC | $ABSTRACT},
	{"java.util.stream.Streams$ConcatSpliterator$OfRef", "java.util.stream.Streams$ConcatSpliterator", "OfRef", $STATIC},
	{}
};

$ClassInfo _Streams$ConcatSpliterator_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"java.util.stream.Streams$ConcatSpliterator",
	"java.lang.Object",
	"java.util.Spliterator",
	_Streams$ConcatSpliterator_FieldInfo_,
	_Streams$ConcatSpliterator_MethodInfo_,
	"<T:Ljava/lang/Object;T_SPLITR::Ljava/util/Spliterator<TT;>;>Ljava/lang/Object;Ljava/util/Spliterator<TT;>;",
	nullptr,
	_Streams$ConcatSpliterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.Streams"
};

$Object* allocate$Streams$ConcatSpliterator($Class* clazz) {
	return $of($alloc(Streams$ConcatSpliterator));
}

void Streams$ConcatSpliterator::init$($Spliterator* aSpliterator, $Spliterator* bSpliterator) {
	$set(this, aSpliterator, aSpliterator);
	$set(this, bSpliterator, bSpliterator);
	this->beforeSplit = true;
	int64_t var$0 = $nc(aSpliterator)->estimateSize();
	this->unsized = var$0 + $nc(bSpliterator)->estimateSize() < 0;
}

$Spliterator* Streams$ConcatSpliterator::trySplit() {
	$var($Spliterator, ret, this->beforeSplit ? this->aSpliterator : $nc(this->bSpliterator)->trySplit());
	this->beforeSplit = false;
	return ret;
}

bool Streams$ConcatSpliterator::tryAdvance($Consumer* consumer) {
	bool hasNext = false;
	if (this->beforeSplit) {
		hasNext = $nc(this->aSpliterator)->tryAdvance(consumer);
		if (!hasNext) {
			this->beforeSplit = false;
			hasNext = $nc(this->bSpliterator)->tryAdvance(consumer);
		}
	} else {
		hasNext = $nc(this->bSpliterator)->tryAdvance(consumer);
	}
	return hasNext;
}

void Streams$ConcatSpliterator::forEachRemaining($Consumer* consumer) {
	if (this->beforeSplit) {
		$nc(this->aSpliterator)->forEachRemaining(consumer);
	}
	$nc(this->bSpliterator)->forEachRemaining(consumer);
}

int64_t Streams$ConcatSpliterator::estimateSize() {
	if (this->beforeSplit) {
		int64_t var$0 = $nc(this->aSpliterator)->estimateSize();
		int64_t size = var$0 + $nc(this->bSpliterator)->estimateSize();
		return (size >= 0) ? size : $Long::MAX_VALUE;
	} else {
		return $nc(this->bSpliterator)->estimateSize();
	}
}

int32_t Streams$ConcatSpliterator::characteristics() {
	if (this->beforeSplit) {
		int32_t var$0 = $nc(this->aSpliterator)->characteristics();
		return (int32_t)(((int32_t)(var$0 & (uint32_t)$nc(this->bSpliterator)->characteristics())) & (uint32_t)~(($Spliterator::DISTINCT | $Spliterator::SORTED) | (this->unsized ? $Spliterator::SIZED | $Spliterator::SUBSIZED : 0)));
	} else {
		return $nc(this->bSpliterator)->characteristics();
	}
}

$Comparator* Streams$ConcatSpliterator::getComparator() {
	if (this->beforeSplit) {
		$throwNew($IllegalStateException);
	}
	return $nc(this->bSpliterator)->getComparator();
}

Streams$ConcatSpliterator::Streams$ConcatSpliterator() {
}

$Class* Streams$ConcatSpliterator::load$($String* name, bool initialize) {
	$loadClass(Streams$ConcatSpliterator, name, initialize, &_Streams$ConcatSpliterator_ClassInfo_, allocate$Streams$ConcatSpliterator);
	return class$;
}

$Class* Streams$ConcatSpliterator::class$ = nullptr;

		} // stream
	} // util
} // java