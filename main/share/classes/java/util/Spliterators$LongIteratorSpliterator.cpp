#include <java/util/Spliterators$LongIteratorSpliterator.h>

#include <java/lang/IllegalStateException.h>
#include <java/util/Comparator.h>
#include <java/util/Iterator.h>
#include <java/util/PrimitiveIterator$OfLong.h>
#include <java/util/Spliterator$OfLong.h>
#include <java/util/Spliterator.h>
#include <java/util/Spliterators$LongArraySpliterator.h>
#include <java/util/Spliterators.h>
#include <java/util/function/LongConsumer.h>
#include <jcpp.h>

#undef BATCH_UNIT
#undef CONCURRENT
#undef MAX_BATCH
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
using $NullPointerException = ::java::lang::NullPointerException;
using $Comparator = ::java::util::Comparator;
using $Iterator = ::java::util::Iterator;
using $PrimitiveIterator$OfLong = ::java::util::PrimitiveIterator$OfLong;
using $Spliterator = ::java::util::Spliterator;
using $Spliterator$OfLong = ::java::util::Spliterator$OfLong;
using $Spliterators = ::java::util::Spliterators;
using $Spliterators$IteratorSpliterator = ::java::util::Spliterators$IteratorSpliterator;
using $Spliterators$LongArraySpliterator = ::java::util::Spliterators$LongArraySpliterator;
using $LongConsumer = ::java::util::function::LongConsumer;

namespace java {
	namespace util {

$FieldInfo _Spliterators$LongIteratorSpliterator_FieldInfo_[] = {
	{"BATCH_UNIT", "I", nullptr, $STATIC | $FINAL, $constField(Spliterators$LongIteratorSpliterator, BATCH_UNIT)},
	{"MAX_BATCH", "I", nullptr, $STATIC | $FINAL, $constField(Spliterators$LongIteratorSpliterator, MAX_BATCH)},
	{"it", "Ljava/util/PrimitiveIterator$OfLong;", nullptr, $PRIVATE | $FINAL, $field(Spliterators$LongIteratorSpliterator, it)},
	{"characteristics", "I", nullptr, $PRIVATE | $FINAL, $field(Spliterators$LongIteratorSpliterator, characteristics$)},
	{"est", "J", nullptr, $PRIVATE, $field(Spliterators$LongIteratorSpliterator, est)},
	{"batch", "I", nullptr, $PRIVATE, $field(Spliterators$LongIteratorSpliterator, batch)},
	{}
};

$MethodInfo _Spliterators$LongIteratorSpliterator_MethodInfo_[] = {
	{"<init>", "(Ljava/util/PrimitiveIterator$OfLong;JI)V", nullptr, $PUBLIC, $method(static_cast<void(Spliterators$LongIteratorSpliterator::*)($PrimitiveIterator$OfLong*,int64_t,int32_t)>(&Spliterators$LongIteratorSpliterator::init$))},
	{"<init>", "(Ljava/util/PrimitiveIterator$OfLong;I)V", nullptr, $PUBLIC, $method(static_cast<void(Spliterators$LongIteratorSpliterator::*)($PrimitiveIterator$OfLong*,int32_t)>(&Spliterators$LongIteratorSpliterator::init$))},
	{"characteristics", "()I", nullptr, $PUBLIC},
	{"estimateSize", "()J", nullptr, $PUBLIC},
	{"forEachRemaining", "(Ljava/util/function/LongConsumer;)V", nullptr, $PUBLIC},
	{"forEachRemaining", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getComparator", "()Ljava/util/Comparator;", "()Ljava/util/Comparator<-Ljava/lang/Long;>;", $PUBLIC},
	{"tryAdvance", "(Ljava/util/function/LongConsumer;)Z", nullptr, $PUBLIC},
	{"tryAdvance", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"trySplit", "()Ljava/util/Spliterator$OfLong;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Spliterators$LongIteratorSpliterator_InnerClassesInfo_[] = {
	{"java.util.Spliterators$LongIteratorSpliterator", "java.util.Spliterators", "LongIteratorSpliterator", $STATIC | $FINAL},
	{"java.util.Spliterator$OfLong", "java.util.Spliterator", "OfLong", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Spliterators$LongIteratorSpliterator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.Spliterators$LongIteratorSpliterator",
	"java.lang.Object",
	"java.util.Spliterator$OfLong",
	_Spliterators$LongIteratorSpliterator_FieldInfo_,
	_Spliterators$LongIteratorSpliterator_MethodInfo_,
	nullptr,
	nullptr,
	_Spliterators$LongIteratorSpliterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Spliterators"
};

$Object* allocate$Spliterators$LongIteratorSpliterator($Class* clazz) {
	return $of($alloc(Spliterators$LongIteratorSpliterator));
}

void Spliterators$LongIteratorSpliterator::init$($PrimitiveIterator$OfLong* iterator, int64_t size, int32_t characteristics) {
	$set(this, it, iterator);
	this->est = size;
	this->characteristics$ = ((int32_t)(characteristics & (uint32_t)$Spliterator::CONCURRENT)) == 0 ? (characteristics | $Spliterator::SIZED) | $Spliterator::SUBSIZED : characteristics;
}

void Spliterators$LongIteratorSpliterator::init$($PrimitiveIterator$OfLong* iterator, int32_t characteristics) {
	$set(this, it, iterator);
	this->est = $Long::MAX_VALUE;
	this->characteristics$ = (int32_t)(characteristics & (uint32_t)~($Spliterator::SIZED | $Spliterator::SUBSIZED));
}

$Spliterator$OfLong* Spliterators$LongIteratorSpliterator::trySplit() {
	$useLocalCurrentObjectStackCache();
	$var($PrimitiveIterator$OfLong, i, this->it);
	int64_t s = this->est;
	if (s > 1 && $nc(i)->hasNext()) {
		int32_t n = this->batch + Spliterators$LongIteratorSpliterator::BATCH_UNIT;
		if (n > s) {
			n = (int32_t)s;
		}
		if (n > Spliterators$LongIteratorSpliterator::MAX_BATCH) {
			n = Spliterators$LongIteratorSpliterator::MAX_BATCH;
		}
		$var($longs, a, $new($longs, n));
		int32_t j = 0;
		do {
			a->set(j, i->nextLong());
		} while (++j < n && i->hasNext());
		this->batch = j;
		if (this->est != $Long::MAX_VALUE) {
			this->est -= j;
		}
		return $new($Spliterators$LongArraySpliterator, a, 0, j, this->characteristics$);
	}
	return nullptr;
}

void Spliterators$LongIteratorSpliterator::forEachRemaining($LongConsumer* action) {
	if (action == nullptr) {
		$throwNew($NullPointerException);
	}
	$nc(this->it)->forEachRemaining(action);
}

bool Spliterators$LongIteratorSpliterator::tryAdvance($LongConsumer* action) {
	if (action == nullptr) {
		$throwNew($NullPointerException);
	}
	if ($nc(this->it)->hasNext()) {
		$nc(action)->accept($nc(this->it)->nextLong());
		return true;
	}
	return false;
}

int64_t Spliterators$LongIteratorSpliterator::estimateSize() {
	return this->est;
}

int32_t Spliterators$LongIteratorSpliterator::characteristics() {
	return this->characteristics$;
}

$Comparator* Spliterators$LongIteratorSpliterator::getComparator() {
	if (hasCharacteristics($Spliterator::SORTED)) {
		return nullptr;
	}
	$throwNew($IllegalStateException);
}

void Spliterators$LongIteratorSpliterator::forEachRemaining(Object$* action) {
	this->forEachRemaining($cast($LongConsumer, action));
}

bool Spliterators$LongIteratorSpliterator::tryAdvance(Object$* action) {
	return this->tryAdvance($cast($LongConsumer, action));
}

Spliterators$LongIteratorSpliterator::Spliterators$LongIteratorSpliterator() {
}

$Class* Spliterators$LongIteratorSpliterator::load$($String* name, bool initialize) {
	$loadClass(Spliterators$LongIteratorSpliterator, name, initialize, &_Spliterators$LongIteratorSpliterator_ClassInfo_, allocate$Spliterators$LongIteratorSpliterator);
	return class$;
}

$Class* Spliterators$LongIteratorSpliterator::class$ = nullptr;

	} // util
} // java