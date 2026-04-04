#include <java/util/Spliterators$IntIteratorSpliterator.h>
#include <java/lang/IllegalStateException.h>
#include <java/util/Comparator.h>
#include <java/util/Iterator.h>
#include <java/util/PrimitiveIterator$OfInt.h>
#include <java/util/Spliterator$OfInt.h>
#include <java/util/Spliterator.h>
#include <java/util/Spliterators$IntArraySpliterator.h>
#include <java/util/Spliterators.h>
#include <java/util/function/IntConsumer.h>
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
using $PrimitiveIterator$OfInt = ::java::util::PrimitiveIterator$OfInt;
using $Spliterator = ::java::util::Spliterator;
using $Spliterator$OfInt = ::java::util::Spliterator$OfInt;
using $Spliterators$IntArraySpliterator = ::java::util::Spliterators$IntArraySpliterator;
using $IntConsumer = ::java::util::function::IntConsumer;

namespace java {
	namespace util {

void Spliterators$IntIteratorSpliterator::init$($PrimitiveIterator$OfInt* iterator, int64_t size, int32_t characteristics) {
	$set(this, it, iterator);
	this->est = size;
	this->characteristics$ = (characteristics & $Spliterator::CONCURRENT) == 0 ? (characteristics | $Spliterator::SIZED) | $Spliterator::SUBSIZED : characteristics;
}

void Spliterators$IntIteratorSpliterator::init$($PrimitiveIterator$OfInt* iterator, int32_t characteristics) {
	$set(this, it, iterator);
	this->est = $Long::MAX_VALUE;
	this->characteristics$ = characteristics & ~($Spliterator::SIZED | $Spliterator::SUBSIZED);
}

$Spliterator$OfInt* Spliterators$IntIteratorSpliterator::trySplit() {
	$useLocalObjectStack();
	$var($PrimitiveIterator$OfInt, i, this->it);
	int64_t s = this->est;
	if (s > 1 && $nc(i)->hasNext()) {
		int32_t n = this->batch + Spliterators$IntIteratorSpliterator::BATCH_UNIT;
		if (n > s) {
			n = (int32_t)s;
		}
		if (n > Spliterators$IntIteratorSpliterator::MAX_BATCH) {
			n = Spliterators$IntIteratorSpliterator::MAX_BATCH;
		}
		$var($ints, a, $new($ints, n));
		int32_t j = 0;
		do {
			a->set(j, i->nextInt());
		} while (++j < n && i->hasNext());
		this->batch = j;
		if (this->est != $Long::MAX_VALUE) {
			this->est -= j;
		}
		return $new($Spliterators$IntArraySpliterator, a, 0, j, this->characteristics$);
	}
	return nullptr;
}

void Spliterators$IntIteratorSpliterator::forEachRemaining($IntConsumer* action) {
	if (action == nullptr) {
		$throwNew($NullPointerException);
	}
	$nc(this->it)->forEachRemaining(action);
}

bool Spliterators$IntIteratorSpliterator::tryAdvance($IntConsumer* action) {
	if (action == nullptr) {
		$throwNew($NullPointerException);
	}
	if ($nc(this->it)->hasNext()) {
		$nc(action)->accept(this->it->nextInt());
		return true;
	}
	return false;
}

int64_t Spliterators$IntIteratorSpliterator::estimateSize() {
	return this->est;
}

int32_t Spliterators$IntIteratorSpliterator::characteristics() {
	return this->characteristics$;
}

$Comparator* Spliterators$IntIteratorSpliterator::getComparator() {
	if (hasCharacteristics($Spliterator::SORTED)) {
		return nullptr;
	}
	$throwNew($IllegalStateException);
}

void Spliterators$IntIteratorSpliterator::forEachRemaining(Object$* action) {
	this->forEachRemaining($cast($IntConsumer, action));
}

bool Spliterators$IntIteratorSpliterator::tryAdvance(Object$* action) {
	return this->tryAdvance($cast($IntConsumer, action));
}

Spliterators$IntIteratorSpliterator::Spliterators$IntIteratorSpliterator() {
}

$Class* Spliterators$IntIteratorSpliterator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"BATCH_UNIT", "I", nullptr, $STATIC | $FINAL, $constField(Spliterators$IntIteratorSpliterator, BATCH_UNIT)},
		{"MAX_BATCH", "I", nullptr, $STATIC | $FINAL, $constField(Spliterators$IntIteratorSpliterator, MAX_BATCH)},
		{"it", "Ljava/util/PrimitiveIterator$OfInt;", nullptr, $PRIVATE | $FINAL, $field(Spliterators$IntIteratorSpliterator, it)},
		{"characteristics", "I", nullptr, $PRIVATE | $FINAL, $field(Spliterators$IntIteratorSpliterator, characteristics$)},
		{"est", "J", nullptr, $PRIVATE, $field(Spliterators$IntIteratorSpliterator, est)},
		{"batch", "I", nullptr, $PRIVATE, $field(Spliterators$IntIteratorSpliterator, batch)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/PrimitiveIterator$OfInt;JI)V", nullptr, $PUBLIC, $method(Spliterators$IntIteratorSpliterator, init$, void, $PrimitiveIterator$OfInt*, int64_t, int32_t)},
		{"<init>", "(Ljava/util/PrimitiveIterator$OfInt;I)V", nullptr, $PUBLIC, $method(Spliterators$IntIteratorSpliterator, init$, void, $PrimitiveIterator$OfInt*, int32_t)},
		{"characteristics", "()I", nullptr, $PUBLIC, $virtualMethod(Spliterators$IntIteratorSpliterator, characteristics, int32_t)},
		{"estimateSize", "()J", nullptr, $PUBLIC, $virtualMethod(Spliterators$IntIteratorSpliterator, estimateSize, int64_t)},
		{"forEachRemaining", "(Ljava/util/function/IntConsumer;)V", nullptr, $PUBLIC, $virtualMethod(Spliterators$IntIteratorSpliterator, forEachRemaining, void, $IntConsumer*)},
		{"forEachRemaining", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Spliterators$IntIteratorSpliterator, forEachRemaining, void, Object$*)},
		{"getComparator", "()Ljava/util/Comparator;", "()Ljava/util/Comparator<-Ljava/lang/Integer;>;", $PUBLIC, $virtualMethod(Spliterators$IntIteratorSpliterator, getComparator, $Comparator*)},
		{"tryAdvance", "(Ljava/util/function/IntConsumer;)Z", nullptr, $PUBLIC, $virtualMethod(Spliterators$IntIteratorSpliterator, tryAdvance, bool, $IntConsumer*)},
		{"tryAdvance", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Spliterators$IntIteratorSpliterator, tryAdvance, bool, Object$*)},
		{"trySplit", "()Ljava/util/Spliterator$OfInt;", nullptr, $PUBLIC, $virtualMethod(Spliterators$IntIteratorSpliterator, trySplit, $Spliterator$OfInt*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.Spliterators$IntIteratorSpliterator", "java.util.Spliterators", "IntIteratorSpliterator", $STATIC | $FINAL},
		{"java.util.Spliterator$OfInt", "java.util.Spliterator", "OfInt", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.Spliterators$IntIteratorSpliterator",
		"java.lang.Object",
		"java.util.Spliterator$OfInt",
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
	$loadClass(Spliterators$IntIteratorSpliterator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Spliterators$IntIteratorSpliterator);
	});
	return class$;
}

$Class* Spliterators$IntIteratorSpliterator::class$ = nullptr;

	} // util
} // java