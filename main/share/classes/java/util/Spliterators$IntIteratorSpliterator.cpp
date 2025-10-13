#include <java/util/Spliterators$IntIteratorSpliterator.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
using $Iterator = ::java::util::Iterator;
using $PrimitiveIterator$OfInt = ::java::util::PrimitiveIterator$OfInt;
using $Spliterator = ::java::util::Spliterator;
using $Spliterator$OfInt = ::java::util::Spliterator$OfInt;
using $Spliterators = ::java::util::Spliterators;
using $Spliterators$IntArraySpliterator = ::java::util::Spliterators$IntArraySpliterator;
using $Spliterators$IteratorSpliterator = ::java::util::Spliterators$IteratorSpliterator;
using $IntConsumer = ::java::util::function::IntConsumer;

namespace java {
	namespace util {

$FieldInfo _Spliterators$IntIteratorSpliterator_FieldInfo_[] = {
	{"BATCH_UNIT", "I", nullptr, $STATIC | $FINAL, $constField(Spliterators$IntIteratorSpliterator, BATCH_UNIT)},
	{"MAX_BATCH", "I", nullptr, $STATIC | $FINAL, $constField(Spliterators$IntIteratorSpliterator, MAX_BATCH)},
	{"it", "Ljava/util/PrimitiveIterator$OfInt;", nullptr, $PRIVATE | $FINAL, $field(Spliterators$IntIteratorSpliterator, it)},
	{"characteristics", "I", nullptr, $PRIVATE | $FINAL, $field(Spliterators$IntIteratorSpliterator, characteristics$)},
	{"est", "J", nullptr, $PRIVATE, $field(Spliterators$IntIteratorSpliterator, est)},
	{"batch", "I", nullptr, $PRIVATE, $field(Spliterators$IntIteratorSpliterator, batch)},
	{}
};

$MethodInfo _Spliterators$IntIteratorSpliterator_MethodInfo_[] = {
	{"<init>", "(Ljava/util/PrimitiveIterator$OfInt;JI)V", nullptr, $PUBLIC, $method(static_cast<void(Spliterators$IntIteratorSpliterator::*)($PrimitiveIterator$OfInt*,int64_t,int32_t)>(&Spliterators$IntIteratorSpliterator::init$))},
	{"<init>", "(Ljava/util/PrimitiveIterator$OfInt;I)V", nullptr, $PUBLIC, $method(static_cast<void(Spliterators$IntIteratorSpliterator::*)($PrimitiveIterator$OfInt*,int32_t)>(&Spliterators$IntIteratorSpliterator::init$))},
	{"characteristics", "()I", nullptr, $PUBLIC},
	{"estimateSize", "()J", nullptr, $PUBLIC},
	{"forEachRemaining", "(Ljava/util/function/IntConsumer;)V", nullptr, $PUBLIC},
	{"forEachRemaining", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getComparator", "()Ljava/util/Comparator;", "()Ljava/util/Comparator<-Ljava/lang/Integer;>;", $PUBLIC},
	{"tryAdvance", "(Ljava/util/function/IntConsumer;)Z", nullptr, $PUBLIC},
	{"tryAdvance", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"trySplit", "()Ljava/util/Spliterator$OfInt;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Spliterators$IntIteratorSpliterator_InnerClassesInfo_[] = {
	{"java.util.Spliterators$IntIteratorSpliterator", "java.util.Spliterators", "IntIteratorSpliterator", $STATIC | $FINAL},
	{"java.util.Spliterator$OfInt", "java.util.Spliterator", "OfInt", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Spliterators$IntIteratorSpliterator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.Spliterators$IntIteratorSpliterator",
	"java.lang.Object",
	"java.util.Spliterator$OfInt",
	_Spliterators$IntIteratorSpliterator_FieldInfo_,
	_Spliterators$IntIteratorSpliterator_MethodInfo_,
	nullptr,
	nullptr,
	_Spliterators$IntIteratorSpliterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Spliterators"
};

$Object* allocate$Spliterators$IntIteratorSpliterator($Class* clazz) {
	return $of($alloc(Spliterators$IntIteratorSpliterator));
}

void Spliterators$IntIteratorSpliterator::init$($PrimitiveIterator$OfInt* iterator, int64_t size, int32_t characteristics) {
	$set(this, it, iterator);
	this->est = size;
	this->characteristics$ = ((int32_t)(characteristics & (uint32_t)$Spliterator::CONCURRENT)) == 0 ? (characteristics | $Spliterator::SIZED) | $Spliterator::SUBSIZED : characteristics;
}

void Spliterators$IntIteratorSpliterator::init$($PrimitiveIterator$OfInt* iterator, int32_t characteristics) {
	$set(this, it, iterator);
	this->est = $Long::MAX_VALUE;
	this->characteristics$ = (int32_t)(characteristics & (uint32_t)~($Spliterator::SIZED | $Spliterator::SUBSIZED));
}

$Spliterator$OfInt* Spliterators$IntIteratorSpliterator::trySplit() {
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
		$nc(action)->accept($nc(this->it)->nextInt());
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
	$loadClass(Spliterators$IntIteratorSpliterator, name, initialize, &_Spliterators$IntIteratorSpliterator_ClassInfo_, allocate$Spliterators$IntIteratorSpliterator);
	return class$;
}

$Class* Spliterators$IntIteratorSpliterator::class$ = nullptr;

	} // util
} // java