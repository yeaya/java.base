#include <java/util/Spliterators$IteratorSpliterator.h>

#include <java/lang/IllegalStateException.h>
#include <java/util/Collection.h>
#include <java/util/Comparator.h>
#include <java/util/Iterator.h>
#include <java/util/Spliterator.h>
#include <java/util/Spliterators$ArraySpliterator.h>
#include <java/util/Spliterators.h>
#include <java/util/function/Consumer.h>
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
using $Collection = ::java::util::Collection;
using $Comparator = ::java::util::Comparator;
using $Iterator = ::java::util::Iterator;
using $Spliterator = ::java::util::Spliterator;
using $Spliterators$ArraySpliterator = ::java::util::Spliterators$ArraySpliterator;
using $Consumer = ::java::util::function::Consumer;

namespace java {
	namespace util {

$FieldInfo _Spliterators$IteratorSpliterator_FieldInfo_[] = {
	{"BATCH_UNIT", "I", nullptr, $STATIC | $FINAL, $constField(Spliterators$IteratorSpliterator, BATCH_UNIT)},
	{"MAX_BATCH", "I", nullptr, $STATIC | $FINAL, $constField(Spliterators$IteratorSpliterator, MAX_BATCH)},
	{"collection", "Ljava/util/Collection;", "Ljava/util/Collection<+TT;>;", $PRIVATE | $FINAL, $field(Spliterators$IteratorSpliterator, collection)},
	{"it", "Ljava/util/Iterator;", "Ljava/util/Iterator<+TT;>;", $PRIVATE, $field(Spliterators$IteratorSpliterator, it)},
	{"characteristics", "I", nullptr, $PRIVATE | $FINAL, $field(Spliterators$IteratorSpliterator, characteristics$)},
	{"est", "J", nullptr, $PRIVATE, $field(Spliterators$IteratorSpliterator, est)},
	{"batch", "I", nullptr, $PRIVATE, $field(Spliterators$IteratorSpliterator, batch)},
	{}
};

$MethodInfo _Spliterators$IteratorSpliterator_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Collection;I)V", "(Ljava/util/Collection<+TT;>;I)V", $PUBLIC, $method(static_cast<void(Spliterators$IteratorSpliterator::*)($Collection*,int32_t)>(&Spliterators$IteratorSpliterator::init$))},
	{"<init>", "(Ljava/util/Iterator;JI)V", "(Ljava/util/Iterator<+TT;>;JI)V", $PUBLIC, $method(static_cast<void(Spliterators$IteratorSpliterator::*)($Iterator*,int64_t,int32_t)>(&Spliterators$IteratorSpliterator::init$))},
	{"<init>", "(Ljava/util/Iterator;I)V", "(Ljava/util/Iterator<+TT;>;I)V", $PUBLIC, $method(static_cast<void(Spliterators$IteratorSpliterator::*)($Iterator*,int32_t)>(&Spliterators$IteratorSpliterator::init$))},
	{"characteristics", "()I", nullptr, $PUBLIC},
	{"estimateSize", "()J", nullptr, $PUBLIC},
	{"forEachRemaining", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-TT;>;)V", $PUBLIC},
	{"getComparator", "()Ljava/util/Comparator;", "()Ljava/util/Comparator<-TT;>;", $PUBLIC},
	{"tryAdvance", "(Ljava/util/function/Consumer;)Z", "(Ljava/util/function/Consumer<-TT;>;)Z", $PUBLIC},
	{"trySplit", "()Ljava/util/Spliterator;", "()Ljava/util/Spliterator<TT;>;", $PUBLIC},
	{}
};

$InnerClassInfo _Spliterators$IteratorSpliterator_InnerClassesInfo_[] = {
	{"java.util.Spliterators$IteratorSpliterator", "java.util.Spliterators", "IteratorSpliterator", $STATIC},
	{}
};

$ClassInfo _Spliterators$IteratorSpliterator_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.Spliterators$IteratorSpliterator",
	"java.lang.Object",
	"java.util.Spliterator",
	_Spliterators$IteratorSpliterator_FieldInfo_,
	_Spliterators$IteratorSpliterator_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/Spliterator<TT;>;",
	nullptr,
	_Spliterators$IteratorSpliterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Spliterators"
};

$Object* allocate$Spliterators$IteratorSpliterator($Class* clazz) {
	return $of($alloc(Spliterators$IteratorSpliterator));
}

void Spliterators$IteratorSpliterator::init$($Collection* collection, int32_t characteristics) {
	$set(this, collection, collection);
	$set(this, it, nullptr);
	this->characteristics$ = ((int32_t)(characteristics & (uint32_t)$Spliterator::CONCURRENT)) == 0 ? (characteristics | $Spliterator::SIZED) | $Spliterator::SUBSIZED : characteristics;
}

void Spliterators$IteratorSpliterator::init$($Iterator* iterator, int64_t size, int32_t characteristics) {
	$set(this, collection, nullptr);
	$set(this, it, iterator);
	this->est = size;
	this->characteristics$ = ((int32_t)(characteristics & (uint32_t)$Spliterator::CONCURRENT)) == 0 ? (characteristics | $Spliterator::SIZED) | $Spliterator::SUBSIZED : characteristics;
}

void Spliterators$IteratorSpliterator::init$($Iterator* iterator, int32_t characteristics) {
	$set(this, collection, nullptr);
	$set(this, it, iterator);
	this->est = $Long::MAX_VALUE;
	this->characteristics$ = (int32_t)(characteristics & (uint32_t)~($Spliterator::SIZED | $Spliterator::SUBSIZED));
}

$Spliterator* Spliterators$IteratorSpliterator::trySplit() {
	$useLocalCurrentObjectStackCache();
	$var($Iterator, i, nullptr);
	int64_t s = 0;
	if (($assign(i, this->it)) == nullptr) {
		$assign(i, ($set(this, it, $nc(this->collection)->iterator())));
		s = (this->est = (int64_t)$nc(this->collection)->size());
	} else {
		s = this->est;
	}
	if (s > 1 && $nc(i)->hasNext()) {
		int32_t n = this->batch + Spliterators$IteratorSpliterator::BATCH_UNIT;
		if (n > s) {
			n = (int32_t)s;
		}
		if (n > Spliterators$IteratorSpliterator::MAX_BATCH) {
			n = Spliterators$IteratorSpliterator::MAX_BATCH;
		}
		$var($ObjectArray, a, $new($ObjectArray, n));
		int32_t j = 0;
		do {
			a->set(j, $(i->next()));
		} while (++j < n && i->hasNext());
		this->batch = j;
		if (this->est != $Long::MAX_VALUE) {
			this->est -= j;
		}
		return $new($Spliterators$ArraySpliterator, a, 0, j, this->characteristics$);
	}
	return nullptr;
}

void Spliterators$IteratorSpliterator::forEachRemaining($Consumer* action) {
	if (action == nullptr) {
		$throwNew($NullPointerException);
	}
	$var($Iterator, i, nullptr);
	if (($assign(i, this->it)) == nullptr) {
		$assign(i, ($set(this, it, $nc(this->collection)->iterator())));
		this->est = (int64_t)$nc(this->collection)->size();
	}
	$nc(i)->forEachRemaining(action);
}

bool Spliterators$IteratorSpliterator::tryAdvance($Consumer* action) {
	if (action == nullptr) {
		$throwNew($NullPointerException);
	}
	if (this->it == nullptr) {
		$set(this, it, $nc(this->collection)->iterator());
		this->est = (int64_t)$nc(this->collection)->size();
	}
	if ($nc(this->it)->hasNext()) {
		$nc(action)->accept($($nc(this->it)->next()));
		return true;
	}
	return false;
}

int64_t Spliterators$IteratorSpliterator::estimateSize() {
	if (this->it == nullptr) {
		$set(this, it, $nc(this->collection)->iterator());
		return this->est = (int64_t)$nc(this->collection)->size();
	}
	return this->est;
}

int32_t Spliterators$IteratorSpliterator::characteristics() {
	return this->characteristics$;
}

$Comparator* Spliterators$IteratorSpliterator::getComparator() {
	if (hasCharacteristics($Spliterator::SORTED)) {
		return nullptr;
	}
	$throwNew($IllegalStateException);
}

Spliterators$IteratorSpliterator::Spliterators$IteratorSpliterator() {
}

$Class* Spliterators$IteratorSpliterator::load$($String* name, bool initialize) {
	$loadClass(Spliterators$IteratorSpliterator, name, initialize, &_Spliterators$IteratorSpliterator_ClassInfo_, allocate$Spliterators$IteratorSpliterator);
	return class$;
}

$Class* Spliterators$IteratorSpliterator::class$ = nullptr;

	} // util
} // java