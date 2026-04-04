#include <java/util/Spliterators$DoubleIteratorSpliterator.h>
#include <java/lang/IllegalStateException.h>
#include <java/util/Comparator.h>
#include <java/util/Iterator.h>
#include <java/util/PrimitiveIterator$OfDouble.h>
#include <java/util/Spliterator$OfDouble.h>
#include <java/util/Spliterator.h>
#include <java/util/Spliterators$DoubleArraySpliterator.h>
#include <java/util/Spliterators.h>
#include <java/util/function/DoubleConsumer.h>
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
using $PrimitiveIterator$OfDouble = ::java::util::PrimitiveIterator$OfDouble;
using $Spliterator = ::java::util::Spliterator;
using $Spliterator$OfDouble = ::java::util::Spliterator$OfDouble;
using $Spliterators$DoubleArraySpliterator = ::java::util::Spliterators$DoubleArraySpliterator;
using $DoubleConsumer = ::java::util::function::DoubleConsumer;

namespace java {
	namespace util {

void Spliterators$DoubleIteratorSpliterator::init$($PrimitiveIterator$OfDouble* iterator, int64_t size, int32_t characteristics) {
	$set(this, it, iterator);
	this->est = size;
	this->characteristics$ = (characteristics & $Spliterator::CONCURRENT) == 0 ? (characteristics | $Spliterator::SIZED) | $Spliterator::SUBSIZED : characteristics;
}

void Spliterators$DoubleIteratorSpliterator::init$($PrimitiveIterator$OfDouble* iterator, int32_t characteristics) {
	$set(this, it, iterator);
	this->est = $Long::MAX_VALUE;
	this->characteristics$ = characteristics & ~($Spliterator::SIZED | $Spliterator::SUBSIZED);
}

$Spliterator$OfDouble* Spliterators$DoubleIteratorSpliterator::trySplit() {
	$useLocalObjectStack();
	$var($PrimitiveIterator$OfDouble, i, this->it);
	int64_t s = this->est;
	if (s > 1 && $nc(i)->hasNext()) {
		int32_t n = this->batch + Spliterators$DoubleIteratorSpliterator::BATCH_UNIT;
		if (n > s) {
			n = (int32_t)s;
		}
		if (n > Spliterators$DoubleIteratorSpliterator::MAX_BATCH) {
			n = Spliterators$DoubleIteratorSpliterator::MAX_BATCH;
		}
		$var($doubles, a, $new($doubles, n));
		int32_t j = 0;
		do {
			a->set(j, i->nextDouble());
		} while (++j < n && i->hasNext());
		this->batch = j;
		if (this->est != $Long::MAX_VALUE) {
			this->est -= j;
		}
		return $new($Spliterators$DoubleArraySpliterator, a, 0, j, this->characteristics$);
	}
	return nullptr;
}

void Spliterators$DoubleIteratorSpliterator::forEachRemaining($DoubleConsumer* action) {
	if (action == nullptr) {
		$throwNew($NullPointerException);
	}
	$nc(this->it)->forEachRemaining(action);
}

bool Spliterators$DoubleIteratorSpliterator::tryAdvance($DoubleConsumer* action) {
	if (action == nullptr) {
		$throwNew($NullPointerException);
	}
	if ($nc(this->it)->hasNext()) {
		$nc(action)->accept(this->it->nextDouble());
		return true;
	}
	return false;
}

int64_t Spliterators$DoubleIteratorSpliterator::estimateSize() {
	return this->est;
}

int32_t Spliterators$DoubleIteratorSpliterator::characteristics() {
	return this->characteristics$;
}

$Comparator* Spliterators$DoubleIteratorSpliterator::getComparator() {
	if (hasCharacteristics($Spliterator::SORTED)) {
		return nullptr;
	}
	$throwNew($IllegalStateException);
}

void Spliterators$DoubleIteratorSpliterator::forEachRemaining(Object$* action) {
	this->forEachRemaining($cast($DoubleConsumer, action));
}

bool Spliterators$DoubleIteratorSpliterator::tryAdvance(Object$* action) {
	return this->tryAdvance($cast($DoubleConsumer, action));
}

Spliterators$DoubleIteratorSpliterator::Spliterators$DoubleIteratorSpliterator() {
}

$Class* Spliterators$DoubleIteratorSpliterator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"BATCH_UNIT", "I", nullptr, $STATIC | $FINAL, $constField(Spliterators$DoubleIteratorSpliterator, BATCH_UNIT)},
		{"MAX_BATCH", "I", nullptr, $STATIC | $FINAL, $constField(Spliterators$DoubleIteratorSpliterator, MAX_BATCH)},
		{"it", "Ljava/util/PrimitiveIterator$OfDouble;", nullptr, $PRIVATE | $FINAL, $field(Spliterators$DoubleIteratorSpliterator, it)},
		{"characteristics", "I", nullptr, $PRIVATE | $FINAL, $field(Spliterators$DoubleIteratorSpliterator, characteristics$)},
		{"est", "J", nullptr, $PRIVATE, $field(Spliterators$DoubleIteratorSpliterator, est)},
		{"batch", "I", nullptr, $PRIVATE, $field(Spliterators$DoubleIteratorSpliterator, batch)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/PrimitiveIterator$OfDouble;JI)V", nullptr, $PUBLIC, $method(Spliterators$DoubleIteratorSpliterator, init$, void, $PrimitiveIterator$OfDouble*, int64_t, int32_t)},
		{"<init>", "(Ljava/util/PrimitiveIterator$OfDouble;I)V", nullptr, $PUBLIC, $method(Spliterators$DoubleIteratorSpliterator, init$, void, $PrimitiveIterator$OfDouble*, int32_t)},
		{"characteristics", "()I", nullptr, $PUBLIC, $virtualMethod(Spliterators$DoubleIteratorSpliterator, characteristics, int32_t)},
		{"estimateSize", "()J", nullptr, $PUBLIC, $virtualMethod(Spliterators$DoubleIteratorSpliterator, estimateSize, int64_t)},
		{"forEachRemaining", "(Ljava/util/function/DoubleConsumer;)V", nullptr, $PUBLIC, $virtualMethod(Spliterators$DoubleIteratorSpliterator, forEachRemaining, void, $DoubleConsumer*)},
		{"forEachRemaining", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Spliterators$DoubleIteratorSpliterator, forEachRemaining, void, Object$*)},
		{"getComparator", "()Ljava/util/Comparator;", "()Ljava/util/Comparator<-Ljava/lang/Double;>;", $PUBLIC, $virtualMethod(Spliterators$DoubleIteratorSpliterator, getComparator, $Comparator*)},
		{"tryAdvance", "(Ljava/util/function/DoubleConsumer;)Z", nullptr, $PUBLIC, $virtualMethod(Spliterators$DoubleIteratorSpliterator, tryAdvance, bool, $DoubleConsumer*)},
		{"tryAdvance", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Spliterators$DoubleIteratorSpliterator, tryAdvance, bool, Object$*)},
		{"trySplit", "()Ljava/util/Spliterator$OfDouble;", nullptr, $PUBLIC, $virtualMethod(Spliterators$DoubleIteratorSpliterator, trySplit, $Spliterator$OfDouble*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.Spliterators$DoubleIteratorSpliterator", "java.util.Spliterators", "DoubleIteratorSpliterator", $STATIC | $FINAL},
		{"java.util.Spliterator$OfDouble", "java.util.Spliterator", "OfDouble", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.Spliterators$DoubleIteratorSpliterator",
		"java.lang.Object",
		"java.util.Spliterator$OfDouble",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.Spliterators"
	};
	$loadClass(Spliterators$DoubleIteratorSpliterator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Spliterators$DoubleIteratorSpliterator);
	});
	return class$;
}

$Class* Spliterators$DoubleIteratorSpliterator::class$ = nullptr;

	} // util
} // java